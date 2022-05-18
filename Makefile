# Copyright (c) 2022 Nikolai Husung
#
# This software is distributed under the terms of the MIT License
#
#
# Usage:
#   make onepi
#   => generate 1-loop 1PI $(GRAPHS) with QGRAF and translate into final template
#
#   make observable{$(GRAPHS) $(GRAPHSp)}
#   => compute 1PI 1-loop graphs for given observable


# (system specific) parameters
FORM        = form
FORM_PATH   = YMeuclFlavours
QGRAF       = ~/QGRAF/qgraf

FLAG        =  -D ALG=1 -D UVonly=1
MODEL       = QCD

# do not change
TOOL_1PI    = 1PI
TOOL_1PI_TL = 1PI_TL
GTOOL       = build_graphs.py

# Local fields considered
# CAVEAT: check signs of GammaGamma5 operators!
P5 = qSigmaFQ \
   qSigmaFtildeQ \
   qGammaD2lrQ qGammaGamma5FtildeQ \
   qGammaGamma5D2lrQ qGammaFtildeQ DFFtilde DFFtildenO4 \
   qSigmaD2lrQ qFQ qGamma5FtildeQ qSigmaDlr2Q qDlDQ

P4 = trF2 trFFtilde qDlrQ qGamma5DlrQ qDGammalrQ 

P3 = S P V A T 

dP5 = $(addprefix d2, $(P3)) \
   \
   \
   d2VnO4 \
   d2AnO4 gradFFtilde \
   d2TnO4 

dP4 = gradP gradV rotA
#divT

# EOM vanishing operators -> needed for background field method [D0 = Dslash+m]
Peom = qD0lrQ qGamma5D0lrQ qGammaD0lrQ qGammaGamma5D0lrQ qSigmaD0lrQ \
   qD0lr2Q            qD02lrQ \
   qGamma5D0lr2Q      qGamma5D02lrQ \
   qGammaD0lr2Q       qGammaD02lrQ       gradqD0lrQ       qDD0lrQ \
   qGammaGamma5D0lr2Q qGammaGamma5D02lrQ gradqGamma5D0lrQ qGamma5DD0lrQ \
   qSigmaD0lr2Q       qSigmaD02lrQ       gradqGammaD0lrQ  qGammaDD0lrQ 
      

# Operators considered
OPS_F4 = PsiPsi2 PsiTPsi2 PsiGammaPsi2 PsiGamma5Psi2 PsiGammaTPsi2 \
   PsiGamma5TPsi2 PsiGammaGamma5Psi2 PsiGammaGamma5TPsi2 PsiSigmaPsi2 \
   PsiSigmaTPsi2 

O6 = DFDF_O4 DFDF PsiGammaD3Psi $(OPS_F4) $(addsuffix n,$(OPS_F4)) 

O5 = PsiSigmaFPsi 

O4 = F2 

O3 = Psi2 

# EOM vanishing operators [or required building blocks]
# -> needed for background field method [D0 = Dslash+m]
Oeom54 = PsiD0Psi PsiD02Psi 

Oeom6 = DF2_O4 PsiD03Psi PsiGammaDFPsi PsiD2D0Psi Psi[DslashD2]Psi

Oeom = $(Oeom6) $(Oeom54)

Pops_TL = $(P3) $(P4) $(P5) $(dP4) $(dP5) $(Peom)
Pops    = $(P3) $(P4) $(P5) $(dP4) $(dP5)

Ops_TL = $(O3) $(O4) $(O5) $(O6) $(Oeom)
Ops    = $(O3) $(O4) $(O5) $(O6)

# compute contact terms only with the "continuum" fermion bilinears, i.e. no
# inclusion of O(a^2) from contact terms of two O(a) terms
# 3 + [O] - 4 >= 3
Pops_contact = $(P3)

# compute contact terms only for mass-dimension 5 operators and below
Ops_contact = $(O5)
#$(O3) $(O4) $(O5)

# List of all (currently) computed 1PI graphs, with external fields:
#   B = background field
#   F = fermion [=quark]
#   O = operator in the effective action
#   P = local field
GRAPHS   = B2 F2 F2B 

GRAPHSp  = $(addsuffix P, $(GRAPHS) FF FFB) P
GRAPHSo  = $(addsuffix O, $(GRAPHS) B3 F4 F2F2)
GRAPHSoo = $(addsuffix O, $(GRAPHSo))
GRAPHSop = $(addsuffix OP, $(GRAPHS) FF FFB) OP

# the selection between flavour non-singlet and singlet is currently based on
# the occurrence of FF (this ignores combinations like F3F -> FF3 and other
# odd numbered variants)


GRAPHSp_TL  = $(addsuffix P_TL, $(GRAPHS) FF FFB)
GRAPHSo_TL  = $(addsuffix _TL, $(GRAPHSo))
GRAPHSop_TL = $(addsuffix OP_TL, $(GRAPHS) FF FFB)


# Computes the desired Green's function $(OBS) for a specified target
.PHONY: simplify simplify_TL

_flag = $(FLAG)

#all: onepi

# Setup required directories if they are missing.
$(shell mkdir -p $(addprefix P/, $(GRAPHSp) $(GRAPHSp_TL)))
$(shell mkdir -p $(addprefix O/, $(GRAPHSo) $(GRAPHSo_TL)))
$(shell mkdir -p $(addprefix OO/, $(GRAPHSoo)))
$(shell mkdir -p $(addprefix OP/, $(GRAPHSop)))
$(shell mkdir -p results graphs)
$(shell cd results; \
   mkdir -p $(addprefix P/, $(GRAPHSp) $(GRAPHSp_TL)); \
   mkdir -p $(addprefix O/, $(GRAPHSo) $(GRAPHSo_TL)); \
   mkdir -p $(addprefix OO/, $(GRAPHSoo)); \
   mkdir -p $(addprefix OP/, $(GRAPHSop)); \
   cd ..;)

graphs/%.1PI: $(MODEL).rules
	if test $(findstring _TL, $@); then \
		python3 $(GTOOL) $(MODEL) $(subst _TL,,$(basename $(notdir $@))) 1 0 "$(addsuffix /$@, . )"; \
	else \
		python3 $(GTOOL) $(MODEL) $(basename $(notdir $@)) 1 1 "$(addsuffix /$@, . )"; \
	fi;

define crossdep1PI
$(addprefix $(addsuffix /, $(addprefix $(2)/, $(1))), $(addsuffix .1PI, $(addprefix $(3), $(addprefix _, $(4))))): $(addprefix $(FORM_PATH)/feynmanRules/, $(addsuffix .h, $(3) $(4))) $(addprefix graphs/, $(addsuffix .1PI, $(1)))
	cd $$(dir $$@); \
	if test $$(findstring FF, $$(dir $$@)); then \
		$(FORM) -p ../../$(FORM_PATH) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) $(_flag) $(TOOL_1PI); \
	else \
		$(FORM) -p ../../$(FORM_PATH) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) -D singlet=1 $(_flag) $(TOOL_1PI); \
	fi; \
	cd ../..
endef
define crossdep1PI_TL
$(addprefix $(addsuffix /, $(addprefix $(2)/, $(1))), $(addsuffix .1PI, $(addprefix $(3), $(addprefix _, $(4))))): $(addprefix $(FORM_PATH)/feynmanRules/, $(addsuffix .h, $(3) $(4))) $(addprefix graphs/, $(addsuffix .1PI, $(1)))
	cd $$(dir $$@); \
	if test $$(findstring FF, $$(dir $$@)); then \
		$(FORM) -p ../../$(FORM_PATH) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) $(_flag) $(TOOL_1PI_TL); \
	else \
		$(FORM) -p ../../$(FORM_PATH) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) -D singlet=1 $(_flag) $(TOOL_1PI_TL); \
	fi; \
	cd ../..
endef

_pos = $(if $(findstring $1,$2),$(call _pos,$1,\
       $(wordlist 2,$(words $2),$2),x $3),$3)
pos = $(words $(call _pos,$1,$2))

$(foreach graph, $(GRAPHSp_TL), $(foreach _op, $(Pops_TL), $(eval $(call crossdep1PI_TL, $(graph), P, none, $(_op) ))))
$(foreach graph, $(GRAPHSo_TL), $(foreach _op, $(Ops_TL), $(eval $(call crossdep1PI_TL, $(graph), O, $(_op), none ))))

$(foreach graph, $(GRAPHSp), $(foreach _op, $(Pops), $(eval $(call crossdep1PI, $(graph), P, none, $(_op) ))))
$(foreach graph, $(GRAPHSo), $(foreach _op, $(Ops), $(eval $(call crossdep1PI, $(graph), O, $(_op), none ))))
$(foreach graph, $(GRAPHSoo), $(foreach _o, $(Ops_contact), $(foreach _p, $(wordlist 1, $(call pos, $(_o), $(Ops_contact)), $(Ops_contact)), $(eval $(call crossdep1PI, $(graph), OO, $(_o), $(_p) )))))
$(foreach graph, $(GRAPHSop), $(foreach _o, $(Ops), $(foreach _p, $(Pops_contact), $(eval $(call crossdep1PI, $(graph), OP, $(_o), $(_p) )))))

# hacks to implement dependence of up to two operator insertions (the second
# insertion is supposed to be either from the action or form of a local field)
define crossdepResTL
$(addprefix $(addprefix results/, $(addsuffix _TL/, $(addprefix $(2)/, $(1) ))), $(addsuffix .res, $(addprefix $(3), $(addprefix _, $(4))))): $(addprefix $(addsuffix _TL/, $(addprefix $(2)/, $(1) )), $(addsuffix .1PI, $(addprefix $(3), $(addprefix _, $(4))))) $(FORM_PATH)/simplify_TL.frm $(FORM_PATH)/simplify_routines.h
	cd $$(dir $$@); \
	$(FORM) -p ../../../$(FORM_PATH) -D $$(addprefix cnt=,$(2)) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) $(_flag) simplify_TL; \
	cd ../../..
endef

define crossdepRes
$(addprefix $(addprefix results/, $(addsuffix /, $(addprefix $(2)/, $(1) ) )), $(addsuffix .UVonly.res, $(addprefix $(3), $(addprefix _, $(4))))): $(addprefix $(addsuffix /, $(addprefix $(2)/, $(1) )), $(addsuffix .1PI, $(addprefix $(3), $(addprefix _, $(4))))) $(if $(filter P, $(filter OP, $(1))), $(addprefix $(addsuffix _TL/, $(addprefix $(2)/, $(1) ) ), $(addsuffix .res, $(addprefix $(3), $(addprefix _, $(4)))))) $(FORM_PATH)/simplify.frm $(FORM_PATH)/simplify_routines.h
	cd $$(dir $$@); \
	$(FORM) -p ../../../$(FORM_PATH) -D $$(addprefix cnt=,$(2)) -D $$(addprefix name=,$(1)) -D $$(addprefix o=, $(3)) -D $$(addprefix o2=, $(4)) $(_flag) simplify; \
	cd ../../..
endef


$(foreach graph, $(GRAPHSp), $(foreach _op, $(Pops_TL), $(eval $(call crossdepResTL, $(graph), P, none, $(_op) ))))
$(foreach graph, $(GRAPHSo), $(foreach _op, $(Ops_TL), $(eval $(call crossdepResTL, $(graph), O, $(_op), none ))))

$(foreach graph, $(GRAPHSp), $(foreach _op, $(Pops), $(eval $(call crossdepRes, $(graph), P, none, $(_op) ))))
$(foreach graph, $(GRAPHSo), $(foreach _op, $(Ops), $(eval $(call crossdepRes, $(graph), O, $(_op), none ))))
$(foreach graph, $(GRAPHSoo), $(foreach _o, $(Ops_contact), $(foreach _p, $(wordlist 1, $(call pos, $(_o), $(Ops_contact)), $(Ops_contact)), $(eval $(call crossdepRes, $(graph), OO, $(_o), $(_p) )))))
$(foreach graph, $(GRAPHSop), $(foreach _o, $(Ops), $(foreach _p, $(Pops_contact), $(eval $(call crossdepRes, $(graph), OP, $(_o), $(_p) )))))

# allows to choose the desired n-point function according to name and then
# generate everything according to dependencies/, $(_o)_$(_p).UVonly.1PI)))
$(GRAPHSp_TL):  %: $(addprefix results/P/%/none_, $(addsuffix .res, $(Pops_TL)))
$(GRAPHSo_TL):  %: $(addprefix results/O/%/, $(addsuffix _none.res, $(Ops_TL)))

$(GRAPHSp):     %: $(addprefix results/P/%/none_, $(addsuffix .UVonly.res, $(Pops)))
$(GRAPHSo):     %: $(foreach _o, $(Ops), $(addprefix results/O/%/, $(addsuffix _none.UVonly.res, $(_o))))
$(GRAPHSoo):    %: $(foreach _o, $(Ops_contact), $(foreach _p, $(Ops_contact), $(addprefix results/OO/%/, $(_o)_$(_p).UVonly.res)))
$(GRAPHSop):    %: $(foreach _o, $(Ops), $(foreach _p, $(Pops_contact), $(addprefix results/OP/%/, $(_o)_$(_p).UVonly.res)))

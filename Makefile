# Usage:
#   make onepi    => generate 1-loop 1PI $(GRAPHS) with QGRAF and translate into final template
#
#   make observable{$(GRAPHS) $(GRAPHSp)}             => compute 1PI 1-loop graphs for given observable
#                                                        IF $(op) is set, only this operator will be computed


# (system specific) parameters
FORM        = form
FORM_PATH   = YMeuclFlavours
QGRAF       = ~/QGRAF/qgraf

FLAG        =  -D ALG=1 -D UVonly=1
# Note that at some point we will introduce operators at non-zero momentum, i.e. w/o "-D QCD=1"
MODEL       = QCD

# do not change
TOOL_1PI    = 1PI
TOOL_1PI_TL = 1PI_TL
GTOOL       = build_graphs.py

# Local fields considered
# CAVEAT: check signs of GammaGamma5 operators!
P5 = qSigmaFQ \
   qSigmaFtildeQ \
   qGammaD2lrQ qGammaGamma5FtildeQ\
   qGammaGamma5D2lrQ qGammaFtildeQ \
   qSigmaD2lrQ qFQ qGamma5FtildeQ qSigmaDlr2Q qDlDQ

P4 = trF2 trFFtilde qDlrQ qGamma5DlrQ qDGammalrQ

P3 = S P V A T

dP5 = $(addprefix d2, $(P3)) \
   \
   \
   d2VnO4 \
   d2AnO4 gradFFtilde divFFtilde dFFtildenO4 \
   d2TnO4 

dP4 = divT gradP gradV

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
Oeom = DF2_O4 PsiD0Psi PsiD02Psi PsiD03Psi PsiGammaDFPsi PsiD2D0Psi \
   Psi[DslashD2]Psi


oPs_TL = $(P3) $(P4) $(P5) $(dP4) $(dP5) $(Peom)
oPs    = $(P3) $(P4) $(P5) $(dP4) $(dP5)

Ops_TL = $(O3) $(O4) $(O5) $(O6) $(Oeom)
Ops    = $(O3) $(O4) $(O5) $(O6)

# compute contact terms only with the "continuum" fermion bilinears, i.e. no
# inclusion of O(a^2) from contact terms of two O(a) terms
# 3 + [O] - 4 >= 3
oPsContactP = $(P3)

# compute contact terms only for mass-dimension 5 operators and below
OpsContactO = $(O3) $(O4) $(O5)

# List of all (currently) computed 1PI graphs, with external fields:
#   B = background field
#   F = fermion [=quark]
#   O = operator in the effective action
#   P = local field
GRAPHS   = B2 B3 F2 F2B

GRAPHSp  = $(addsuffix P, $(GRAPHS) FF FFB) P
GRAPHSo  = $(addsuffix O, $(GRAPHS) F4 F2F2)
GRAPHSop = $(addsuffix OP, $(GRAPHS) FF FFB) OP

# the selection between flavour non-singlet and singlet is currently based on
# the occurrence of FF (this ignores combinations like F3F -> FF3 and other
# odd numbered variants)


GRAPHSp_TL  = $(addsuffix P_TL, $(GRAPHS) FF FFB)
GRAPHSo_TL  = $(addsuffix O_TL, $(GRAPHS) F4 F2F2)
GRAPHSop_TL = $(addsuffix OP_TL, $(GRAPHS) FF FFB)


# Computes the desired Green's function $(OBS) for a specified target
.PHONY: simplify simplify_TL

_flag = $(FLAG)

#all: onepi

# Setup required directories if they are missing.
$(shell mkdir -p $(addprefix P/, $(GRAPHSp) $(GRAPHSp_TL)))
$(shell mkdir -p $(addprefix O/, $(GRAPHSo) $(GRAPHSo_TL)))
$(shell mkdir -p $(addprefix OP/, $(GRAPHSop) $(GRAPHSop_TL)))
$(shell mkdir -p results graphs)
$(shell cd results; \
   mkdir -p $(addprefix P/, $(GRAPHSp) $(GRAPHSp_TL)); \
   mkdir -p $(addprefix O/, $(GRAPHSo) $(GRAPHSo_TL)); \
   mkdir -p $(addprefix OP/,$(GRAPHSop) $(GRAPHSop_TL)); \
   cd ..;)

graphs/%.1PI: $(MODEL).rules
	if test $(findstring _TL, $@); then \
		python3 $(GTOOL) $(MODEL) $(subst _TL,,$(basename $(notdir $@))) 1 0 "$(addsuffix /$@, . )"; \
	else \
		python3 $(GTOOL) $(MODEL) $(basename $(notdir $@)) 1 1 "$(addsuffix /$@, . )"; \
	fi;

# hack to implement dependence of up to two operator insertions (the second
# insertion is supposed to be either from the action or form of a local field)
define crossdep1PI
$(addprefix $(addsuffix /, $(1) ), $(addsuffix .1PI, $(addprefix $(2), $(addprefix _, $(3))))):
	cd $$(dir $$@); \
	if test $$(findstring FF, $$(dir $$@)); then \
		$(FORM) -p ../../$(FORM_PATH) -D name=$$(lastword $$(subst /, , $$(dir $$@))) -D $$(addprefix o=, $(2)) -D $$(addprefix o2=, $(3)) $(_flag) $(TOOL_1PI); \
	else \
		$(FORM) -p ../../$(FORM_PATH) -D name=$$(lastword $$(subst /, , $$(dir $$@))) -D $$(addprefix o=, $(2)) -D $$(addprefix o2=, $(3)) -D singlet=1 $(_flag) $(TOOL_1PI); \
	fi; \
	cd ../..
endef
define crossdep1PI_TL
$(addprefix $(addsuffix /, $(1) ), $(addsuffix .1PI, $(addprefix $(2), $(addprefix _, $(3))))):
	cd $$(dir $$@); \
	if test $$(findstring FF, $$(dir $$@)); then \
		$(FORM) -p ../../$(FORM_PATH) -D name=$$(lastword $$(subst /, , $$(dir $$@))) -D $$(addprefix o=, $(2)) -D $$(addprefix o2=, $(3)) $(_flag) $(TOOL_1PI_TL); \
	else \
		$(FORM) -p ../../$(FORM_PATH) -D name=$$(lastword $$(subst /, , $$(dir $$@))) -D $$(addprefix o=, $(2)) -D $$(addprefix o2=, $(3)) -D singlet=1 $(_flag) $(TOOL_1PI_TL); \
	fi; \
	cd ../..
endef

$(foreach graph, $(addprefix P/, $(GRAPHSp)), $(foreach _op, $(oPs), $(eval $(call crossdep1PI, $(graph), none, $(_op) ))))
$(foreach graph, $(addprefix O/, $(GRAPHSo)), $(foreach _op, $(Ops), $(eval $(call crossdep1PI, $(graph), $(_op), none ))))
$(foreach graph, $(addprefix OP/, $(GRAPHSop)), $(foreach _o, $(Ops), $(foreach _p, $(oPsContactP), $(eval $(call crossdep1PI, $(graph), $(_o), $(_p) )))))

$(foreach graph, $(addprefix P/, $(GRAPHSp_TL)), $(foreach _op, $(oPs_TL), $(eval $(call crossdep1PI_TL, $(graph), none, $(_op) ))))
$(foreach graph, $(addprefix O/, $(GRAPHSo_TL)), $(foreach _op, $(Ops_TL), $(eval $(call crossdep1PI_TL, $(graph), $(_op), none ))))
$(foreach graph, $(addprefix OP/, $(GRAPHSop_TL)), $(foreach _o, $(Ops_TL), $(foreach _p, $(oPs_TL), $(eval $(call crossdep1PI_TL, $(graph), $(_o), $(_p) )))))

$(GRAPHSp):     %: graphs/%.1PI $(addprefix P/%/none_, $(addsuffix .1PI, $(oPs)))
$(GRAPHSo):     %: graphs/%.1PI $(addprefix O/%/, $(addsuffix _none.1PI, $(Ops)))
$(GRAPHSop):    %: graphs/%.1PI $(foreach _p, $(oPsContactP), $(addprefix OP/%/, $(addsuffix _$(_p).1PI, $(Ops))))
$(GRAPHSp_TL):  %: graphs/%.1PI $(addprefix P/%/none_, $(addsuffix .1PI, $(oPs_TL)))
$(GRAPHSo_TL):  %: graphs/%.1PI $(addprefix O/%/, $(addsuffix _none.1PI, $(Ops_TL)))
$(GRAPHSop_TL): %: graphs/%.1PI $(foreach _p, $(oPs_TL), $(addprefix OP/%/, $(addsuffix _$(_p).1PI, $(Ops_TL))))

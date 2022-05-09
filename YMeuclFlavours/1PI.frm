* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

#include defaults.h
#include qgraf2form.h
#include prepareDimReg.h
#include dimReg.h
#include finaliseDimReg.h



*** "Import" generated graphs from Qgraf and apply Feynman rules
Local diagrams = 
#include ../../graphs/`name'.1PI
;


#call qgraf2form

.sort;

*** actually prepareDimReg and dimReg may be used universally with Feynman parameters...
#call prepareDimReg(k1)
#call dimReg(k1)


id FL(fl1?,?args,fl2?) = g_(fl1,?args)*FL(fl1,fl2);
id g_(fl?,G5) = g5_(fl);

** Compute all occuring fermion loops AFTER dimensional regularisation
** has been applied.
**
** makes error of O(eps) since trace is taken in 4 rather than D dimensions
** => 1-loop finite part is affected, BUT only if there are more than four(?)
**    additional gamma matrices involved in the trace tr(g5_*...)
if(match(FL(fl?,fl?))>0);
   id FL(fl?,fl?) = replace_(fl,floop)*FLOOP(floop);
   trace4 floop;
endif;

id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id e_(spt1?,spt2?,spt3?,spt4?)*DO4v(spt1?,spt2?,spt5?,spt6?) = 0;
id e_(spt1?,spt2?,spt3?,spt4?)*DO4v(spt1?,spt2?) = 0;
.sort;

** CHECK up to which O(eps^n) this is correct!
#call Gammas

#call Colours


** This flag can be used to keep the Tr[aces] instead of a reduction to algebra constants: TF,CF,CA.
#ifdef `ALG'
** occurrence of FC^2 would need special care! => stick with traces for the moment (i.e. undefined ALG)
#do dummy=1,1
   id,once Tr(col1?,col2?,?args) = (FC(col1,col2,col`ccnt')+DC(col1,col2,col`ccnt'))/2*Tr(col`ccnt',?args)-TF/Nc*Tr(?args)*d_(col1,col2);
   redefine ccnt "{`ccnt'+1}";
   id Tr(col1?) = 0;
   id Tr(col1?,col2?) = -d_(col1,col2)*TF;
   if(count(Tr,1)>0) redefine dummy "0";
   .sort;
#enddo
#endif


id D = 4-2*eps;
** Makes error of O(eps^2) => 1-loop finite part unaffected
id 1/(D+2) = 1/6+eps/18;
id 1/(D+4) = 1/8+eps/32;
id 1/(D+6) = 1/10+eps/50;
id 1/D = 1/4+eps/8;

.sort;
** Drop terms of power epsilon and higher orders
#ifdef `UVonly'
id eps = 0;
#endif
id ZERO = 0;
argument;
id ZERO = 0;
endargument;

id d_(col1?,col2?) = DO4v(col1,col2);
id DenomConst(imp?,n?) = DenomConst(imp.imp,n);
id DenomConst(m?,n?) = (1/m )^n;


id Power(m?,n?) = Omega^m*Power(0,n);
id Power(n?pos0_,m?) = Omega^n*(1+m*Log(Omega));

#ifdef `UVonly'
id Denom(m?,n?) = Denom(m,n)*Test(n);
argument Test;
id eps = 0;
endargument;
** Expand denominator power in eps
id Denom(m?,n?)*Test(l?) = 1/m^l*(1-(n-l)*Log(m));

if(match(eps^-1)==0) discard;
#endif

.sort;

#write <`o'_`o2'.1PI> "(%E)", diagrams;
.end;

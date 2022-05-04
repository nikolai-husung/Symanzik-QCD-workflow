#include defaults.h
#include qgraf2form.h
#include prepareDimReg.h
#include dimReg.h
#include finaliseDimReg.h

#undefine LPI;
#define ALG "1";

*** "Import" generated graphs from Qgraf and apply Feynman rules
Local diagrams =
#include ../graphs/`name'.1PI
;


#call qgraf2form


#call Colours
.sort;

#do dummy=1,1
   id,once FL(?args,G5,?args2) = e_(spt`sptcnt',spt{`sptcnt'+1},spt{`sptcnt'+2},spt{`sptcnt'+3})*FL(?args,spt`sptcnt',spt{`sptcnt'+1},spt{`sptcnt'+2},spt{`sptcnt'+3},?args2)/fac_(4);
   redefine sptcnt "{`sptcnt'+4}";
   if(match(FL(?args,G5,?args2))) redefine dummy "0";
   .sort;
#enddo
id FL(fl1?,?args,fl2?) = g_(fl1,?args)*FL(fl1,fl2);

Contract;


#call Gammas
.sort;

id D = 4-2*eps;
id 1/(D+2) = 1/6+eps/18;
id 1/(D+4) = 1/8+eps/32;
id 1/(D+6) = 1/10+eps/50;
id 1/D = 1/4+eps/8;

** Drop terms of power epsilon and higher orders
id eps = 0;

.sort;
id Power(m?,n?) = Omega^m*Power(0,n);



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


Print +s;
.sort;

id d_(col1?,col2?) = DO4v(col1,col2);
id Denom(imp?,Omega?,n?) = DenomConst(imp.imp+Omega,n);
id DenomConst(imp?,Omega?,n?) = DenomConst(imp.imp+Omega,n);


.sort;
#write <`o'_`o2'.1PI> "(%E)", diagrams;
.end;

Format mathematica;


Index A,B,C,E;

#include defaults.h
#include qgraf2form.h
#include dimReg.h
#include finaliseDimReg.h

#include simplify_routines.h

CFunction P,Q,R,S;
Symbol P2,Q2,R2,S2,PQ,PR,PS,QR,QS,RS,I,test,dZm,Pslash,Qslash;

Local tl = (
#include ../`cnt'/`name'_TL/`o'_`o2'.1PI
)
;


id D = 4;
id ext(?args) = 1;


** Remove color structure "overhead"
id d_(col1?,col2?) = DO4v(col1,col2);
id DenomConst(imp?,n?) = DenomConst(imp.imp,n);
id Denom(imp?,Omega?,n?) = Denom(imp.imp+Omega,n);

** Get rid of ZEROs
id ZERO = 0;
argument;
   id ZERO = 0;
endargument;

.sort;

#include simplifyRules/`name' # preparations

** enforce on-shell conditions
#include simplifyRules/`name' # gammas
id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
#include simplifyRules/`name' # momenta
argument;
#include simplifyRules/`name' # momenta
endargument;

id DenomConst(m?,n?) = Denom(m,n);
repeat;
id Denom(m?,n?)*Denom(m?,l?) = Denom(m,n+l);
endrepeat;
id Denom(m?,n?) = (1/m)^n;


id D = 4;
id i_ = I;

id CF = TF*(Nc-1/Nc);
id CA = Nc;
id Ng = Nc^2-1;

.sort;
id d_(spt1?,spt2?) = DO4v(spt1,spt2);
multiply replace_(N1_?, spt0, N2_?, spt1);


id ext(?args) = 1;
.sort;
Format mathematica;
#write <../../../results/`cnt'/`name'_TL/`o'_`o2'.res> "(%E)", tl;
.end;

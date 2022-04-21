Format mathematica;

Index A,B,C,E;

#include defaults.h
#include qgraf2form.h
#include dimReg.h
#include finaliseDimReg.h

#include simplify_routines.h

#define dZF "(-xi)*CF*g^2/2/eps";
#define dZA "(11/3*Nc - 4/3*FLOOP*TF)*g^2/2/eps";
#define dZg "(11/3*Nc - 4/3*FLOOP*TF)*g^2/2/eps";

#include simplifyRules/`name' # legs

CFunction P,Q,R,S;
Symbol P2,Q2,R2,S2,PQ,PR,PS,QR,QS,RS,I,test,test2,dZm;

Local loop =
#include ../`cnt'/`name'/`o'_`o2'.1PI
;

Local tl = 
#if((`name'!="P") && (`name'!="OP") && (`name'!="OO") && (`name'!="B2OO") && (`name'!="B3OO") && (`name'!="F2OO") && (`name'!="F2BOO") && (`name'!="F2F2OO") && (`name'!="F4OO"))
#include ../`cnt'/`name'_TL/`o'_`o2'.1PI
#endif
;

id D = 4;

id Power(n?pos0_,m?) = Omega^n*(1+m*Log(Omega));

** Remove color structure "overhead"
id d_(col1?,col2?) = DO4v(col1,col2);
id DenomConst(imp?,n?) = DenomConst(imp.imp,n);
id Denom(imp?,Omega?,n?) = Denom(imp.imp+Omega,n);

** Get rid of ZEROs
id ZERO = 0;
argument;
   id ZERO = 0;
endargument;

#include simplifyRules/`name' # preparations
** enforce on-shell conditions -- check signs!

#include simplifyRules/`name' # gammas
id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id DO4v(spt?,spt?,spt1?,imp?) = imp(spt1);
id DO4v(spt?,spt?,imp1?,imp2?) = imp1.imp2;
#include simplifyRules/`name' # momenta
argument;
#include simplifyRules/`name' # momenta
endargument;

id DenomConst(m?,n?) = Denom(m,n);
repeat;
id Denom(m?,n?)*Denom(m?,l?) = Denom(m,n+l);
endrepeat;
id Denom(m?,n?) = (1/m)^n;


**#call UnhandleDO4v

id D = 4;
id i_ = I;

.sort;
Local temp = loop + (`nF'*`dZF' + `nB'*`dZg' - `ng'*`dZg')*tl;
Format mathematica;

id DenomConst(m?,n?) = Denom(m,n);
.sort;
Dimension 4;

Contract;
.sort;
id CF = TF*(Nc-1/Nc);
id CA = Nc;
id Ng = Nc^2-1;

id ext(?args) = 1;
id 1/eps = n;
if(count(n,1)!=1) discard;
id n = 1;

id d_(spt1?,spt2?) = DO4v(spt1,spt2);
multiply replace_(N1_?, spt0, N2_?, spt1);

id ext(?args) = 1;
Format mathematica;
.sort;
#ifdef `UVonly'
#write <../../../results/`cnt'/`name'/`o'_`o2'.UVonly.res> "(%E)", temp;
#else
#write <../../../results/`cnt'/`name'/`o'_`o2'.res> "(%E)", temp;
#endif
.end;

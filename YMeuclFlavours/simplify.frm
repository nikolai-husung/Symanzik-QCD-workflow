* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

Format mathematica;

Index A,B,C,E,kappa,lambda,mu,nu,rho;
Auto Index spt=4;

#include defaults.h
#include qgraf2form.h
#include dimReg.h
#include finaliseDimReg.h

#include simplify_routines.h

#define dZF "(-xi)*CF*g^2/2/eps";
#define dZA "(11/3*Nc - 4/3*FLOOP*TF)*g^2/2/eps";
#define dZg "(11/3*Nc - 4/3*FLOOP*TF)*g^2/2/eps";

#include simplifyRules/`name' # legs


Local loop =
#include ../`cnt'/`name'/`o'_`o2'.1PI
;

Local tl = 
#if((`name'!="P") && (`name'!="OP") && (`name'!="OO") && (`name'!="B2OO") && (`name'!="B3OO") && (`name'!="F2OO") && (`name'!="F2BOO") && (`name'!="F2F2OO") && (`name'!="F4OO") && (`name'!="B2OP") && (`name'!="B3OP") && (`name'!="F2OP") && (`name'!="F2BOP") && (`name'!="FFOP") && (`name'!="FFBOP"))
#include ../`cnt'/`name'_TL/`o'_`o2'.1PI
#endif
;

repeat;
id q?evectors[n](spt?) = d_(spt,indices[n]);
id p?.q?evectors[n] = p(indices[n]);
id e_(p?evectors[n],spt0?,spt1?,spt2?) = e_(indices[n],spt0,spt1,spt2);
id DO4v(p?evectors[n],spt0?,spt1?,spt2?) = DO4v(indices[n],spt0,spt1,spt2);
id DO4v(p?evectors[n],spt0?,spt1?) = DO4v(indices[n],spt0,spt1);
endrepeat;
id g_(fl?,p?evectors[n]) = g_(fl,indices[n]);

argument;
id q?evectors[n] = indices[n];
endargument;


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

multiply replace_(impe1,p,impe2,q,impe3,r,impe4,s,spte1,mu,spte2,nu,spte3,rho);
#include simplifyRules/`name' # preparations


#call project2Clifford(fline1)
#call project2Clifford(fline2)

Contract;

id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id DO4v(spt?,spt?,spt1?,imp?) = imp(spt1);
id DO4v(spt?,spt?,imp1?,imp2?) = imp1.imp2;
id DO4v(spt1?,spt2?,spt3?,spt4?)*e_(spt1?,spt2?,spt5?,spt6?) = 0;

#call handlePermutations

id DenomConst(m?,n?) = Denom(m,n);
repeat;
id Denom(m?,n?)*Denom(m?,l?) = Denom(m,n+l);
endrepeat;
id Denom(m?,n?) = (1/m)^n;

id D = 4;
id i_ = I;

.sort;
Local temp = loop + (`nF'*`dZF' + `nB'*`dZg' - `ng'*`dZg')*tl;
Format mathematica;

id DenomConst(m?,n?) = Denom(m,n);


id CF = TF*(Nc-1/Nc);
id CA = Nc;
id Ng = Nc^2-1;

id ext(?args) = 1;
id 1/eps = n;
if(count(n,1)!=1) discard;
id n = 1;

id ext(?args) = 1;
Format mathematica;
bracket PERM;
.sort;
#ifdef `UVonly'
#write <../../../results/`cnt'/`name'/`o'_`o2'.UVonly.res> "(%E)", temp;
#else
#write <../../../results/`cnt'/`name'/`o'_`o2'.res> "(%E)", temp;
#endif
.end;

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

#include simplifyRules/`name' # legs

#include simplify_routines.h

Local tl = (
#include ../`cnt'/`name'_TL/`o'_`o2'.1PI
)
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

id ext(?args) = 1;


** Remove color structure "overhead"
id d_(col1?,col2?) = DO4v(col1,col2);
id DenomConst(imp?,n?) = DenomConst(imp.imp,n);
id Denom(imp?,Omega?,n?) = Denom(imp.imp+Omega,n);


#include simplifyRules/`name' # preparations

id DenomConst(m?,n?) = Denom(m,n);
repeat;
id Denom(m?,n?)*Denom(m?,l?) = Denom(m,n+l);
endrepeat;
id Denom(m?,n?) = (1/m)^n;

id i_ = I;

#call project2Clifford(fline1)
#call project2Clifford(fline2)

Contract;

id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id DO4v(spt?,spt?,spt1?,imp?) = imp(spt1);
id DO4v(spt?,spt?,imp1?,imp2?) = imp1.imp2;
id DO4v(spt1?,spt2?,spt3?,spt4?)*e_(spt1?,spt2?,spt5?,spt6?) = 0;

#call handlePermutations

id ext(?args) = 1;
.sort;
Format mathematica;
bracket PERM;
.sort;
#write <../../../results/`cnt'/`name'_TL/`o'_`o2'.res> "(%E)", tl;
.end;

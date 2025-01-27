* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

*** define symbols used to mask syntax for Mathematica
CFunction PERM;
Symbol I,dZm;

Vector v, w;

Set vectors: p,q,r,s;

Set evectors: kappahat, lambdahat;
Set indices: kappa, lambda;
Set extIndicesMask: sptMask1,...,sptMask5;

CTensor GAMMA,GAMMA5,GIGMA,TAU,TAU5,TIGMA;


#procedure project2Clifford(fline)
**id g5_(`fline') = g_(`fline',sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})*e_(sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})/fac_(4);
multiply (
   + gi_(`fline')
   + g_(`fline',5_)*GAMMA5(`fline')
   + g_(`fline',sptt`sptcnt')*GAMMA(`fline',sptt`sptcnt')
   - g_(`fline',5_,sptt`sptcnt')*GAMMA5(`fline',sptt`sptcnt')
   +i_*(g_(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-g_(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))/2*GIGMA(`fline',sptt`sptcnt',sptt{`sptcnt'+1})
   )/4;
trace4 `fline';
redefine sptcnt "{`sptcnt'+2}";
.sort;


id GIGMA(fl?,spt1?,spt2?)*DO4v(spt1?,spt2?) = 0;
id GIGMA(fl?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,spt4?) = 0;
#endprocedure


#procedure project2CliffordTaste(fline)
**id g5_(`fline') = g_(`fline',sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})*e_(sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})/fac_(4);
multiply (
   + gi_(`fline')
   + g_(`fline',5_)*TAU5(`fline')
   + g_(`fline',sptt`sptcnt')*TAU(`fline',sptt`sptcnt')
   - g_(`fline',5_,sptt`sptcnt')*TAU5(`fline',sptt`sptcnt')
   +i_*(g_(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-g_(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))/2*TIGMA(`fline',sptt`sptcnt',sptt{`sptcnt'+1})
   )/4;
trace4 `fline';
redefine sptcnt "{`sptcnt'+2}";
.sort;


id TIGMA(fl?,spt1?,spt2?)*DO4v(spt1?,spt2?) = 0;
id TIGMA(fl?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,spt4?) = 0;
#endprocedure


#procedure handlePermutations
*** introduce explicit spacetime indices to handle redundancies (mu,nu,rho,kappa,lambda)
id Test(n?$count) = 1;
switch $count;
   case 1;
      multiply Test(sptMask1)*PERM(1);
   break;
   case 2;
      multiply Test(sptMask1,sptMask2)*(PERM(1,1)+perm_(PERM,1,2));
   break;
   case 3;
      multiply Test(sptMask1,sptMask2,sptMask3)*(PERM(1,1,1)+perm_(PERM,1,1,2)+perm_(PERM,1,2,3));
   break;
   case 4;
      multiply Test(sptMask1,sptMask2,sptMask3,sptMask4)*(PERM(1,1,1,1)+perm_(PERM,1,1,1,2)+perm_(PERM,1,1,2,2)+perm_(PERM,1,1,2,3)+perm_(PERM,1,2,3,4));
   break;
endswitch;

if(count(Test,1)>0);
   repeat id Test(spt?extIndicesMask[n],?args)*PERM(l?{1,2,3,4},?args2) = replace_(extIndices[n], l)*Test(?args)*PERM(?args2,l);
   id Test = 1;
endif;
#endprocedure

#procedure handleIndices
id DO4v(spt?,spt?,spt1?) = sum_(sptt0,1,4,d_(sptt0,spt1));

*** handle projected Dirac matrices
id GAMMA(fl?,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*GAMMA(fl,sptt0));
id GIGMA(?args,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*GIGMA(?args,sptt0));
id GIGMA(fl?,spt?!{1,2,3,4},spt1?) = sum_(sptt0,1,4,d_(sptt0,spt)*GIGMA(fl,sptt0,spt1));
id GAMMA5(fl?,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*GAMMA5(fl,sptt0));

id TAU(fl?,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*TAU(fl,sptt0));
id TIGMA(?args,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*TIGMA(?args,sptt0));
id TIGMA(fl?,spt?!{1,2,3,4},spt1?) = sum_(sptt0,1,4,d_(sptt0,spt)*TIGMA(fl,sptt0,spt1));
id TAU5(fl?,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*TAU5(fl,sptt0));


id GIGMA(fl?,spt?{2,3,4},1) = -GIGMA(fl,1,spt);
id GIGMA(fl?,spt?{3,4},1) = -GIGMA(fl,1,spt);
id GIGMA(fl?,spt?{3,4},2) = -GIGMA(fl,2,spt);
id GIGMA(fl?,4,3) = -GIGMA(fl,3,4);
id GIGMA(fl?,spt?,spt?) = 0;

id TIGMA(fl?,spt?{2,3,4},1) = -TIGMA(fl,1,spt);
id TIGMA(fl?,spt?{3,4},1) = -TIGMA(fl,1,spt);
id TIGMA(fl?,spt?{3,4},2) = -TIGMA(fl,2,spt);
id TIGMA(fl?,4,3) = -TIGMA(fl,3,4);
id TIGMA(fl?,spt?,spt?) = 0;


*** handle (generalised) Kronecker deltas, Levi-Civita tensors etc.
id DO4v(1,2,spt0?,spt1?) = 0;
id DO4v(1,3,spt0?,spt1?) = 0;
id DO4v(1,4,spt0?,spt1?) = 0;
id DO4v(2,3,spt0?,spt1?) = 0;
id DO4v(2,4,spt0?,spt1?) = 0;
id DO4v(3,4,spt0?,spt1?) = 0;

id DO4v(spt?,1,2) = 0;
id DO4v(spt?,1,3) = 0;
id DO4v(spt?,1,4) = 0;
id DO4v(spt?,2,3) = 0;
id DO4v(spt?,2,4) = 0;
id DO4v(spt?,3,4) = 0;

id DO4v(1,spt0?,spt1?,spt2?) = d_(1,spt0)*d_(1,spt1)*d_(1,spt2);
id DO4v(2,spt0?,spt1?,spt2?) = d_(2,spt0)*d_(2,spt1)*d_(2,spt2);
id DO4v(3,spt0?,spt1?,spt2?) = d_(3,spt0)*d_(3,spt1)*d_(3,spt2);
id DO4v(4,spt0?,spt1?,spt2?) = d_(4,spt0)*d_(4,spt1)*d_(4,spt2);

id DO4v(1,spt0?,spt1?) = d_(1,spt0)*d_(1,spt1);
id DO4v(2,spt0?,spt1?) = d_(2,spt0)*d_(2,spt1);
id DO4v(3,spt0?,spt1?) = d_(3,spt0)*d_(3,spt1);
id DO4v(4,spt0?,spt1?) = d_(4,spt0)*d_(4,spt1);


id e_(1,2,3,spt?) = d_(spt,4);
id e_(1,2,spt?,4) = d_(spt,3);
id e_(1,spt?,3,4) = d_(spt,2);
id e_(spt?,2,3,4) = d_(spt,1);

id e_(1,spt0?,spt1?,spt2?)*e_(1,spt0?,spt1?,spt2?) = 1;
id e_(2,spt0?,spt1?,spt2?)*e_(2,spt0?,spt1?,spt2?) = 1;
id e_(3,spt0?,spt1?,spt2?)*e_(3,spt0?,spt1?,spt2?) = 1;
id e_(4,spt0?,spt1?,spt2?)*e_(4,spt0?,spt1?,spt2?) = 1;
id e_(1,spt0?,spt1?,spt2?)*e_(2,spt0?,spt1?,spt2?) = 0;
id e_(1,spt0?,spt1?,spt2?)*e_(3,spt0?,spt1?,spt2?) = 0;
id e_(1,spt0?,spt1?,spt2?)*e_(4,spt0?,spt1?,spt2?) = 0;
id e_(2,spt0?,spt1?,spt2?)*e_(3,spt0?,spt1?,spt2?) = 0;
id e_(2,spt0?,spt1?,spt2?)*e_(4,spt0?,spt1?,spt2?) = 0;
id e_(3,spt0?,spt1?,spt2?)*e_(4,spt0?,spt1?,spt2?) = 0;

id e_(1,2,spt0?,spt1?) = d_(spt0,3)*d_(spt1,4)-d_(spt0,4)*d_(spt1,3);
id e_(1,spt0?,3,spt1?) = d_(spt0,2)*d_(spt1,4)-d_(spt0,4)*d_(spt1,2);
id e_(1,spt0?,spt1?,4) = d_(spt0,2)*d_(spt1,3)-d_(spt0,3)*d_(spt1,2);
id e_(spt0?,2,3,spt1?) = d_(spt0,1)*d_(spt1,4)-d_(spt0,4)*d_(spt1,1);
id e_(spt0?,2,spt1?,4) = d_(spt0,1)*d_(spt1,3)-d_(spt0,3)*d_(spt1,1);
id e_(spt0?,spt1?,3,4) = d_(spt0,1)*d_(spt1,2)-d_(spt0,2)*d_(spt1,1);

#do dummy=1,4
   id DO4v(`dummy',spt0?,spt1?,spt2?) = d_(`dummy',spt0)*d_(`dummy',spt1)*d_(`dummy',spt2);
#enddo

id e_(1,2,3,v?vectors) = v(4);
id e_(1,2,v?vectors,4) = v(3);
id e_(1,v?vectors,3,4) = v(2);
id e_(v?vectors,2,3,4) = v(1);


id d_(spt1?,spt2?) = DO4v(spt1,spt2);

#do dummy=1,3
   id DO4v(`dummy',`dummy') = 1;
   #do dummy2=`dummy'+1,4
      id DO4v(`dummy',`dummy2') = 0;
   #enddo
#enddo
id DO4v(4,4) = 1;

id DO4v(p?,spt?) = p(spt);


id DO4v(1,spt0?,spt1?) = d_(1,spt0)*d_(1,spt1);
id DO4v(2,spt0?,spt1?) = d_(2,spt0)*d_(2,spt1);
id DO4v(3,spt0?,spt1?) = d_(3,spt0)*d_(3,spt1);
id DO4v(4,spt0?,spt1?) = d_(4,spt0)*d_(4,spt1);

id v?vectors.w?vectors = sum_(spt,1,4,v(spt)*w(spt));

id GIGMA(fl?,spt?{2,3,4},1) = -GIGMA(fl,1,spt);
id GIGMA(fl?,spt?{3,4},1) = -GIGMA(fl,1,spt);
id GIGMA(fl?,spt?{3,4},2) = -GIGMA(fl,2,spt);
id GIGMA(fl?,4,3) = -GIGMA(fl,3,4);
id GIGMA(fl?,spt?,spt?) = 0;

id TIGMA(fl?,spt?{2,3,4},1) = -TIGMA(fl,1,spt);
id TIGMA(fl?,spt?{3,4},1) = -TIGMA(fl,1,spt);
id TIGMA(fl?,spt?{3,4},2) = -TIGMA(fl,2,spt);
id TIGMA(fl?,4,3) = -TIGMA(fl,3,4);
id TIGMA(fl?,spt?,spt?) = 0;
#endprocedure

#procedure staggeredSpecific
** We know that 4-fermion operators have spinor / flavour structure only in pair-wise.
id TAU(tiline1,spt?)*TAU(tiline3,spt?) = TAU(tiline1,tiline3);
id TAU5(tiline1,spt?)*TAU5(tiline3,spt?) = TAU5(tiline1,tiline3);
id GAMMA(fline1,spt?)*GAMMA(fline3,spt?) = GAMMA(fline1,fline3);
id GAMMA5(fline1,spt?)*GAMMA5(fline3,spt?) = GAMMA5(fline1,fline3);

**id GIGMA(fline1,spt1?,spt2?)*GIGMA(fline3,spt1?,spt2?) = GIGMA(fline1,fline
#endprocedure

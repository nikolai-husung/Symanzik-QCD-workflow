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

CTensor GAMMA,GAMMA5;


#procedure project2Clifford(fline)
id g5_(`fline') = g_(`fline',sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})*e_(sptt{`sptcnt'+5},sptt{`sptcnt'+6},sptt{`sptcnt'+7},sptt{`sptcnt'+8})/fac_(4);
multiply (
   + gi_(`fline')
   + g_(`fline',sptt{`sptcnt'+1},sptt{`sptcnt'+2},sptt{`sptcnt'+3},sptt{`sptcnt'+4})*GAMMA5(`fline')*e_(sptt{`sptcnt'+1},sptt{`sptcnt'+2},sptt{`sptcnt'+3},sptt{`sptcnt'+4})/fac_(4)
   + g_(`fline',sptt`sptcnt')*GAMMA(`fline',sptt`sptcnt')
   - g_(`fline',sptt{`sptcnt'+1},sptt{`sptcnt'+2},sptt{`sptcnt'+3},sptt{`sptcnt'+4},sptt`sptcnt')*GAMMA5(`fline',sptt`sptcnt')*e_(sptt{`sptcnt'+1},sptt{`sptcnt'+2},sptt{`sptcnt'+3},sptt{`sptcnt'+4})/fac_(4)
   - (g_(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-g_(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))*(GAMMA(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-GAMMA(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))/4
   )/4;
trace4 `fline';
redefine sptcnt "{`sptcnt'+10}";
.sort;

id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,spt4?) = d_(spt3,spt4);
id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,imp?) = imp(spt3);
id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,imp1?,imp2?) = imp1.imp2;
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

*** handle projected Dirac matrices
id GAMMA(?args,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*GAMMA(?args,sptt0));
id GAMMA(fl?,spt?!{1,2,3,4},spt1?) = sum_(sptt0,1,4,d_(sptt0,spt)*GAMMA(fl,sptt0,spt1));
id GAMMA5(fl?,spt?!{1,2,3,4}) = sum_(sptt0,1,4,d_(sptt0,spt)*GAMMA5(fl,sptt0));


id GAMMA(fl?,spt?{2,3,4},1) = -GAMMA(fl,1,spt);
id GAMMA(fl?,spt?{3,4},1) = -GAMMA(fl,1,spt);
id GAMMA(fl?,spt?{3,4},2) = -GAMMA(fl,2,spt);
id GAMMA(fl?,4,3) = -GAMMA(fl,3,4);
id GAMMA(fl?,spt?,spt?) = 1;



*** handle (generalised) Kronecker deltas, Levi-Civita tensors etc.
id DO4v(1,2,spt0?,spt1?) = 0;
id DO4v(1,3,spt0?,spt1?) = 0;
id DO4v(1,4,spt0?,spt1?) = 0;
id DO4v(2,3,spt0?,spt1?) = 0;
id DO4v(2,4,spt0?,spt1?) = 0;
id DO4v(3,4,spt0?,spt1?) = 0;

#do dummy=1,4
   id DO4v(`dummy',spt0?,spt1?,spt2?) = d_(`dummy',spt0)*d_(`dummy',spt1)*d_(`dummy',spt2);
#enddo

id e_(1,2,3,spt?) = d_(spt,4);
id e_(1,2,spt?,4) = d_(spt,3);
id e_(1,spt?,3,4) = d_(spt,2);
id e_(spt?,2,3,4) = d_(spt,1);

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
   #do dummy2=`dummy',4
      id DO4v(`dummy',`dummy2') = 0;
   #enddo
#enddo

id DO4v(p?,spt?) = p(spt);

id v?vectors.w?vectors = sum_(spt,1,4,v(spt)*w(spt));

id GAMMA(fl?,spt?{2,3,4},1) = -GAMMA(fl,1,spt);
id GAMMA(fl?,spt?{3,4},1) = -GAMMA(fl,1,spt);
id GAMMA(fl?,spt?{3,4},2) = -GAMMA(fl,2,spt);
id GAMMA(fl?,4,3) = -GAMMA(fl,3,4);
id GAMMA(fl?,spt?,spt?) = 1;
#endprocedure

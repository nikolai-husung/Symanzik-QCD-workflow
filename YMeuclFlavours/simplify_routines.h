*** define symbols used to mask syntax for Mathematica
CFunction P,Q,R,S,PERM;
Symbol P2,Q2,R2,S2,PQ,PR,PS,QR,QS,RS,I,dZm;

Set vectors: p,q,r,s;
Set vmask: P,Q,R,S;
Set v2mask: P2,Q2,R2,S2;

Set evectors: kappahat, lambdahat;
Set indices: kappa, lambda;


CFunction GAMMA,GAMMA5;


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
multiply PERM(1,1,1,1,1)+perm_(PERM,1,1,1,1,2)+perm_(PERM,1,1,1,2,2)+perm_(PERM,1,2,2,2,3)+perm_(PERM,1,2,2,3,3)+perm_(PERM,1,1,2,3,4);
id PERM(spt0?,spt1?,spt2?,spt3?,spt4?) = PERM(spt0,spt1,spt2,spt3,spt4)*replace_(mu,spt0,nu,spt1,rho,spt2,kappa,spt3,lambda,spt4);

*** handle projected Dirac matrices
id GAMMA(?args,kappahat?vectors[n]) = sum_(l,1,4,vmask[n](l)*GAMMA(?args,l));
id GAMMA(fl?,kappahat?vectors[n],spt?) = sum_(l,1,4,vmask[n](l)*GAMMA(fl,l,spt));
id GAMMA5(fl?,kappahat?vectors[n]) = sum_(l,1,4,vmask[n](l)*GAMMA5(fl,l));
id GAMMA(fl?,spt0?,spt1?)*e_(spt0?,spt1?,spt2?,spt3?) = sum_(l,1,3,sum_(n,l+1,4,replace_(spt0,l,spt1,n)*GAMMA(fl,spt0,spt1)*e_(spt0,spt1,spt2,spt3)));
id GAMMA(?args,spt?)*e_(spt?,spt1?,spt2?,spt3?) = (replace_(spt,1)+replace_(spt,2)+replace_(spt,3)+replace_(spt,4))*GAMMA(?args,spt)*e_(spt,spt1,spt2,spt3);
id GAMMA(fl?,spt?,spt4?)*e_(spt?,spt1?,spt2?,spt3?) = (replace_(spt,1)+replace_(spt,2)+replace_(spt,3)+replace_(spt,4))*GAMMA(fl,spt,spt4)*e_(spt,spt1,spt2,spt3);
id GAMMA5(fl?,spt?)*e_(spt?,spt1?,spt2?,spt3?) = (replace_(spt,1)+replace_(spt,2)+replace_(spt,3)+replace_(spt,4))*GAMMA5(fl,spt)*e_(spt,spt1,spt2,spt3);
id GAMMA(fl?,l?{2,3,4},1) = -GAMMA(fl,1,l);
id GAMMA(fl?,l?{3,4},1) = -GAMMA(fl,1,l);
id GAMMA(fl?,l?{3,4},2) = -GAMMA(fl,2,l);
id GAMMA(fl?,4,3) = -GAMMA(fl,3,4);
id GAMMA(fl?,l?,l?) = 1;


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

id e_(1,2,3,p?vectors[l]) = vmask[l](4);
id e_(1,2,p?vectors[l],4) = vmask[l](3);
id e_(1,p?vectors[l],3,4) = vmask[l](2);
id e_(p?vectors[l],2,3,4) = vmask[l](1);


id d_(spt1?,spt2?) = DO4v(spt1,spt2);

#do dummy=1,3
   id DO4v(`dummy',`dummy') = 1;
   #do dummy2=`dummy',4
      id DO4v(`dummy',`dummy2') = 0;
   #enddo
#enddo

id DO4v(p?,spt?) = p(spt);

id p?.p?vectors[n] = sum_(l,1,4,vmask[n](l)*vmask[n](l));
id p.q = sum_(l,1,4,P(l)*Q(l));
id p.r = sum_(l,1,4,P(l)*R(l));
id p.s = sum_(l,1,4,P(l)*S(l));
id q.r = sum_(l,1,4,Q(l)*R(l));
id q.s = sum_(l,1,4,Q(l)*S(l));
id r.s = sum_(l,1,4,R(l)*S(l));

id p?vectors[l](spt?) = vmask[l](spt);

id GAMMA(fl?,l?{2,3,4},1) = -GAMMA(fl,1,l);
id GAMMA(fl?,l?{3,4},1) = -GAMMA(fl,1,l);
id GAMMA(fl?,l?{3,4},2) = -GAMMA(fl,2,l);
id GAMMA(fl?,4,3) = -GAMMA(fl,3,4);
id GAMMA(fl?,l?,l?) = 1;
#endprocedure

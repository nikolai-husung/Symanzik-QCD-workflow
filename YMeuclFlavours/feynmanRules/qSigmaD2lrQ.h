
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
      - 1/2*DO4v(kappa,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*d_(cf1,cf2)
      + 1/2*DO4v(kappa,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*d_(cf1,cf2)
      - 1/2*DO4v(kappa,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*d_(cf1,cf2)
      + 1/2*DO4v(kappa,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*d_(cf1,cf2)
      + 1/2*DO4v(lambda,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*d_(cf1,cf2)
      - 1/2*DO4v(lambda,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*d_(cf1,cf2)
      + 1/2*DO4v(lambda,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*d_(cf1,cf2)
      - 1/2*DO4v(lambda,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*d_(cf1,cf2);
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
      - TC(b,cf1,cf2)*DO4v(gamma,kappa,spt`sptcnt',p)*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,kappa,spt`sptcnt',p)*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,kappa,spt`sptcnt',q)*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,kappa,spt`sptcnt',q)*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,lambda,spt`sptcnt',p)*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,lambda,spt`sptcnt',p)*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,lambda,spt`sptcnt',q)*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,lambda,spt`sptcnt',q)*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*i_*g;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,kappa,spt`sptcnt')*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,kappa,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,lambda,spt`sptcnt')*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,lambda,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*OPF(flc0)*FL(fl1,lambda,spt`sptcnt',fl2)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',lambda,fl2)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,lambda,spt`sptcnt')*OPF(flc0)*FL(fl1,kappa,spt`sptcnt',fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,lambda,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',kappa,fl2)*g^2;
   redefine sptcnt "{`sptcnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


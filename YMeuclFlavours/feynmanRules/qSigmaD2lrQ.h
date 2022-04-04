
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
      - 1/2*DO4v(kappahat,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*d_(cf1,cf2)
      + 1/2*DO4v(kappahat,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*d_(cf1,cf2)
      - 1/2*DO4v(kappahat,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*d_(cf1,cf2)
      + 1/2*DO4v(kappahat,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*d_(cf1,cf2)
      + 1/2*DO4v(lambdahat,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*d_(cf1,cf2)
      - 1/2*DO4v(lambdahat,spt`sptcnt',p,p)*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*d_(cf1,cf2)
      + 1/2*DO4v(lambdahat,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*d_(cf1,cf2)
      - 1/2*DO4v(lambdahat,spt`sptcnt',q,q)*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*d_(cf1,cf2);
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
      - TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',p)*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',p)*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',q)*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',q)*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,lambdahat,spt`sptcnt',p)*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,lambdahat,spt`sptcnt',p)*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*i_*g
      - TC(b,cf1,cf2)*DO4v(gamma,lambdahat,spt`sptcnt',q)*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*i_*g
      + TC(b,cf1,cf2)*DO4v(gamma,lambdahat,spt`sptcnt',q)*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*i_*g;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,kappahat,spt`sptcnt')*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,kappahat,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,lambdahat,spt`sptcnt')*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,lambdahat,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,kappahat,spt`sptcnt')*OPF(flc0)*FL(fl1,lambdahat,spt`sptcnt',fl2)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,kappahat,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',lambdahat,fl2)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,lambdahat,spt`sptcnt')*OPF(flc0)*FL(fl1,kappahat,spt`sptcnt',fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,lambdahat,spt`sptcnt')*OPF(flc0)*FL(fl1,spt`sptcnt',kappahat,fl2)*g^2;
   redefine sptcnt "{`sptcnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


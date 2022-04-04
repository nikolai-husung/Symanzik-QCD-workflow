
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - FL(fl1,fl2)*d_(cf1,cf2)*p(kappahat)*q(lambdahat)
   + FL(fl1,fl2)*d_(cf1,cf2)*p(lambdahat)*q(kappahat);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,kappahat)*p(lambdahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,kappahat)*q(lambdahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,lambdahat)*p(kappahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,lambdahat)*q(kappahat)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,fl2)*d_(gamma,kappahat)*d_(delta,lambdahat)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,fl2)*d_(gamma,lambdahat)*d_(delta,kappahat)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,fl2)*d_(gamma,kappahat)*d_(delta,lambdahat)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,fl2)*d_(gamma,lambdahat)*d_(delta,kappahat)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo



#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - 1/2*M(`Q')^2*FL(fl1,kappahat,lambdahat,fl2)*d_(cf1,cf2)
   + 1/2*M(`Q')^2*FL(fl1,lambdahat,kappahat,fl2)*d_(cf1,cf2)
   - M(`Q')*FL(fl1,kappahat,lambdahat,q,fl2)*d_(cf1,cf2)*i_
   + M(`Q')*FL(fl1,lambdahat,kappahat,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)^2*FL(fl1,kappahat,lambdahat,fl2)*d_(cf1,cf2)
   + 1/2*M(quark)^2*FL(fl1,lambdahat,kappahat,fl2)*d_(cf1,cf2)
   + M(quark)*FL(fl1,p,kappahat,lambdahat,fl2)*d_(cf1,cf2)*i_
   - M(quark)*FL(fl1,p,lambdahat,kappahat,fl2)*d_(cf1,cf2)*i_
   + 1/2*FL(fl1,p,p,kappahat,lambdahat,fl2)*d_(cf1,cf2)
   - 1/2*FL(fl1,p,p,lambdahat,kappahat,fl2)*d_(cf1,cf2)
   + 1/2*FL(fl1,kappahat,lambdahat,q,q,fl2)*d_(cf1,cf2)
   - 1/2*FL(fl1,lambdahat,kappahat,q,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*M(`Q')*FL(fl1,kappahat,lambdahat,gamma,fl2)*g
   + TC(b,cf1,cf2)*M(`Q')*FL(fl1,lambdahat,kappahat,gamma,fl2)*g
   - TC(b,cf1,cf2)*M(quark)*FL(fl1,gamma,kappahat,lambdahat,fl2)*g
   + TC(b,cf1,cf2)*M(quark)*FL(fl1,gamma,lambdahat,kappahat,fl2)*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,p,gamma,kappahat,lambdahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,p,gamma,lambdahat,kappahat,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,p,kappahat,lambdahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,p,lambdahat,kappahat,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,r,kappahat,lambdahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,r,lambdahat,kappahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappahat,lambdahat,q,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappahat,lambdahat,r,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappahat,lambdahat,gamma,q,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambdahat,kappahat,q,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambdahat,kappahat,r,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambdahat,kappahat,gamma,q,fl2)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,delta,kappahat,lambdahat,fl2)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,delta,lambdahat,kappahat,fl2)*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,kappahat,lambdahat,gamma,delta,fl2)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,lambdahat,kappahat,gamma,delta,fl2)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,gamma,kappahat,lambdahat,fl2)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,gamma,lambdahat,kappahat,fl2)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,kappahat,lambdahat,delta,gamma,fl2)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,lambdahat,kappahat,delta,gamma,fl2)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


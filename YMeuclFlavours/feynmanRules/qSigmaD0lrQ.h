
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + 1/2*M(`Q')*FL(fl1,kappahat,lambdahat,fl2)*d_(cf1,cf2)
   + 1/2*M(`Q')*FL(fl1,lambdahat,kappahat,fl2)*d_(cf1,cf2)*etaC
   + 1/2*M(quark)*FL(fl1,kappahat,lambdahat,fl2)*d_(cf1,cf2)
   + 1/2*M(quark)*FL(fl1,lambdahat,kappahat,fl2)*d_(cf1,cf2)*etaC
   - 1/2*FL(fl1,p,kappahat,lambdahat,fl2)*d_(cf1,cf2)*i_
   - 1/2*FL(fl1,p,lambdahat,kappahat,fl2)*d_(cf1,cf2)*i_*etaC
   + 1/2*FL(fl1,kappahat,lambdahat,q,fl2)*d_(cf1,cf2)*i_
   + 1/2*FL(fl1,lambdahat,kappahat,q,fl2)*d_(cf1,cf2)*i_*etaC;


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,kappahat,lambdahat,fl2)*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,lambdahat,kappahat,fl2)*etaC*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,kappahat,lambdahat,gamma,fl2)*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambdahat,kappahat,gamma,fl2)*etaC*g;


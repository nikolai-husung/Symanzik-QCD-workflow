
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + M(`Q')*FL(fl1,kappahat,fl2)*d_(cf1,cf2)*p(lambdahat)*i_
   + M(`Q')*FL(fl1,kappahat,fl2)*d_(cf1,cf2)*q(lambdahat)*i_
   - M(`Q')*FL(fl1,lambdahat,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - M(`Q')*FL(fl1,lambdahat,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   + M(quark)*FL(fl1,kappahat,fl2)*d_(cf1,cf2)*p(lambdahat)*i_
   + M(quark)*FL(fl1,kappahat,fl2)*d_(cf1,cf2)*q(lambdahat)*i_
   - M(quark)*FL(fl1,lambdahat,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - M(quark)*FL(fl1,lambdahat,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   + FL(fl1,p,kappahat,fl2)*d_(cf1,cf2)*p(lambdahat)
   + FL(fl1,p,kappahat,fl2)*d_(cf1,cf2)*q(lambdahat)
   - FL(fl1,p,lambdahat,fl2)*d_(cf1,cf2)*p(kappahat)
   - FL(fl1,p,lambdahat,fl2)*d_(cf1,cf2)*q(kappahat)
   - FL(fl1,kappahat,q,fl2)*d_(cf1,cf2)*p(lambdahat)
   - FL(fl1,kappahat,q,fl2)*d_(cf1,cf2)*q(lambdahat)
   + FL(fl1,lambdahat,q,fl2)*d_(cf1,cf2)*p(kappahat)
   + FL(fl1,lambdahat,q,fl2)*d_(cf1,cf2)*q(kappahat);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + TC(b,cf1,cf2)*FL(fl1,gamma,kappahat,fl2)*p(lambdahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,gamma,kappahat,fl2)*q(lambdahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,gamma,kappahat,fl2)*r(lambdahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,lambdahat,fl2)*p(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,lambdahat,fl2)*q(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,lambdahat,fl2)*r(kappahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,gamma,fl2)*p(lambdahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,gamma,fl2)*q(lambdahat)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,gamma,fl2)*r(lambdahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambdahat,gamma,fl2)*p(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambdahat,gamma,fl2)*q(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambdahat,gamma,fl2)*r(kappahat)*i_*g;


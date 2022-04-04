
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - M(`Q')*FL(fl1,G5,kappahat,fl2)*d_(cf1,cf2)*etaC
   - M(quark)*FL(fl1,G5,kappahat,fl2)*d_(cf1,cf2)
   + FL(fl1,p,G5,kappahat,fl2)*d_(cf1,cf2)*i_
   - FL(fl1,G5,kappahat,q,fl2)*d_(cf1,cf2)*i_*etaC;


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*FL(fl1,gamma,G5,kappahat,fl2)*g
   - TC(b,cf1,cf2)*FL(fl1,G5,kappahat,gamma,fl2)*etaC*g;



#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + M(`Q')*OPF(flc0)*FL(fl1,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - M(`Q')*OPF(flc0)*FL(fl1,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   + M(quark)*OPF(flc0)*FL(fl1,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - M(quark)*OPF(flc0)*FL(fl1,fl2)*d_(cf1,cf2)*q(kappahat)*i_;


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - 2*TC(b,cf1,cf2)*M(`Q')*OPF(flc0)*FL(fl1,fl2)*d_(gamma,kappahat)*g
   - 2*TC(b,cf1,cf2)*M(quark)*OPF(flc0)*FL(fl1,fl2)*d_(gamma,kappahat)*g;


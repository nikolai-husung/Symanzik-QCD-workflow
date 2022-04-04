
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + M(`Q')*FL(fl1,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   + M(`Q')*FL(fl1,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   - M(quark)*FL(fl1,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - M(quark)*FL(fl1,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   - FL(fl1,p,fl2)*d_(cf1,cf2)*p(kappahat)
   - FL(fl1,p,fl2)*d_(cf1,cf2)*q(kappahat)
   - FL(fl1,q,fl2)*d_(cf1,cf2)*p(kappahat)
   - FL(fl1,q,fl2)*d_(cf1,cf2)*q(kappahat);


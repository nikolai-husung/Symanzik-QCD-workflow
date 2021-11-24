
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

id vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
   i_*(p(kappa)+q(kappa))*FL(fl1,G5,fl2)*d_(cf1,cf2)*OPF(aquark,`Q',fl1);

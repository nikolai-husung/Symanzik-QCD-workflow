
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

id vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
   i_*(FL(fl1,p,fl2)+FL(fl1,q,fl2))*d_(cf1,cf2)*OPF(aquark,`Q',fl1);

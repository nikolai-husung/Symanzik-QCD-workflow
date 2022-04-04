
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

id vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
   - (FL(fl1,kappahat,lambdahat,fl2)-FL(fl1,lambdahat,kappahat,fl2))*d_(cf1,cf2)*OPF(aquark,`Q',fl1)/2;

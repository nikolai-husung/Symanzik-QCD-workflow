
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + FL(fl1,G5,spt1,fl2)*e_(p,kappa,lambda,spt1)*d_(cf1,cf2)*i_
   + FL(fl1,G5,spt1,fl2)*e_(q,kappa,lambda,spt1)*d_(cf1,cf2)*i_;


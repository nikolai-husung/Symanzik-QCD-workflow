
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
      -(p.p+2*p.q+q.q)*FL(fl1,kappahat,fl2)*d_(cf1,cf2)*OPF(aquark,`Q',fl1);
   if(match(vert(aquark(?args1),`Q'(?args2),src(?args3)))>0) redefine dummy "0";
   .sort;
#enddo


#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
      -(DO4v(kappahat,p,p,spt`sptcnt')+2*DO4v(kappahat,p,q,spt`sptcnt')+DO4v(kappahat,q,q,spt`sptcnt'))*FL(fl1,spt`sptcnt',fl2)*d_(cf1,cf2)*OPF(aquark,`Q',fl1);
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(?args1),`Q'(?args2),src(?args3)))>0) redefine dummy "0";
   .sort;
#enddo

#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),src(?args)) =
      + 2*TC(b,cf1,cf2)*FL(fl1,spt`sptcnt',fl2)*e_(r,gamma,kappahat,spt`sptcnt')*i_*g*OPF(aquark,`Q',fl1);
   
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),src(?args)))>0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)) =
      + 2*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,spt`sptcnt',fl2)*e_(gamma,delta,kappahat,spt`sptcnt')*g^2*OPF(aquark,`Q',fl1);

   redefine ccnt "{`ccnt'+1}";
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo


#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
      - DO4v(kappahat,spt`sptcnt',p,p)*FL(fl1,spt`sptcnt',fl2)*d_(cf1,cf2)*OPF(aquark,`Q',fl1)
      - DO4v(kappahat,spt`sptcnt',q,q)*FL(fl1,spt`sptcnt',fl2)*d_(cf1,cf2)*OPF(aquark,`Q',fl1);
   
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),src(?args)) =
      - 2*TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',p)*FL(fl1,spt`sptcnt',fl2)*i_*g*OPF(aquark,`Q',fl1)
      + 2*TC(b,cf1,cf2)*DO4v(gamma,kappahat,spt`sptcnt',q)*FL(fl1,spt`sptcnt',fl2)*i_*g*OPF(aquark,`Q',fl1);

   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),src(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)) =
      + 2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,kappahat,spt`sptcnt')*FL(fl1,spt`sptcnt',fl2)*g^2*OPF(aquark,`Q',fl1)
      + 2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,kappahat,spt`sptcnt')*FL(fl1,spt`sptcnt',fl2)*g^2*OPF(aquark,`Q',fl1);

   redefine sptcnt "{`sptcnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

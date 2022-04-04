#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

id vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),src(?args)) =
   - TC(b,cf1,cf2)*FL(fl1,fl2)*d_(kappahat,gamma)*r(lambdahat)*i_*g*OPF(aquark,`Q',fl1)
   + TC(b,cf1,cf2)*FL(fl1,fl2)*d_(lambdahat,gamma)*r(kappahat)*i_*g*OPF(aquark,`Q',fl1);


#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)) =
      + FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,fl2)*d_(kappahat,gamma)*d_(lambdahat,delta)*g^2*OPF(aquark,`Q',fl1)
      - FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,fl2)*d_(kappahat,delta)*d_(lambdahat,gamma)*g^2*OPF(aquark,`Q',fl1);

   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),src(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

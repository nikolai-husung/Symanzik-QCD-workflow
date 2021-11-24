id vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),anchor(?args)) =
   (FL(fl1,gamma,r,fl2) - FL(fl1,r,gamma,fl2))*i_*g*TC(b,cf1,cf2)*OPF(field2(fl1));


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),anchor(?args)) =
      (FL(fl1,delta,gamma,fl2) - FL(fl1,gamma,delta,fl2))*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*g^2*OPF(field2(fl1));

   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

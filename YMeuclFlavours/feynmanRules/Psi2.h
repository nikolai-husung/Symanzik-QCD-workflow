#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)) =
      FL(fl1,fl2)*d_(cf1,cf2)*OPF(field2(fl1));
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),anchor(?args3)))>0) redefine dummy "0";
   .sort;
#enddo

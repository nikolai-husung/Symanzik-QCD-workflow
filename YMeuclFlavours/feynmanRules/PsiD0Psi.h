id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),anchor(?args)) = (
   + FL(fl1,fl2)*d_(cf1,cf2)*M(field2)
   + FL(fl1,q,fl2)*d_(cf1,cf2)*i_)*Tau(ti1,ti2);


id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?,ti3?),anchor(?args)) =
   + TC(b,cf1,cf2)*FL(fl1,spt3,fl2)*g*Tau(ti1,ti2);

id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)) =
   + OPF(field2(fl1))*FL(fl1,fl2)*d_(cf1,cf2)*M(field2)
   + OPF(field2(fl1))*FL(fl1,q,fl2)*d_(cf1,cf2)*i_;


id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),anchor(?args)) =
   + TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*g;

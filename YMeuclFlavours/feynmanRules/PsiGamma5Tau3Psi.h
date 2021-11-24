id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),anchor(?args)) =
   + FL(fl1,G5,fl2)*d_(cf1,cf2)*i_*OPF(field2(fl1));


*** implement twist
id OPF(quark2) = -OPF(quark2);

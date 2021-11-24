id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)) =
   - FL(fl1,G5,fl2)*d_(cf1,cf2)*q.q*i_*OPF(field2(fl1));


id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),anchor(?args)) =
   - (2*q(spt3)+r(spt3))*TC(b,cf1,cf2)*FL(fl1,G5,fl2)*g*OPF(field2(fl1));


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),field4?{bgf,gluon}(s?,spt4?,c?,fl4?),anchor(?args)) =
      + FL(fl1,G5,fl2)*d_(spt3,spt4)*i_*g^2*(TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)+TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt'))*OPF(field2(fl1));
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),anchor(?args5)))>0) redefine dummy "0";
   .sort;
#enddo


*** implement twist [alternative introduce tau3 somewhere e.g. in OPF]
id OPF(quark2(fl?)) = -OPF(quark2(fl));

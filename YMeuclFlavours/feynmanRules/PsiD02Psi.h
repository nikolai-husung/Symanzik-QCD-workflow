id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)) =
   + OPF(field2(fl1))*FL(fl1,fl2)*d_(cf1,cf2)*M(field2)^2
   + 2*OPF(field2(fl1))*FL(fl1,q,fl2)*d_(cf1,cf2)*i_*M(field2)
   - OPF(field2(fl1))*FL(fl1,q,q,fl2)*d_(cf1,cf2);


id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),anchor(?args)) =
   + TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,q,spt3,fl2)*i_*g
   + TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,r,spt3,fl2)*i_*g
   + 2*TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*M(field2)*g
   + TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,spt3,q,fl2)*i_*g;


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),field4?{bgf,gluon}(s?,spt4?,c?,fl4?),anchor(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt3,spt4,fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt4,spt3,fl2)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),anchor(?args5)))>0) redefine dummy "0";
   .sort;
#enddo

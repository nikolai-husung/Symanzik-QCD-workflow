id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),anchor(?args)) =
   - 2*TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,r,fl2)*q(spt3)*g
   - TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,r,fl2)*r(spt3)*g
   + 2*TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*q.r*g
   + TC(b,cf1,cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*r.r*g;


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),field4?{bgf,gluon}(s?,spt4?,c?,fl4?),anchor(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,r,fl2)*d_(spt3,spt4)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,r,fl2)*d_(spt3,spt4)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,s,fl2)*d_(spt3,spt4)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,s,fl2)*d_(spt3,spt4)*i_*g^2
      + 2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*q(spt4)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*s(spt4)*i_*g^2
      - 2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt3,fl2)*q(spt4)*i_*g^2
      - 2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt3,fl2)*r(spt4)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt3,fl2)*s(spt4)*i_*g^2
      - 2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt4,fl2)*q(spt3)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt4,fl2)*r(spt3)*i_*g^2
      - 2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field2(fl1))*FL(fl1,spt4,fl2)*s(spt3)*i_*g^2
      + 2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt4,fl2)*q(spt3)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt4,fl2)*r(spt3)*i_*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),anchor(?args5)))>0) redefine dummy "0";
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{bgf,gluon}(r?,spt3?,b?,fl3?),field4?{bgf,gluon}(s?,spt4?,c?,fl4?),field5?{bgf,gluon}(t?,spt5?,d?,fl5?),anchor(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*OPF(field2(fl1))*FL(fl1,spt3,fl2)*d_(spt5,spt4)*g^3
      + TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*OPF(field2(fl1))*FL(fl1,spt3,fl2)*d_(spt5,spt4)*g^3
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt3,fl2)*d_(spt5,spt4)*g^3
      - TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*OPF(field2(fl1))*FL(fl1,spt3,fl2)*d_(spt5,spt4)*g^3
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*OPF(field2(fl1))*FL(fl1,spt5,fl2)*d_(spt3,spt4)*g^3
      + TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*OPF(field2(fl1))*FL(fl1,spt5,fl2)*d_(spt3,spt4)*g^3
      - TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*OPF(field2(fl1))*FL(fl1,spt5,fl2)*d_(spt3,spt4)*g^3
      + TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt5,fl2)*d_(spt3,spt4)*g^3
      - TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*OPF(field2(fl1))*FL(fl1,spt4,fl2)*d_(spt3,spt5)*g^3
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt4,fl2)*d_(spt3,spt5)*g^3
      + TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*OPF(field2(fl1))*FL(fl1,spt4,fl2)*d_(spt3,spt5)*g^3
      - TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*OPF(field2(fl1))*FL(fl1,spt4,fl2)*d_(spt3,spt5)*g^3;
   redefine cfcnt "{`cfcnt'+2}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),field5?{bgf,gluon}(?args5),anchor(?args6)))>0) redefine dummy "0";
   .sort;
#enddo

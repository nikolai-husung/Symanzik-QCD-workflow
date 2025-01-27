id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),anchor(?args)) = (
   - 1/2*M(field2)*FL(fl1,fl2)*d_(cf1,cf2)*q.q
   - 1/2*M(field2)*FL(fl1,fl2)*d_(cf1,cf2)*p.p
   + 1/2*FL(fl1,p,fl2)*d_(cf1,cf2)*p.p*i_
   - 1/2*FL(fl1,q,fl2)*d_(cf1,cf2)*q.q*i_)*Tau(ti1,ti2);


id vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{bgf,gluon}(r?,gamma?,b?,fl3?,ti3?),anchor(?args)) = (
   + TC(b,cf1,cf2)*M(field2)*FL(fl1,fl2)*q(gamma)*i_*g
   + 1/2*TC(b,cf1,cf2)*M(field2)*FL(fl1,fl2)*r(gamma)*i_*g
   - TC(b,cf1,cf2)*M(field2)*FL(fl1,fl2)*p(gamma)*i_*g
   - 1/2*TC(b,cf1,cf2)*M(field2)*FL(fl1,fl2)*r(gamma)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,p,fl2)*p(gamma)*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,p,fl2)*r(gamma)*g
   - TC(b,cf1,cf2)*FL(fl1,q,fl2)*q(gamma)*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,q,fl2)*r(gamma)*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*p.p*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*p.r*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*q.q*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*q.r*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*r.r*g)*Tau(ti1,ti2);

#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{bgf,gluon}(r?,gamma?,b?,fl3?,ti3?),field4?{bgf,gluon}(s?,delta?,c?,fl4?,ti4?),anchor(?args)) = (
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*M(field2)*FL(fl1,fl2)*d_(gamma,delta)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*M(field2)*FL(fl1,fl2)*d_(gamma,delta)*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,p,fl2)*d_(gamma,delta)*i_*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,q,fl2)*d_(gamma,delta)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,fl2)*p(delta)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,delta,fl2)*q(gamma)*i_*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,delta,fl2)*s(gamma)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*M(field2)*FL(fl1,fl2)*d_(gamma,delta)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*M(field2)*FL(fl1,fl2)*d_(gamma,delta)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,p,fl2)*d_(gamma,delta)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,q,fl2)*d_(gamma,delta)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,gamma,fl2)*q(delta)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,fl2)*p(gamma)*i_*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,fl2)*s(gamma)*i_*g^2)*Tau(ti1,ti2);
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),anchor(?args5)))>0) redefine dummy "0";
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{bgf,gluon}(r?,gamma?,b?,fl3?,ti3?),field4?{bgf,gluon}(s?,delta?,c?,fl4?,ti4?),field5?{bgf,gluon}(t?,sptp5?,d?,fl5?,ti5?),anchor(?args)) = (
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3)*Tau(ti1,ti2);
   redefine cfcnt "{`cfcnt'+2}";
   if(match(vert(field?{aquark,aquark2}(?args1),field2?{quark,quark2}(?args2),field3?{bgf,gluon}(?args3),field4?{bgf,gluon}(?args4),field5?{bgf,gluon}(?args5),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

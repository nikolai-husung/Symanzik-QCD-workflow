id vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),anchor(?args)) =
   - 1/2*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(cf1,cf2)*q.q
   - 1/2*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(cf1,cf2)*p.p
   + 1/2*OPF(field4(fl1))*FL(fl1,p,fl2)*d_(cf1,cf2)*p.p*i_
   - 1/2*OPF(field4(fl1))*FL(fl1,q,fl2)*d_(cf1,cf2)*q.q*i_;


id vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),anchor(?args)) =
   + TC(b,cf1,cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*q(gamma)*i_*g
   + 1/2*TC(b,cf1,cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*r(gamma)*i_*g
   - TC(b,cf1,cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*p(gamma)*i_*g
   - 1/2*TC(b,cf1,cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*r(gamma)*i_*g
   - TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,p,fl2)*p(gamma)*g
   - 1/2*TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,p,fl2)*r(gamma)*g
   - TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,q,fl2)*q(gamma)*g
   - 1/2*TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,q,fl2)*r(gamma)*g
   - 1/2*TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*p.p*g
   - TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*p.r*g
   - 1/2*TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*q.q*g
   - TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*q.r*g
   - TC(b,cf1,cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*r.r*g;


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),anchor(?args)) =
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(gamma,delta)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(gamma,delta)*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,p,fl2)*d_(gamma,delta)*i_*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,q,fl2)*d_(gamma,delta)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*p(delta)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,delta,fl2)*q(gamma)*i_*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field4(fl1))*FL(fl1,delta,fl2)*s(gamma)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(gamma,delta)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*M(field4)*OPF(field4(fl1))*FL(fl1,fl2)*d_(gamma,delta)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,p,fl2)*d_(gamma,delta)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,q,fl2)*d_(gamma,delta)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,gamma,fl2)*q(delta)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,delta,fl2)*p(gamma)*i_*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,delta,fl2)*s(gamma)*i_*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),field3?{gluon,bgf}(t?,sptp5?,d?,fl7?),anchor(?args)) =
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*OPF(field4(fl1))*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)*OPF(field4(fl1))*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*OPF(field4(fl1))*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})*OPF(field4(fl1))*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*OPF(field4(fl1))*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')*OPF(field4(fl1))*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*OPF(field4(fl1))*FL(fl1,gamma,fl2)*d_(delta,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})*OPF(field4(fl1))*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*OPF(field4(fl1))*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)*OPF(field4(fl1))*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,delta,fl2)*d_(gamma,sptp5)*g^3
      + 1/2*TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')*OPF(field4(fl1))*FL(fl1,sptp5,fl2)*d_(gamma,delta)*g^3;
   redefine cfcnt "{`cfcnt'+2}";
   if(match(vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field4?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),field3?{gluon,bgf}(t?,sptp5,d?,fl7?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


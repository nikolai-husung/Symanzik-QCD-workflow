
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field3?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),anchor(?args)) =
   - TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,r,fl2)*p(gamma)*g
   - TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,r,fl2)*q(gamma)*g
   - TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,r,fl2)*r(gamma)*g
   + TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*p.r*g
   + TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*q.r*g
   + TC(b,cf1,cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*r.r*g;


#do dummy=1,1
   id,once vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field3?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),anchor(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*p(delta)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*q(delta)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,delta,fl2)*p(gamma)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,delta,fl2)*q(gamma)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(field3(fl1))*FL(fl1,delta,fl2)*s(gamma)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,gamma,fl2)*p(delta)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,gamma,fl2)*q(delta)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,delta,fl2)*p(gamma)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,delta,fl2)*q(gamma)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(field3(fl1))*FL(fl1,delta,fl2)*s(gamma)*i_*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field?{aquark,aquark2}(p?,spt1?,cf1?,fl1?),field3?{quark,quark2}(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


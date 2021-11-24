
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - OPF(flc0)*FL(fl1,p,fl2)*d_(cf1,cf2)*q(kappa)*i_
   - OPF(flc0)*FL(fl1,q,fl2)*d_(cf1,cf2)*p(kappa)*i_;


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,p,fl2)*d_(gamma,kappa)*g
   + TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,q,fl2)*d_(gamma,kappa)*g
   - TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,fl2)*p(kappa)*g
   + TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,fl2)*q(kappa)*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(flc0)*FL(fl1,gamma,fl2)*d_(delta,kappa)*i_*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*OPF(flc0)*FL(fl1,delta,fl2)*d_(gamma,kappa)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(flc0)*FL(fl1,gamma,fl2)*d_(delta,kappa)*i_*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*OPF(flc0)*FL(fl1,delta,fl2)*d_(gamma,kappa)*i_*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


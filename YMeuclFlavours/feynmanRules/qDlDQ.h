
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - FL(fl1,fl2)*d_(cf1,cf2)*p(kappa)*q(lambda)
   + FL(fl1,fl2)*d_(cf1,cf2)*p(lambda)*q(kappa);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,kappa)*p(lambda)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,kappa)*q(lambda)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,lambda)*p(kappa)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,fl2)*d_(gamma,lambda)*q(kappa)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,fl2)*d_(gamma,kappa)*d_(delta,lambda)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,fl2)*d_(gamma,lambda)*d_(delta,kappa)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,fl2)*d_(gamma,kappa)*d_(delta,lambda)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,fl2)*d_(gamma,lambda)*d_(delta,kappa)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


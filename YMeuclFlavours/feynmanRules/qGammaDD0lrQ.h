
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + M(`Q')*FL(fl1,kappa,fl2)*d_(cf1,cf2)*q(lambda)*i_
   - M(`Q')*FL(fl1,lambda,fl2)*d_(cf1,cf2)*q(kappa)*i_
   + M(quark)*FL(fl1,kappa,fl2)*d_(cf1,cf2)*p(lambda)*i_
   - M(quark)*FL(fl1,lambda,fl2)*d_(cf1,cf2)*p(kappa)*i_
   + FL(fl1,p,kappa,fl2)*d_(cf1,cf2)*p(lambda)
   - FL(fl1,p,lambda,fl2)*d_(cf1,cf2)*p(kappa)
   - FL(fl1,kappa,q,fl2)*d_(cf1,cf2)*q(lambda)
   + FL(fl1,lambda,q,fl2)*d_(cf1,cf2)*q(kappa);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + TC(b,cf1,cf2)*M(`Q')*FL(fl1,kappa,fl2)*d_(gamma,lambda)*g
   - TC(b,cf1,cf2)*M(`Q')*FL(fl1,lambda,fl2)*d_(gamma,kappa)*g
   - TC(b,cf1,cf2)*M(quark)*FL(fl1,kappa,fl2)*d_(gamma,lambda)*g
   + TC(b,cf1,cf2)*M(quark)*FL(fl1,lambda,fl2)*d_(gamma,kappa)*g
   + TC(b,cf1,cf2)*FL(fl1,p,kappa,fl2)*d_(gamma,lambda)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,p,lambda,fl2)*d_(gamma,kappa)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,gamma,kappa,fl2)*p(lambda)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,gamma,kappa,fl2)*r(lambda)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,lambda,fl2)*p(kappa)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,lambda,fl2)*r(kappa)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappa,q,fl2)*d_(gamma,lambda)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappa,gamma,fl2)*q(lambda)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappa,gamma,fl2)*r(lambda)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambda,q,fl2)*d_(gamma,kappa)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambda,gamma,fl2)*q(kappa)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,lambda,gamma,fl2)*r(kappa)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,kappa,fl2)*d_(delta,lambda)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,lambda,fl2)*d_(delta,kappa)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,kappa,delta,fl2)*d_(gamma,lambda)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,lambda,delta,fl2)*d_(gamma,kappa)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,kappa,fl2)*d_(gamma,lambda)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,lambda,fl2)*d_(gamma,kappa)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,kappa,gamma,fl2)*d_(delta,lambda)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,lambda,gamma,fl2)*d_(delta,kappa)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo



#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - 1/2*M(`Q')^2*FL(fl1,kappa,lambda,fl2)*d_(cf1,cf2)
   + 1/2*M(`Q')^2*FL(fl1,lambda,kappa,fl2)*d_(cf1,cf2)
   - M(`Q')*FL(fl1,kappa,lambda,q,fl2)*d_(cf1,cf2)*i_
   + M(`Q')*FL(fl1,lambda,kappa,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)^2*FL(fl1,kappa,lambda,fl2)*d_(cf1,cf2)
   + 1/2*M(quark)^2*FL(fl1,lambda,kappa,fl2)*d_(cf1,cf2)
   + M(quark)*FL(fl1,p,kappa,lambda,fl2)*d_(cf1,cf2)*i_
   - M(quark)*FL(fl1,p,lambda,kappa,fl2)*d_(cf1,cf2)*i_
   + 1/2*FL(fl1,p,p,kappa,lambda,fl2)*d_(cf1,cf2)
   - 1/2*FL(fl1,p,p,lambda,kappa,fl2)*d_(cf1,cf2)
   + 1/2*FL(fl1,kappa,lambda,q,q,fl2)*d_(cf1,cf2)
   - 1/2*FL(fl1,lambda,kappa,q,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*M(`Q')*FL(fl1,kappa,lambda,gamma,fl2)*g
   + TC(b,cf1,cf2)*M(`Q')*FL(fl1,lambda,kappa,gamma,fl2)*g
   - TC(b,cf1,cf2)*M(quark)*FL(fl1,gamma,kappa,lambda,fl2)*g
   + TC(b,cf1,cf2)*M(quark)*FL(fl1,gamma,lambda,kappa,fl2)*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,p,gamma,kappa,lambda,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,p,gamma,lambda,kappa,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,p,kappa,lambda,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,p,lambda,kappa,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,r,kappa,lambda,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,r,lambda,kappa,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappa,lambda,q,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappa,lambda,r,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,kappa,lambda,gamma,q,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambda,kappa,q,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambda,kappa,r,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,lambda,kappa,gamma,q,fl2)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,delta,kappa,lambda,fl2)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,delta,lambda,kappa,fl2)*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,kappa,lambda,gamma,delta,fl2)*g^2
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,lambda,kappa,gamma,delta,fl2)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,gamma,kappa,lambda,fl2)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,gamma,lambda,kappa,fl2)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,kappa,lambda,delta,gamma,fl2)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,lambda,kappa,delta,gamma,fl2)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


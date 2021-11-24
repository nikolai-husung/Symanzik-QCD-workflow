
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + 1/2*M(`Q')*M(quark)*FL(fl1,kappa,lambda,fl2)*d_(cf1,cf2)
   - 1/2*M(`Q')*M(quark)*FL(fl1,lambda,kappa,fl2)*d_(cf1,cf2)
   - 1/2*M(`Q')*FL(fl1,p,kappa,lambda,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(`Q')*FL(fl1,p,lambda,kappa,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(quark)*FL(fl1,kappa,lambda,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)*FL(fl1,lambda,kappa,q,fl2)*d_(cf1,cf2)*i_
   + 1/2*FL(fl1,p,kappa,lambda,q,fl2)*d_(cf1,cf2)
   - 1/2*FL(fl1,p,lambda,kappa,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 1/2*TC(b,cf1,cf2)*M(`Q')*FL(fl1,gamma,kappa,lambda,fl2)*g
   - 1/2*TC(b,cf1,cf2)*M(`Q')*FL(fl1,gamma,lambda,kappa,fl2)*g
   + 1/2*TC(b,cf1,cf2)*M(quark)*FL(fl1,kappa,lambda,gamma,fl2)*g
   - 1/2*TC(b,cf1,cf2)*M(quark)*FL(fl1,lambda,kappa,gamma,fl2)*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,p,kappa,lambda,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,p,lambda,kappa,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,kappa,lambda,q,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,lambda,kappa,q,fl2)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,kappa,lambda,delta,fl2)*g^2
      - 1/2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,lambda,kappa,delta,fl2)*g^2
      + 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,kappa,lambda,gamma,fl2)*g^2
      - 1/2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,lambda,kappa,gamma,fl2)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


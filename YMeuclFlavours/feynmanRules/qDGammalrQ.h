
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - OPF(flc0)*FL(fl1,kappa,fl2)*d_(cf1,cf2)*p(lambda)*i_
   + OPF(flc0)*FL(fl1,kappa,fl2)*d_(cf1,cf2)*q(lambda)*i_*etaC
   + OPF(flc0)*FL(fl1,lambda,fl2)*d_(cf1,cf2)*p(kappa)*i_
   - OPF(flc0)*FL(fl1,lambda,fl2)*d_(cf1,cf2)*q(kappa)*i_*etaC;


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappa,fl2)*d_(gamma,lambda)*g
   + TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappa,fl2)*d_(gamma,lambda)*etaC*g
   - TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,lambda,fl2)*d_(gamma,kappa)*g
   - TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,lambda,fl2)*d_(gamma,kappa)*etaC*g;


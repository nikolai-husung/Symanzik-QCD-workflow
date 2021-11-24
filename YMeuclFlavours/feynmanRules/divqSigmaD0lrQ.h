
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + 1/2*M(`Q')*OPF(flc0)*FL(fl1,p,kappa,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(`Q')*OPF(flc0)*FL(fl1,q,kappa,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(`Q')*OPF(flc0)*FL(fl1,kappa,p,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(`Q')*OPF(flc0)*FL(fl1,kappa,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)*OPF(flc0)*FL(fl1,p,kappa,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)*OPF(flc0)*FL(fl1,q,kappa,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(quark)*OPF(flc0)*FL(fl1,kappa,p,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(quark)*OPF(flc0)*FL(fl1,kappa,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*OPF(flc0)*FL(fl1,p,p,kappa,fl2)*d_(cf1,cf2)
   - 1/2*OPF(flc0)*FL(fl1,p,q,kappa,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,p,kappa,p,fl2)*d_(cf1,cf2)
   - 1/2*OPF(flc0)*FL(fl1,q,kappa,q,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,kappa,p,q,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,kappa,q,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,p,kappa,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,q,kappa,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,r,kappa,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,p,kappa,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,q,kappa,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,r,kappa,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappa,p,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappa,q,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappa,r,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappa,p,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappa,q,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappa,r,gamma,fl2)*i_*g;


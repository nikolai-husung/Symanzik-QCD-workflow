
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + 1/2*M(`Q')*OPF(flc0)*FL(fl1,p,kappahat,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(`Q')*OPF(flc0)*FL(fl1,q,kappahat,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(`Q')*OPF(flc0)*FL(fl1,kappahat,p,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(`Q')*OPF(flc0)*FL(fl1,kappahat,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)*OPF(flc0)*FL(fl1,p,kappahat,fl2)*d_(cf1,cf2)*i_
   - 1/2*M(quark)*OPF(flc0)*FL(fl1,q,kappahat,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(quark)*OPF(flc0)*FL(fl1,kappahat,p,fl2)*d_(cf1,cf2)*i_
   + 1/2*M(quark)*OPF(flc0)*FL(fl1,kappahat,q,fl2)*d_(cf1,cf2)*i_
   - 1/2*OPF(flc0)*FL(fl1,p,p,kappahat,fl2)*d_(cf1,cf2)
   - 1/2*OPF(flc0)*FL(fl1,p,q,kappahat,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,p,kappahat,p,fl2)*d_(cf1,cf2)
   - 1/2*OPF(flc0)*FL(fl1,q,kappahat,q,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,kappahat,p,q,fl2)*d_(cf1,cf2)
   + 1/2*OPF(flc0)*FL(fl1,kappahat,q,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,p,kappahat,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,q,kappahat,gamma,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,r,kappahat,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,p,kappahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,q,kappahat,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,r,kappahat,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappahat,p,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappahat,q,fl2)*i_*g
   + 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,gamma,kappahat,r,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappahat,p,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappahat,q,gamma,fl2)*i_*g
   - 1/2*TC(b,cf1,cf2)*OPF(flc0)*FL(fl1,kappahat,r,gamma,fl2)*i_*g;


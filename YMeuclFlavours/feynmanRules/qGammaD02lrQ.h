
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   + M(`Q')^2*FL(fl1,kappahat,fl2)*d_(cf1,cf2)
   + 2*M(`Q')*FL(fl1,kappahat,q,fl2)*d_(cf1,cf2)*i_
   + M(quark)^2*FL(fl1,kappahat,fl2)*d_(cf1,cf2)
   - 2*M(quark)*FL(fl1,p,kappahat,fl2)*d_(cf1,cf2)*i_
   - FL(fl1,p,p,kappahat,fl2)*d_(cf1,cf2)
   - FL(fl1,kappahat,q,q,fl2)*d_(cf1,cf2);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 2*TC(b,cf1,cf2)*M(`Q')*FL(fl1,kappahat,gamma,fl2)*g
   + 2*TC(b,cf1,cf2)*M(quark)*FL(fl1,gamma,kappahat,fl2)*g
   - TC(b,cf1,cf2)*FL(fl1,p,gamma,kappahat,fl2)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,p,kappahat,fl2)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,r,kappahat,fl2)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,q,gamma,fl2)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,r,gamma,fl2)*i_*g
   + TC(b,cf1,cf2)*FL(fl1,kappahat,gamma,q,fl2)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,delta,kappahat,fl2)*g^2
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,kappahat,gamma,delta,fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,gamma,kappahat,fl2)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,kappahat,delta,gamma,fl2)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


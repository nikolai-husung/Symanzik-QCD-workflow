
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
   - M(`Q')*FL(fl1,G5,fl2)*d_(cf1,cf2)*q(kappahat)*i_
   - M(quark)*FL(fl1,G5,fl2)*d_(cf1,cf2)*p(kappahat)*i_
   - FL(fl1,p,G5,fl2)*d_(cf1,cf2)*p(kappahat)
   + FL(fl1,G5,q,fl2)*d_(cf1,cf2)*q(kappahat);


id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   - TC(b,cf1,cf2)*M(`Q')*FL(fl1,G5,fl2)*d_(gamma,kappahat)*g
   + TC(b,cf1,cf2)*M(quark)*FL(fl1,G5,fl2)*d_(gamma,kappahat)*g
   - TC(b,cf1,cf2)*FL(fl1,p,G5,fl2)*d_(gamma,kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,G5,fl2)*p(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,G5,fl2)*r(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,G5,q,fl2)*d_(gamma,kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,G5,gamma,fl2)*q(kappahat)*i_*g
   - TC(b,cf1,cf2)*FL(fl1,G5,gamma,fl2)*r(kappahat)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,gamma,G5,fl2)*d_(delta,kappahat)*g^2
      - TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*FL(fl1,G5,delta,fl2)*d_(gamma,kappahat)*g^2
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,delta,G5,fl2)*d_(gamma,kappahat)*g^2
      - TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*FL(fl1,G5,gamma,fl2)*d_(delta,kappahat)*g^2;
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


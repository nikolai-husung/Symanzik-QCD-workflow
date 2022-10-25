
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)) =
      + M(`Q')*FL(fl1,G5,spt`sptcnt',fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)*i_
      + M(`Q')*FL(fl1,G5,spt`sptcnt',fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)*i_
      - M(quark)*FL(fl1,G5,spt`sptcnt',fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)*i_
      - M(quark)*FL(fl1,G5,spt`sptcnt',fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)*i_
      - FL(fl1,p,G5,spt`sptcnt',fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)
      - FL(fl1,p,G5,spt`sptcnt',fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)
      - FL(fl1,G5,spt`sptcnt',q,fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2)
      - FL(fl1,G5,spt`sptcnt',q,fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*d_(cf1,cf2);
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
      + TC(b,cf1,cf2)*FL(fl1,G5,spt`sptcnt',gamma,fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*i_*g
      + TC(b,cf1,cf2)*FL(fl1,G5,spt`sptcnt',gamma,fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*i_*g
      + TC(b,cf1,cf2)*FL(fl1,G5,spt`sptcnt',gamma,fl2)*e_(r,kappahat,lambdahat,spt`sptcnt')*i_*g
      - TC(b,cf1,cf2)*FL(fl1,gamma,G5,spt`sptcnt',fl2)*e_(p,kappahat,lambdahat,spt`sptcnt')*i_*g
      - TC(b,cf1,cf2)*FL(fl1,gamma,G5,spt`sptcnt',fl2)*e_(q,kappahat,lambdahat,spt`sptcnt')*i_*g
      - TC(b,cf1,cf2)*FL(fl1,gamma,G5,spt`sptcnt',fl2)*e_(r,kappahat,lambdahat,spt`sptcnt')*i_*g;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)))) redefine dummy "0";
   .sort;
#enddo



#include feynmanRules/mediator.h
#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),mediator(?args)) = d_(cf1,cf2)*i_/2*(FL(fl1,spt`sptcnt',sptf2,fl2)-FL(fl1,sptf2,spt`sptcnt',fl2))*Tau(ti1,spt{`sptcnt'+1},ti2)*OPF(quark(fl1))*DO4v(sptf1,spt`sptcnt',spt{`sptcnt'+1});
   redefine sptcnt "{`sptcnt'+2}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),mediator(?args)))>0) redefine dummy "0";
   .sort;
#enddo

id,once vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),aquark2(r?,spt3?,cf3?,fl3?,ti3?),quark2(s?,spt4?,cf4?,fl4?,ti4?),anchor(?args)) = d_(cf1,cf2)*d_(cf3,cf4)*i_/2*(FL(fl1,spt`sptcnt',sptf2,fl2)-FL(fl1,sptf2,spt`sptcnt',fl2))*i_/2*(FL(fl3,spt{`sptcnt'+1},sptf2,fl4)-FL(fl3,sptf2,spt{`sptcnt'+1},fl4))*Tau(ti1,spt{`sptcnt'+2},ti2)*Tau(ti3,spt{`sptcnt'+3},ti4)*OPF(quark(fl1),quark2(fl3))*DO4v(spt`sptcnt',spt{`sptcnt'+1},spt{`sptcnt'+2},spt{`sptcnt'+3});
redefine sptcnt "{`sptcnt'+4}";
.sort;

id DO4v(spt1?,spt2?,spt?)*DO4v(spt3?,spt4?,spt?) = DO4v(spt1,spt2,spt3,spt4);

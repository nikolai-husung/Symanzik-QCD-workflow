
#include feynmanRules/mediator.h
id vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),mediator(?args)) = d_(cf1,cf2)*i_/2*(FL(fl1,sptf1,sptf2,fl2)-FL(fl1,sptf2,sptf1,fl2))*Tau(ti1,sptf3,T5,ti2)*OPF(quark(fl1));

id vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),aquark2(r?,spt3?,cf3?,fl3?,ti3?),quark2(s?,spt4?,cf4?,fl4?,ti4?),anchor(?args)) = d_(cf1,cf2)*d_(cf3,cf4)*i_/2*(FL(fl1,sptf1,sptf2,fl2)-FL(fl1,sptf2,sptf1,fl2))*i_/2*(FL(fl3,sptf1,sptf2,fl4)-FL(fl3,sptf2,sptf1,fl4))*Tau(ti1,sptf3,T5,ti2)*Tau(ti3,sptf3,T5,ti4)*OPF(quark(fl1),quark2(fl3));

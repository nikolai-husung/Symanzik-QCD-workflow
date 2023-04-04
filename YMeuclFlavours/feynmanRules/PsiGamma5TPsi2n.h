#include feynmanRules/mediator.h
id vert(aquark(p?,spt1?,cf1?,fl1?,ti1?),quark(q?,spt2?,cf2?,fl2?,ti2?),mediator(?args)) =
   FL(fl1,G5,fl2)*TC(colf4,cf1,cf2)*OPF(quark(fl1))*Tau(ti1,ti2);

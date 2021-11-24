#include feynmanRules/mediator.h
id vert(aquark(p?,spt1?,cf1?,fl1?),quark(q?,spt2?,cf2?,fl2?),mediator(?args)) =
   TC(colf4,cf1,cf2)*FL(fl1,fl2)*OPF(quark(fl1));

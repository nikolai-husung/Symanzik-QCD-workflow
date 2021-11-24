
#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),quark(q?,spt2?,cf2?,fl2?),aquark2(r?,spt3?,cf3?,fl3?),quark2(s?,spt4?,cf4?,fl4?),anchor(?args)) =
      + FL(fl1,spt`sptcnt',fl2)*FL(fl3,spt`sptcnt',fl4)*d_(cf1,cf2)*d_(cf3,cf4)*OPF(quark(fl1),quark2(fl3));
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(aquark(?args1),quark(?args2),aquark2(?args3),quark2(?args4),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

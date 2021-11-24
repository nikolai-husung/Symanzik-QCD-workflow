
#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),quark(q?,spt2?,cf2?,fl2?),aquark2(r?,spt3?,cf3?,fl3?),quark2(s?,spt4?,cf4?,fl4?),anchor(?args)) =
      TC(col`ccnt',cf1,cf2)*TC(col`ccnt',cf3,cf4)*FL(fl1,fl2)*FL(fl3,fl4)*OPF(quark(fl1),quark2(fl3));
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),quark(q?,spt2?,cf2?,fl2?),aquark2(r?,spt3?,cf3?,fl3?),quark2(s?,spt4?,cf4?,fl4?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

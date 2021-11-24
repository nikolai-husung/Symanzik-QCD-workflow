
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

#do dummy=1,1
   id,once vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)) =
      + (
         + (DO4v(kappa,p,p,spt`sptcnt')+2*DO4v(kappa,p,q,spt`sptcnt')+DO4v(kappa,q,q,spt`sptcnt'))*d_(lambda,spt{`sptcnt'+1})
         + (DO4v(lambda,p,p,spt{`sptcnt'+1})+2*DO4v(lambda,p,q,spt{`sptcnt'+1})+DO4v(lambda,q,q,spt{`sptcnt'+1}))*d_(kappa,spt`sptcnt')
        )*(FL(fl1,spt`sptcnt',spt{`sptcnt'+1},fl2)-FL(fl1,spt{`sptcnt'+1},spt`sptcnt',fl2))*d_(cf1,cf2)*OPF(aquark,`Q',fl1)/2;
   redefine sptcnt "{`sptcnt'+2}";
   if(match(vert(aquark(p?,alpha?,cf1?,fl1?),`Q'(q?,beta?,cf2?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo

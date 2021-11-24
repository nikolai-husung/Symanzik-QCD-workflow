#define DIV "4"

CFunction DenomDR,DenomT,Tracker;
Symbol DenomF;
*****
** Combines the denominators by introducing integrals over Feynman parameters
** The result contains:
**   DenomF = 1/(p^2+Omega), where Omega!=0
**   DenomConst(m,l) = 1/(m)^l   for each "constant" denominator, i.e.
**                               independent of p
*****
#procedure prepareDimReg(p)
** Combine all identical denominators
repeat id Denom(imp?,Omega?,m?)*Denom(imp?,Omega?,n?) = Denom(imp,Omega,m+n);

** CAVEAT: unsave step - does it occur?
if(match(Denom(0,0,n?))) discard;
** Filter constant denominators
repeat;
   id,once Denom(imp?,Omega?,n?) = DenomT(imp,Omega,n)*Test(imp);
   argument Test;
      id `p' = 0;
   endargument;
   if(match(DenomT(imp?,Omega?,n?)*Test(imp?)));
      id DenomT(imp?,Omega?,n?) = DenomConst(imp.imp+Omega,n);
   else;
      id DenomT(imp?,Omega?,n?) = DenomDR(imp,Omega,n);
   endif;
   id Test(imp?) = 1;
   id Test(0) = 1;
endrepeat;
** Keep scaleless integrals to extract UV-divergent part. Otherwise this would
** lead to inconsistent results because in this case the IR-pole cancels the
** UV-pole, which is not taken into account for all other cases.
.sort;
** Prepare insertion of decomposition
id DenomDR(imp?,Omega?,n?) = DenomDR(imp.imp-`p'.`p'+Omega,n);
#do dummy=1,1
   $counter = count_(`p',1,DenomF,-2,DenomDR,-2);
   id,once DenomDR(m?,n?) =
      DenomF^n*sum_(l,0,max_(0,`DIV'+$counter),binom_(l+n-1,l)*((Omega-m)*DenomF)^l);
   if(count(`p',1,DenomF,-2)<-`DIV') discard;
   if(count(DenomDR,1)>0) redefine dummy "0";
   .sort;
#enddo
if(count(`p',1,DenomF,-2)<-`DIV') discard;
id ZERO = 0;
#endprocedure

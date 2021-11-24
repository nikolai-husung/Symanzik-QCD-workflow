CFunction GammaP,P2INT;
CTensor BUFFER;
*****
** Collects all p with "free" space time indices and replaces them by p.p and
** Kronecker deltas. Then the "master" formula of dimensional regularisation
** can be applied.
*****
#procedure dimReg(p)
** Drop uneven powers of p
if(count(`p',1)!=multipleof(2)) discard;

** Collect denominator and p.p^n before handling of "free" space time indices
id `p'.`p'^l?*DenomF^m? = P2INT(l,m);
id P2INT(0,0) = 0;

***
** Collect all "free" space time indices corresponding to the momentum
** `p' to be integrated over. These are then replaced by appropriate
** combinations of Kronecker deltas (times p.p^n)
***
totensor `p',BUFFER;

** Introduce the Kronecker deltas mentioned above and determine correct
** normalisation in D dimensions (= 1/(D * (D+2) *... = (D-2)!!/(D-2+2*n)!!)
if(count(BUFFER,1)>0);
   id,once BUFFER(?args)*P2INT(l?,m?) =
      dd_(?args)*P2INT(l+integer_(nargs_(?args)/2),m)/2^(integer_(nargs_(?args)/2))*Gamma(2,-eps)/Gamma(2+integer_(nargs_(?args)/2),-eps);
endif;

***** Apply "master" formula of dimensional regularisation
id P2INT(l?,m?) = Gamma(m-l-2,eps)*GammaP(l)/fac_(m-1)*Power(2-m+l,-eps);
** where Gamma(m,eps) corresponds to Gamma(m+eps) and
** GammaP(m) = Gamma(m+D/2)/Gamma(D/2)

** Get rid of GammaP
repeat;
id GammaP(0)=1;
id GammaP(n?) = (n-1+D/2)*GammaP(n-1);
endrepeat;

#endprocedure

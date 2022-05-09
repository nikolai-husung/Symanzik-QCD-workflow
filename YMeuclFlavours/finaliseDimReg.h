* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

***** Functions for dimensional regularisiation *****
#procedure Gammas
id Gamma(m?,eps?)/Gamma(m?,eps?) = 1;

** Everything here holds up to O(eps^2) except Gamma(m?neg_),
** which holds only up to O(eps)
id Gamma(m?neg_,eps?) = (1/eps-gammaE-sum_(l,m,-1,1/l))*(-1)^m/fac_(-m);
id Gamma(m?pos_,eps?) = fac_(m-1)*(1-eps*gammaE+eps*sum_(l,1,m-1,1/l));

id 1/Gamma(m?neg_,eps?) = fac_(-m)*(-1)^m*eps*(1+eps*gammaE+eps*sum_(l,m,-1,1/l));
id 1/Gamma(m?pos_,eps?) = 1/fac_(m-1)+(gammaE-sum_(l,1,m-1,1/l))*eps/fac_(m-1);


id Gamma(0,eps?) = 1/eps-gammaE+(gammaE^2/2+PI^2/12)*eps;
id 1/Gamma(0,eps?) = eps+gammaE*eps^2;
#endprocedure

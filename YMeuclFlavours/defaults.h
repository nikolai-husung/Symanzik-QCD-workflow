* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

***** Dimensioal regularisation
** D - denotes the dimension used for dimensional regularisation, where D=4-2eps
Symbol D,eps,gammaE;

Dimension 4;

** Denominators:
**   Denom(m,l) = 1/(m^2+Omega)^l
**   DenomConst(m,l) = 1/(m^2+Omega)^l
**   DenomF = 1/(p^2+Omega) where p is the loop momentum (used for masking
**                          already transformed part)
CFunction Denom,DenomConst;
Symbol DenomF;

***** Spacetime *****
Autodeclare Index spt=D;
Autodeclare Vector imp;

** Counter for spacetime indices with initial offset to avoid accidental overlap
#define sptcnt "20"

** Counter for impulses again with inital offset
#define impcnt "20"


***** General variables (do not use in main!) *****
** etaC is used to handle relative signs of local fields in accordance with
** charge conjugation properties and opposite sign (multiply by m_i-m_j then).
Symbol g,k,l,m,n,Omega,Zm,etaC;

CFunction Pbuffer,Test;

** storage for components which correspond to broken O(4) symmetry
** (generalisation of Kronecker delta, where
**    DO4v(mu1,...,mun) = 1 if mui==muj forall i,j else 0)
CTensor DO4v(symmetric);


***** Operator flavours *****
CFunction OPF;

** Mathematical functions / constants
** Gamma(m,eps) = Gamma(m+eps)
CFunction Gamma,Log,Power;
Symbol PI;

** Ingoing momenta
Vector p,q,r,s;
** Outgoing momenta
Vector t,u,v,w;
** Loop momentum and special momentum masking ZERO, since 0 is interpreted as a Symbol.
Vector k1,ZERO;

Index alpha,beta,gamma,delta,mu,nu,rho,sigma;

** Additional spacetime indices kappa, lambda of local fields are implemented
** via eigenvectors kappahat, lambdahat respectively.
** => need generalisation for multiple local fields!
Vector kappahat,lambdahat;

** Additional colour indices
** CAVEAT: adjoint and fundamental representation are not handled
**         differently on external legs
Index a,b,c,d,e,f,h,i,j;

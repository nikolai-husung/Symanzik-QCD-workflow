* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

***** Usage: form -D op=... feynmanRulesAuto
** where n is the power of the coupling g^n.
#define sign "(+1)";
#define cfcnt "10";
#define ccnt "30";
#define icnt "1";
#define fcnt "1";
#define sptcnt "20";

Symbol CF,CA,TF,xi,Nc,Qauto,quark,etaC;
Autodeclare Index spt,co,cf,ind,fl;
CTensor FC(antisymmetric),DC(symmetric),TC,Trtemp,Tr(cyclesymmetric);
CFunction DO4v(symmetric),MOMENTA,COLs,CFs,SPTs,FLs,ordering(antisymmetric),DUMMY,vert,L;
CFunction Bbuffer,Abuffer,Psibarbuffer,Psibuffer,Cbarbuffer,Cbuffer,Psib,Psibarb,Bb,Ab,M,Cbarb,Cb;
CFunction OPF,FL,FLtest;
Index G5=0;
** F = [D,D]/g
NFunction Psibar,Psi,A,F,Cbar,C,B;

*****
** Derivatives:
**    D(spt) :: \partial_spt
**    Dcovf  :: Dcovf = D + g A
**    Dcova  :: Dcova* = D* + g[A,*]
**    BLOB   :: D BLOB = 0, BLOB = 1, can be used to stop product rule from including following elements
*****
Nfunction D,Dl,Dcova,Dcovf,Dcovfl,BLOB,D0,D0l;
NFunction sigma,FIELDS;
Symbol g;
** external particles
Index alpha,beta,gamma,delta,mu,nu;
** reserved for external indices of vector and tensor fields
Index kappa,lambda;
Autodeclare Vector imp;
Vector p,q,r,s,t,u;
Index b,c,d,e,f,h,G5;

Local rules = 
#include rawOps.frm # `op'
;

** replace field strength tensor
#do dummy=1,1
   id,once F(imp1?,imp2?,spt1?,spt2?,col?) = `sign'*i_*imp1(spt1)*A(spt2,imp1,col)-`sign'*i_*imp1(spt2)*A(spt1,imp1,col)+FC(col,col`ccnt',col{`ccnt'+1})*A(spt1,imp1,col`ccnt')*A(spt2,imp2,col{`ccnt'+1});
   redefine ccnt "{`ccnt'+2}";
   if(count(F,1)>0) redefine dummy "0";
   .sort;
#enddo

** switch to perturbative description A -> g*A
id A(?args) = g*A(?args);


*** Implements insertions of the fermionic EOM acting to the right/left
#do dummy=1,1
   id,once FL(?args,fl2?)*D0(imp?,?args2,cf1?,cf2?) =
      (FL(?args,spt`sptcnt',fl2)*Dcovf(imp,spt`sptcnt',cf1,cf`cfcnt')+FL(?args,fl2)*M(Qauto)*d_(cf1,cf`cfcnt'))*D0(?args2,cf`cfcnt',cf2);
   redefine sptcnt "{`sptcnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   id D0(cf1?,cf2?) = DO4v(cf1,cf2);
   if(count(D0,1)>0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once FL(fl1?,?args)*D0l(imp?,?args2,cf1?,cf2?) =
      D0l(?args2,cf1,cf`cfcnt')*(FL(fl1,spt`sptcnt',?args)*Dcovfl(imp,spt`sptcnt',cf`cfcnt',cf2)-FL(fl1,?args)*M(quark)*d_(cf`cfcnt',cf2));
   redefine sptcnt "{`sptcnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   id D0l(cf1?,cf2?) = DO4v(cf1,cf2);
   if(count(D0l,1)>0) redefine dummy "0";
   .sort;
#enddo


** Handle covariant derivatives
#do dummy=1,1
   id,once Dcovfl(imp?,spt?,cf1?,cf2?) = DO4v(cf1,cf2)*Dl(spt)-g*TC(col`ccnt',cf1,cf2)*A(spt,imp,col`ccnt');
   redefine ccnt "{`ccnt'+1}";
   if(count(Dcovfl,1)>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once Dcovf(imp?,spt?,cf1?,cf2?) = DO4v(cf1,cf2)*D(spt)+g*TC(col`ccnt',cf1,cf2)*A(spt,imp,col`ccnt');
   redefine ccnt "{`ccnt'+1}";
   if(count(Dcovf,1)>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once Dcova(imp?,spt?,col1?,col2?) = DO4v(col1,col2)*D(spt)+g*FC(col1,col`ccnt',col2)*A(spt,imp,col`ccnt');
   redefine ccnt "{`ccnt'+1}";
   if(count(Dcova,1)>0) redefine dummy "0";
   .sort;
#enddo

** Make sure to add BGF gauge-fixing term to the QCD action.
** Should be postponed after the substitution A -> A+B.
**#if(1==QCD)
#if(`op'==QCD)
** In all gauge-invariant cases the substitution does not yield new information.
** Having the BGF gauge-fixing term present changes that.
   id A(?args) = A(?args)+B(?args);
   .sort;
   Local rules = rules + 1/xi*(D(spt0)*A(spt1,imp1,col1)+g*FC(col1,col2,col3)*B(spt0,imp2,col2)*A(spt1,imp3,col3))*BLOB*(D(spt2)*A(spt3,imp4,col4)+g*FC(col4,col5,col6)*B(spt2,imp5,col5)*A(spt3,imp6,col6))*TC(col1,cf0,cf1)*TC(col4,cf1,cf0)*DO4v(spt0,spt1)*DO4v(spt2,spt3);
   
#endif

id sigma(fl?,spt0?,spt1?)*FL(?args,fl?,?args2) = i_/2*(FL(?args,spt0,spt1,?args2)-FL(?args,spt1,spt0,?args2));

** Handle derivatives
repeat;
   id,once FIELDS?{A,B}(spt2?,imp?,col?)*Dl(spt1?) = `sign'*i_*imp(spt1)*FIELDS(spt2,imp,col)+Dl(spt1)*FIELDS(spt2,imp,col);
   id,once Psibar(fl?,imp?,cf?)*Dl(spt1?) = `sign'*i_*imp(spt1)*Psibar(fl,imp,cf);
endrepeat;
id Dl(spt?) = 0;
repeat;
   id,once D(spt1?)*FIELDS?{A,B}(spt2?,imp?,col?) = `sign'*i_*imp(spt1)*FIELDS(spt2,imp,col)+FIELDS(spt2,imp,col)*D(spt1);
   id,once D(spt1?)*Psi(fl?,imp?,cf?) = `sign'*i_*imp(spt1)*Psi(fl,imp,cf);
   id,once D(spt1?)*Psibar(fl?,imp?,cf?) = `sign'*i_*imp(spt1)*Psibar(fl,imp,cf)+Psibar(fl,imp,cf)*D(spt1);
   id,once D(spt?)*Cbar(imp?,col?) = `sign'*i_*imp(spt)*Cbar(imp,col)+Cbar(imp,col)*D(spt);
   id,once D(spt?)*C(imp?,col?) = `sign'*i_*imp(spt)*C(imp,col)+C(imp,col)*D(spt);
   id D(spt?)*BLOB = 0;
endrepeat;
id BLOB = 1;
id D(spt?) = 0;


** collect only desired power in the coupling
**if(count(g,1)!=`POW') discard;

** translate into usual index and momenta notation
#do dummy=1,1
   id,once Psibar(fl?,imp?,cf?) = Psibarbuffer(ind`icnt',fl,imp,cf)*Psibar(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(Psibar(fl?,imp?,cf?))>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once Psi(fl?,imp?,cf?) = Psibuffer(ind`icnt',fl,imp,cf)*Psi(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(Psi(fl?,imp?,cf?))>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once A(spt?,imp?,col?) = Abuffer(ind`icnt',spt,imp,col)*A(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(A(spt?,imp?,col?))>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once B(spt?,imp?,col?) = Bbuffer(ind`icnt',spt,imp,col)*B(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(B(spt?,imp?,col?))>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once C(imp?,col?) = Cbuffer(ind`icnt',imp,col)*C(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(C(imp?,col?))>0) redefine dummy "0";
   .sort;
#enddo
#do dummy=1,1
   id,once Cbar(imp?,col?) = Cbarbuffer(ind`icnt',imp,col)*Cbar(ind`icnt');
   redefine icnt "{`icnt'+1}";
   if(match(C(imp?,col?))>0) redefine dummy "0";
   .sort;
#enddo


** construct all possible permutations of external fields (currently fermions and gauge bosons)
repeat;
   id Psi(?args)*Psibar(?args2) = -Psibar(?args2)*Psi(?args);
   id A?{Cbar,C,A,B}(?args)*Psibar(?args2) = Psibar(?args2)*A(?args);
   id A?{Cbar,C,A,B}(?args)*Psi(?args2) = Psi(?args2)*A(?args);
   id B?{Cbar,C,B}(?args)*A(?args2) = A(?args2)*B(?args);
   id A?{Cbar,C}(?args)*B(?args2) = B(?args2)*A(?args);
   id C(?args)*Cbar(?args2) = -Cbar(?args2)*C(?args);
endrepeat;
chainin Psibar;
id Psibar(?args) = perm_(1,Psibar,?args);
chainin Psi;
id Psi(?args) = perm_(1,Psi,?args);
chainin A;
id A(?args) = perm_(A,?args);
chainin B;
id B(?args) = perm_(B,?args);
chainin C;
id C(?args) = perm_(1,C,?args);
chainin Cbar;
id Cbar(?args) = perm_(1,Cbar,?args);

id Psi(?args) = Psib(?args);
id Psibar(?args) = Psibarb(?args);
id A(?args) = Ab(?args);
id B(?args) = Bb(?args);
id C(?args) = Cb(?args);
id Cbar(?args) = Cbarb(?args);
if(count(Psibarb,1)==0) multiply Psibarb;
if(count(Psib,1)==0) multiply Psib;
if(count(Ab,1)==0) multiply Ab;
if(count(Bb,1)==0) multiply Bb;
if(count(Cb,1)==0) multiply Cb;
if(count(Cbarb,1)==0) multiply Cbarb;

id Psibarb(?args1)*Ab(?args2)*Bb(?args4)*Psib(?args3)*Cbarb(?args5)*Cb(?args6) = FIELDS(?args1,?args3,?args5,?args6,?args2,?args4);
multiply MOMENTA(p,q,r,s,t,u)*COLs(b,c,d,e,f,h)*CFs(cfp1,...,cfp6)*SPTs(sptp1,...,sptp6)*FLs(flp1,...,flp6);
#do dummy=1,1
   id FIELDS(ind?,?args)*Psibarbuffer(ind?,fl?,imp?,cf?)*MOMENTA(imp2?,?args2)*SPTs(spt?,?args6)*CFs(cf2?,?args3)*FLs(fl2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*SPTs(?args6)*CFs(?args3)*FLs(?args4)*replace_(imp,imp2,cf,cf2,fl,fl2)*vert(Psibar(imp2,cf2,fl2));
   id FIELDS(ind?,?args)*Psibuffer(ind?,fl?,imp?,cf?)*MOMENTA(imp2?,?args2)*SPTs(spt?,?args6)*CFs(cf2?,?args3)*FLs(fl2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*SPTs(?args6)*CFs(?args3)*FLs(?args4)*replace_(imp,imp2,cf,cf2,fl,fl2)*vert(Psi(imp2,cf2,fl2));
   id FIELDS(ind?,?args)*Abuffer(ind?,spt?,imp?,col?)*MOMENTA(imp2?,?args2)*COLs(col2?,?args3)*SPTs(spt2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*COLs(?args3)*SPTs(?args4)*replace_(imp,imp2,col,col2,spt,spt2)*vert(A(imp2,spt2,col2));
   id FIELDS(ind?,?args)*Bbuffer(ind?,spt?,imp?,col?)*MOMENTA(imp2?,?args2)*COLs(col2?,?args3)*SPTs(spt2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*COLs(?args3)*SPTs(?args4)*replace_(imp,imp2,col,col2,spt,spt2)*vert(B(imp2,spt2,col2));
   id FIELDS(ind?,?args)*Cbarbuffer(ind?,imp?,col?)*MOMENTA(imp2?,?args2)*COLs(col2?,?args3)*SPTs(spt2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*COLs(?args3)*SPTs(?args4)*replace_(imp,imp2,col,col2)*vert(Cbar(imp2,col2));
   id FIELDS(ind?,?args)*Cbuffer(ind?,imp?,col?)*MOMENTA(imp2?,?args2)*COLs(col2?,?args3)*SPTs(spt2?,?args4) = FIELDS(?args)*MOMENTA(?args2)*COLs(?args3)*SPTs(?args4)*replace_(imp,imp2,col,col2)*vert(C(imp2,col2));
   if(count(Psibuffer,1,Abuffer,1,Bbuffer,1,Psibarbuffer,1,Cbuffer,1,Cbarbuffer,1)>0) redefine dummy "0";
   .sort;
#enddo
id FIELDS?{FIELDS,MOMENTA,COLs,CFs,SPTs,FLs}(?args) = 1;
chainin vert;

**id sigma(fl?,spt1?,spt2?) = i_/2*(GAMMA(fl,spt1)*GAMMA(fl,spt2)-GAMMA(fl,spt2)*GAMMA(fl,spt1));
id sigma(fl?,spt1?,spt2?)*FL(?args,fl?,?args2) = i_/2*(FL(?args,spt1,spt2,?args2)-FL(?args,spt2,spt1,?args2));
id DO4v(spt1?,spt2?) = d_(spt1,spt2);
#do dummy=0,`ccnt'
sum cf`dummy';
sum col`dummy';
sum spt`dummy';
#enddo
id TC(col1?,cf1?,cf2?)*TC(col2?,cf2?,cf1?) = -TF*d_(col1,col2);
id TF = 1/2;
Contract;

multiply replace_(cfp1,cf1,cfp2,cf2,cfp3,cf3,cfp4,cf4,sptp1,alpha,sptp2,beta,sptp3,gamma,sptp4,delta,flp1,fl1,flp2,fl2,flp3,fl3,flp4,fl4);
.sort;
bracket vert;
.sort;
**Print +s;
#write <temp.h> "%e", rules;
.end;

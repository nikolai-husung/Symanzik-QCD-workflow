* Copyright (c) 2022 Nikolai Husung
*
* This software is distributed under the terms of the MIT License

**** local fields *****

*** scalar
*--#[ divV:
D(spt0)*Psibar(fl0,imp0,cf0)*FL(fl0,spt0,fl1)*Psi(fl1,imp2,cf1)*DO4v(cf0,cf1)
*--#] divV:

*--#[ qD0lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,fl1)*(D0l(imp1,cf0,cf1)-etaC*D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] qD0lrQ:

*--#[ qD0lr2Q:
Psibar(fl0,imp0,cf0)*FL(fl0,fl1)*D0l(imp1,cf0,cf1)*D0(imp2,cf1,cf2)*Psi(fl1,imp3,cf2)
*--#] qD0lr2Q:

*--#[ qD02lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,fl1)*(D0l(imp1,imp2,cf0,cf1)+D0(imp1,imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] qD02lrQ:


*--#[ qSigmaFQ:
i_*Psibar(fl0,imp0,cf0)*sigma(flc0,spt3,spt4)*F(imp1,imp2,spt0,spt1,col1)*Psi(fl1,imp3,cf3)*TC(col1,cf0,cf3)*FL(fl0,flc0,fl1)*OPF(flc0)*DO4v(spt3,spt0)*DO4v(spt4,spt1)
*--#] qSigmaFQ:


*** pseudo-scalar
*--#[ qSigmaFtildeQ:
i_*Psibar(fl0,imp0,cf0)*sigma(flc0,spt3,spt4)*e_(spt5,spt6,spt7,spt8)*F(imp1,imp2,spt0,spt1,col1)*Psi(fl1,imp3,cf3)*TC(col1,cf0,cf3)*FL(fl0,flc0,fl1)*OPF(flc0)*DO4v(spt3,spt5)*DO4v(spt4,spt6)*DO4v(spt0,spt7)*DO4v(spt1,spt8)
*--#] qSigmaFtildeQ:

* CAVEAT: only correct to 1-loop 1/eps order
*--#[ FFtilde:
F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*e_(spt0,spt1,spt2,spt3)
*--#] FFtilde:

*--#[ qGamma5D0lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,fl1)*(D0l(imp1,cf0,cf1)-etaC*D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] qGamma5D0lrQ:

*--#[ qGamma5D0lr2Q:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,fl1)*D0l(imp1,cf0,cf1)*D0(imp2,cf1,cf2)*Psi(fl1,imp3,cf2)
*--#] qGamma5D0lr2Q:

*--#[ qGamma5D02lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,fl1)*(D0l(imp1,imp2,cf0,cf1)+D0(imp1,imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] qGamma5D02lrQ:


*** vector
*--#[ qGammaGamma5FtildeQ:
Psibar(fl0,imp0,cf0)*e_(kappa,spt0,spt1,spt2)*F(imp1,imp2,spt3,spt4,col1)*Psi(fl1,imp3,cf3)*TC(col1,cf0,cf3)*FL(fl0,G5,spt0,fl1)*DO4v(spt1,spt3)*DO4v(spt2,spt4)
*--#] qGammaGamma5FtildeQ:

*--#[ qGammaD2lrQ:
Psibar(fl0,imp0,cf0)*(Dcovfl(imp1,spt1,cf0,cf1)*Dcovfl(imp2,spt2,cf1,cf2)+Dcovf(imp1,spt1,cf0,cf1)*Dcovf(imp2,spt2,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(kappa,spt0,spt1,spt2)*FL(fl0,spt0,fl1)
*--#] qGammaDlr2Q:

*--#[ qDlrQ:
Psibar(fl0,imp0,cf0)*(Dcovfl(imp1,spt0,cf0,cf1)+etaC*Dcovf(imp1,spt0,cf0,cf1))*Psi(fl1,imp3,cf3)*DO4v(cf1,cf3)*DO4v(spt0,kappa)*FL(fl0,fl1)*OPF(flc0)
*--#] qDlrQ:

*--#[ gradF2:
D(kappa)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*DO4v(spt0,spt2)*DO4v(spt1,spt3)
*--#] gradF2:

*--#[ divFF:
D(spt4)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*DO4v(spt1,spt2)*DO4v(spt4,spt0)*DO4v(kappa,spt3)
*--#] divFF:

* CAVEAT: only correct to 1-loop 1/eps order
*--#[ dFFnO4:
DO4v(kappa,spt0,spt2,spt5)*DO4v(spt1,spt3)*D(spt5)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2
*--#] dFFnO4:

*--#[ qGammaD0lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,kappa,fl1)*(D0l(imp1,cf0,cf1)+etaC*D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] qGammaD0lrQ:

*--#[ qGammaD0lr2Q:
Psibar(fl0,imp0,cf0)*FL(fl0,kappa,fl1)*D0l(imp1,cf0,cf1)*D0(imp2,cf1,cf2)*Psi(fl1,imp3,cf2)
*--#] qGammaD0lr2Q:

*--#[ qGammaD02lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,kappa,fl1)*(D0l(imp1,imp2,cf0,cf1)+D0(imp1,imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] qGammaD02lrQ:

*--#[ qDD0lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,fl1)*(D0l(imp2,cf0,cf1)*Dcovfl(imp1,spt0,cf1,cf2)+Dcovf(imp1,spt0,cf0,cf1)*D0(imp2,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(spt0,kappa)
*--#] qDD0lrQ:

*--#[ gradqD0lrQ:
D(kappa)*Psibar(fl0,imp0,cf0)*FL(fl0,fl1)*(D0l(imp2,cf0,cf1)+D0(imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] gradqD0lrQ:


*** axial-vector
*--#[ qGammaFtildeQ:
Psibar(fl0,imp0,cf0)*e_(kappa,spt0,spt1,spt2)*F(imp1,imp2,spt3,spt4,col1)*Psi(fl1,imp3,cf3)*TC(col1,cf0,cf3)*FL(fl0,spt0,fl1)*DO4v(spt1,spt3)*DO4v(spt2,spt4)
*--#] qGammaFtildeQ:

*--#[ qGammaGamma5D2lrQ:
Psibar(fl0,imp0,cf0)*(Dcovfl(imp1,spt1,cf0,cf1)*Dcovfl(imp2,spt2,cf1,cf2)+Dcovf(imp1,spt1,cf0,cf1)*Dcovf(imp2,spt2,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(kappa,spt0,spt1,spt2)*FL(fl0,G5,spt0,fl1)
*--#] qGammaGamma5D2lrQ:

*--#[ qGamma5DlrQ:
Psibar(fl0,imp0,cf0)*(Dcovfl(imp1,spt1,cf0,cf1)+etaC*Dcovf(imp1,spt1,cf0,cf1))*Psi(fl1,imp3,cf1)*DO4v(kappa,spt1)*FL(fl0,G5,fl1)
*--#] qGamma5DlrQ:

* CAVEAT: only correct to 1-loop 1/eps order
*--#[ gradFFtilde:
D(spt4)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*e_(spt0,spt1,spt2,spt3)*DO4v(spt4,kappa)
*--#] gradFFtilde:

*--#[ DFFtilde2:
-1/2*Dcova(imp0,spt4,col0,col1)*F(imp1,imp2,spt0,spt1,col2)*BLOB*F(imp3,imp4,spt2,spt3,col3)*DO4v(col1,col2)*DO4v(col3,col0)/g^2*e_(spt0,spt1,spt2,spt3)*DO4v(spt4,kappa)
*--#] DFFtilde2:

*--#[ divFFtilde:
D(spt4)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*e_(kappa,spt1,spt2,spt3)*DO4v(spt4,spt0)
*--#] divFFtilde:

*--#[ divFFtilde2:
D(spt4)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*e_(spt4,spt1,spt2,spt3)*DO4v(kappa,spt0)
*--#] divFFtilde2:

*--#[ DFFtilde3:
-1/2*Dcova(imp0,spt4,col0,col1)*F(imp1,imp2,spt0,spt1,col2)*BLOB*F(imp3,imp4,spt2,spt3,col3)*DO4v(col1,col2)*DO4v(col3,col0)/g^2*e_(spt4,spt1,spt2,spt3)*DO4v(spt0,kappa)
*--#] DFFtilde3:

*--#[ DFFtilde:
-1/2*Dcova(imp0,spt4,col0,col1)*F(imp1,imp2,spt0,spt1,col2)*BLOB*F(imp3,imp4,spt2,spt3,col3)*DO4v(col1,col2)*DO4v(col3,col0)/g^2*e_(kappa,spt1,spt2,spt3)*DO4v(spt4,spt0)
*--#] DFFtilde:

*--#[ DFFLC:
-1/2*F(imp1,imp2,spt0,spt1,col2)*Dcova(imp0,spt4,col0,col1)*F(imp3,imp4,spt2,spt3,col3)*DO4v(col1,col3)*DO4v(col2,col0)/g^2*e_(kappa,spt0,spt2,spt4)*DO4v(spt1,spt3)
*--#] DFFLC:

*--#[ DFFtildenO4:
-1/2*DO4v(kappa,spt0,spt4,spt5)*Dcova(imp0,spt5,col0,col1)*F(imp1,imp2,spt0,spt1,col2)*BLOB*F(imp3,imp4,spt2,spt3,col3)*DO4v(col1,col2)*DO4v(col3,col0)/g^2*e_(spt4,spt1,spt2,spt3)
*--#] DFFtildenO4:

* CAVEAT: only correct to 1-loop 1/eps order
*--#[ dFFtildenO4:
DO4v(kappa,spt0,spt4,spt5)*DO4v(spt7,spt2)*DO4v(spt8,spt3)*D(spt5)*F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt2,spt3,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*e_(spt4,spt1,spt7,spt8)
*--#] dFFtildenO4:

*--#[ qGammaGamma5D0lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,kappa,fl1)*(D0l(imp1,cf0,cf1)-etaC*D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] qGammaGamma5D0lrQ:

*--#[ qGammaGamma5D0lr2Q:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,kappa,fl1)*D0l(imp1,cf0,cf1)*D0(imp2,cf1,cf2)*Psi(fl1,imp3,cf2)
*--#] qGammaGamma5D0lr2Q:

*--#[ qGammaGamma5D02lrQ:
Psibar(fl0,imp0,cf0)*FL(fl0,G5,kappa,fl1)*(D0l(imp1,imp2,cf0,cf1)+D0(imp1,imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] qGammaGamma5D02lrQ:

*--#[ qGamma5DD0lrQ:
Psibar(fl0,imp0,cf0)*(D0l(imp1,cf0,cf1)*Dcovfl(imp2,spt0,cf1,cf2)*FL(fl0,G5,fl1)-FL(fl0,G5,fl1)*Dcovf(imp1,spt0,cf0,cf1)*D0(imp2,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(spt0,kappa)
*--#] qGamma5DD0lrQ:

*--#[ gradqGamma5D0lrQ:
D(kappa)*Psibar(fl0,imp0,cf0)*FL(fl0,G5,fl1)*(D0l(imp1,cf0,cf1)-D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] gradqGamma5D0lrQ:

*--#[ AgluonicEOM:
+ Psibar(fl0,imp0,cf0)*e_(kappa,spt0,spt1,spt2)*F(imp1,imp2,spt3,spt4,col1)*Psi(fl1,imp3,cf3)*TC(col1,cf0,cf3)*FL(fl0,spt0,fl1)*DO4v(spt1,spt3)*DO4v(spt2,spt4)
- 1/g^2* Dcova(imp0,spt0,col0,col1)*F(imp1,imp2,spt1,spt2,col2)*F(imp3,imp4,spt3,spt4,col3)*DO4v(spt0,spt1)*e_(kappa,spt2,spt3,spt4)*DO4v(col1,col2)*DO4v(col0,col3)
*--#] AgluonicEOM:


*** tensor
*--#[ T:
i_*Psibar(fl0,imp0,cf0)*sigma(flc0,kappa,lambda)*Psi(fl1,imp3,cf3)*DO4v(cf0,cf3)*FL(fl0,flc0,fl1)*OPF(flc0)
*--#] T:

*--#[ qFQ:
Psibar(fl0,imp0,col0)*F(imp1,imp2,spt0,spt1,col1)*Psi(fl1,imp3,col3)*TC(col1,col0,col3)*FL(fl0,flc0,fl1)*OPF(flc0)*DO4v(kappa,spt0)*DO4v(lambda,spt1)
*--#] qFQ:

*--#[ qGamma5FtildeQ:
Psibar(fl0,imp0,col0)*e_(kappa,lambda,spt0,spt1)*F(imp1,imp2,spt0,spt1,col1)*Psi(fl1,imp3,col3)*TC(col1,col0,col3)*FL(fl0,G5,fl1)
*--#] qGamma5FtildeQ:

*--#[ qSigmaD2lrQ:
**-1/2*(DO4v(kappa,spt0,spt2,spt3)*DO4v(lambda,spt1)+DO4v(lambda,spt0)*DO4v(kappa,spt1,spt2,spt3))*Psibar(fl0,imp0,cf0)*FL(fl0,flc0,spt0,spt1,fl1)*(Dcovfl(imp1,spt2,cf0,cf1)*Dcovfl(imp2,spt3,cf1,cf2)+Dcovf(imp1,spt2,cf0,cf1)*Dcovf(imp2,spt3,cf1,cf2))*Psi(fl1,imp3,cf2)*OPF(flc0)
-1/2*Psibar(fl0,imp0,cf0)*(FL(fl0,spt0,spt1,fl1)-FL(fl0,spt1,spt0,fl1))*(DO4v(spt0,kappa)*DO4v(lambda,spt1,spt2,spt3)-DO4v(spt0,lambda)*DO4v(kappa,spt1,spt2,spt3))*(Dcovfl(imp1,spt2,cf0,cf1)*Dcovfl(imp2,spt3,cf1,cf2)+Dcovf(imp1,spt2,cf0,cf1)*Dcovf(imp2,spt3,cf1,cf2))*Psi(fl1,imp3,cf2)*OPF(flc0)
*--#] qSigmaD2lrQ:

*--#[ qSigmaDlr2Q:
-1/2*(DO4v(kappa,spt0,spt2,spt3)*DO4v(lambda,spt1)-DO4v(lambda,spt0)*DO4v(kappa,spt1,spt2,spt3))*Psibar(fl0,imp0,cf0)*FL(flc0,spt0,spt1)*Dcovfl(imp1,spt2,cf0,cf1)*Dcovf(imp2,spt3,cf1,cf2)*Psi(fl1,imp3,cf2)*OPF(flc0)
*--#] qSigmaDlr2Q:

*--#[ qDlDQ:
+ Psibar(fl0,imp0,cf0)*(Dcovfl(imp1,spt0,cf0,cf1)*Dcovf(imp2,spt1,cf1,cf2)-Dcovfl(imp1,spt1,cf0,cf1)*Dcovf(imp2,spt0,cf1,cf2))*Psi(fl1,imp3,cf2)*FL(fl0,fl1)*DO4v(kappa,spt0)*DO4v(lambda,spt1)
*--#] qDlDQ:

*--#[ qDGammalrQ:
Psibar(fl0,imp0,cf0)*((Dcovfl(imp1,spt0,cf0,cf1)-etaC*Dcovf(imp1,spt0,cf0,cf1))*DO4v(spt0,kappa)*FL(fl0,flc0,lambda,fl1)-(Dcovfl(imp1,spt0,cf0,cf1)-etaC*Dcovf(imp1,spt0,cf0,cf1))*DO4v(spt0,lambda)*FL(fl0,flc0,kappa,fl1))*Psi(fl1,imp3,cf1)*OPF(flc0)
*--#] qDGammalrQ:

*--#[ rotA:
D(spt0)*Psibar(fl0,imp0,cf0)*FL(fl0,G5,spt1,fl1)*Psi(fl1,imp3,cf3)*e_(kappa,lambda,spt0,spt1)*DO4v(cf0,cf3)
*--#] rotA:

*--#[ qSigmaD0lrQ:
-1/2*Psibar(fl0,imp0,cf0)*(FL(fl0,kappa,lambda,fl1)+etaC*FL(fl0,lambda,kappa,fl1))*(D0l(imp1,cf0,cf1)-D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] qSigmaD0lrQ:

*--#[ qSigmaD0lr2Q:
-1/2*Psibar(fl0,imp0,cf0)*(FL(fl0,kappa,lambda,fl1)-FL(fl0,lambda,kappa,fl1))*D0l(imp1,cf0,cf1)*D0(imp2,cf1,cf2)*Psi(fl1,imp3,cf2)
*--#] qSigmaD0lr2Q:

*--#[ qSigmaD02lrQ:
-1/2*Psibar(fl0,imp0,cf0)*(FL(fl0,kappa,lambda,fl1)-FL(fl0,lambda,kappa,fl1))*(D0l(imp1,imp2,cf0,cf1)+D0(imp1,imp2,cf0,cf1))*Psi(fl1,imp3,cf1)
*--#] qSigmaD02lrQ:

*--#[ gradqGammaD0lrQ:
+ D(kappa)*Psibar(fl0,imp0,cf0)*FL(fl0,lambda,fl1)*(D0l(imp1,cf0,cf1)-D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
- D(lambda)*Psibar(fl0,imp0,cf0)*FL(fl0,kappa,fl1)*(D0l(imp1,cf0,cf1)-D0(imp1,cf0,cf1))*Psi(fl1,imp2,cf1)
*--#] gradqGammaD0lrQ:

*--#[ qGammaDD0lrQ:
+ Psibar(fl0,imp0,cf0)*(D0l(imp1,cf0,cf1)*Dcovfl(imp2,spt0,cf1,cf2)*FL(fl0,lambda,fl1)-FL(fl0,lambda,fl1)*Dcovf(imp2,spt0,cf0,cf1)*D0(imp1,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(spt0,kappa)
- Psibar(fl0,imp0,cf0)*(D0l(imp1,cf0,cf1)*Dcovfl(imp2,spt0,cf1,cf2)*FL(fl0,kappa,fl1)-FL(fl0,kappa,fl1)*Dcovf(imp2,spt0,cf0,cf1)*D0(imp1,cf1,cf2))*Psi(fl1,imp3,cf2)*DO4v(spt0,lambda)
*--#] qGammaDD0lrQ:


**** Needed to generate pure QCD Feynman rules ****
*--#[ QCD:
+ F(imp0,imp1,spt0,spt1,col0)*F(imp2,imp3,spt3,spt2,col1)*TC(col0,cf0,cf2)*TC(col1,cf2,cf0)/g^2*DO4v(spt1,spt2)*DO4v(spt3,spt0)/2
- Psibar(fl0,imp0,cf0)*Dcovf(imp1,spt1,cf0,cf1)*Psi(fl1,imp4,cf1)*DO4v(spt0,spt1)*FL(fl0,spt0,fl1)
*--#] QCD:


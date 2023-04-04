***** quark propagator *****
id prop(field?{quark,quark2},imp?,spt1?,cf1?,fl1?,ti1?,spt2?,cf2?,fl2?,ti2?) =
   + d_(cf1,cf2)*(M(field)*FL(fl2,fl1)-i_*FL(fl2,imp,fl1))*Denom(imp,M(field)^2,1)*Tau(ti2,ti1);

***** 2-quark-gluon vertex *****
id vert(field?{aquark,aquark2}(imp3?,spt3?,cf3?,fl3?,ti3?),field2?{quark,quark2}(imp2?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(imp1?,spt1?,col1?,fl1?,ti1?)) =
   - g*TC(col1,cf3,cf2)*FL(fl3,spt1,fl2)*Tau(ti3,ti2);

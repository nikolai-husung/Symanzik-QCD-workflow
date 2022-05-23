***** 3 gluon 1 bgf vertex *****
#do dummy=1,1
   id,once vert(gluon(p?,alpha?,b?,fl1?),gluon(q?,beta?,c?,fl2?),gluon(r?,gamma?,d?,fl3?),field?{gluon,bgf}(s?,delta?,e?,fl4?)) =
      + g^2*(
         - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)
 + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta));
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(gluon(?args1),gluon(?args2),gluon(?args3),field?{gluon,bgf}(?args4))) > 0) redefine dummy "0";
   .sort;
#enddo

***** 2 gluon 2 bgf vertex *****
#do dummy=1,1
   id,once vert(gluon(p?,alpha?,b?,fl1?),gluon(q?,beta?,c?,fl2?),bgf(r?,gamma?,d?,fl3?),bgf(s?,delta?,e?,fl4?)) =
      + g^2*(
         - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)
 + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*xi^-1
 + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)
 - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*xi^-1);
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(gluon(?args1),gluon(?args2),bgf(?args3),bgf(?args4))) > 0) redefine dummy "0";
   .sort;
#enddo

***** 1 gluon 3 bgf vertex *****
#do dummy=1,1
   id,once vert(field?{gluon,bgf}(p?,alpha?,b?,fl1?),bgf(q?,beta?,c?,fl2?),bgf(r?,gamma?,d?,fl3?),bgf(s?,delta?,e?,fl4?)) =
      + g^2*(
         - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)
 + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)
 - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)
 + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta));
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field?{gluon,bgf}(?args1),bgf(?args2),bgf(?args3),bgf(?args4))) > 0) redefine dummy "0";
   .sort;
#enddo

***** 3 gluon vertex *****
id vert(gluon(p?,alpha?,b?,fl1?),gluon(q?,beta?,c?,fl2?),gluon(r?,gamma?,d?,fl3?)) =
   + g*(
      + FC(b,c,d)*d_(alpha,beta)*p(gamma)*i_
 - FC(b,c,d)*d_(alpha,beta)*q(gamma)*i_
 - FC(b,c,d)*d_(alpha,gamma)*p(beta)*i_
 + FC(b,c,d)*d_(alpha,gamma)*r(beta)*i_
 + FC(b,c,d)*d_(beta,gamma)*q(alpha)*i_
 - FC(b,c,d)*d_(beta,gamma)*r(alpha)*i_);


***** 2 gluon 1 bgf vertex *****
id vert(gluon(p?,alpha?,b?,fl1?),gluon(q?,beta?,c?,fl2?),bgf(r?,gamma?,d?,fl3?)) =
   + g*(
      + FC(b,c,d)*d_(alpha,beta)*p(gamma)*i_
 - FC(b,c,d)*d_(alpha,beta)*q(gamma)*i_
 - FC(b,c,d)*d_(alpha,gamma)*p(beta)*i_
 - FC(b,c,d)*d_(alpha,gamma)*q(beta)*i_*xi^-1
 + FC(b,c,d)*d_(alpha,gamma)*r(beta)*i_
 + FC(b,c,d)*d_(beta,gamma)*p(alpha)*i_*xi^-1
 + FC(b,c,d)*d_(beta,gamma)*q(alpha)*i_
 - FC(b,c,d)*d_(beta,gamma)*r(alpha)*i_);


***** 3 bgf / 1 gluon 2 bgf vertex *****
id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),bgf(q?,beta?,c?,fl2?),bgf(r?,gamma?,d?,fl3?)) =
   + g*(
      + FC(b,c,d)*d_(alpha,beta)*p(gamma)*i_
 - FC(b,c,d)*d_(alpha,beta)*q(gamma)*i_
 - FC(b,c,d)*d_(alpha,gamma)*p(beta)*i_
 + FC(b,c,d)*d_(alpha,gamma)*r(beta)*i_
 + FC(b,c,d)*d_(beta,gamma)*q(alpha)*i_
 - FC(b,c,d)*d_(beta,gamma)*r(alpha)*i_);


***** 2 ghost 1 gluon vertex *****
id vert(aghost(p?,spt1?,b?,fl1?),ghost(q?,spt2?,c?,fl2?),gluon(r?,alpha?,d?,fl3?)) =
   + i_*g*p(alpha)*FC(b,c,d);

***** 2 ghost 1 bgf vertex *****
id vert(aghost(p?,spt1?,b?,fl1?),ghost(q?,spt2?,c?,fl2?),bgf(r?,alpha?,d?,fl3?)) =
   - i_*g*(q(alpha)-p(alpha))*FC(b,c,d);

***** Ghost propagator *****
id prop(ghost,imp?,spt1?,b?,fl1?,spt2?,c?,fl2?) =
   + d_(b,c)*Denom(imp,0,1);

***** 2 ghost 1 gluon 1 bgf vertex *****
#do dummy=1,1
   id,once vert(aghost(imp3?,spt3?,b?,fl1?),ghost(imp2?,spt2?,c?,fl2?),gluon(r?,alpha?,d?,fl3?),bgf(s?,beta?,e?,fl4?)) =
      - g^2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta);
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aghost(?args1),ghost(?args2),gluon(?args3),bgf(?args4))) > 0) redefine dummy "0";
   .sort;
#enddo

***** 2 ghost 2 bgf vertex *****
#do dummy=1,1
   id,once vert(aghost(imp3?,spt3?,b?,fl1?),ghost(imp2?,spt2?,c?,fl2?),bgf(r?,alpha?,d?,fl3?),bgf(s?,beta?,e?,fl4?)) =
      - g^2*(FC(b,e,col`ccnt')*FC(c,d,col`ccnt')+FC(b,d,col`ccnt')*FC(c,e,col`ccnt'))*d_(alpha,beta);
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aghost(?args1),ghost(?args2),bgf(?args3),bgf(?args4))) > 0) redefine dummy "0";
   .sort;
#enddo
      

***** Gauge propagator *****
id prop(gluon,imp?,spt1?,b?,fl1?,spt2?,c?,fl2?) =
   + Denom(imp,0,1)*d_(spt1,spt2)*d_(b,c)
   - Denom(imp,0,2)*d_(b,c)*imp(spt1)*imp(spt2)*(1-xi);


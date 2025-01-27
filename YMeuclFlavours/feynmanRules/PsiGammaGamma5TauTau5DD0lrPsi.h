#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),anchor(?args)) = -i_*(
      - 1/2*DO4v(spt`sptcnt',spt{`sptcnt'+1},p)*M(field2)*FL(fl1,spt{`sptcnt'+1},G5,fl2)*d_(cf1,cf2)*Tau(ti1,spt`sptcnt',T5,ti2)
      + 1/2*DO4v(spt`sptcnt',spt{`sptcnt'+1},p)*FL(fl1,p,spt{`sptcnt'+1},G5,fl2)*d_(cf1,cf2)*i_*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*DO4v(spt`sptcnt',spt{`sptcnt'+1},q)*M(field2)*FL(fl1,spt{`sptcnt'+1},G5,fl2)*d_(cf1,cf2)*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*DO4v(spt`sptcnt',spt{`sptcnt'+1},q)*FL(fl1,spt{`sptcnt'+1},G5,q,fl2)*d_(cf1,cf2)*i_*Tau(ti1,spt`sptcnt',T5,ti2));
      
   redefine sptcnt "{`sptcnt'+2}";
   if(match(vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),anchor(?args)) = -i_*(
      - 1/2*TC(b,cf1,cf2)*DO4v(gamma,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,p,spt{`sptcnt'+1},G5,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,cf2)*DO4v(gamma,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,spt{`sptcnt'+1},G5,q,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,cf2)*DO4v(spt`sptcnt',spt{`sptcnt'+1},p)*FL(fl1,gamma,spt{`sptcnt'+1},G5,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,cf2)*DO4v(spt`sptcnt',spt{`sptcnt'+1},q)*FL(fl1,spt{`sptcnt'+1},G5,gamma,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,cf2)*DO4v(spt`sptcnt',spt{`sptcnt'+1},r)*FL(fl1,gamma,spt{`sptcnt'+1},G5,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,cf2)*DO4v(spt`sptcnt',spt{`sptcnt'+1},r)*FL(fl1,spt{`sptcnt'+1},G5,gamma,fl2)*g*Tau(ti1,spt`sptcnt',T5,ti2));
      
   redefine sptcnt "{`sptcnt'+2}";
   if(match(vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)) = -i_*(
      + 1/2*TC(b,cf1,col`ccnt')*TC(c,col`ccnt',cf2)*DO4v(gamma,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,spt{`sptcnt'+1},G5,delta,fl2)*i_*g^2*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,cf1,col`ccnt')*TC(c,col`ccnt',cf2)*DO4v(delta,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,gamma,spt{`sptcnt'+1},G5,fl2)*i_*g^2*Tau(ti1,spt`sptcnt',T5,ti2)
      - 1/2*TC(b,col`ccnt',cf2)*TC(c,cf1,col`ccnt')*DO4v(gamma,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,delta,spt{`sptcnt'+1},G5,fl2)*i_*g^2*Tau(ti1,spt`sptcnt',T5,ti2)
      + 1/2*TC(b,col`ccnt',cf2)*TC(c,cf1,col`ccnt')*DO4v(delta,spt`sptcnt',spt{`sptcnt'+1})*FL(fl1,spt{`sptcnt'+1},G5,gamma,fl2)*i_*g^2*Tau(ti1,spt`sptcnt',T5,ti2));
      
   redefine ccnt "{`ccnt'+1}";
   redefine sptcnt "{`sptcnt'+2}";
   if(match(vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


id vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),anchor(?args)) = -i_*(
   - 1/2*M(field2)*FL(fl1,p,G5,fl2)*d_(cf1,cf2)*Tau(ti1,T5,ti2)
   + 1/2*FL(fl1,p,p,G5,fl2)*d_(cf1,cf2)*i_*Tau(ti1,T5,ti2)
   - 1/2*M(field2)*FL(fl1,q,G5,fl2)*d_(cf1,cf2)*Tau(ti1,T5,ti2)
   - 1/2*FL(fl1,q,G5,q,fl2)*d_(cf1,cf2)*i_*Tau(ti1,T5,ti2));


id vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),anchor(?args)) = -i_*(
   - 1/2*TC(b,cf1,cf2)*FL(fl1,p,gamma,G5,fl2)*g*Tau(ti1,T5,ti2)
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,G5,q,fl2)*g*Tau(ti1,T5,ti2)
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,p,G5,fl2)*g*Tau(ti1,T5,ti2)
   - 1/2*TC(b,cf1,cf2)*FL(fl1,q,G5,gamma,fl2)*g*Tau(ti1,T5,ti2)
   - 1/2*TC(b,cf1,cf2)*FL(fl1,gamma,r,G5,fl2)*g*Tau(ti1,T5,ti2)
   - 1/2*TC(b,cf1,cf2)*FL(fl1,r,G5,gamma,fl2)*g*Tau(ti1,T5,ti2));


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)) = -i_*(
      + 1/2*TC(b,cf1,col`ccnt')*TC(c,col`ccnt',cf2)*FL(fl1,gamma,G5,delta,fl2)*i_*g^2*Tau(ti1,T5,ti2)
      - 1/2*TC(b,cf1,col`ccnt')*TC(c,col`ccnt',cf2)*FL(fl1,gamma,delta,G5,fl2)*i_*g^2*Tau(ti1,T5,ti2)
      - 1/2*TC(b,col`ccnt',cf2)*TC(c,cf1,col`ccnt')*FL(fl1,delta,gamma,G5,fl2)*i_*g^2*Tau(ti1,T5,ti2)
      + 1/2*TC(b,col`ccnt',cf2)*TC(c,cf1,col`ccnt')*FL(fl1,delta,G5,gamma,fl2)*i_*g^2*Tau(ti1,T5,ti2));
      
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,spt1?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,spt2?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)))) redefine dummy "0";
   .sort;
#enddo


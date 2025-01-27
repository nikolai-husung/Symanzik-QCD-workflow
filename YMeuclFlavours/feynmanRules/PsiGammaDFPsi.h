id vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl?,ti3?),anchor(?args)) = ( 
   + TC(b,cf1,cf2)*FL(fl1,r,fl2)*r(gamma)*g
   - TC(b,cf1,cf2)*FL(fl1,gamma,fl2)*r.r*g)*Tau(ti1,ti2);


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)) = (
      + FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,r,fl2)*d_(gamma,delta)*i_*g^2
      - FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,s,fl2)*d_(gamma,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,gamma,fl2)*r(delta)*i_*g^2
      - FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,gamma,fl2)*s(delta)*i_*g^2
      + FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,delta,fl2)*r(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,delta,fl2)*s(gamma)*i_*g^2)*Tau(ti1,ti2);
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),field5?{gluon,bgf}(t?,mu?,d?,fl5?,ti5?),anchor(?args)) = (
      + FC(b,c,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,gamma,fl2)*d_(mu,delta)*g^3
      + FC(b,d,col{`ccnt'+1})*FC(c,col`ccnt',col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,gamma,fl2)*d_(mu,delta)*g^3
      - FC(b,d,col{`ccnt'+1})*FC(c,col`ccnt',col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,mu,fl2)*d_(gamma,delta)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,mu,fl2)*d_(gamma,delta)*g^3
      - FC(b,c,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,delta,fl2)*d_(gamma,mu)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*TC(col`ccnt',cf1,cf2)*FL(fl1,delta,fl2)*d_(gamma,mu)*g^3)*Tau(ti1,ti2);
   redefine ccnt "{`ccnt'+2}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?,ti1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?,ti2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?,ti3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?,ti4?),field5?{gluon,bgf}(t?,mu?,d?,fl5?,ti5?),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

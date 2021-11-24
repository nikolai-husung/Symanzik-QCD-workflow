id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),anchor(?args)) =
   - 2*d_(alpha,beta)*d_(b,c)*p.q
   + 2*d_(b,c)*p(beta)*q(alpha);

id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),anchor(?args)) = (
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*i_*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*i_*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*i_*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*i_*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*i_*g
   + 2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*i_*g);

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args)) = 
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

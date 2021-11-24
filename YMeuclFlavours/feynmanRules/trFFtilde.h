id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),src(?args)) =
   - 4*e_(p,q,alpha,beta)*d_(b,c);


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),src(?args)) = 
   - 4*FC(b,c,d)*e_(p,alpha,beta,gamma)*i_*g
   - 4*FC(b,c,d)*e_(q,alpha,beta,gamma)*i_*g
   - 4*FC(b,c,d)*e_(r,alpha,beta,gamma)*i_*g;

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)) = 
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,delta)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,delta)*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,delta)*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)))>0) redefine dummy "0";
   .sort;
#enddo

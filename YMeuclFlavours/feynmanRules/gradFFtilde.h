
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - 4*e_(p,q,alpha,beta)*d_(b,c)*p(kappahat)*i_
   - 4*e_(p,q,alpha,beta)*d_(b,c)*q(kappahat)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + 4*FC(b,c,d)*e_(p,alpha,beta,gamma)*p(kappahat)*g
   + 4*FC(b,c,d)*e_(p,alpha,beta,gamma)*q(kappahat)*g
   + 4*FC(b,c,d)*e_(p,alpha,beta,gamma)*r(kappahat)*g
   + 4*FC(b,c,d)*e_(q,alpha,beta,gamma)*p(kappahat)*g
   + 4*FC(b,c,d)*e_(q,alpha,beta,gamma)*q(kappahat)*g
   + 4*FC(b,c,d)*e_(q,alpha,beta,gamma)*r(kappahat)*g
   + 4*FC(b,c,d)*e_(r,alpha,beta,gamma)*p(kappahat)*g
   + 4*FC(b,c,d)*e_(r,alpha,beta,gamma)*q(kappahat)*g
   + 4*FC(b,c,d)*e_(r,alpha,beta,gamma)*r(kappahat)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,delta)*p(kappahat)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,delta)*q(kappahat)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,delta)*r(kappahat)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,delta)*s(kappahat)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,delta)*p(kappahat)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,delta)*q(kappahat)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,delta)*r(kappahat)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,delta)*s(kappahat)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,delta)*p(kappahat)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,delta)*q(kappahat)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,delta)*r(kappahat)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,delta)*s(kappahat)*i_*g^2;
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   redefine ccnt "{`ccnt'+1}";
   .sort;
#enddo


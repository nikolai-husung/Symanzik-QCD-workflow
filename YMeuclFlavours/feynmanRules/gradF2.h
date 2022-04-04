
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   + 2*d_(alpha,beta)*d_(b,c)*p(kappahat)*p.q*i_
   + 2*d_(alpha,beta)*d_(b,c)*q(kappahat)*p.q*i_
   - 2*d_(b,c)*p(beta)*p(kappahat)*q(alpha)*i_
   - 2*d_(b,c)*p(beta)*q(alpha)*q(kappahat)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p(kappahat)*g
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*q(kappahat)*g
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*r(kappahat)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*p(kappahat)*q(gamma)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*q(kappahat)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*r(kappahat)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p(kappahat)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*q(kappahat)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*r(kappahat)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*p(kappahat)*r(beta)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*q(kappahat)*r(beta)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*r(kappahat)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*p(kappahat)*q(alpha)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*p(kappahat)*r(alpha)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*q(kappahat)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*r(kappahat)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*q(kappahat)*r(alpha)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*r(kappahat)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p(kappahat)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q(kappahat)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r(kappahat)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*s(kappahat)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p(kappahat)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q(kappahat)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r(kappahat)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*s(kappahat)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p(kappahat)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q(kappahat)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r(kappahat)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*s(kappahat)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p(kappahat)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q(kappahat)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r(kappahat)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*s(kappahat)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p(kappahat)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q(kappahat)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r(kappahat)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*s(kappahat)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p(kappahat)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q(kappahat)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r(kappahat)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*s(kappahat)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


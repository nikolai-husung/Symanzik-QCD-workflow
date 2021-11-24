
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   + 2*d_(alpha,beta)*d_(b,c)*p(kappa)*p.q*i_
   + 2*d_(alpha,beta)*d_(b,c)*q(kappa)*p.q*i_
   - 2*d_(b,c)*p(beta)*p(kappa)*q(alpha)*i_
   - 2*d_(b,c)*p(beta)*q(alpha)*q(kappa)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p(kappa)*g
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*q(kappa)*g
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*r(kappa)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*p(kappa)*q(gamma)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*q(kappa)*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*r(kappa)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p(kappa)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*q(kappa)*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*r(kappa)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*p(kappa)*r(beta)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*q(kappa)*r(beta)*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*r(kappa)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*p(kappa)*q(alpha)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*p(kappa)*r(alpha)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*q(kappa)*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*r(kappa)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*q(kappa)*r(alpha)*g
   + 2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*r(kappa)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p(kappa)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q(kappa)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r(kappa)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*s(kappa)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p(kappa)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q(kappa)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r(kappa)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*s(kappa)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p(kappa)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q(kappa)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r(kappa)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*s(kappa)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p(kappa)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q(kappa)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r(kappa)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*s(kappa)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p(kappa)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q(kappa)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r(kappa)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*s(kappa)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p(kappa)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q(kappa)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r(kappa)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*s(kappa)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


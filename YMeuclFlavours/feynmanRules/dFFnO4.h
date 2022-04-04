
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   + DO4v(alpha,beta,kappahat,p)*d_(b,c)*p.q*i_
   + DO4v(alpha,beta,kappahat,q)*d_(b,c)*p.q*i_
   - DO4v(alpha,kappahat,p,q)*d_(b,c)*p(beta)*i_
   - DO4v(alpha,kappahat,q,q)*d_(b,c)*p(beta)*i_
   - DO4v(beta,kappahat,p,p)*d_(b,c)*q(alpha)*i_
   - DO4v(beta,kappahat,p,q)*d_(b,c)*q(alpha)*i_
   + DO4v(kappahat,p,p,q)*d_(alpha,beta)*d_(b,c)*i_
   + DO4v(kappahat,p,q,q)*d_(alpha,beta)*d_(b,c)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   - FC(b,c,d)*DO4v(alpha,beta,kappahat,p)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappahat,p)*q(gamma)*g
   - FC(b,c,d)*DO4v(alpha,beta,kappahat,q)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappahat,q)*q(gamma)*g
   - FC(b,c,d)*DO4v(alpha,beta,kappahat,r)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappahat,r)*q(gamma)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappahat,p)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappahat,p)*r(beta)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappahat,q)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappahat,q)*r(beta)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappahat,r)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappahat,r)*r(beta)*g
   - FC(b,c,d)*DO4v(alpha,kappahat,p,q)*d_(beta,gamma)*g
   + FC(b,c,d)*DO4v(alpha,kappahat,p,r)*d_(beta,gamma)*g
   - FC(b,c,d)*DO4v(alpha,kappahat,q,q)*d_(beta,gamma)*g
   + FC(b,c,d)*DO4v(alpha,kappahat,r,r)*d_(beta,gamma)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappahat,p)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappahat,p)*r(alpha)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappahat,q)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappahat,q)*r(alpha)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappahat,r)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappahat,r)*r(alpha)*g
   + FC(b,c,d)*DO4v(beta,kappahat,p,p)*d_(alpha,gamma)*g
   + FC(b,c,d)*DO4v(beta,kappahat,p,q)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(beta,kappahat,q,r)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(beta,kappahat,r,r)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(gamma,kappahat,p,p)*d_(alpha,beta)*g
   - FC(b,c,d)*DO4v(gamma,kappahat,p,r)*d_(alpha,beta)*g
   + FC(b,c,d)*DO4v(gamma,kappahat,q,q)*d_(alpha,beta)*g
   + FC(b,c,d)*DO4v(gamma,kappahat,q,r)*d_(alpha,beta)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappahat,p)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappahat,q)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappahat,r)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappahat,s)*d_(beta,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappahat,p)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappahat,q)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappahat,r)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappahat,s)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappahat,p)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappahat,q)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappahat,r)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappahat,s)*d_(alpha,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappahat,p)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappahat,q)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappahat,r)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappahat,s)*d_(alpha,gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappahat,p)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappahat,q)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappahat,r)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappahat,s)*d_(gamma,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappahat,p)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappahat,q)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappahat,r)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappahat,s)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappahat,p)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappahat,q)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappahat,r)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappahat,s)*d_(alpha,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappahat,p)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappahat,q)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappahat,r)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappahat,s)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappahat,p)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappahat,q)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappahat,r)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappahat,s)*d_(gamma,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappahat,p)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappahat,q)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappahat,r)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappahat,s)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappahat,p)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappahat,q)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappahat,r)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappahat,s)*d_(alpha,gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappahat,p)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappahat,q)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappahat,r)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappahat,s)*d_(alpha,beta)*i_*g^2;
   redefine ccnt "{` ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo



#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   + DO4v(alpha,beta,kappa,p)*d_(b,c)*p.q*i_
   + DO4v(alpha,beta,kappa,q)*d_(b,c)*p.q*i_
   - DO4v(alpha,kappa,p,q)*d_(b,c)*p(beta)*i_
   - DO4v(alpha,kappa,q,q)*d_(b,c)*p(beta)*i_
   - DO4v(beta,kappa,p,p)*d_(b,c)*q(alpha)*i_
   - DO4v(beta,kappa,p,q)*d_(b,c)*q(alpha)*i_
   + DO4v(kappa,p,p,q)*d_(alpha,beta)*d_(b,c)*i_
   + DO4v(kappa,p,q,q)*d_(alpha,beta)*d_(b,c)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   - FC(b,c,d)*DO4v(alpha,beta,kappa,p)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappa,p)*q(gamma)*g
   - FC(b,c,d)*DO4v(alpha,beta,kappa,q)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappa,q)*q(gamma)*g
   - FC(b,c,d)*DO4v(alpha,beta,kappa,r)*p(gamma)*g
   + FC(b,c,d)*DO4v(alpha,beta,kappa,r)*q(gamma)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappa,p)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappa,p)*r(beta)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappa,q)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappa,q)*r(beta)*g
   + FC(b,c,d)*DO4v(alpha,gamma,kappa,r)*p(beta)*g
   - FC(b,c,d)*DO4v(alpha,gamma,kappa,r)*r(beta)*g
   - FC(b,c,d)*DO4v(alpha,kappa,p,q)*d_(beta,gamma)*g
   + FC(b,c,d)*DO4v(alpha,kappa,p,r)*d_(beta,gamma)*g
   - FC(b,c,d)*DO4v(alpha,kappa,q,q)*d_(beta,gamma)*g
   + FC(b,c,d)*DO4v(alpha,kappa,r,r)*d_(beta,gamma)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappa,p)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappa,p)*r(alpha)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappa,q)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappa,q)*r(alpha)*g
   - FC(b,c,d)*DO4v(beta,gamma,kappa,r)*q(alpha)*g
   + FC(b,c,d)*DO4v(beta,gamma,kappa,r)*r(alpha)*g
   + FC(b,c,d)*DO4v(beta,kappa,p,p)*d_(alpha,gamma)*g
   + FC(b,c,d)*DO4v(beta,kappa,p,q)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(beta,kappa,q,r)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(beta,kappa,r,r)*d_(alpha,gamma)*g
   - FC(b,c,d)*DO4v(gamma,kappa,p,p)*d_(alpha,beta)*g
   - FC(b,c,d)*DO4v(gamma,kappa,p,r)*d_(alpha,beta)*g
   + FC(b,c,d)*DO4v(gamma,kappa,q,q)*d_(alpha,beta)*g
   + FC(b,c,d)*DO4v(gamma,kappa,q,r)*d_(alpha,beta)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,p)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,q)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,r)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,s)*d_(beta,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,p)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,q)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,r)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,s)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,p)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,q)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,r)*d_(alpha,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,s)*d_(alpha,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,p)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,q)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,r)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,s)*d_(alpha,gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,p)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,q)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,r)*d_(gamma,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,s)*d_(gamma,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,p)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,q)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,r)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,s)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,p)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,q)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,r)*d_(alpha,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,s)*d_(alpha,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,p)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,q)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,r)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,s)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,p)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,q)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,r)*d_(gamma,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,s)*d_(gamma,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,p)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,q)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,r)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,s)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,p)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,q)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,r)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,s)*d_(alpha,gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,p)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,q)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,r)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,s)*d_(alpha,beta)*i_*g^2;
   redefine ccnt "{` ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


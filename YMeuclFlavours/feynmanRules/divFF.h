
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - 1/2*d_(alpha,beta)*d_(b,c)*p(kappa)*p.q*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*p(kappa)*q.q*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*q(kappa)*p.p*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*q(kappa)*p.q*i_
   + 1/2*d_(alpha,kappa)*d_(b,c)*p(beta)*q.q*i_
   - 1/2*d_(alpha,kappa)*d_(b,c)*q(beta)*p.q*i_
   - 1/2*d_(beta,kappa)*d_(b,c)*p(alpha)*p.q*i_
   + 1/2*d_(beta,kappa)*d_(b,c)*q(alpha)*p.p*i_
   + 1/2*d_(b,c)*p(alpha)*p(beta)*q(kappa)*i_
   + 1/2*d_(b,c)*p(beta)*p(kappa)*q(alpha)*i_
   + 1/2*d_(b,c)*p(beta)*q(alpha)*q(kappa)*i_
   + 1/2*d_(b,c)*p(kappa)*q(alpha)*q(beta)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappa)*p.p*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappa)*p.r*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappa)*q.q*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappa)*q.r*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p(kappa)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*q(kappa)*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(kappa)*q(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(kappa)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*q(kappa)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*q(kappa)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappa)*p.p*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappa)*p.q*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappa)*q.r*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappa)*r.r*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p(kappa)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*r(kappa)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(kappa)*q(beta)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(kappa)*r(beta)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*q(beta)*r(kappa)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*r(kappa)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappa)*d_(beta,gamma)*p.q*g
   - 1/2*FC(b,c,d)*d_(alpha,kappa)*d_(beta,gamma)*p.r*g
   + 1/2*FC(b,c,d)*d_(alpha,kappa)*d_(beta,gamma)*q.q*g
   - 1/2*FC(b,c,d)*d_(alpha,kappa)*d_(beta,gamma)*r.r*g
   - FC(b,c,d)*d_(alpha,kappa)*p(beta)*q(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,kappa)*p(beta)*r(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappa)*p(gamma)*q(beta)*g
   + FC(b,c,d)*d_(alpha,kappa)*p(gamma)*r(beta)*g
   - 1/2*FC(b,c,d)*d_(alpha,kappa)*q(beta)*q(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappa)*r(beta)*r(gamma)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*p(alpha)*q(kappa)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*p(alpha)*r(kappa)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*q(kappa)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*r(kappa)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*q(kappa)*r(alpha)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*r(kappa)*g
   + 1/2*FC(b,c,d)*d_(beta,kappa)*p(alpha)*p(gamma)*g
   - 1/2*FC(b,c,d)*d_(beta,kappa)*p(alpha)*q(gamma)*g
   + FC(b,c,d)*d_(beta,kappa)*p(gamma)*q(alpha)*g
   + 1/2*FC(b,c,d)*d_(beta,kappa)*q(alpha)*r(gamma)*g
   - FC(b,c,d)*d_(beta,kappa)*q(gamma)*r(alpha)*g
   - 1/2*FC(b,c,d)*d_(beta,kappa)*r(alpha)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(gamma,kappa)*p(alpha)*p(beta)*g
   + 1/2*FC(b,c,d)*d_(gamma,kappa)*p(alpha)*r(beta)*g
   - FC(b,c,d)*d_(gamma,kappa)*p(beta)*r(alpha)*g
   + 1/2*FC(b,c,d)*d_(gamma,kappa)*q(alpha)*q(beta)*g
   + FC(b,c,d)*d_(gamma,kappa)*q(alpha)*r(beta)*g
   - 1/2*FC(b,c,d)*d_(gamma,kappa)*q(beta)*r(alpha)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*p(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*q(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*r(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*s(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*p(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*q(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*r(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*s(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*p(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*q(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*r(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*s(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*p(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*q(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*r(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*s(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*p(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*q(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*r(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*s(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*p(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*q(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*r(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*s(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*p(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*q(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*r(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*s(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*p(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*q(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*r(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*s(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*p(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*q(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*r(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*s(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*p(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*q(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*r(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*s(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*p(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*q(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*r(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappa)*s(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*p(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*q(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*r(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappa)*s(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*p(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*q(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*r(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(beta,gamma)*s(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*p(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*q(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*r(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*s(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*p(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*q(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*r(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappa)*s(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*p(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*q(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*r(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*s(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*p(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*q(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*r(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappa)*s(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*p(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*q(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*r(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappa)*s(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*p(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*q(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*r(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappa)*s(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*p(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*q(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*r(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappa)*s(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*p(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*q(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*r(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(beta,delta)*s(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*p(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*q(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*r(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappa)*d_(gamma,delta)*s(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*p(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*q(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*r(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappa)*s(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*p(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*q(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*r(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappa)*d_(gamma,delta)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


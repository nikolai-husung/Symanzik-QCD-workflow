
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - 1/2*d_(alpha,beta)*d_(b,c)*p(kappahat)*p.q*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*p(kappahat)*q.q*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*q(kappahat)*p.p*i_
   - 1/2*d_(alpha,beta)*d_(b,c)*q(kappahat)*p.q*i_
   + 1/2*d_(alpha,kappahat)*d_(b,c)*p(beta)*q.q*i_
   - 1/2*d_(alpha,kappahat)*d_(b,c)*q(beta)*p.q*i_
   - 1/2*d_(beta,kappahat)*d_(b,c)*p(alpha)*p.q*i_
   + 1/2*d_(beta,kappahat)*d_(b,c)*q(alpha)*p.p*i_
   + 1/2*d_(b,c)*p(alpha)*p(beta)*q(kappahat)*i_
   + 1/2*d_(b,c)*p(beta)*p(kappahat)*q(alpha)*i_
   + 1/2*d_(b,c)*p(beta)*q(alpha)*q(kappahat)*i_
   + 1/2*d_(b,c)*p(kappahat)*q(alpha)*q(beta)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappahat)*p.p*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappahat)*p.r*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappahat)*q.q*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*d_(gamma,kappahat)*q.r*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p(kappahat)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*q(kappahat)*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(kappahat)*q(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,beta)*p(kappahat)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*q(kappahat)*g
   - 1/2*FC(b,c,d)*d_(alpha,beta)*q(kappahat)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappahat)*p.p*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappahat)*p.q*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappahat)*q.r*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*d_(beta,kappahat)*r.r*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p(kappahat)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*r(kappahat)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(kappahat)*q(beta)*g
   - 1/2*FC(b,c,d)*d_(alpha,gamma)*p(kappahat)*r(beta)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*q(beta)*r(kappahat)*g
   + 1/2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*r(kappahat)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappahat)*d_(beta,gamma)*p.q*g
   - 1/2*FC(b,c,d)*d_(alpha,kappahat)*d_(beta,gamma)*p.r*g
   + 1/2*FC(b,c,d)*d_(alpha,kappahat)*d_(beta,gamma)*q.q*g
   - 1/2*FC(b,c,d)*d_(alpha,kappahat)*d_(beta,gamma)*r.r*g
   - FC(b,c,d)*d_(alpha,kappahat)*p(beta)*q(gamma)*g
   - 1/2*FC(b,c,d)*d_(alpha,kappahat)*p(beta)*r(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappahat)*p(gamma)*q(beta)*g
   + FC(b,c,d)*d_(alpha,kappahat)*p(gamma)*r(beta)*g
   - 1/2*FC(b,c,d)*d_(alpha,kappahat)*q(beta)*q(gamma)*g
   + 1/2*FC(b,c,d)*d_(alpha,kappahat)*r(beta)*r(gamma)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*p(alpha)*q(kappahat)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*p(alpha)*r(kappahat)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*q(kappahat)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*r(kappahat)*g
   + 1/2*FC(b,c,d)*d_(beta,gamma)*q(kappahat)*r(alpha)*g
   - 1/2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*r(kappahat)*g
   + 1/2*FC(b,c,d)*d_(beta,kappahat)*p(alpha)*p(gamma)*g
   - 1/2*FC(b,c,d)*d_(beta,kappahat)*p(alpha)*q(gamma)*g
   + FC(b,c,d)*d_(beta,kappahat)*p(gamma)*q(alpha)*g
   + 1/2*FC(b,c,d)*d_(beta,kappahat)*q(alpha)*r(gamma)*g
   - FC(b,c,d)*d_(beta,kappahat)*q(gamma)*r(alpha)*g
   - 1/2*FC(b,c,d)*d_(beta,kappahat)*r(alpha)*r(gamma)*g
   - 1/2*FC(b,c,d)*d_(gamma,kappahat)*p(alpha)*p(beta)*g
   + 1/2*FC(b,c,d)*d_(gamma,kappahat)*p(alpha)*r(beta)*g
   - FC(b,c,d)*d_(gamma,kappahat)*p(beta)*r(alpha)*g
   + 1/2*FC(b,c,d)*d_(gamma,kappahat)*q(alpha)*q(beta)*g
   + FC(b,c,d)*d_(gamma,kappahat)*q(alpha)*r(beta)*g
   - 1/2*FC(b,c,d)*d_(gamma,kappahat)*q(beta)*r(alpha)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*p(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*q(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*r(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*s(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*p(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*q(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*r(beta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*s(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*p(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*q(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*r(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*s(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*p(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*q(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*r(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*s(beta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*p(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*q(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*r(delta)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*s(delta)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*p(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*q(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*r(gamma)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*s(gamma)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*p(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*q(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*r(alpha)*i_*g^2
      - 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*s(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*p(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*q(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*r(alpha)*i_*g^2
      + 1/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*s(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*p(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*q(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*r(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*s(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*p(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*q(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*r(gamma)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*s(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*p(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*q(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*r(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,kappahat)*s(gamma)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*p(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*q(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*r(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(gamma,kappahat)*s(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*p(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*q(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*r(delta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(beta,gamma)*s(delta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*p(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*q(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*r(beta)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*s(beta)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*p(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*q(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*r(alpha)*i_*g^2
      - 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*d_(delta,kappahat)*s(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*p(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*q(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*r(alpha)*i_*g^2
      + 1/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*s(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*p(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*q(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*r(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,kappahat)*s(delta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*p(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*q(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*r(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(delta,kappahat)*s(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*p(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*q(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*r(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,kappahat)*s(delta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*p(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*q(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*r(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(delta,kappahat)*s(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*p(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*q(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*r(gamma)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(beta,delta)*s(gamma)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*p(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*q(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*r(beta)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,kappahat)*d_(gamma,delta)*s(beta)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*p(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*q(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*r(alpha)*i_*g^2
      - 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*d_(gamma,kappahat)*s(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*p(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*q(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*r(alpha)*i_*g^2
      + 1/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,kappahat)*d_(gamma,delta)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


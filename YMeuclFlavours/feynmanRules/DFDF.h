***** O(a^2) counterpart of the 4 gluon?{gluon,bgf} vertex *****
#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args)) =
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,p)*p(delta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,q)*q(delta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,r)*p(delta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,r)*q(delta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,s)*p(delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,s)*q(delta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.r*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.s*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*q.r*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*q.s*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,p)*p(gamma)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,q)*q(gamma)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,r)*p(gamma)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,r)*q(gamma)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,s)*p(gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,s)*q(gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,p,r)*d_(beta,delta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,p,s)*d_(beta,delta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,q,q)*d_(beta,delta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,q,r)*d_(beta,delta)*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,q,s)*d_(beta,delta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,s,s)*d_(beta,delta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,p)*r(beta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,p)*s(beta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,q)*r(beta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,q)*s(beta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,r)*r(beta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,delta,s)*s(beta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,p,r)*d_(beta,gamma)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,p,s)*d_(beta,gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,q,q)*d_(beta,gamma)*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,q,r)*d_(beta,gamma)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,q,s)*d_(beta,gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,r,r)*d_(beta,gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,p,p)*d_(alpha,delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,p,r)*d_(alpha,delta)*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,p,s)*d_(alpha,delta)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,q,r)*d_(alpha,delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,q,s)*d_(alpha,delta)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,s,s)*d_(alpha,delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,p)*r(alpha)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,p)*s(alpha)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,q)*r(alpha)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,q)*s(alpha)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,r)*r(alpha)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,delta,s)*s(alpha)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,p,p)*d_(alpha,gamma)*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,p,r)*d_(alpha,gamma)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,p,s)*d_(alpha,gamma)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,q,r)*d_(alpha,gamma)*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,q,s)*d_(alpha,gamma)*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,r,r)*d_(alpha,gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,p,q)*d_(gamma,delta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,p,s)*d_(gamma,delta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,q,r)*d_(gamma,delta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,r,r)*d_(gamma,delta)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,r,s)*d_(gamma,delta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,s,s)*d_(gamma,delta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,p)*p(delta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,q)*p(delta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,q)*r(delta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,r)*r(delta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,s)*p(delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,s)*r(delta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.q*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.s*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*q.r*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,gamma,delta)*r.s*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,p)*q(gamma)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,p)*s(gamma)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,q)*q(gamma)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,r)*q(gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,r)*s(gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,delta,s)*s(gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,p)*p(beta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,q)*p(beta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,q)*r(beta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,r)*r(beta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,s)*p(beta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,delta,s)*r(beta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,p,q)*d_(beta,gamma)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,p,s)*d_(beta,gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,q,q)*d_(beta,gamma)*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,q,r)*d_(beta,gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,r,r)*d_(beta,gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,r,s)*d_(beta,gamma)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,p,p)*d_(alpha,delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,p,q)*d_(alpha,delta)*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,p,s)*d_(alpha,delta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,q,r)*d_(alpha,delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,r,s)*d_(alpha,delta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,s,s)*d_(alpha,delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,p)*q(alpha)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,p)*s(alpha)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,q)*q(alpha)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,r)*q(alpha)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,r)*s(alpha)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,delta,s)*s(alpha)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,p,p)*d_(alpha,beta)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,p,q)*d_(alpha,beta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,p,s)*d_(alpha,beta)*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,q,q)*d_(alpha,beta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,q,r)*d_(alpha,beta)*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,r,s)*d_(alpha,beta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,p,q)*d_(gamma,delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,p,r)*d_(gamma,delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,q,s)*d_(gamma,delta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,r,r)*d_(gamma,delta)*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,r,s)*d_(gamma,delta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,s,s)*d_(gamma,delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,p)*q(delta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,p)*r(delta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,q)*q(delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,r)*r(delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,s)*q(delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,s)*r(delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.q*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,delta)*p.r*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,delta)*q.s*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,gamma,delta)*r.s*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,p)*p(gamma)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,q)*p(gamma)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,q)*s(gamma)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,r)*p(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,r)*s(gamma)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,delta,s)*s(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,p,q)*d_(beta,delta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,p,r)*d_(beta,delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,q,q)*d_(beta,delta)*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,q,s)*d_(beta,delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,r,s)*d_(beta,delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,s,s)*d_(beta,delta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,p)*p(beta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,q)*p(beta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,q)*s(beta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,r)*p(beta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,r)*s(beta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,delta,s)*s(beta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,p)*q(alpha)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,p)*r(alpha)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,q)*q(alpha)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,r)*r(alpha)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,s)*q(alpha)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,delta,s)*r(alpha)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,p,p)*d_(alpha,gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,p,q)*d_(alpha,gamma)*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,p,r)*d_(alpha,gamma)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,q,s)*d_(alpha,gamma)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,r,r)*d_(alpha,gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,r,s)*d_(alpha,gamma)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,p,p)*d_(alpha,beta)*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,p,q)*d_(alpha,beta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,p,r)*d_(alpha,beta)*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,q,q)*d_(alpha,beta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,q,s)*d_(alpha,beta)*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,r,s)*d_(alpha,beta)*g^2;
   redefine ccnt "{`ccnt'+1}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo

***** O(a^2) counterpart of the 3 gluon?{gluon,bgf} vertex *****
id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),anchor(?args)) = (
   - FC(b,c,d)*DO4v(alpha,p,q,q)*d_(beta,gamma)*i_*g
   + FC(b,c,d)*DO4v(alpha,p,r,r)*d_(beta,gamma)*i_*g
   - 2*FC(b,c,d)*DO4v(alpha,q,q,r)*d_(beta,gamma)*i_*g
   + 2*FC(b,c,d)*DO4v(alpha,q,r,r)*d_(beta,gamma)*i_*g
   - FC(b,c,d)*DO4v(alpha,beta,p,q)*p(gamma)*i_*g
   + FC(b,c,d)*DO4v(alpha,beta,p,q)*q(gamma)*i_*g
   - 2*FC(b,c,d)*DO4v(alpha,beta,p,r)*p(gamma)*i_*g
   + 2*FC(b,c,d)*DO4v(alpha,beta,q,r)*q(gamma)*i_*g
   + FC(b,c,d)*DO4v(alpha,beta,r,r)*p(gamma)*i_*g
   - FC(b,c,d)*DO4v(alpha,beta,r,r)*q(gamma)*i_*g
   - FC(b,c,d)*DO4v(alpha,beta,gamma,p)*p.q*i_*g
   + FC(b,c,d)*DO4v(alpha,beta,gamma,p)*p.r*i_*g
   + FC(b,c,d)*DO4v(alpha,beta,gamma,q)*p.q*i_*g
   - FC(b,c,d)*DO4v(alpha,beta,gamma,q)*q.r*i_*g
   - FC(b,c,d)*DO4v(alpha,beta,gamma,r)*p.r*i_*g
   + FC(b,c,d)*DO4v(alpha,beta,gamma,r)*q.r*i_*g
   + 2*FC(b,c,d)*DO4v(alpha,gamma,p,q)*p(beta)*i_*g
   + FC(b,c,d)*DO4v(alpha,gamma,p,r)*p(beta)*i_*g
   - FC(b,c,d)*DO4v(alpha,gamma,p,r)*r(beta)*i_*g
   - FC(b,c,d)*DO4v(alpha,gamma,q,q)*p(beta)*i_*g
   + FC(b,c,d)*DO4v(alpha,gamma,q,q)*r(beta)*i_*g
   - 2*FC(b,c,d)*DO4v(alpha,gamma,q,r)*r(beta)*i_*g
   + FC(b,c,d)*DO4v(beta,p,p,q)*d_(alpha,gamma)*i_*g
   + 2*FC(b,c,d)*DO4v(beta,p,p,r)*d_(alpha,gamma)*i_*g
   - 2*FC(b,c,d)*DO4v(beta,p,r,r)*d_(alpha,gamma)*i_*g
   - FC(b,c,d)*DO4v(beta,q,r,r)*d_(alpha,gamma)*i_*g
   + FC(b,c,d)*DO4v(beta,gamma,p,p)*q(alpha)*i_*g
   - FC(b,c,d)*DO4v(beta,gamma,p,p)*r(alpha)*i_*g
   - 2*FC(b,c,d)*DO4v(beta,gamma,p,q)*q(alpha)*i_*g
   + 2*FC(b,c,d)*DO4v(beta,gamma,p,r)*r(alpha)*i_*g
   - FC(b,c,d)*DO4v(beta,gamma,q,r)*q(alpha)*i_*g
   + FC(b,c,d)*DO4v(beta,gamma,q,r)*r(alpha)*i_*g
   - 2*FC(b,c,d)*DO4v(gamma,p,p,q)*d_(alpha,beta)*i_*g
   - FC(b,c,d)*DO4v(gamma,p,p,r)*d_(alpha,beta)*i_*g
   + 2*FC(b,c,d)*DO4v(gamma,p,q,q)*d_(alpha,beta)*i_*g
   + FC(b,c,d)*DO4v(gamma,q,q,r)*d_(alpha,beta)*i_*g);

***** O(a^2) 2-gluon?{gluon,bgf} vertex *****
id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),anchor(?args)) =
   - DO4v(p,p,q,q)*d_(alpha,beta)*d_(b,c)
   + DO4v(alpha,p,q,q)*d_(b,c)*p(beta)
   - DO4v(alpha,beta,p,q)*d_(b,c)*p.q
   + DO4v(beta,p,p,q)*d_(b,c)*q(alpha);

***** O(a^2) 5-gluon?{gluon,bgf} vertex *****

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),anchor(?args)) = (
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,p)*
      d_(beta,delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,p)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,q)*
      d_(alpha,delta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,r)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,q)*
      d_(alpha,gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,s)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,p)*
      d_(beta,mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,p)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,q)*
      d_(alpha,mu)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,r)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,q)*
      d_(alpha,gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,t)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,p)*
      d_(beta,mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,p)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,q)*
      d_(alpha,mu)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,s)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,q)*
      d_(alpha,delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,t)*
      d_(alpha,delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,p)*
      d_(gamma,delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,p)*
      d_(beta,gamma)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,q)*
      d_(alpha,delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,r)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,r)*
      d_(alpha,beta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,s)*
      d_(alpha,beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,p)*
      d_(gamma,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,p)*
      d_(beta,gamma)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,q)*
      d_(alpha,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,r)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,r)*
      d_(alpha,beta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,t)*
      d_(alpha,beta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,p)*
      d_(gamma,mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,p)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,r)*
      d_(alpha,mu)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,s)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,r)*
      d_(alpha,delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,mu,t)*
      d_(alpha,delta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,p)*
      d_(gamma,delta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,p)*
      d_(beta,delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,q)*
      d_(alpha,gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,s)*
      d_(alpha,gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,r)*
      d_(alpha,beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,s)*
      d_(alpha,beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,p)*
      d_(delta,mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,p)*
      d_(beta,delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,q)*
      d_(alpha,mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,s)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,s)*
      d_(alpha,beta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,t)*
      d_(alpha,beta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,p)*
      d_(delta,mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      p(mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,p)*
      d_(gamma,delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,p)*
      d_(alpha,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,r)*
      d_(alpha,mu)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,s)*
      d_(alpha,mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,t)*
      d_(alpha,mu)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,delta,mu,s)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,delta,mu,t)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,p)*
      d_(gamma,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,p)*
      d_(beta,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,q)*
      d_(alpha,gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,mu,t)*
      d_(alpha,gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,r)*
      d_(alpha,beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,t)*
      d_(alpha,beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,p)*
      d_(delta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,p)*
      d_(beta,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      p(beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,q)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,mu,t)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,p)*
      d_(alpha,beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,q)*
      d_(alpha,beta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,s)*
      d_(alpha,beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,mu,t)*
      d_(alpha,beta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,p)*
      d_(delta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      p(delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,p)*
      d_(gamma,mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      p(gamma)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,delta,mu)*
      s(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,mu,p)*
      d_(alpha,delta)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,mu,r)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,mu,s)*
      d_(alpha,delta)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,mu,t)*
      d_(alpha,delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,delta,mu,p)*
      d_(alpha,gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,delta,mu,r)*
      d_(alpha,gamma)*i_*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,delta,mu,s)*
      d_(alpha,gamma)*i_*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,delta,mu,t)*
      d_(alpha,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      r(delta)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      t(beta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,delta)*
      q(mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,delta,mu)*
      s(gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,mu,q)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,mu,r)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,mu,s)*
      d_(gamma,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,beta,mu,t)*
      d_(gamma,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,gamma,delta,q)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,gamma,delta,r)*
      d_(beta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,gamma,delta,s)*
      d_(beta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,gamma,delta,t)*
      d_(beta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      r(mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,gamma,delta)*
      s(mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      r(beta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,delta,mu)*
      s(beta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,q)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,r)*
      d_(delta,mu)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,s)*
      d_(delta,mu)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,t)*
      d_(delta,mu)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,mu)*
      q(delta)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,gamma,mu)*
      t(delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,q)*
      d_(gamma,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,r)*
      d_(gamma,mu)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,s)*
      d_(gamma,mu)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,t)*
      d_(gamma,mu)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,mu)*
      q(gamma)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,beta,delta,mu)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,gamma,mu,q)*
      d_(beta,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,gamma,mu,r)*
      d_(beta,delta)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,gamma,mu,s)*
      d_(beta,delta)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,gamma,mu,t)*
      d_(beta,delta)*i_*g^3
      - 3/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,delta,mu,q)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,delta,mu,r)*
      d_(beta,gamma)*i_*g^3
      + 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,delta,mu,s)*
      d_(beta,gamma)*i_*g^3
      - 1/2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,delta,mu,t)*
      d_(beta,gamma)*i_*g^3);
   redefine ccnt "{`ccnt'+2}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),field6?{gluon,bgf}(u?,nu?,h?,fl6?),anchor(?args)) =
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      + FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,mu)*d_(alpha,nu)*g^4
      - FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      - FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(gamma,delta,
      mu,nu)*d_(alpha,beta)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*DO4v(beta,delta,
      mu,nu)*d_(alpha,gamma)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      + FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,
      delta,nu)*d_(alpha,mu)*g^4
      - FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,
      mu,nu)*d_(alpha,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,gamma,
      delta,mu)*d_(beta,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*DO4v(alpha,delta,
      mu,nu)*d_(beta,gamma)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,
      delta,nu)*d_(beta,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,gamma,
      mu,nu)*d_(beta,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      gamma,nu)*d_(delta,mu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      delta,mu)*d_(gamma,nu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      gamma,delta)*d_(mu,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      gamma,mu)*d_(delta,nu)*g^4
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      delta,nu)*d_(gamma,mu)*g^4
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*DO4v(alpha,beta,
      mu,nu)*d_(gamma,delta)*g^4;
   redefine ccnt "{`ccnt'+3}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),field6?{gluon,bgf}(u?,nu?,h?,fl6?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo

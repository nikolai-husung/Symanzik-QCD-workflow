id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),src(?args)) =
   - e_(p,q,alpha,kappa)*d_(b,c)*p(beta)*i_
   - e_(p,q,alpha,kappa)*d_(b,c)*q(beta)*i_
   + e_(p,q,beta,kappa)*d_(b,c)*p(alpha)*i_
   + e_(p,q,beta,kappa)*d_(b,c)*q(alpha)*i_
   - e_(p,alpha,beta,kappa)*d_(b,c)*p.q*i_
   - e_(p,alpha,beta,kappa)*d_(b,c)*q.q*i_
   + e_(q,alpha,beta,kappa)*d_(b,c)*p.p*i_
   + e_(q,alpha,beta,kappa)*d_(b,c)*p.q*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),src(?args)) = 
   + FC(b,c,d)*e_(p,alpha,beta,kappa)*p(gamma)*g
   + FC(b,c,d)*e_(p,alpha,beta,kappa)*q(gamma)*g
   + FC(b,c,d)*e_(p,alpha,beta,kappa)*r(gamma)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappa)*p(beta)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappa)*q(beta)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappa)*r(beta)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappa)*p(alpha)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappa)*q(alpha)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappa)*r(alpha)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappa)*p(gamma)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappa)*q(gamma)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappa)*r(gamma)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappa)*p(beta)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappa)*q(beta)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappa)*r(beta)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappa)*p(alpha)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappa)*q(alpha)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappa)*r(alpha)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappa)*p(gamma)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappa)*q(gamma)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappa)*r(gamma)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappa)*p(beta)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappa)*q(beta)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappa)*r(beta)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappa)*p(alpha)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappa)*q(alpha)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappa)*r(alpha)*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.p*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.q*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.r*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*q.q*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*q.r*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*r.r*g;

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)) = 
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)))>0) redefine dummy "0";
   .sort;
#enddo

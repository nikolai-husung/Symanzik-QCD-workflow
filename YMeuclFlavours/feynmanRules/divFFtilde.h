id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),src(?args)) =
   - e_(p,q,alpha,kappahat)*d_(b,c)*p(beta)*i_
   - e_(p,q,alpha,kappahat)*d_(b,c)*q(beta)*i_
   + e_(p,q,beta,kappahat)*d_(b,c)*p(alpha)*i_
   + e_(p,q,beta,kappahat)*d_(b,c)*q(alpha)*i_
   - e_(p,alpha,beta,kappahat)*d_(b,c)*p.q*i_
   - e_(p,alpha,beta,kappahat)*d_(b,c)*q.q*i_
   + e_(q,alpha,beta,kappahat)*d_(b,c)*p.p*i_
   + e_(q,alpha,beta,kappahat)*d_(b,c)*p.q*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),src(?args)) = 
   + FC(b,c,d)*e_(p,alpha,beta,kappahat)*p(gamma)*g
   + FC(b,c,d)*e_(p,alpha,beta,kappahat)*q(gamma)*g
   + FC(b,c,d)*e_(p,alpha,beta,kappahat)*r(gamma)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappahat)*p(beta)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappahat)*q(beta)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappahat)*r(beta)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappahat)*p(alpha)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappahat)*q(alpha)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappahat)*r(alpha)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappahat)*p(gamma)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappahat)*q(gamma)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappahat)*r(gamma)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappahat)*p(beta)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappahat)*q(beta)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappahat)*r(beta)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappahat)*p(alpha)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappahat)*q(alpha)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappahat)*r(alpha)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappahat)*p(gamma)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappahat)*q(gamma)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappahat)*r(gamma)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappahat)*p(beta)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappahat)*q(beta)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappahat)*r(beta)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappahat)*p(alpha)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappahat)*q(alpha)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappahat)*r(alpha)*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.p*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.q*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.r*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*q.q*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*q.r*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*r.r*g;

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)) = 
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)))>0) redefine dummy "0";
   .sort;
#enddo

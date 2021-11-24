id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),anchor(?args)) =
   - 3/2*FC(b,c,d)*p(beta)*q(gamma)*r(alpha)*i_*g
   + 3/2*FC(b,c,d)*p(gamma)*q(alpha)*r(beta)*i_*g
   - 3/2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*q.r*i_*g
   + 3/2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*p.r*i_*g
   + 3/2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*q.r*i_*g
   - 3/2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*p.q*i_*g
   - 3/2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*p.r*i_*g
   + 3/2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*p.q*i_*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args)) =
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,beta)*p(gamma)*q(delta)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,beta)*p(delta)*q(gamma)*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.q*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r.s*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*p(beta)*q(delta)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*r(delta)*s(beta)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.q*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r.s*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*p(beta)*q(gamma)*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*r(beta)*s(gamma)*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*p(delta)*q(alpha)*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*r(delta)*s(alpha)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*p(gamma)*q(alpha)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*r(alpha)*s(gamma)*g^2
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(gamma,delta)*r(alpha)*s(beta)*g^2
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(gamma,delta)*r(beta)*s(alpha)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.r*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q.s*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*p(gamma)*r(delta)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*q(delta)*s(gamma)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,gamma)*p(beta)*r(delta)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,gamma)*p(delta)*r(beta)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.r*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q.s*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*p(gamma)*r(beta)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*q(gamma)*s(beta)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*p(delta)*r(alpha)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*q(delta)*s(alpha)*g^2
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,delta)*q(alpha)*s(gamma)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,delta)*q(gamma)*s(alpha)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*p(beta)*r(alpha)*g^2
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*q(alpha)*s(beta)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.s*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q.r*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*p(delta)*s(gamma)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*q(gamma)*r(delta)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.s*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q.r*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*p(delta)*s(beta)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*q(delta)*r(beta)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,delta)*p(beta)*s(gamma)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,delta)*p(gamma)*s(beta)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,gamma)*q(alpha)*r(delta)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,gamma)*q(delta)*r(alpha)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*p(gamma)*s(alpha)*g^2
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*q(gamma)*r(alpha)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*p(beta)*s(alpha)*g^2
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*q(alpha)*r(beta)*g^2;
   redefine ccnt "{`ccnt'+1}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),anchor(?args)) =
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*s(mu)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*s(mu)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*r(mu)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*r(mu)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      + 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      - 3/2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*s(mu)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*s(mu)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*q(mu)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*q(mu)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      - 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      + 3/2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*r(mu)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*r(mu)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*q(mu)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*q(mu)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      - 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      + 3/2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*s(mu)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*s(mu)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*r(mu)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*r(mu)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*q(mu)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*q(mu)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      - 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      + 3/2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,beta)*
      d_(gamma,delta)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,gamma)*
      d_(beta,delta)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*
      d_(gamma,delta)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,beta)*
      d_(gamma,delta)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,delta)*
      d_(beta,gamma)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*
      d_(beta,delta)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*
      d_(beta,gamma)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,gamma)*
      d_(beta,delta)*p(mu)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,delta)*
      d_(beta,gamma)*p(mu)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      - 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      + 3/4*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3;
   redefine ccnt "{`ccnt'+2}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),field6?{gluon,bgf}(u?,nu?,h?,fl6?),anchor(?args)) =
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 3/2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 3/2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      - 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 3/2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,delta)*d_(mu,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,mu)*d_(delta,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,mu)*d_(gamma,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,mu)*d_(delta,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,beta)*d_(gamma,nu)*d_(delta,mu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,delta)*d_(mu,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,gamma)*d_(beta,nu)*d_(delta,mu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,gamma)*d_(mu,nu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*
      d_(alpha,delta)*d_(beta,nu)*d_(gamma,mu)*g^4
      - 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 3/2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(col`ccnt',col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4;
   redefine ccnt "{`ccnt'+3}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),field6?{gluon,bgf}(u?,nu?,h?,fl6?),anchor(?args))) > 0) redefine dummy "0";
   .sort;
#enddo

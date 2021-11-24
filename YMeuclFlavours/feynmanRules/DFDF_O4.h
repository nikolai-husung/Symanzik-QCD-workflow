***** O(a^2) counterpart of the 4-0 gluon 0-4 bgf vertex *****
#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),anchor(?args)) =
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.r*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.s*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q.r*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q.s*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*p(beta)*p(delta)*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*p(delta)*r(beta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*p(delta)*s(beta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*q(delta)*r(beta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*q(delta)*s(beta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,gamma)*r(beta)*r(delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.r*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.s*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q.r*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q.s*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*p(beta)*p(gamma)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*p(gamma)*r(beta)*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*p(gamma)*s(beta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*q(gamma)*r(beta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*q(gamma)*s(beta)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(alpha,delta)*s(beta)*s(gamma)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*p(delta)*r(alpha)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*p(delta)*s(alpha)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*q(alpha)*q(delta)*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*q(delta)*r(alpha)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*q(delta)*s(alpha)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,gamma)*r(alpha)*r(delta)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*p(gamma)*r(alpha)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*p(gamma)*s(alpha)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*q(alpha)*q(gamma)*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*q(gamma)*r(alpha)*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*q(gamma)*s(alpha)*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*d_(beta,delta)*s(alpha)*s(gamma)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.q*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.s*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q.r*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r.s*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*p(gamma)*p(delta)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*p(delta)*q(gamma)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*p(delta)*s(gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*q(gamma)*q(delta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*q(gamma)*r(delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,beta)*r(delta)*s(gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.q*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*p.s*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*q.r*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*r.s*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*p(beta)*p(gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*p(beta)*q(gamma)*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*p(beta)*s(gamma)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*q(gamma)*r(beta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*r(beta)*s(gamma)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(alpha,delta)*s(beta)*s(gamma)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*p(delta)*q(alpha)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*p(delta)*s(alpha)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*q(alpha)*q(delta)*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*q(alpha)*r(delta)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*r(alpha)*r(delta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(beta,gamma)*r(delta)*s(alpha)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*p(beta)*q(alpha)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*p(beta)*s(alpha)*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*q(alpha)*r(beta)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*r(alpha)*r(beta)*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*r(beta)*s(alpha)*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*d_(gamma,delta)*s(alpha)*s(beta)*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.q*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*p.r*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*q.s*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*r.s*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*p(gamma)*p(delta)*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*p(gamma)*q(delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*p(gamma)*r(delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*q(gamma)*q(delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*q(delta)*s(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,beta)*r(delta)*s(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.q*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*p.r*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*q.s*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*r.s*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*p(beta)*p(delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*p(beta)*q(delta)*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*p(beta)*r(delta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*q(delta)*s(beta)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*r(beta)*r(delta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(alpha,gamma)*r(delta)*s(beta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*p(gamma)*q(alpha)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*p(gamma)*r(alpha)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*q(alpha)*q(gamma)*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*q(alpha)*s(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*r(alpha)*s(gamma)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(beta,delta)*s(alpha)*s(gamma)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*p(beta)*q(alpha)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*p(beta)*r(alpha)*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*q(alpha)*s(beta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*r(alpha)*r(beta)*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*r(alpha)*s(beta)*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*d_(gamma,delta)*s(alpha)*s(beta)*g^2;
   redefine ccnt "{`ccnt'+1}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(?args1),field2?{gluon,bgf}(?args2),field3?{gluon,bgf}(?args3),field4?{gluon,bgf}(?args4),anchor(?args5))) > 0) redefine dummy "0";
   .sort;
#enddo

***** O(a^2) counterpart of the 0-3 gluon 3-0 bgf vertex *****
id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),anchor(?args)) = (
   + 2*FC(b,c,d)*p(beta)*p(gamma)*q(alpha)*i_*g
   - 2*FC(b,c,d)*p(beta)*p(gamma)*r(alpha)*i_*g
   - 2*FC(b,c,d)*p(beta)*q(alpha)*q(gamma)*i_*g
   + 2*FC(b,c,d)*p(gamma)*r(alpha)*r(beta)*i_*g
   + 2*FC(b,c,d)*q(alpha)*q(gamma)*r(beta)*i_*g
   - 2*FC(b,c,d)*q(gamma)*r(alpha)*r(beta)*i_*g
   - 4*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p.q*i_*g
   - 2*FC(b,c,d)*d_(alpha,beta)*p(gamma)*p.r*i_*g
   + 4*FC(b,c,d)*d_(alpha,beta)*q(gamma)*p.q*i_*g
   + 2*FC(b,c,d)*d_(alpha,beta)*q(gamma)*q.r*i_*g
   + 2*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p.q*i_*g
   + 4*FC(b,c,d)*d_(alpha,gamma)*p(beta)*p.r*i_*g
   - 4*FC(b,c,d)*d_(alpha,gamma)*r(beta)*p.r*i_*g
   - 2*FC(b,c,d)*d_(alpha,gamma)*r(beta)*q.r*i_*g
   - 2*FC(b,c,d)*d_(beta,gamma)*q(alpha)*p.q*i_*g
   - 4*FC(b,c,d)*d_(beta,gamma)*q(alpha)*q.r*i_*g
   + 2*FC(b,c,d)*d_(beta,gamma)*r(alpha)*p.r*i_*g
   + 4*FC(b,c,d)*d_(beta,gamma)*r(alpha)*q.r*i_*g);


***** O(a^2) 2-gluon vertex *****
id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),anchor(?args)) =
   - 2*d_(alpha,beta)*d_(b,c)*p.q^2
   + 2*d_(b,c)*p(beta)*q(alpha)*p.q;

***** O(a^2) 5 gluon vertex *****
#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),anchor(?args)) = (
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      p(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      q(mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      r(mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      s(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      p(mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      q(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      r(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      s(mu)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      p(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      q(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      p(mu)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      p(mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      r(mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      s(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      p(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      q(mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      r(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      s(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      p(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      r(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      r(mu)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      p(mu)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      p(delta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      p(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      q(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      r(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      s(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      p(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      r(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      s(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      p(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      s(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      t(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      s(mu)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      p(mu)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      t(delta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      p(gamma)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      p(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      t(beta)*i_*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      q(delta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      r(mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      r(delta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      p(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      p(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      q(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      s(mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      s(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      r(mu)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      p(delta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      p(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      r(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      s(mu)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      p(gamma)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      p(beta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      t(beta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,delta)*
      s(gamma)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      s(beta)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*
      r(mu)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,beta)*d_(gamma,mu)*
      r(delta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,gamma)*d_(beta,delta)*
      q(mu)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(alpha,gamma)*d_(beta,mu)*
      q(delta)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,mu)*
      t(delta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      t(beta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(beta,gamma)*
      r(delta)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(alpha,mu)*d_(gamma,delta)*
      r(beta)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,beta)*d_(gamma,delta)*
      s(mu)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,beta)*d_(delta,mu)*
      s(gamma)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,delta)*d_(beta,gamma)*
      q(mu)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(alpha,delta)*d_(beta,mu)*
      q(gamma)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*d_(beta,mu)*d_(gamma,delta)*
      t(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(beta,delta)*
      s(mu)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,gamma)*d_(delta,mu)*
      s(beta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(beta,gamma)*
      r(mu)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(alpha,delta)*d_(gamma,mu)*
      r(beta)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,beta)*d_(gamma,mu)*
      t(delta)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,beta)*d_(delta,mu)*
      t(gamma)*i_*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,mu)*d_(beta,gamma)*
      q(delta)*i_*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(alpha,mu)*d_(beta,delta)*
      q(gamma)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      q(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      r(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      s(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,gamma)*d_(delta,mu)*
      t(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      q(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      r(alpha)*i_*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      s(alpha)*i_*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*d_(beta,delta)*d_(gamma,mu)*
      t(alpha)*i_*g^3);
   redefine ccnt "{`ccnt'+2}";
   .sort;
   if(match(vert(field1?{gluon,bgf}(?args1),field2?{gluon,bgf}(?args2),field3?{gluon,bgf}(?args3),field4?{gluon,bgf}(?args4),field5?{gluon,bgf}(?args5),anchor(?args6))) > 0) redefine dummy "0";
   .sort;
#enddo

#do dummy=1,1
   id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),field5?{gluon,bgf}(t?,mu?,f?,fl5?),field6?{gluon,bgf}(u?,nu?,h?,fl6?),anchor(?args)) =
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,c,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 2*FC(b,d,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 2*FC(b,e,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,h,col{`ccnt'+1})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,h,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(h,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      + 2*FC(b,f,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,h,col{`ccnt'+1})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      + 2*FC(b,h,col`ccnt')*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,col`ccnt',col{`ccnt'+2})*FC(e,f,col{`ccnt'+1})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,mu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,nu)*d_(gamma,delta)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,h,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,gamma)*d_(delta,mu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(h,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,nu)*
      d_(beta,delta)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,nu)*d_(gamma,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,h,col`ccnt')*d_(alpha,gamma)
      *d_(beta,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,e,col{`ccnt'+2})*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,f,col{`ccnt'+2})*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col`ccnt')*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col{`ccnt'+2})*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,gamma)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,mu)*
      d_(beta,delta)*d_(gamma,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,gamma)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,col{`ccnt'+1},col{`ccnt'+2})*d_(alpha,delta)
      *d_(beta,mu)*d_(gamma,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*d_(alpha,gamma)
      *d_(beta,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,h,col{`ccnt'+2})*FC(d,col{`ccnt'+1},col{`ccnt'+2})*FC(e,f,col`ccnt')*d_(alpha,gamma)
      *d_(beta,mu)*d_(delta,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col`ccnt')*FC(f,h,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,e,col{`ccnt'+2})*FC(f,h,col`ccnt')*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col`ccnt')*FC(e,h,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,f,col{`ccnt'+2})*FC(e,h,col`ccnt')*d_(alpha,beta)*
      d_(gamma,nu)*d_(delta,mu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col`ccnt')*FC(e,f,col{`ccnt'+2})*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*d_(alpha,beta)*
      d_(gamma,delta)*d_(mu,nu)*g^4
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,col{`ccnt'+1},col{`ccnt'+2})*FC(d,h,col{`ccnt'+2})*FC(e,f,col`ccnt')*d_(alpha,beta)*
      d_(gamma,mu)*d_(delta,nu)*g^4;
   redefine ccnt "{`ccnt'+3}";
   if(match(vert(field1?{gluon,bgf}(?args1),field2?{gluon,bgf}(?args2),field3?{gluon,bgf}(?args3),field4?{gluon,bgf}(?args4),field5?{gluon,bgf}(?args5),field6?{gluon,bgf}(?args6),anchor(?args7))) > 0) redefine dummy "0";
   .sort;
#enddo

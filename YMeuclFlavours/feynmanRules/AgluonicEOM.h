
#ifdef `singlet'
#define Q "quark";

id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 2*TC(b,cf1,cf2)*FL(fl1,spt0,fl2)*e_(r,gamma,kappahat,spt0)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + 2*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,spt0,fl2)*e_(gamma,delta,kappahat,spt0)*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - 2*e_(p,q,alpha,kappahat)*d_(b,c)*p(beta)*i_
   - 2*e_(p,q,alpha,kappahat)*d_(b,c)*q(beta)*i_
   + 2*e_(p,q,beta,kappahat)*d_(b,c)*p(alpha)*i_
   + 2*e_(p,q,beta,kappahat)*d_(b,c)*q(alpha)*i_
   - 2*e_(p,alpha,beta,kappahat)*d_(b,c)*p.q*i_
   - 2*e_(p,alpha,beta,kappahat)*d_(b,c)*q.q*i_
   + 2*e_(q,alpha,beta,kappahat)*d_(b,c)*p.p*i_
   + 2*e_(q,alpha,beta,kappahat)*d_(b,c)*p.q*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + 2*FC(b,c,d)*e_(p,q,alpha,kappahat)*d_(beta,gamma)*g
   + 2*FC(b,c,d)*e_(p,q,beta,kappahat)*d_(alpha,gamma)*g
   - 2*FC(b,c,d)*e_(p,r,alpha,kappahat)*d_(beta,gamma)*g
   - 2*FC(b,c,d)*e_(p,r,gamma,kappahat)*d_(alpha,beta)*g
   + 2*FC(b,c,d)*e_(p,alpha,beta,kappahat)*p(gamma)*g
   + 4*FC(b,c,d)*e_(p,alpha,beta,kappahat)*q(gamma)*g
   + 2*FC(b,c,d)*e_(p,alpha,beta,kappahat)*r(gamma)*g
   - 2*FC(b,c,d)*e_(p,alpha,gamma,kappahat)*p(beta)*g
   - 2*FC(b,c,d)*e_(p,alpha,gamma,kappahat)*q(beta)*g
   - 4*FC(b,c,d)*e_(p,alpha,gamma,kappahat)*r(beta)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappahat)*p(alpha)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappahat)*q(alpha)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappahat)*r(alpha)*g
   + 2*FC(b,c,d)*e_(q,r,beta,kappahat)*d_(alpha,gamma)*g
   + 2*FC(b,c,d)*e_(q,r,gamma,kappahat)*d_(alpha,beta)*g
   + 4*FC(b,c,d)*e_(q,alpha,beta,kappahat)*p(gamma)*g
   + 2*FC(b,c,d)*e_(q,alpha,beta,kappahat)*q(gamma)*g
   + 2*FC(b,c,d)*e_(q,alpha,beta,kappahat)*r(gamma)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappahat)*p(beta)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappahat)*q(beta)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappahat)*r(beta)*g
   + 2*FC(b,c,d)*e_(q,beta,gamma,kappahat)*p(alpha)*g
   + 2*FC(b,c,d)*e_(q,beta,gamma,kappahat)*q(alpha)*g
   + 4*FC(b,c,d)*e_(q,beta,gamma,kappahat)*r(alpha)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappahat)*p(gamma)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappahat)*q(gamma)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappahat)*r(gamma)*g
   - 4*FC(b,c,d)*e_(r,alpha,gamma,kappahat)*p(beta)*g
   - 2*FC(b,c,d)*e_(r,alpha,gamma,kappahat)*q(beta)*g
   - 2*FC(b,c,d)*e_(r,alpha,gamma,kappahat)*r(beta)*g
   + 2*FC(b,c,d)*e_(r,beta,gamma,kappahat)*p(alpha)*g
   + 4*FC(b,c,d)*e_(r,beta,gamma,kappahat)*q(alpha)*g
   + 2*FC(b,c,d)*e_(r,beta,gamma,kappahat)*r(alpha)*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.p*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.q*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*p.r*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*q.q*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*q.r*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappahat)*r.r*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,beta,kappahat)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,gamma,kappahat)*d_(beta,delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,delta,kappahat)*d_(beta,gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,gamma,kappahat)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,delta,kappahat)*d_(alpha,gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,gamma,delta,kappahat)*d_(alpha,beta)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*p(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*q(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*r(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappahat)*s(delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*p(gamma)*i_*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*q(gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*r(gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappahat)*s(gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*p(beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*q(beta)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*r(beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappahat)*s(beta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*p(alpha)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*q(alpha)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*r(alpha)*i_*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappahat)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)) =
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappahat)*d_(delta,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappahat)*d_(gamma,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappahat,sptp5)*d_(gamma,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,delta,kappahat)*d_(beta,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,kappahat,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,delta,kappahat,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(beta,gamma,delta,kappahat)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappahat,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,gamma,kappahat,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,delta,kappahat,sptp5)*d_(alpha,gamma)*g^3;
   redefine ccnt "{`ccnt'+2}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)))) redefine dummy "0";
   .sort;
#enddo

#endif



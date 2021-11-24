
#ifdef `singlet'
#define Q "quark";

id vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),src(?args)) =
   + 2*TC(b,cf1,cf2)*FL(fl1,spt0,fl2)*e_(r,gamma,kappa,spt0)*i_*g;


#do dummy=1,1
   id,once vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)) =
      + 2*FC(b,c,col`ccnt')*TC(col`ccnt',cf1,cf2)*FL(fl1,spt0,fl2)*e_(gamma,delta,kappa,spt0)*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(aquark(p?,spt1?,cf1?,fl1?),`Q'(q?,spt2?,cf2?,fl2?),field1?{gluon,bgf}(r?,gamma?,b?,fl5?),field2?{gluon,bgf}(s?,delta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - 2*e_(p,q,alpha,kappa)*d_(b,c)*p(beta)*i_
   - 2*e_(p,q,alpha,kappa)*d_(b,c)*q(beta)*i_
   + 2*e_(p,q,beta,kappa)*d_(b,c)*p(alpha)*i_
   + 2*e_(p,q,beta,kappa)*d_(b,c)*q(alpha)*i_
   - 2*e_(p,alpha,beta,kappa)*d_(b,c)*p.q*i_
   - 2*e_(p,alpha,beta,kappa)*d_(b,c)*q.q*i_
   + 2*e_(q,alpha,beta,kappa)*d_(b,c)*p.p*i_
   + 2*e_(q,alpha,beta,kappa)*d_(b,c)*p.q*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + 2*FC(b,c,d)*e_(p,q,alpha,kappa)*d_(beta,gamma)*g
   + 2*FC(b,c,d)*e_(p,q,beta,kappa)*d_(alpha,gamma)*g
   - 2*FC(b,c,d)*e_(p,r,alpha,kappa)*d_(beta,gamma)*g
   - 2*FC(b,c,d)*e_(p,r,gamma,kappa)*d_(alpha,beta)*g
   + 2*FC(b,c,d)*e_(p,alpha,beta,kappa)*p(gamma)*g
   + 4*FC(b,c,d)*e_(p,alpha,beta,kappa)*q(gamma)*g
   + 2*FC(b,c,d)*e_(p,alpha,beta,kappa)*r(gamma)*g
   - 2*FC(b,c,d)*e_(p,alpha,gamma,kappa)*p(beta)*g
   - 2*FC(b,c,d)*e_(p,alpha,gamma,kappa)*q(beta)*g
   - 4*FC(b,c,d)*e_(p,alpha,gamma,kappa)*r(beta)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappa)*p(alpha)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappa)*q(alpha)*g
   + 2*FC(b,c,d)*e_(p,beta,gamma,kappa)*r(alpha)*g
   + 2*FC(b,c,d)*e_(q,r,beta,kappa)*d_(alpha,gamma)*g
   + 2*FC(b,c,d)*e_(q,r,gamma,kappa)*d_(alpha,beta)*g
   + 4*FC(b,c,d)*e_(q,alpha,beta,kappa)*p(gamma)*g
   + 2*FC(b,c,d)*e_(q,alpha,beta,kappa)*q(gamma)*g
   + 2*FC(b,c,d)*e_(q,alpha,beta,kappa)*r(gamma)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappa)*p(beta)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappa)*q(beta)*g
   - 2*FC(b,c,d)*e_(q,alpha,gamma,kappa)*r(beta)*g
   + 2*FC(b,c,d)*e_(q,beta,gamma,kappa)*p(alpha)*g
   + 2*FC(b,c,d)*e_(q,beta,gamma,kappa)*q(alpha)*g
   + 4*FC(b,c,d)*e_(q,beta,gamma,kappa)*r(alpha)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappa)*p(gamma)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappa)*q(gamma)*g
   + 2*FC(b,c,d)*e_(r,alpha,beta,kappa)*r(gamma)*g
   - 4*FC(b,c,d)*e_(r,alpha,gamma,kappa)*p(beta)*g
   - 2*FC(b,c,d)*e_(r,alpha,gamma,kappa)*q(beta)*g
   - 2*FC(b,c,d)*e_(r,alpha,gamma,kappa)*r(beta)*g
   + 2*FC(b,c,d)*e_(r,beta,gamma,kappa)*p(alpha)*g
   + 4*FC(b,c,d)*e_(r,beta,gamma,kappa)*q(alpha)*g
   + 2*FC(b,c,d)*e_(r,beta,gamma,kappa)*r(alpha)*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.p*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.q*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.r*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*q.q*g
   - 4*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*q.r*g
   - 2*FC(b,c,d)*e_(alpha,beta,gamma,kappa)*r.r*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      - 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + 4*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      + 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      - 4*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      - 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      + 4*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)) =
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      + 2*FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - 2*FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + 2*FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3;
   redefine ccnt "{`ccnt'+2}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)))) redefine dummy "0";
   .sort;
#enddo

#endif



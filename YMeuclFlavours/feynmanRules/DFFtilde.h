
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - e_(p,q,alpha,kappa)*d_(b,c)*q(beta)*i_
   + e_(p,q,beta,kappa)*d_(b,c)*p(alpha)*i_
   - e_(p,alpha,beta,kappa)*d_(b,c)*q.q*i_
   + e_(q,alpha,beta,kappa)*d_(b,c)*p.p*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + FC(b,c,d)*e_(p,q,alpha,kappa)*d_(beta,gamma)*g
   + FC(b,c,d)*e_(p,q,beta,kappa)*d_(alpha,gamma)*g
   - FC(b,c,d)*e_(p,r,alpha,kappa)*d_(beta,gamma)*g
   - FC(b,c,d)*e_(p,r,gamma,kappa)*d_(alpha,beta)*g
   + 2*FC(b,c,d)*e_(p,alpha,beta,kappa)*q(gamma)*g
   + FC(b,c,d)*e_(p,alpha,beta,kappa)*r(gamma)*g
   - FC(b,c,d)*e_(p,alpha,gamma,kappa)*q(beta)*g
   - 2*FC(b,c,d)*e_(p,alpha,gamma,kappa)*r(beta)*g
   + FC(b,c,d)*e_(p,beta,gamma,kappa)*p(alpha)*g
   + FC(b,c,d)*e_(q,r,beta,kappa)*d_(alpha,gamma)*g
   + FC(b,c,d)*e_(q,r,gamma,kappa)*d_(alpha,beta)*g
   + 2*FC(b,c,d)*e_(q,alpha,beta,kappa)*p(gamma)*g
   + FC(b,c,d)*e_(q,alpha,beta,kappa)*r(gamma)*g
   - FC(b,c,d)*e_(q,alpha,gamma,kappa)*q(beta)*g
   + FC(b,c,d)*e_(q,beta,gamma,kappa)*p(alpha)*g
   + 2*FC(b,c,d)*e_(q,beta,gamma,kappa)*r(alpha)*g
   + FC(b,c,d)*e_(r,alpha,beta,kappa)*r(gamma)*g
   - 2*FC(b,c,d)*e_(r,alpha,gamma,kappa)*p(beta)*g
   - FC(b,c,d)*e_(r,alpha,gamma,kappa)*q(beta)*g
   + FC(b,c,d)*e_(r,beta,gamma,kappa)*p(alpha)*g
   + 2*FC(b,c,d)*e_(r,beta,gamma,kappa)*q(alpha)*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*p.p*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*q.q*g
   - FC(b,c,d)*e_(alpha,beta,gamma,kappa)*r.r*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*r(delta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,beta,delta,kappa)*s(gamma)*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*p(beta)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(beta,gamma,delta,kappa)*q(alpha)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*q(delta)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*p(gamma)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(alpha,gamma,delta,kappa)*s(beta)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(beta,gamma,delta,kappa)*r(alpha)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,beta,kappa)*d_(gamma,delta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,gamma,kappa)*d_(beta,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,delta,kappa)*d_(beta,gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,gamma,kappa)*d_(alpha,delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,delta,kappa)*d_(alpha,gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,gamma,delta,kappa)*d_(alpha,beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*p(delta)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,gamma,kappa)*s(delta)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*q(gamma)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,beta,delta,kappa)*r(gamma)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*q(beta)*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(alpha,gamma,delta,kappa)*r(beta)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*p(alpha)*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(beta,gamma,delta,kappa)*s(alpha)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)) =
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,gamma,kappa)*d_(delta,sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,delta,kappa)*d_(gamma,sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,beta,kappa,sptp5)*d_(gamma,delta)*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,delta,kappa)*d_(beta,sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,gamma,kappa,sptp5)*d_(beta,delta)*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(alpha,delta,kappa,sptp5)*d_(beta,gamma)*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(beta,gamma,delta,kappa)*d_(alpha,sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*e_(gamma,delta,kappa,sptp5)*d_(alpha,beta)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,gamma,kappa,sptp5)*d_(alpha,delta)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*e_(beta,delta,kappa,sptp5)*d_(alpha,gamma)*g^3;
   redefine ccnt "{`ccnt'+2}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


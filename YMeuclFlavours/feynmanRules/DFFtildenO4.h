
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif

#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
      + DO4v(alpha,kappa,spt`sptcnt',p)*e_(p,q,beta,spt`sptcnt')*d_(b,c)*i_
      - DO4v(beta,kappa,spt`sptcnt',q)*e_(p,q,alpha,spt`sptcnt')*d_(b,c)*i_
      + DO4v(kappa,spt`sptcnt',p,p)*e_(q,alpha,beta,spt`sptcnt')*d_(b,c)*i_
      - DO4v(kappa,spt`sptcnt',q,q)*e_(p,alpha,beta,spt`sptcnt')*d_(b,c)*i_;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo
      


#do dummy=1,1
   id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
      - FC(b,c,d)*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(p,r,gamma,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(q,r,gamma,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(p,q,beta,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(q,r,beta,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(p,beta,gamma,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(q,beta,gamma,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(r,beta,gamma,spt`sptcnt')*g
      + 2*FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',q)*e_(r,beta,gamma,spt`sptcnt')*g
      + 2*FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',r)*e_(q,beta,gamma,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(p,q,alpha,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(p,r,alpha,spt`sptcnt')*g
      - 2*FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',p)*e_(r,alpha,gamma,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(p,alpha,gamma,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(q,alpha,gamma,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(r,alpha,gamma,spt`sptcnt')*g
      - 2*FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',r)*e_(p,alpha,gamma,spt`sptcnt')*g
      + 2*FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',p)*e_(q,alpha,beta,spt`sptcnt')*g
      + 2*FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',q)*e_(p,alpha,beta,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(p,alpha,beta,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(q,alpha,beta,spt`sptcnt')*g
      + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(r,alpha,beta,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(kappa,spt`sptcnt',p,p)*e_(alpha,beta,gamma,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(kappa,spt`sptcnt',q,q)*e_(alpha,beta,gamma,spt`sptcnt')*g
      - FC(b,c,d)*DO4v(kappa,spt`sptcnt',r,r)*e_(alpha,beta,gamma,spt`sptcnt')*g;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(p,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(q,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(q,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(s,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(q,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(r,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',q)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(p,alpha,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(s,alpha,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(p,alpha,gamma,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(r,alpha,gamma,spt`sptcnt')*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',p)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(r,alpha,beta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(s,alpha,beta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',s)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - 2*FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',r)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(r,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(s,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(p,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(r,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(q,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(r,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',r)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(p,alpha,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(s,alpha,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(q,alpha,gamma,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(s,alpha,gamma,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',s)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(p,alpha,beta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(q,alpha,beta,spt`sptcnt')*i_*g^2
      - 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',p)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + 2*FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',q)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(r,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(s,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(q,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(s,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(p,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(s,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',s)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(q,alpha,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(r,alpha,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(p,alpha,gamma,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,delta,kappa,spt`sptcnt')*e_(r,alpha,gamma,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',r)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(p,alpha,beta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(q,alpha,beta,spt`sptcnt')*i_*g^2
      + 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',q)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - 2*FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',p)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2;
   redefine sptcnt "{`sptcnt'+1}";
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)) =
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      - FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      + FC(b,c,col`ccnt')*FC(d,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      - FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      - FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      + FC(b,c,col`ccnt')*FC(d,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      - FC(b,d,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      - FC(b,d,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      - FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,d,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(e,f,col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      + FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      - FC(b,e,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(f,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      - FC(b,e,col`ccnt')*FC(c,f,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      - FC(b,e,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,f,col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,d,col{`ccnt'+1})*FC(e,col`ccnt',col{`ccnt'+1})*DO4v(delta,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,gamma,spt`sptcnt')*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,delta,kappa,spt`sptcnt')*e_(alpha,beta,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,e,col{`ccnt'+1})*FC(d,col`ccnt',col{`ccnt'+1})*DO4v(gamma,kappa,spt`sptcnt',sptp5)*e_(alpha,beta,delta,spt`sptcnt')*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,gamma,kappa,spt`sptcnt')*e_(alpha,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,delta,kappa,spt`sptcnt')*e_(alpha,gamma,spt`sptcnt',sptp5)*g^3
      - FC(b,f,col`ccnt')*FC(c,col`ccnt',col{`ccnt'+1})*FC(d,e,col{`ccnt'+1})*DO4v(beta,kappa,spt`sptcnt',sptp5)*e_(alpha,gamma,delta,spt`sptcnt')*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col`ccnt')*FC(e,f,col{`ccnt'+1})*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,d,col{`ccnt'+1})*FC(e,f,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col`ccnt')*FC(d,f,col{`ccnt'+1})*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,e,col{`ccnt'+1})*FC(d,f,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,beta,kappa,spt`sptcnt')*e_(gamma,delta,spt`sptcnt',sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col`ccnt')*FC(d,e,col{`ccnt'+1})*DO4v(alpha,kappa,spt`sptcnt',sptp5)*e_(beta,gamma,delta,spt`sptcnt')*g^3
      + FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,gamma,kappa,spt`sptcnt')*e_(beta,delta,spt`sptcnt',sptp5)*g^3
      - FC(b,col`ccnt',col{`ccnt'+1})*FC(c,f,col{`ccnt'+1})*FC(d,e,col`ccnt')*DO4v(alpha,delta,kappa,spt`sptcnt')*e_(beta,gamma,spt`sptcnt',sptp5)*g^3;
   redefine sptcnt "{`sptcnt'+1}";
   redefine ccnt "{`ccnt'+2}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),field5?{gluon,bgf}(t?,sptp5,f?,fl9?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


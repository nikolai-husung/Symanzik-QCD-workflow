
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),src(?args)) =
   - e_(p,q,alpha,beta)*d_(b,c)*p(kappahat)*i_
   - e_(p,q,alpha,beta)*d_(b,c)*q(kappahat)*i_;


id vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),src(?args)) =
   + FC(b,c,d)*e_(p,alpha,beta,gamma)*p(kappahat)*g
   + FC(b,c,d)*e_(p,alpha,beta,gamma)*q(kappahat)*g
   + FC(b,c,d)*e_(p,alpha,beta,gamma)*r(kappahat)*g
   + FC(b,c,d)*e_(q,alpha,beta,gamma)*p(kappahat)*g
   + FC(b,c,d)*e_(q,alpha,beta,gamma)*q(kappahat)*g
   + FC(b,c,d)*e_(q,alpha,beta,gamma)*r(kappahat)*g
   + FC(b,c,d)*e_(r,alpha,beta,gamma)*p(kappahat)*g
   + FC(b,c,d)*e_(r,alpha,beta,gamma)*q(kappahat)*g
   + FC(b,c,d)*e_(r,alpha,beta,gamma)*r(kappahat)*g;


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)) =
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(p,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(q,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(r,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*e_(s,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(p,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(q,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(r,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*e_(s,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(p,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(q,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(r,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,alpha,beta,gamma)*d_(delta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,alpha,beta,delta)*d_(gamma,kappahat)*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,alpha,gamma,delta)*d_(beta,kappahat)*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*e_(s,beta,gamma,delta)*d_(alpha,kappahat)*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl5?),field2?{gluon,bgf}(q?,beta?,c?,fl6?),field3?{gluon,bgf}(r?,gamma?,d?,fl7?),field4?{gluon,bgf}(s?,delta?,e?,fl8?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


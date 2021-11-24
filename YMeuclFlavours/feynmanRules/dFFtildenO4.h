
#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),src(?args)) =
      + DO4v(alpha,kappa,spt`sptcnt',p)*e_(p,q,beta,spt`sptcnt')*d_(b,c)*i_
      + DO4v(alpha,kappa,spt`sptcnt',q)*e_(p,q,beta,spt`sptcnt')*d_(b,c)*i_
      - DO4v(beta,kappa,spt`sptcnt',p)*e_(p,q,alpha,spt`sptcnt')*d_(b,c)*i_
      - DO4v(beta,kappa,spt`sptcnt',q)*e_(p,q,alpha,spt`sptcnt')*d_(b,c)*i_
      + DO4v(kappa,spt`sptcnt',p,p)*e_(q,alpha,beta,spt`sptcnt')*d_(b,c)*i_
      - DO4v(kappa,spt`sptcnt',p,q)*e_(p,alpha,beta,spt`sptcnt')*d_(b,c)*i_
      + DO4v(kappa,spt`sptcnt',p,q)*e_(q,alpha,beta,spt`sptcnt')*d_(b,c)*i_
      - DO4v(kappa,spt`sptcnt',q,q)*e_(p,alpha,beta,spt`sptcnt')*d_(b,c)*i_;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),src(?args)))) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),src(?args)) = 
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(p,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(q,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',p)*e_(r,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',q)*e_(p,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',q)*e_(q,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',q)*e_(r,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',r)*e_(p,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',r)*e_(q,beta,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(alpha,kappa,spt`sptcnt',r)*e_(r,beta,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',p)*e_(p,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',p)*e_(q,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',p)*e_(r,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(p,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(q,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',q)*e_(r,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',r)*e_(p,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',r)*e_(q,alpha,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(beta,kappa,spt`sptcnt',r)*e_(r,alpha,gamma,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',p)*e_(p,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',p)*e_(q,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',p)*e_(r,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',q)*e_(p,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',q)*e_(q,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',q)*e_(r,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(p,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(q,alpha,beta,spt`sptcnt')*g
   + FC(b,c,d)*DO4v(gamma,kappa,spt`sptcnt',r)*e_(r,alpha,beta,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(kappa,spt`sptcnt',p,p)*e_(alpha,beta,gamma,spt`sptcnt')*g
   - 2*FC(b,c,d)*DO4v(kappa,spt`sptcnt',p,q)*e_(alpha,beta,gamma,spt`sptcnt')*g
   - 2*FC(b,c,d)*DO4v(kappa,spt`sptcnt',p,r)*e_(alpha,beta,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(kappa,spt`sptcnt',q,q)*e_(alpha,beta,gamma,spt`sptcnt')*g
   - 2*FC(b,c,d)*DO4v(kappa,spt`sptcnt',q,r)*e_(alpha,beta,gamma,spt`sptcnt')*g
   - FC(b,c,d)*DO4v(kappa,spt`sptcnt',r,r)*e_(alpha,beta,gamma,spt`sptcnt')*g;
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),src(?args)))) redefine dummy "0";
   .sort;
#enddo
   
#do dummy=1,1
   id,once vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)) = 
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',q)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',r)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',s)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',p)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',r)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',s)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',p)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',q)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',s)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',p)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',q)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',r)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,c,col`ccnt')*FC(d,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',q)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',r)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',s)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',p)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',r)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',s)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',p)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',q)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      - FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',s)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',p)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',q)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',r)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,d,col`ccnt')*FC(c,e,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,gamma,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',p)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',q)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',r)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(alpha,kappa,spt`sptcnt',s)*e_(beta,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',p)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',q)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',r)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(beta,kappa,spt`sptcnt',s)*e_(alpha,gamma,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',p)*e_(alpha,beta,delta,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',q)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',r)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      + FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(gamma,kappa,spt`sptcnt',s)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',p)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',q)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',r)*e_(alpha,beta,,spt`sptcnt')*i_*g^2
      - FC(b,e,col`ccnt')*FC(c,d,col`ccnt')*DO4v(delta,kappa,spt`sptcnt',s)*e_(alpha,beta,,spt`sptcnt')*i_*g^2;
   redefine ccnt "{`ccnt'+1}";
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{gluon,bgf}(p?,alpha?,b?,fl1?),field2?{gluon,bgf}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),field4?{gluon,bgf}(s?,delta?,e?,fl4?),src(?args)))>0) redefine dummy "0";
   .sort;
#enddo

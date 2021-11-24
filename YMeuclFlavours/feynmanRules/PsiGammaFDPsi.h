id vert(field1?{aquark,aquark2}(p?,alpha?,cf0?,fl0?),field2?{quark,quark2}(q?,beta?,cf1?,fl1?),field3?{gluon,bgf}(r?,gamma?,col?,fl?),anchor(?args)) = (
   - FL(fl0,r,fl1)*q(gamma)
   + FL(fl0,gamma,fl1)*q.r)*g*TC(col,cf0,cf1)*OPF(field2(fl1));


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf0?,fl0?),field2?{quark,quark2}(q?,beta?,cf1?,fl1?),field3?{gluon,bgf}(r?,gamma?,col0?,fl2?),field4?{gluon,bgf}(s?,delta?,col1?,fl3?),anchor(?args)) = (
      + FL(fl0,r,fl1)*TC(col0,cf0,cf`cfcnt')*TC(col1,cf`cfcnt',cf1)*d_(gamma,delta)
      + FL(fl0,s,fl1)*TC(col0,cf`cfcnt',cf1)*TC(col1,cf0,cf`cfcnt')*d_(gamma,delta)
      + FL(fl0,gamma,fl1)*FC(col0,col1,col`ccnt')*TC(col`ccnt',cf0,cf1)*q(delta)
      - FL(fl0,gamma,fl1)*TC(col0,cf0,cf`cfcnt')*TC(col1,cf`cfcnt',cf1)*r(delta)
      - FL(fl0,delta,fl1)*FC(col0,col1,col`ccnt')*TC(col`ccnt',cf0,cf1)*q(gamma)
      - FL(fl0,delta,fl1)*TC(col0,cf`cfcnt',cf1)*TC(col1,cf0,cf`cfcnt')*s(gamma))*i_*g^2*OPF(field2(fl1));
   redefine ccnt "{`ccnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf0?,fl0?),field2?{quark,quark2}(q?,beta?,cf1?,fl1?),field3?{gluon,bgf}(r?,gamma?,col0?,fl2?),field4?{gluon,bgf}(s?,delta?,col1?,fl3?),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf0?,fl0?),field2?{quark,quark2}(q?,beta?,cf1?,fl1?),field3?{gluon,bgf}(r?,gamma?,col0?,fl2?),field4?{gluon,bgf}(s?,delta?,col1?,fl3?),field5?{gluon,bgf}(t?,mu?,col2?,fl4?),anchor(?args)) = (
      + FL(fl0,gamma,fl1)*FC(col0,col1,col`ccnt')*TC(col2,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(delta,mu)
      + FL(fl0,gamma,fl1)*FC(col0,col2,col`ccnt')*TC(col1,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(delta,mu)
      - FL(fl0,delta,fl1)*FC(col0,col1,col`ccnt')*TC(col2,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(gamma,mu)
      + FL(fl0,delta,fl1)*FC(col1,col2,col`ccnt')*TC(col0,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(gamma,mu)
      - FL(fl0,mu,fl1)*FC(col0,col2,col`ccnt')*TC(col1,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(gamma,delta)
      - FL(fl0,mu,fl1)*FC(col1,col2,col`ccnt')*TC(col0,cf`cfcnt',cf1)*TC(col`ccnt',cf0,cf`cfcnt')*d_(gamma,delta))*g^3*OPF(field2(fl1));
   redefine ccnt "{`ccnt'+1}";
   redefine cfcnt "{`cfcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf0?,fl0?),field2?{quark,quark2}(q?,beta?,cf1?,fl1?),field3?{gluon,bgf}(r?,gamma?,col0?,fl2?),field4?{gluon,bgf}(s?,delta?,col1?,fl3?),field5?{gluon,bgf}(t?,mu?,col2?,fl4?),anchor(?args)))>0) redefine dummy "0";
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)) =
      - DO4v(spt`sptcnt',q,q,q)*i_*d_(cf1,cf2)*FL(fl1,spt`sptcnt',fl2)*OPF(field2(fl1));
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),anchor(?args)) = (
      - 3*TC(b,cf1,cf2)*DO4v(gamma,spt`sptcnt',q,q)
      - 3*TC(b,cf1,cf2)*DO4v(gamma,spt`sptcnt',q,r)
      - TC(b,cf1,cf2)*DO4v(gamma,spt`sptcnt',r,r)
   )*g*FL(fl1,spt`sptcnt',fl2)*OPF(field2(fl1));

   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,b?,fl1?),field2?{quark,quark2}(q?,beta?,c?,fl2?),field3?{gluon,bgf}(r?,gamma?,d?,fl3?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo


#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),anchor(?args)) = (
      + 3*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,spt`sptcnt',q)
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,spt`sptcnt',r)
      + 2*TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf2)*DO4v(gamma,delta,spt`sptcnt',s)
      + 3*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,spt`sptcnt',q)
      + 2*TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,spt`sptcnt',r)
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf`cfcnt')*DO4v(gamma,delta,spt`sptcnt',s)
   )*i_*g^2*FL(fl1,spt`sptcnt',fl2)*OPF(field2(fl1));

   redefine cfcnt "{`cfcnt'+1}";
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

#do dummy=1,1
   id,once vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),field5?{gluon,bgf}(t?,mu?,d?,fl5?),anchor(?args)) = (
      + TC(b,cf1,cf`cfcnt')*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf`cfcnt',cf{`cfcnt'+1})
      + TC(b,cf1,cf`cfcnt')*TC(c,cf`cfcnt',cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf2)
      + TC(b,cf`cfcnt',cf2)*TC(c,cf1,cf{`cfcnt'+1})*TC(d,cf{`cfcnt'+1},cf`cfcnt')
      + TC(b,cf`cfcnt',cf2)*TC(c,cf{`cfcnt'+1},cf`cfcnt')*TC(d,cf1,cf{`cfcnt'+1})
      + TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf1,cf`cfcnt')*TC(d,cf{`cfcnt'+1},cf2)
      + TC(b,cf`cfcnt',cf{`cfcnt'+1})*TC(c,cf{`cfcnt'+1},cf2)*TC(d,cf1,cf`cfcnt')
   )*g^3*FL(fl1,spt`sptcnt',fl2)*DO4v(gamma,delta,mu,spt`sptcnt')*OPF(field2(fl1));

   redefine cfcnt "{`cfcnt'+2}";
   redefine sptcnt "{`sptcnt'+1}";
   if(match(vert(field1?{aquark,aquark2}(p?,alpha?,cf1?,fl1?),field2?{quark,quark2}(q?,beta?,cf2?,fl2?),field3?{gluon,bgf}(r?,gamma?,b?,fl3?),field4?{gluon,bgf}(s?,delta?,c?,fl4?),field5?{gluon,bgf}(t?,mu?,d?,fl5?),anchor(?args)))>0);
      redefine dummy "0";
   endif;
   .sort;
#enddo

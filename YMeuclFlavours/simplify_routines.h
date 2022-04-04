CTensor GAMMA,GAMMA5,GId,LC;
NFunction Test1,Test2,Test3;
#procedure handleGammas(fline,p,q,psl)
repeat;
id g_(`fline',mu?,`p') = 2*`p'(mu)*gi_(`fline')-g_(`fline',`p',mu);
id g_(`fline',`q',mu?) = 2*`q'(mu)*gi_(`fline')-g_(`fline',mu,`q');
id g_(`fline',imp?,`p') = 2*`p'.imp*gi_(`fline')-g_(`fline',`p',imp);
id g_(`fline',`q',imp?) = 2*`q'.imp*gi_(`fline')-g_(`fline',imp,`q');
id g_(fl?,spt?,spt?) = 4*gi_(fl);
id g_(fl?,imp?,imp?) = imp.imp*gi_(fl);
endrepeat;
id g_(`fline',5_,`p') = -`psl'*g5_(`fline');
id g_(`fline',`p') =  `psl'*gi_(`fline');
id g_(`fline',`q') = -`psl'*gi_(`fline');

#endprocedure

#procedure project2Clifford(fline)
multiply (
   + gi_(`fline')
   + g5_(`fline')*GAMMA5(`fline')
   + g_(`fline',sptt`sptcnt')*GAMMA(`fline',sptt`sptcnt')
   - g_(`fline',5_,sptt`sptcnt')*GAMMA5(`fline',sptt`sptcnt')
   - (g_(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-g_(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))*(GAMMA(`fline',sptt`sptcnt',sptt{`sptcnt'+1})-GAMMA(`fline',sptt{`sptcnt'+1},sptt`sptcnt'))/4
   )/4;
trace4 `fline';
redefine sptcnt "{`sptcnt'+2}";
.sort;

id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,spt4?) = d_(spt3,spt4);
id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,spt3?,imp?) = imp(spt3);
id GAMMA(fl1?,spt1?,spt2?)*DO4v(spt1?,spt2?,imp1?,imp2?) = imp1.imp2;
#endprocedure

#procedure handleGammasL(p,np)
repeat;
id LC?{GAMMA,GAMMA5}(fl?,?args,imp?!{`np'},`p',?args2) = 2*imp.`p'*LC(fl,?args,?args2)-LC(fl,?args,`p',imp,?args2);
id LC?{GAMMA,GAMMA5}(fl?,?args,spt?,`p',?args2) = 2*`p'(spt)*LC(fl,?args,?args2)-LC(fl,?args,`p',spt,?args2);
endrepeat;
#endprocedure

#procedure handleGammasR(p,np)
repeat;
id LC?{GAMMA,GAMMA5}(fl?,?args,`p',imp?!{`np'},?args2) = 2*imp.`p'*LC(fl,?args,?args2)-LC(fl,?args,imp,`p',?args2);
id LC?{GAMMA,GAMMA5}(fl?,?args,`p',spt?,?args2) = 2*`p'(spt)*LC(fl,?args,?args2)-LC(fl,?args,spt,`p',?args2);
endrepeat;
id GAMMA(fl?) = 1;
#endprocedure

#procedure toFline(fline)
.sort;
id gi_(fl?) = 1;
id g_(`fline',spt?) = Test2(spt);
id g5_(`fline') = GAMMA5(`fline');
chainin Test2;
id Test2(?args) = GAMMA(`fline',?args);
#endprocedure

#procedure dropMulti(fline)
id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id DO4v(spt1?,spt2?,spt3?,spt4?)*e_(spt1?,spt2?,spt5?,spt6?) = 0;
repeat;
   id,once DO4v(spt1?,spt2?,spt3?,spt4?)*GAMMA(`fline',?args1,spt1?,?args,spt2?,?args2) =
      (-1)^(nargs_(?args)+1)*(2*DO4v(spt1,spt2,spt3,spt4)*Test2(?args1,spt1)*distrib_(-2,1,Test3,Test1,?args)*Test2(spt2,?args2)-d_(spt3,spt4)*GAMMA(`fline',?args1,?args,?args2));
   id Test2(?args1)*Test3(?args)*Test1(spt?)*Test2(spt2?,?args2) = d_(spt,spt2)*GAMMA(`fline',?args1,?args,?args2);
   id,once GAMMA(`fline',?args1,imp?,?args,imp?,?args2) =
      (-1)^(nargs_(?args)+1)*(2*Test2(?args1)*distrib_(-2,1,Test3,Test1,?args)*Test2(imp,?args2)-imp.imp*GAMMA(`fline',?args1,?args,?args2));
   id Test2(?args1)*Test3(?args)*Test1(spt?)*Test2(imp?,?args2) = imp(spt)*GAMMA(`fline',?args1,imp,?args,?args2);
   id,once GAMMA(`fline',?args1,spt?,?args,spt?,?args2) =
      (-1)^(nargs_(?args)+1)*(2*Test2(?args1)*distrib_(-2,1,Test3,Test1,?args)*Test2(spt,?args2)-4*GAMMA(`fline',?args1,?args,?args2));
   id Test2(?args1)*Test3(?args)*Test1(spt?)*Test2(spt2?,?args2) = d_(spt,spt2)*GAMMA(`fline',?args1,spt2,?args,?args2);
endrepeat;
id DO4v(spt?,spt?,spt1?,spt2?) = d_(spt1,spt2);
id GAMMA(fl?) = 1;
#endprocedure



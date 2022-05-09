# Copyright (c) 2022 Nikolai Husung
#
# This software is distributed under the terms of the MIT License

import os,sys,re

if len(sys.argv)==1:
   raise ValueError("Missing name of operator.")
name = sys.argv[1]

os.system("form -D op=%s feynmanRulesAuto"%name)


fid = open("temp.h","r")
rules = fid.read()
fid.close()

v = rules.split("vert(")
signs = [v[0].replace(" ","")]
fields = []
rules = []
for p in v[1:]:
   f,r = p.replace("\n","").replace(" ","").split("))*(",1)
   
   f = (f.replace("Psibar","aquark").replace("Psi","`Q'")+"),anchor(?args)")
   for m in ["p","q","r","s","t","u","alpha","beta","delta","gamma","mu","nu"]   + ["cf%i"%i for i in range(1,7)]:
      f = f.replace(m+",",m+"?,")
   for m in ["fl%i"%i for i in range(1,7)]:
      f = f.replace(m,m+"?")
   # start at 5 to include up to 4 preceeding fermion fields - numbers do not matter
   i=5
   for m in ["b","c","d","e","f","h"]:
      f = f.replace(m+")",m+"?"+",fl%i?)"%i)
      i+=1
   i=1
   for m in ["p","q","r","s","t","u"]:
      f = f.replace(m+"?,cf",m+"?,spt%i?,cf"%i)
      i+=1
      
   As = f.split("A")
   fld = As[0]
   i=1
   for A in As[1:]:
      fld += "field%i?{gluon,bgf}"%i + As[i]
      i+=1
      
   fields.append(fld)
   if r[-1]!=";":
      signs.append(r[-1])
   rules.append(r[:-2])
   
assert len(list(filter(lambda x: x=="-", signs)))==0, "There is an unexpected overall negative sign..."

fid = open(name+".h","w")
fid.write("""
#ifdef `singlet'
#define Q "quark";
#else
#define Q "quark2";
#endif\n\n""")
for f,r in zip(fields,rules):
   if "?" in r:
      fid.write("""
#do dummy=1,1
   id,once vert(%s) ="""%f)
      for term in re.findall(r'[+-]{0,1}[a-zA-Z0-9*()_,?^/.]*', r):
         if len(term)==0: continue
         if term[0] in "+-":
            fid.write("\n      %s %s"%(term[0],term[1:].replace("Qauto","`Q'")))
         else:
            fid.write("\n      + %s"%(term.replace("Qauto","`Q'")))
      fid.write(""";
   if(match(vert(%s))) redefine dummy "0";
   .sort;
#enddo"""%f)
   else:
      fid.write("""
id vert(%s) ="""%f)
      for term in re.findall(r'[+-]{0,1}[a-zA-Z0-9*()_,?^/.]*', r):
         if len(term)==0: continue
         if term[0] in "+-":
            fid.write("\n   %s %s"%(term[0],term[1:].replace("Qauto","`Q'")))
         else:
            fid.write("\n   + %s"%(term.replace("Qauto","`Q'")))
      fid.write(";")
   fid.write("\n\n")
fid.close()

os.remove("temp.h")

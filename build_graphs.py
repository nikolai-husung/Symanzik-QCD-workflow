import sys,os
from string import ascii_letters

MODEL = sys.argv[1]

FIELDS = sys.argv[2]
FLAVOUR_SINGLET = not FIELDS.endswith("n")
if not FLAVOUR_SINGLET:
   FIELDS = FIELDS[:-1]


def a_quark():
   i = 0
   while True:
      yield ("aquark","quark")[i]
      i = (i+1)%2
a_quark = a_quark()

ifields = ""
ofields = ""

# intrduce flavour and operator counters
fcount = 0
ocount = 0

lf = None
for l in FIELDS:
   if l=="A":
      ifields += ",gluon"
      lf = "A"   
   elif l=="B":
      ifields += ",bgf"
      lf = "B"
   elif l=="F":
      ifields += ","+next(a_quark)
      lf = "F"
      fcount += 1
      if fcount>1:
         ifields += str(fcount)
   elif l=="O":
      ofields += ",anchor"
      lf = "O"
      ocount += 1
      if ocount>1:
         ofields += str(ocount)
   elif l=="P":
      ofields += ",src"
      lf = "P"
   else:
      n = int(l)
      if lf == "F":
         if fcount>1:
            for fl in range(n-1):
               ifields += ",%s%i"%(next(a_quark),fcount)
         else:
            for fl in range(n-1):
               ifields += ","+next(a_quark)
      elif lf == "A":
         ifields += ",gluon"*(n-1)
      elif lf == "B":
         ifields += ",bgf"*(n-1)
      elif lf=="O":
         ofields += (",anchor%s"%(str(ocount) if ocount>1 else ""))*(n-1)
      elif lf=="P":
         ofields += ",src"*(n-1)
      else:
         raise ValueError("Unexpected field identifier.")
         
ifields = ifields[1:]
ofields = ofields[1:]

onepi = int(sys.argv[3])==1
loops = int(sys.argv[4])

PATH = "QGRAF/"
TARGET = sys.argv[5]
QGRAF = "~/QGRAF/qgraf"

# Prepare qgraf.dat
f = open(PATH+"qgraf.dat","w")
f.write("""output= 'YMgraphs' ;

style= 'toform.sty' ;

model= '../%s.rules';

in= %s;
out=%s;

loops= %i;

loop_momentum= k;
options = %s;
true = vsum[ med, 0, 0];
true = bridge[ gluon, 0, 0] ;
true = bridge[ quark, 0, 0] ;
true = bridge[ quark2, 0, 0] ;
"""%(MODEL,ifields,ofields,loops,""))
f.close()

# Call QGRAF
try:
   os.remove(PATH+"YMgraphs")
except OSError:
   pass

os.system("""cd %s ;
%s """%(PATH, QGRAF))

# Translate QGRAF output into better indices
f = open(PATH+"YMgraphs", "r")
text = f.read()
f.close()

for i in range(2,7,2):
   text = text.replace("q%i"%int(i/2),"impDUMMY%i"%int(i/2))
   text = text.replace("col-%i"%i,"colDUMMY%i"%int(i/2))
   text = text.replace("spt-%i"%i,"sptDUMMY%i"%int(i/2))
   text = text.replace("fl-%i"%i,"flineDUMMY%i"%int(i/2))
fields = ifields.split(",")
for i in range(1,2*len(fields)+1,2):
   text = text.replace("p%i"%int((i+1)/2),"impe%i"%int((i+1)/2))
   if "quark" in fields[int(i/2)]:
      text = text.replace("col-%i"%i,"cfe%i"%int((i+1)/2))
   else:
      text = text.replace("col-%i"%i,"cole%i"%int((i+1)/2))
   text = text.replace("spt-%i"%i,"spte%i"%int((i+1)/2))
   text = text.replace("fl-%i"%i,"fle%i"%int((i+1)/2))

# Make sure to replace adjoint indices with fundamental indices for
# quarks and anti-quarks
parts = text.split("prop(quark,")
partsNew = [parts[0]]
for p in parts[1:]:
   temp = p.split(")")
   temp[0] = temp[0].replace("col","cf")
   partsNew.append(")".join(temp))
text = "prop(quark,".join(partsNew)

parts = text.split("quark(")
partsNew = [parts[0]]
for p in parts[1:]:
   temp = p.split(")")
   temp[0] = temp[0].replace("col","cf")
   partsNew.append(")".join(temp))
text = "quark(".join(partsNew)

for i in range(fcount-1):
   parts = text.split("prop(quark%i,"%(i+2))
   partsNew = [parts[0]]
   for p in parts[1:]:
      temp = p.split(")")
      temp[0] = temp[0].replace("col","cf")
      partsNew.append(")".join(temp))
   text = ("prop(quark%i,"%(i+2)).join(partsNew)

   parts = text.split("quark%i("%(i+2))
   partsNew = [parts[0]]
   for p in parts[1:]:
      temp = p.split(")")
      temp[0] = temp[0].replace("col","cf")
      partsNew.append(")".join(temp))
   text = ("quark%i("%(i+2)).join(partsNew)


f = open(TARGET, "w")
f.write(text)
f.close()


os.system("""cd ..""")


Symanzik-QCD-workflow
==============================

This toolset is supplied in order to trivialise the procedure of 1-loop operator
renormalisation in dimensional regularisation. It is set up for the Background
field method, but can be applied to the common non-Background field approach by
adjusting the Feynman rules of both the continuum theory and the operators as
well as the rules in model.rules. Currently we generate 1PI graphs at 1-loop and
only extract the UV poles in dimensional regularisation. (extension to full
1-loop should be straight forward)


Software requirements
------------------------------

We list here each software and the version that was used in case older versions
(or maybe even newer versions) introduce compatibility issues or have missing
features.

<details>
<summary>FORM (version 4.2.1)</summary>

https://github.com/vermaseren/form
</details>

<details>
<summary>QGRAF (version 3.4.2)</summary>

http://cfif.ist.utl.pt/~paulo/qgraf.html

Must be compiled with `maxdeg=7` rather than `maxdeg=6` due to 7-point vertices
when counting the anchor field.
</details>

<details>
<summary>python3 (version 3.9.4)</summary>

https://www.python.org/
</details>

<details>
<summary>Mathematica (version 12.1)</summary>

https://www.wolfram.com/mathematica/
</details>

Usage
------------------------------

Before getting started the following (system specific) parameters should be set
in the Makefile (see also comments in the Makefile):

```
FORM  = {form, tform}
    for tform additional flags should be put into FLAG in the Makefile
QGRAF = ~/QGRAF/qgraf
    path to QGRAF executable
MODEL = QCD
    specifies the name of the model, e.g. QCD
```

Eventually the available commands are:

```bash
make obs{$(GRAPHSo) $(GRAPHSp) $(GRAPHSoo) $(GRAPHSop)}
```
   Compute 1PI 1-loop graphs in dimensional regularisation for given observable.
   While a temparary result without translation into Mathematica notation is
   kept in {O|P|OO|OP}/obs/op.1PI, the final result is stored in the folder
   results/{O|P|OO|OP}/obs/op.UVonly.res . The letters `P` and `O` indicate
   single insertions of the local field and an operator of the effective action
   respectively. Notice, that (after proper adjustement of the Makefile) also
   Green's functions like `F2On`and `F2O...O`would be acceptible, which
   corresponds to a quark anit-quark pair of idential flavour with insertion of
   either `n' times the same operator or many operators of potentially differing
   kind respectively. Currently used is the notation `F2OO` for the contact
   renormalisation.
   

```bash
make obs{$(GRAPHSo)_TL $(GRAPHSp)_TL $(GRAPHSoo)_TL $(GRAPHSop)_TL}
```
   Compute 1PI tree-level graphs for given observable. Notice that contact term
   renormalisation with the strategy used here does not require tree-level
   computations of OP|OO contact terms due to considering 1PI graphs.
   Again a temparary result without translation into Mathematica notation is
   kept in {O|P|OO|OP}/obs/op.1PI and the final result is stored in the folder
   results/{O|P|OO|OP}/obs/op.UVonly.res .

   The simplifed results have any occurring tensor structures reduced to a
   minimal basis (this is needed in particular for the outgoing fermion lines).
   Also the Z-factors needed to renormalise the external legs and the coupling
   to 1-loop order are applied. Finally dummy indices and all symbols are
   expressed in a form compatible to Mathematica syntax.


Use of Mathematica scripts
------------------------------

Once the simplified results have been generated, they can be imported into
Mathematica using the functions defined in loadOperatorGreensFunctions.nb, such
that `LOOPvalues` and `TLvalues` holds the results for the graph as specified in
the call to one of the Mathematica functions


```Mathematica
generateGFlocal["name"]
```
Loads the 1-loop and TL results for the graph specified by `"name"` for a single
insertion of a local field at non-zero momentum.


```Mathematica
generateGF["name"]
```
Loads the 1-loop and TL results for the graph specified by `"name"` for a single
insertion of an operators of the effective action at zero momentum.


```Mathematica
generateGFdoublelocal["op1", "op2", "name"]
```
Loads the 1-loop results for the graph specified by `"name"` for a single
insertion of the local field labelled `"op1"` combined with another insertion
from the set of operators contained in `"op2"`.

```Mathematica
generateGFdouble["op1", "op2", "name"]
```
Loads the 1-loop results for the graph specified by `"name"` for a single
insertion of the operator labelled `"op1"` combined with another insertion from
the set of operators contained in `"op2"`.


How to generate Feynman rules
------------------------------

Each operator of interest must be defined in YMeuclFlavours/rawOps.frm with
an identifier NAME before one can run
```bash
cd YMeuclFlavours
python3 generateRules.py NAME
```

The generated Feynman rules are stored temporarily in ./YMeuclFlavours/NAME.h,
where their FORM syntax can be checked and polished. In case an index
contraction was detected the `id` statement is switched with
```form
#do dummy=1,1
id,once vert(...) = ...;
** insert appropriate increment for index counter here
if(match(vert(...))) redefine dummy "0";
.sort;
#enddo
```
where the `#do` loop is necessary to keep track of the preprocessor index
counters. **Always check that there are no contracted indices that have not been
caught!**

Missing
------------------------------

* Full results not just UV poles (and choosing between both).
* Computation of connected graphs (either build from 1PI graphs or
  directly computed) for both UV poles only and full result.
* ...

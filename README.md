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
make
```
   Generate 1-loop 1PI $(GRAPHSo) with QGRAF and translate into FORM input. Also
   creates any of the directories needed if they are missing. Both should happen
   in the other cases, too.

```bash
make obs{$(GRAPHS) $(GRAPHSo)}
```
   Compute 1PI 1-loop graphs in dimensional regularisation for given observable.
   IF $(op) is set, only this operator will be computed. Results are then stored
   in the appropriate folder in GRAPH/op.res.

```bash
make obs{$(GRAPHS)_TL $(GRAPHSo)_TL}
```
   Compute 1PI tree-level graphs for given observable. IF $(op) is set, only
   this operator will be computed. Results are then stored in the appropriate
   folder in GRAPH/op.res.

```bash
make simplify
make simplify_TL
```
   Reduce any occurring tensor structure to a minimal basis (in particular
   needed for the outgoing fermion lines). Applies the Z-factors needed to
   renormalise the external legs and the coupling to 1-loop order. Also
   translates dummy indices and all symbols to be compatible to Mathematica
   syntax. Results are then stored in the appropriate folder in
   results/GRAPH/op.res .

Once the simplified results have been generated, they can be imported into
Mathematica using the functions defined in loadOperatorGreensFunctions.nb, such
that `LOOPvalues` and `TLvalues` holds the results for the graph as specified in
the call to `generateGF["..."]`. The special cases of F?On and F4On2 require
additional care. As an example Evaluation_B2O.nb has been added.

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

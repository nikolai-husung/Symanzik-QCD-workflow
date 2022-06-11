# Symanzik-QCD-workflow

This toolset is supplied in order to trivialise the procedure of 1-loop operator
renormalisation in dimensional regularisation. It is set up for the Background
field method, but can be applied to the common non-Background field approach by
adjusting the Feynman rules of both the continuum theory and the operators as
well as the rules in model.rules. Currently we generate 1PI graphs at 1-loop and
only extract the UV poles in dimensional regularisation. (extension to full
1-loop should be straight forward)


## Software requirements

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
when counting the anchor field for the mass-dimension 6 operators used in the
effective action.
</details>

<details>
<summary>python3 (version 3.9.4)</summary>

https://www.python.org/
</details>

<details>
<summary>Mathematica (version 12.1)</summary>

https://www.wolfram.com/mathematica/
</details>

## Usage

The steps required to do from formulating the problem to getting all relevant
1-loop UV poles are as follows:

0. Work out minimal operator basis compatible with symmetries of the lattice
discretisation for both the lattice action and the discretised local fields
of interest. ***This step is not implemented or automated here.***
1. Write down each operator of the found minimal bases as a FORM prototype
in YMeuclFlavours/rawOps.frm in its own [fold](https://www.nikhef.nl/~form/maindir/documentation/reference/online/online.html#SECTION004340000000000000000)
giving it a unique name.
2. The desired Feynman rules can then be obtained as explained in section
[How to generate Feynman rules](#how-to-generate-feynman-rules). They still
require some manual cleanup.
3. Store the Feynman rules of the new operator with its unique `name` under
YMeuclFlavours/feynmanRules/`name`.h and add it to the appropriate collection
of operators in the Makefile (P3,...,P5,dP4,...,O5,O6, etc.) depending on
whether it is a correction belonging to a local field or the action.
4. Now, one can run `make ...`, which will generate all 1-loop UV divergences
for the operators listed in the Makefile. The functionaliy of the Makefile is
explained in the following. Eventually all that remains to be done is to perform
the 1-loop renormalisation. For this I supplied some
[Mathematica notebooks](#use-of-Mathematica-scripts) as guidance and made the
final results syntax compatible to Mathematica.
5. For simple changes, e.g. different operator bases with the same 
mass-dimension and the same maximal number of free Lorentz indices, only the
the various listings of operators in the Makefile must be changed. For more
complicated operators e.g. more free Lorentz indices, higher mass-dimensions,
n-point functions with larger n etc., the Makefile must be modified. However,
for some changes the other scripts may require quite a bit of work as not
everything has been implemented with the full generality in mind.


### Capabilites of the Makefile

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
   While a temporary result without translation into Mathematica notation is
   kept in {O|P|OO|OP}/obs/op.1PI, the final result is stored in the folder
   results/{O|P|OO|OP}/obs/op.UVonly.res. The letters `P` and `O` indicate
   single insertions of the local field and an operator of the effective action
   respectively. Notice, that (after proper adjustement of the Makefile) also
   Green's functions like `F2On`and `F2O...O`would be acceptible, which
   corresponds to a quark anit-quark pair of identical flavour with insertion of
   either `n` times the same operator or many operators of potentially differing
   kind respectively. Currently used is the notation `F2OO` for the contact
   renormalisation.
   

```bash
make obs{$(GRAPHSo)_TL $(GRAPHSp)_TL $(GRAPHSoo)_TL $(GRAPHSop)_TL}
```
   Compute 1PI tree-level graphs for given observable. Notice that contact term
   renormalisation with the strategy used here does not require tree-level
   computations of OP|OO contact terms due to considering 1PI graphs.
   Again a temporary result without translation into Mathematica notation is
   kept in {O|P|OO|OP}/obs/op.1PI and the final result is stored in the folder
   results/{O|P|OO|OP}/obs/op.UVonly.res .

   The simplifed results have any occurring tensor structures reduced to a
   minimal basis (this is needed in particular for the outgoing fermion lines).
   Also the Z-factors needed to renormalise the external legs and the coupling
   to 1-loop order are applied.


**Remark:** The simplified results are evaluated at fixed index permutations 
e.g. (mu,nu,kappa,lambda) = (1,1,1,1), (1,1,1,2), ..., for the background
field 2-point function with background field indices mu and nu such that they
yield different answers, i.e. we do not consider the permutation (2,2,2,2) etc.
Generally kappa and lambda are assumed to be the Lorentz indices of the local
field. Notice that this currently generates some overhead if one is interested
in the insertion of a scalar local field, because there are no Lorentz indices
present for the local field itself and yet all expressions are treated
identically, i.e. including permutations for the presumed (up to) two Lorentz
indices of the local field.


### Use of Mathematica scripts

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

```Mathematica
buildEqs[unfixed, coeffs]
```
Takes the 1-loop poles with an appropriate linear combination of potential
counterterms added. Each counterterm should be accompanied by a unique
coefficient `c` that is then handed over in `coeffs = {...,c,...}`. The function
derives a system of equations from the requirement, that `unfixed` should be
zero, splitting all terms into a minimal basis of symbols. Eventually the result
of `Solve[...,coeffs]` is returned.


### How to generate Feynman rules

Each operator of interest must be defined in YMeuclFlavours/rawOps.frm with
an identifier NAME, e.g.
```form
*--#[ divV:
D(spt0)*Psibar(fl0,imp0,cf0)*FL(fl0,spt0,fl1)*Psi(fl1,imp2,cf1)*DO4v(cf0,cf1)
*--#] divV:
```
before one can run
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
caught!** Any contracted indices will be present as wildcards `N1_?` etc. and
must be treated manually. Also the field specific Lorentz indices `kappa` and
`lambda` should be replaced by their respective vector counterparts `kappahat`
and `lambdahat`. For local fields denoted as `P` we also need to replace any
occurrence of `anchor(...)` with `src(...)`.


## Acknowledgement

I need to thank Hubert Simma for encouraging as well as motivating me to
clean up this code and make it publicly available. In the process a lot of the
automation was refined and improved. This should now speed up the actual
compuations for local fields, including the actual renormalisation etc.

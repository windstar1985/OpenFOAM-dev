BasicChemistryModel<psiReactionThermo>& chemistry = pChemistry();
scalar dtChem = min
(
    refCast<const BasicChemistryModel<psiReactionThermo>>
    (
        chemistry
    ).deltaTChem()[0],
    runTime.deltaT().value()
);
basicSpecieMixture& composition = thermo.composition();
PtrList<volScalarField>& Y = composition.Y();
volScalarField& p = thermo.p();

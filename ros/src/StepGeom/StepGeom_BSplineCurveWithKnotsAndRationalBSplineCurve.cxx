#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.ixx>

#include <StepGeom_BSplineCurveWithKnots.hxx>

#include <StepGeom_RationalBSplineCurve.hxx>


StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve ()  {}

void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect)
{

	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}

void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect,
	const Handle(StepGeom_BSplineCurveWithKnots)& aBSplineCurveWithKnots,
	const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve)
{
	// --- classe own fields ---
	bSplineCurveWithKnots = aBSplineCurveWithKnots;
	rationalBSplineCurve = aRationalBSplineCurve;
	// --- classe inherited fields ---
	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);
}


void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Standard_Integer aDegree,
	const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList,
	const StepGeom_BSplineCurveForm aCurveForm,
	const StepData_Logical aClosedCurve,
	const StepData_Logical aSelfIntersect,
	const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities,
	const Handle(TColStd_HArray1OfReal)& aKnots,
	const StepGeom_KnotType aKnotSpec,
	const Handle(TColStd_HArray1OfReal)& aWeightsData)
{
	// --- classe inherited fields ---

	StepGeom_BSplineCurve::Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect);

	// --- ANDOR componant fields ---

	bSplineCurveWithKnots = new StepGeom_BSplineCurveWithKnots();
	bSplineCurveWithKnots->Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect, aKnotMultiplicities, aKnots, aKnotSpec);

	// --- ANDOR componant fields ---

	rationalBSplineCurve = new StepGeom_RationalBSplineCurve();
	rationalBSplineCurve->Init(aName, aDegree, aControlPointsList, aCurveForm, aClosedCurve, aSelfIntersect, aWeightsData);
}


void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetBSplineCurveWithKnots(const Handle(StepGeom_BSplineCurveWithKnots)& aBSplineCurveWithKnots)
{
	bSplineCurveWithKnots = aBSplineCurveWithKnots;
}

Handle(StepGeom_BSplineCurveWithKnots) StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::BSplineCurveWithKnots() const
{
	return bSplineCurveWithKnots;
}

void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetRationalBSplineCurve(const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve)
{
	rationalBSplineCurve = aRationalBSplineCurve;
}

Handle(StepGeom_RationalBSplineCurve) StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::RationalBSplineCurve() const
{
	return rationalBSplineCurve;
}

	//--- Specific Methods for AND classe field access ---


void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnotMultiplicities(const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities)
{
	bSplineCurveWithKnots->SetKnotMultiplicities(aKnotMultiplicities);
}

Handle(TColStd_HArray1OfInteger) StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotMultiplicities() const
{
	return bSplineCurveWithKnots->KnotMultiplicities();
}

Standard_Integer StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotMultiplicitiesValue(const Standard_Integer num) const
{
	return bSplineCurveWithKnots->KnotMultiplicitiesValue(num);
}

Standard_Integer StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbKnotMultiplicities () const
{
	return bSplineCurveWithKnots->NbKnotMultiplicities();
}

void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnots(const Handle(TColStd_HArray1OfReal)& aKnots)
{
	bSplineCurveWithKnots->SetKnots(aKnots);
}

Handle(TColStd_HArray1OfReal) StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Knots() const
{
	return bSplineCurveWithKnots->Knots();
}

Standard_Real StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotsValue(const Standard_Integer num) const
{
	return bSplineCurveWithKnots->KnotsValue(num);
}

Standard_Integer StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbKnots () const
{
	return bSplineCurveWithKnots->NbKnots();
}

void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnotSpec(const StepGeom_KnotType aKnotSpec)
{
	bSplineCurveWithKnots->SetKnotSpec(aKnotSpec);
}

StepGeom_KnotType StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotSpec() const
{
	return bSplineCurveWithKnots->KnotSpec();
}

	//--- Specific Methods for AND classe field access ---


void StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetWeightsData(const Handle(TColStd_HArray1OfReal)& aWeightsData)
{
	rationalBSplineCurve->SetWeightsData(aWeightsData);
}

Handle(TColStd_HArray1OfReal) StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::WeightsData() const
{
	return rationalBSplineCurve->WeightsData();
}

Standard_Real StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::WeightsDataValue(const Standard_Integer num) const
{
	return rationalBSplineCurve->WeightsDataValue(num);
}

Standard_Integer StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbWeightsData () const
{
	return rationalBSplineCurve->NbWeightsData();
}

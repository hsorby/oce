//--------------------------------------------------------------------
//
//  File Name : IGESDraw_RectArraySubfigure.cxx
//  Date      :
//  Author    : CKY / Contract Toubro-Larsen
//  Copyright : MATRA-DATAVISION 1993
//
//--------------------------------------------------------------------

#include <IGESDraw_RectArraySubfigure.ixx>
#include <Standard_DimensionMismatch.hxx>
#include <gp_GTrsf.hxx>


    IGESDraw_RectArraySubfigure::IGESDraw_RectArraySubfigure ()    {  }


    void IGESDraw_RectArraySubfigure::Init
  (const Handle(IGESData_IGESEntity)&      aBase,
   const Standard_Real                     aScale,
   const gp_XYZ&                           aCorner,
   const Standard_Integer                  nbCols,
   const Standard_Integer                  nbRows,
   const Standard_Real                     hDisp,
   const Standard_Real                     vtDisp,
   const Standard_Real                     rotationAngle,
   const Standard_Integer                  doDont,
   const Handle(TColStd_HArray1OfInteger)& allNumPos)
{
  if (!allNumPos.IsNull())
    if (allNumPos->Lower() != 1)
      Standard_DimensionMismatch::Raise("IGESDraw_RectArraySubfigure : Init");
  theBaseEntity       = aBase;
  theScaleFactor      = aScale;
  theLowerLeftCorner  = aCorner;
  theNbColumns        = nbCols;
  theNbRows           = nbRows;
  theColumnSeparation = hDisp;
  theRowSeparation    = vtDisp;
  theRotationAngle    = rotationAngle;
  theDoDontFlag       = doDont;
  thePositions        = allNumPos;
  InitTypeAndForm(412,0);
}

    Handle(IGESData_IGESEntity) IGESDraw_RectArraySubfigure::BaseEntity () const
{
  return theBaseEntity;
}

    Standard_Real IGESDraw_RectArraySubfigure::ScaleFactor () const
{
  return theScaleFactor;
}

    gp_Pnt IGESDraw_RectArraySubfigure::LowerLeftCorner () const
{
  gp_Pnt tempLowerLeftCorner(theLowerLeftCorner);
  return tempLowerLeftCorner;
}

    gp_Pnt IGESDraw_RectArraySubfigure::TransformedLowerLeftCorner () const
{
  gp_XYZ tempLowerLeftCorner = theLowerLeftCorner;
  if (HasTransf()) Location().Transforms(tempLowerLeftCorner);
  gp_Pnt tempRes(tempLowerLeftCorner);

  return (tempRes);
}

    Standard_Integer IGESDraw_RectArraySubfigure::NbColumns () const
{
  return theNbColumns;
}

    Standard_Integer IGESDraw_RectArraySubfigure::NbRows () const
{
  return theNbRows;
}

    Standard_Real IGESDraw_RectArraySubfigure::ColumnSeparation () const
{
  return theColumnSeparation;
}

    Standard_Real IGESDraw_RectArraySubfigure::RowSeparation () const
{
  return theRowSeparation;
}

    Standard_Real IGESDraw_RectArraySubfigure::RotationAngle () const
{
  return theRotationAngle;
}

    Standard_Boolean IGESDraw_RectArraySubfigure::DisplayFlag () const
{
  return (thePositions.IsNull());
}

    Standard_Integer IGESDraw_RectArraySubfigure::ListCount () const
{
  return ( thePositions.IsNull() ? 0 : thePositions->Length() );
  // Return 0 if HArray1 thePositions is NULL Handle
}

    Standard_Boolean IGESDraw_RectArraySubfigure::DoDontFlag () const
{
  return (theDoDontFlag);
}

    Standard_Boolean IGESDraw_RectArraySubfigure::PositionNum
  (const Standard_Integer Index) const
{
  // Method : If thePositions array length is Zero return theDoDontFlag;
  //          else Search Index in to the Array. If 'Index' found in the
  //          array return theDoDontFlag else return !theDoDontFlag.

  if (thePositions.IsNull())   return theDoDontFlag;

  Standard_Integer I;
  Standard_Integer up  = thePositions->Upper();
  for (I = 1; I <= up; I++) {
    if (thePositions->Value(I) == Index)   return theDoDontFlag;
  }
  return (! theDoDontFlag);
}

    Standard_Integer IGESDraw_RectArraySubfigure::ListPosition
  (const Standard_Integer Index) const
{
  return thePositions->Value(Index);
  // raise OutOfRange from Standard if Index is out-of-bound
  // Exception NoSuchObject will be raised if thePositions == Null Handle
}

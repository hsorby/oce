// File:        BinMDataXtd_PatternStdDriver.cxx
// Created:     Fri Aug 24 20:46:58 2001
// Author:      Alexnder GRIGORIEV
// Copyright:   Open Cascade 2001
// History:
// modified     13.04.2009 Sergey Zaritchny

#include <BinMDataXtd_PatternStdDriver.ixx>

#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <TDataXtd_PatternStd.hxx>
#include <TNaming_NamedShape.hxx>

//=======================================================================
//function : BinMDataXtd_PatternStdDriver
//purpose  : Constructor
//=======================================================================
BinMDataXtd_PatternStdDriver::BinMDataXtd_PatternStdDriver
                        (const Handle(CDM_MessageDriver)& theMsgDriver)
      : BinMDF_ADriver (theMsgDriver, NULL)
{}

//=======================================================================
//function : NewEmpty
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMDataXtd_PatternStdDriver::NewEmpty() const
{
  return (new TDataXtd_PatternStd());
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
Standard_Boolean BinMDataXtd_PatternStdDriver::Paste
                        (const BinObjMgt_Persistent&  theSource,
                         const Handle(TDF_Attribute)& theTarget,
                         BinObjMgt_RRelocationTable&  theRelocTable) const
{
  Handle(TDataXtd_PatternStd) aP =
    Handle(TDataXtd_PatternStd)::DownCast(theTarget);

  // signature
  Standard_Integer signature;
  if (! (theSource >> signature))
    return Standard_False;
  if (signature == 0)
    return Standard_True;
  aP->Signature(signature);

  // reversed flags
  Standard_Integer revFlags;
  if (! (theSource >> revFlags))
    return Standard_False;
  aP->Axis1Reversed( revFlags & 1 );
  aP->Axis2Reversed( revFlags & 2 );

  Handle(TNaming_NamedShape) TNS;
  Standard_Integer aNb;

  if (signature == 5) // mirror
  {
    if (! (theSource >> aNb))
      return Standard_False;
    if (theRelocTable.IsBound(aNb))
      TNS = Handle(TNaming_NamedShape)::DownCast(theRelocTable.Find(aNb));
    else
    {
      TNS = new TNaming_NamedShape;
      theRelocTable.Bind(aNb, TNS);
    }
    aP->Mirror(TNS);
  }
  else
  {
    Handle(TDataStd_Real) TReal;
    Handle(TDataStd_Integer) TInt;

    // axis 1
    if (! (theSource >> aNb))
      return Standard_False;
    if (theRelocTable.IsBound(aNb))
      TNS = Handle(TNaming_NamedShape)::DownCast(theRelocTable.Find(aNb));
    else
    {
      TNS = new TNaming_NamedShape;
      theRelocTable.Bind(aNb, TNS);
    }
    aP->Axis1(TNS);

    // value 1
    if (! (theSource >> aNb))
      return Standard_False;
    if (theRelocTable.IsBound(aNb))
      TReal = Handle(TDataStd_Real)::DownCast(theRelocTable.Find(aNb));
    else
    {
      TReal = new TDataStd_Real;
      theRelocTable.Bind(aNb, TReal);
    }
    aP->Value1(TReal);

    // number of instances 1
    if (! (theSource >> aNb))
      return Standard_False;
    if (theRelocTable.IsBound(aNb))
      TInt = Handle(TDataStd_Integer)::DownCast(theRelocTable.Find(aNb));
    else
    {
      TInt = new TDataStd_Integer;
      theRelocTable.Bind(aNb, TInt);
    }
    aP->NbInstances1(TInt);

    if (signature > 2)
    {
      // axis 2
      if (! (theSource >> aNb))
        return Standard_False;
      if (theRelocTable.IsBound(aNb))
        TNS = Handle(TNaming_NamedShape)::DownCast(theRelocTable.Find(aNb));
      else
      {
        TNS = new TNaming_NamedShape;
        theRelocTable.Bind(aNb, TNS);
      }
      aP->Axis2(TNS);

      // real value 2
      if (! (theSource >> aNb))
        return Standard_False;
      if (theRelocTable.IsBound(aNb))
        TReal = Handle(TDataStd_Real)::DownCast(theRelocTable.Find(aNb));
      else
      {
        TReal = new TDataStd_Real;
        theRelocTable.Bind(aNb, TReal);
      }
      aP->Value2(TReal);

      // number of instances 2
      if (! (theSource >> aNb))
        return Standard_False;
      if (theRelocTable.IsBound(aNb))
        TInt = Handle(TDataStd_Integer)::DownCast(theRelocTable.Find(aNb));
      else
      {
        TInt = new TDataStd_Integer;
        theRelocTable.Bind(aNb, TInt);
      }
      aP->NbInstances2(TInt);
    }
  }

  return Standard_True;
}

//=======================================================================
//function : Paste
//purpose  : 
//=======================================================================
void BinMDataXtd_PatternStdDriver::Paste
                        (const Handle(TDF_Attribute)& theSource,
                         BinObjMgt_Persistent&        theTarget,
                         BinObjMgt_SRelocationTable&  theRelocTable) const
{
  Handle(TDataXtd_PatternStd) aP =
    Handle(TDataXtd_PatternStd)::DownCast(theSource);

  // signature
  Standard_Integer signature = aP->Signature();
  if (signature < 1 || signature > 5)
    signature = 0;
  theTarget << signature;
  if (signature == 0)
    return;

  // reversed flags
  Standard_Integer revFlags = 0;
  if (aP->Axis1Reversed()) revFlags |= 1;
  if (aP->Axis2Reversed()) revFlags |= 2;
  theTarget << revFlags;

  Standard_Integer aNb;
  if (signature == 5) // mirror
  {
    Handle(TNaming_NamedShape) Plane = aP->Mirror();
    aNb = theRelocTable.Add(Plane);
    theTarget << aNb;
  }
  else
  {
    // axis 1
    Handle(TNaming_NamedShape) Axis = aP->Axis1();
    aNb = theRelocTable.Add(Axis);
    theTarget << aNb;

    // real value 1
    Handle(TDataStd_Real) Value = aP->Value1();
    aNb = theRelocTable.Add(Value);
    theTarget << aNb;

    // number of instances 1
    Handle(TDataStd_Integer) NbInstances = aP->NbInstances1();
    aNb = theRelocTable.Add(NbInstances);
    theTarget << aNb;

    if (signature > 2)
    {
      // axis 2
      Axis = aP->Axis2();
      aNb = theRelocTable.Add(Axis);
      theTarget << aNb;

      // real value 2
      Value = aP->Value2();
      aNb = theRelocTable.Add(Value);
      theTarget << aNb;

      // number of instances 2
      NbInstances = aP->NbInstances2();
      aNb = theRelocTable.Add(NbInstances);
      theTarget << aNb;
    }
  }
}

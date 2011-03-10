// File:	Intf.cxx
// Created:	Wed Jan 20 11:41:33 1993
// Author:	Didier PIFFAULT
//		<dpf@phylox>

#include <Intf.ixx>

//=======================================================================
//function : PlaneEquation
//purpose  : 
//=======================================================================

void Intf::PlaneEquation (const gp_Pnt&  P1,
			  const gp_Pnt&  P2,
			  const gp_Pnt&  P3,
			  gp_XYZ&        NormalVector,
			  Standard_Real& PolarDistance)
{
  gp_XYZ v1=P2.XYZ()-P1.XYZ();
  gp_XYZ v2=P3.XYZ()-P2.XYZ();
  gp_XYZ v3=P1.XYZ()-P3.XYZ();
  NormalVector= (v1^v2)+(v2^v3)+(v3^v1);
  NormalVector.Normalize();
  PolarDistance = NormalVector * P1.XYZ();
}


//=======================================================================
//function : Contain
//purpose  : 
//=======================================================================

Standard_Boolean Intf::Contain (const gp_Pnt&  P1,
				const gp_Pnt&  P2,
				const gp_Pnt&  P3,
				const gp_Pnt& ThePnt)
{
  gp_XYZ v1=(P2.XYZ()-P1.XYZ())^(ThePnt.XYZ()-P1.XYZ());
  gp_XYZ v2=(P3.XYZ()-P2.XYZ())^(ThePnt.XYZ()-P2.XYZ());
  gp_XYZ v3=(P1.XYZ()-P3.XYZ())^(ThePnt.XYZ()-P3.XYZ());
  if (v1*v2 >= 0. && v2*v3 >= 0. && v3*v1>=0.) return Standard_True;
  else                                         return Standard_False;
}

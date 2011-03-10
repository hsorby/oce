// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve_HeaderFile
#define _PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve_HeaderFile
#include <Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PGeom2d_BSplineCurve_HeaderFile
#include <Handle_PGeom2d_BSplineCurve.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PGeom2d_BSplineCurve;
class PColPGeom2d_FieldOfHArray1OfBSplineCurve;
class PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfBSplineCurve;


class PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve();
  
  Standard_EXPORT   PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve(const Handle(PGeom2d_BSplineCurve)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PGeom2d_BSplineCurve)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PGeom2d_BSplineCurve) _CSFDB_GetPColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurvemyValue() const { return myValue; }
    void _CSFDB_SetPColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurvemyValue(const Handle(PGeom2d_BSplineCurve)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColPGeom2d_VArrayNodeOfFieldOfHArray1OfBSplineCurve)

protected:




private: 


Handle_PGeom2d_BSplineCurve myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

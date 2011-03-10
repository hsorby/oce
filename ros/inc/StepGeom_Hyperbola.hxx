// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Hyperbola_HeaderFile
#define _StepGeom_Hyperbola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_Hyperbola_HeaderFile
#include <Handle_StepGeom_Hyperbola.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepGeom_Conic_HeaderFile
#include <StepGeom_Conic.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;



class StepGeom_Hyperbola : public StepGeom_Conic {

public:

  //! Returns a Hyperbola <br>
  Standard_EXPORT   StepGeom_Hyperbola();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepGeom_Axis2Placement& aPosition,const Standard_Real aSemiAxis,const Standard_Real aSemiImagAxis) ;
  
  Standard_EXPORT     void SetSemiAxis(const Standard_Real aSemiAxis) ;
  
  Standard_EXPORT     Standard_Real SemiAxis() const;
  
  Standard_EXPORT     void SetSemiImagAxis(const Standard_Real aSemiImagAxis) ;
  
  Standard_EXPORT     Standard_Real SemiImagAxis() const;




  DEFINE_STANDARD_RTTI(StepGeom_Hyperbola)

protected:




private: 


Standard_Real semiAxis;
Standard_Real semiImagAxis;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

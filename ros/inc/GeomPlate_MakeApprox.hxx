// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_MakeApprox_HeaderFile
#define _GeomPlate_MakeApprox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_GeomPlate_Surface_HeaderFile
#include <Handle_GeomPlate_Surface.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class GeomPlate_Surface;
class Geom_BSplineSurface;
class AdvApp2Var_Criterion;



//! Allows you to convert a GeomPlate surface into a BSpline. <br>
class GeomPlate_MakeApprox  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //!  Converts SurfPlate into a Geom_BSplineSurface with <br>
//!  n Bezier pieces (n<=Nbmax) of degree <= dgmax <br>
//!  and an approximation error < Tol3d if possible <br>
//!  the criterion CritPlate is satisfied if possible <br>
  Standard_EXPORT   GeomPlate_MakeApprox(const Handle(GeomPlate_Surface)& SurfPlate,const AdvApp2Var_Criterion& PlateCrit,const Standard_Real Tol3d,const Standard_Integer Nbmax,const Standard_Integer dgmax,const GeomAbs_Shape Continuity = GeomAbs_C1,const Standard_Real EnlargeCoeff = 1.1);
  //!  Converts SurfPlate into a Geom_BSplineSurface with <br>
//!  n Bezier pieces (n<=Nbmax) of degree <= dgmax <br>
//!  and an approximation error < Tol3d if possible <br>
//!  if CritOrder = -1 , no criterion is used <br>
//!  if CritOrder = 0 , a PlateG0Criterion is used with max value > 10*dmax <br>
//!  if CritOrder = 1 , a PlateG1Criterion is used with max value > 10*dmax <br>
//!  WARNING : for CritOrder = 0 or 1, only the constraints points of SurfPlate <br>
//!            are used to evaluate the value of the criterion <br>
  Standard_EXPORT   GeomPlate_MakeApprox(const Handle(GeomPlate_Surface)& SurfPlate,const Standard_Real Tol3d,const Standard_Integer Nbmax,const Standard_Integer dgmax,const Standard_Real dmax,const Standard_Integer CritOrder = 0,const GeomAbs_Shape Continuity = GeomAbs_C1,const Standard_Real EnlargeCoeff = 1.1);
  //! Returns the BSpline surface extracted from the <br>
//!          GeomPlate_MakeApprox object. <br>
  Standard_EXPORT     Handle_Geom_BSplineSurface Surface() const;
  //! Returns the error in computation of the approximation <br>
//!          surface. This is the distance between the entire target <br>
//!          BSpline surface and the entire original surface <br>
//!          generated by BuildPlateSurface and converted by GeomPlate_Surface. <br>
  Standard_EXPORT     Standard_Real ApproxError() const;
  //! Returns the criterion error in computation of the <br>
//!          approximation surface. This is estimated relative to the <br>
//!          curve and point constraints only. <br>
  Standard_EXPORT     Standard_Real CriterionError() const;





protected:





private:



Handle_GeomPlate_Surface myPlate;
Handle_Geom_BSplineSurface mySurface;
Standard_Real myAppError;
Standard_Real myCritError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

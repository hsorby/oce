// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_ComplexCurve_HeaderFile
#define _ShapeExtend_ComplexCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeExtend_ComplexCurve_HeaderFile
#include <Handle_ShapeExtend_ComplexCurve.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Geom_Curve_HeaderFile
#include <Geom_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Geom_Curve;
class gp_Trsf;
class gp_Pnt;
class gp_Vec;


//! Defines a curve which consists of several segments. <br>
//!          Implements basic interface to it. <br>
class ShapeExtend_ComplexCurve : public Geom_Curve {

public:

  //! Returns number of curves <br>
  Standard_EXPORT   virtual  Standard_Integer NbCurves() const = 0;
  //! Returns curve given by its index <br>
  Standard_EXPORT   virtual const Handle_Geom_Curve& Curve(const Standard_Integer index) const = 0;
  //! Returns number of the curve for the given parameter U <br>
//!          and local paramete r UOut for the found curve <br>
  Standard_EXPORT   virtual  Standard_Integer LocateParameter(const Standard_Real U,Standard_Real& UOut) const = 0;
  //! Returns global parameter for the whole curve according <br>
//!          to the segment and local parameter on it <br>
  Standard_EXPORT   virtual  Standard_Real LocalToGlobal(const Standard_Integer index,const Standard_Real Ulocal) const = 0;
  //! Applies transformation to each curve <br>
  Standard_EXPORT   virtual  void Transform(const gp_Trsf& T) ;
  //! Returns 1 - U <br>
      virtual  Standard_Real ReversedParameter(const Standard_Real U) const;
  //! Returns 0 <br>
      virtual  Standard_Real FirstParameter() const;
  //! Returns 1 <br>
      virtual  Standard_Real LastParameter() const;
  //! Returns True if the curve is closed <br>
      virtual  Standard_Boolean IsClosed() const;
  //! Returns False <br>
      virtual  Standard_Boolean IsPeriodic() const;
  //! Returns GeomAbs_C0 <br>
      virtual  GeomAbs_Shape Continuity() const;
  //! Returns False if N > 0 <br>
      virtual  Standard_Boolean IsCN(const Standard_Integer N) const;
  //! Returns point at parameter U. <br>
//!          Finds appropriate curve and local parameter on it. <br>
  Standard_EXPORT   virtual  void D0(const Standard_Real U,gp_Pnt& P) const;
  
  Standard_EXPORT   virtual  void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V1) const;
  
  Standard_EXPORT   virtual  void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
  Standard_EXPORT   virtual  void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
  Standard_EXPORT   virtual  gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //! Returns scale factor for recomputing of deviatives. <br>
  Standard_EXPORT   virtual  Standard_Real GetScaleFactor(const Standard_Integer ind) const = 0;
  //! Checks geometrical connectivity of the curves, including <br>
//!          closure (sets fields myClosed) <br>
  Standard_EXPORT     Standard_Boolean CheckConnectivity(const Standard_Real Preci) ;




  DEFINE_STANDARD_RTTI(ShapeExtend_ComplexCurve)

protected:

  
  Standard_EXPORT   ShapeExtend_ComplexCurve();
  //! Transform the derivative according to its order <br>
  Standard_EXPORT     void TransformDN(gp_Vec& V,const Standard_Integer ind,const Standard_Integer N) const;

Standard_Boolean myClosed;


private: 




};


#include <ShapeExtend_ComplexCurve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

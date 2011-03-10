// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_QualifiedCurve_HeaderFile
#define _Geom2dGcc_QualifiedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2dAdaptor_Curve;


//! Describes functions for building a qualified 2D curve. <br>
//! A qualified 2D curve is a curve with a qualifier which <br>
//! specifies whether the solution of a construction <br>
//! algorithm using the qualified curve (as an argument): <br>
//! -   encloses the curve, or <br>
//! -   is enclosed by the curve, or <br>
//! -   is built so that both the curve and it are external to one another, or <br>
//! -   is undefined (all solutions apply). <br>
class Geom2dGcc_QualifiedCurve  {
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

  //! Constructs a qualified curve by assigning the qualifier <br>
//! Qualifier to the curve Curve. Qualifier may be: <br>
//! -   GccEnt_enclosing if the solution of a construction <br>
//!   algorithm using the qualified curve encloses the curve, or <br>
//! -   GccEnt_enclosed if the solution is enclosed by the curve, or <br>
//! -   GccEnt_outside if both the solution and the curve <br>
//!   are external to one another, or <br>
//! -   GccEnt_unqualified if all solutions apply. <br>
//! Note: The interior of a curve is defined as the left-hand <br>
//! side of the curve in relation to its orientation. <br>
//! Warning <br>
//! Curve is an adapted curve, i.e. an object which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//! The adapted curve is created in the following way: <br>
//! Handle(Geom2d_Curve) mycurve = ... ; <br>
//! Geom2dAdaptor_Curve Curve ( mycurve ) ; <br>
//! The qualified curve is then constructed with this object: <br>
//! GccEnt_Position myQualif = GccEnt_outside ; <br>
//! Geom2dGcc_QualifiedCurve myQCurve ( Curve, myQualif ); <br>
//! is private; <br>
  Standard_EXPORT   Geom2dGcc_QualifiedCurve(const Geom2dAdaptor_Curve& Curve,const GccEnt_Position Qualifier);
  //! Returns a 2D curve to which the qualifier is assigned. <br>
//! Warning <br>
//! The returned curve is an adapted curve, i.e. an object <br>
//! which is an interface between: <br>
//! -   the services provided by a 2D curve from the package Geom2d, <br>
//! -   and those required on the curve by a computation algorithm. <br>
//! The Geom2d curve on which the adapted curve is <br>
//! based can be obtained in the following way: <br>
//! myQualifiedCurve = ... ; <br>
//! Geom2dAdaptor_Curve myAdaptedCurve = myQualifiedCurve.Qualified(); <br>
//! Handle(Geom2d_Curve) = myAdaptedCurve.Curve(); <br>
  Standard_EXPORT     Geom2dAdaptor_Curve Qualified() const;
  //! Returns <br>
//! - the qualifier of this qualified curve if it is enclosing, <br>
//!   enclosed or outside, or <br>
//! -   GccEnt_noqualifier if it is unqualified. <br>
  Standard_EXPORT     GccEnt_Position Qualifier() const;
  //! Returns true if the solution is unqualified and false in the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsUnqualified() const;
  //! It returns true if the solution is Enclosing the Curv and false in <br>
//! the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsEnclosing() const;
  //! It returns true if the solution is Enclosed in the Curv and false in <br>
//! the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsEnclosed() const;
  //! It returns true if the solution is Outside the Curv and false in <br>
//! the other cases. <br>
  Standard_EXPORT     Standard_Boolean IsOutside() const;





protected:





private:



GccEnt_Position TheQualifier;
Geom2dAdaptor_Curve TheQualified;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

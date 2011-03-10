// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_ConstRad_HeaderFile
#define _BlendFunc_ConstRad_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _BlendFunc_Tensor_HeaderFile
#include <BlendFunc_Tensor.hxx>
#endif
#ifndef _BlendFunc_SectionShape_HeaderFile
#include <BlendFunc_SectionShape.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Blend_Function_HeaderFile
#include <Blend_Function.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class math_Vector;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;
class gp_Circ;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Blend_Point;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;
class gp_Ax1;



class BlendFunc_ConstRad  : public Blend_Function {
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

  
  Standard_EXPORT   BlendFunc_ConstRad(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_HCurve)& C);
  //! returns the number of equations of the function. <br>
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  
  Standard_EXPORT     void Set(const Standard_Real Param) ;
  
  Standard_EXPORT     void Set(const Standard_Real First,const Standard_Real Last) ;
  
  Standard_EXPORT     void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const;
  
  Standard_EXPORT     void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const;
  
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;
  //! Returns   the    minimal  Distance  beetween   two <br>
//!          extremitys of calculed sections. <br>
  Standard_EXPORT     Standard_Real GetMinimalDistance() const;
  
  Standard_EXPORT    const gp_Pnt& PointOnS1() const;
  
  Standard_EXPORT    const gp_Pnt& PointOnS2() const;
  
  Standard_EXPORT     Standard_Boolean IsTangencyPoint() const;
  
  Standard_EXPORT    const gp_Vec& TangentOnS1() const;
  
  Standard_EXPORT    const gp_Vec2d& Tangent2dOnS1() const;
  
  Standard_EXPORT    const gp_Vec& TangentOnS2() const;
  
  Standard_EXPORT    const gp_Vec2d& Tangent2dOnS2() const;
  //! Returns the tangent vector at the section, <br>
//!          at the beginning and the end of the section, and <br>
//!          returns the normal (of the surfaces) at <br>
//!          these points. <br>
  Standard_EXPORT     void Tangent(const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Vec& TgFirst,gp_Vec& TgLast,gp_Vec& NormFirst,gp_Vec& NormLast) const;
  
  Standard_EXPORT   virtual  Standard_Boolean TwistOnS1() const;
  
  Standard_EXPORT   virtual  Standard_Boolean TwistOnS2() const;
  //! Inits the value of radius, and the "quadrant". <br>
  Standard_EXPORT     void Set(const Standard_Real Radius,const Standard_Integer Choix) ;
  //! Sets  the  type  of   section generation   for the <br>
//!          approximations. <br>
  Standard_EXPORT     void Set(const BlendFunc_SectionShape TypeSection) ;
  //! Utile pour une visu rapide et approximative de la surface. <br>
  Standard_EXPORT     void Section(const Standard_Real Param,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,Standard_Real& Pdeb,Standard_Real& Pfin,gp_Circ& C) ;
  //! Returns  if the section is rationnal <br>
  Standard_EXPORT     Standard_Boolean IsRational() const;
  //!  Returns the length of the maximum section <br>
  Standard_EXPORT     Standard_Real GetSectionSize() const;
  //! Compute the minimal value of weight for each poles <br>
//!          of all sections. <br>
  Standard_EXPORT     void GetMinimalWeight(TColStd_Array1OfReal& Weigths) const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  
  Standard_EXPORT     void GetShape(Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Standard_Integer& NbPoles2d) ;
  //! Returns the tolerance to reach in approximation <br>
//!          to respecte <br>
//!          BoundTol error at the Boundary <br>
//!          AngleTol tangent error at the Boundary <br>
//!          SurfTol error inside the surface. <br>
  Standard_EXPORT     void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector& Tol3d,math_Vector& Tol1D) const;
  
  Standard_EXPORT     void Knots(TColStd_Array1OfReal& TKnots) ;
  
  Standard_EXPORT     void Mults(TColStd_Array1OfInteger& TMults) ;
  //! Used for the first and last section <br>
  Standard_EXPORT   virtual  Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfVec& D2Poles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColgp_Array1OfVec2d& D2Poles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths,TColStd_Array1OfReal& D2Weigths) ;
  //! Used for the first and last section <br>
  Standard_EXPORT   virtual  Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths) ;
  
  Standard_EXPORT     void Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfPnt2d& Poles2d,TColStd_Array1OfReal& Weigths) ;
  
  Standard_EXPORT     gp_Ax1 AxeRot(const Standard_Real Prm) ;
  
  Standard_EXPORT     void Resolution(const Standard_Integer IC2d,const Standard_Real Tol,Standard_Real& TolU,Standard_Real& TolV) const;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean ComputeValues(const math_Vector& X,const Standard_Integer Order,const Standard_Boolean ByParam = Standard_False,const Standard_Real Param = 0) ;


Handle_Adaptor3d_HSurface surf1;
Handle_Adaptor3d_HSurface surf2;
Handle_Adaptor3d_HCurve curv;
Handle_Adaptor3d_HCurve tcurv;
gp_Pnt pts1;
gp_Pnt pts2;
Standard_Boolean istangent;
gp_Vec tg1;
gp_Vec2d tg12d;
gp_Vec tg2;
gp_Vec2d tg22d;
Standard_Real param;
Standard_Real ray1;
Standard_Real ray2;
Standard_Integer choix;
Standard_Integer myXOrder;
Standard_Integer myTOrder;
math_Vector xval;
Standard_Real tval;
gp_Vec d1u1;
gp_Vec d1u2;
gp_Vec d1v1;
gp_Vec d1v2;
gp_Vec d2u1;
gp_Vec d2v1;
gp_Vec d2uv1;
gp_Vec d2u2;
gp_Vec d2v2;
gp_Vec d2uv2;
gp_Vec dn1w;
gp_Vec dn2w;
gp_Vec d2n1w;
gp_Vec d2n2w;
gp_Vec nplan;
gp_Vec nsurf1;
gp_Vec dns1u1;
gp_Vec dns1u2;
gp_Vec dns1v1;
gp_Vec dns1v2;
gp_Vec nsurf2;
gp_Vec dnplan;
gp_Vec d2nplan;
gp_Vec dnsurf1;
gp_Vec dnsurf2;
gp_Vec dndu1;
gp_Vec dndu2;
gp_Vec dndv1;
gp_Vec dndv2;
gp_Vec d2ndu1;
gp_Vec d2ndu2;
gp_Vec d2ndv1;
gp_Vec d2ndv2;
gp_Vec d2nduv1;
gp_Vec d2nduv2;
gp_Vec d2ndtu1;
gp_Vec d2ndtu2;
gp_Vec d2ndtv1;
gp_Vec d2ndtv2;
math_Vector E;
math_Matrix DEDX;
math_Vector DEDT;
BlendFunc_Tensor D2EDX2;
math_Matrix D2EDXDT;
math_Vector D2EDT2;
Standard_Real maxang;
Standard_Real minang;
Standard_Real distmin;
BlendFunc_SectionShape mySShape;
Convert_ParameterisationType myTConv;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

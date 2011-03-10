// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_CurveAndTrihedron_HeaderFile
#define _GeomFill_CurveAndTrihedron_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_CurveAndTrihedron_HeaderFile
#include <Handle_GeomFill_CurveAndTrihedron.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_GeomFill_TrihedronLaw_HeaderFile
#include <Handle_GeomFill_TrihedronLaw.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Mat_HeaderFile
#include <gp_Mat.hxx>
#endif
#ifndef _GeomFill_LocationLaw_HeaderFile
#include <GeomFill_LocationLaw.hxx>
#endif
#ifndef _Handle_GeomFill_LocationLaw_HeaderFile
#include <Handle_GeomFill_LocationLaw.hxx>
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
class GeomFill_TrihedronLaw;
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class gp_Mat;
class GeomFill_LocationLaw;
class gp_Vec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;
class TColStd_Array1OfReal;
class gp_Pnt;


//! Define location law with an TrihedronLaw and an <br>
//!           curve <br>
//!        Definition Location is : <br>
//!         transformed  section   coordinates  in  (Curve(v)), <br>
//!         (Normal(v),   BiNormal(v), Tangente(v))) systeme are <br>
//!         the  same like section  shape coordinates in <br>
//!         (O,(OX, OY, OZ)) systeme. <br>
class GeomFill_CurveAndTrihedron : public GeomFill_LocationLaw {

public:

  
  Standard_EXPORT   GeomFill_CurveAndTrihedron(const Handle(GeomFill_TrihedronLaw)& Trihedron);
  
  Standard_EXPORT   virtual  void SetCurve(const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT   virtual const Handle_Adaptor3d_HCurve& GetCurve() const;
  //!  Set a transformation Matrix like   the law M(t) become <br>
//!          Mat * M(t) <br>
  Standard_EXPORT   virtual  void SetTrsf(const gp_Mat& Transfo) ;
  
  Standard_EXPORT   virtual  Handle_GeomFill_LocationLaw Copy() const;
  //! compute Location and 2d points <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Mat& M,gp_Vec& V) ;
  //! compute Location and 2d points <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Mat& M,gp_Vec& V,TColgp_Array1OfPnt2d& Poles2d) ;
  //! compute location 2d  points and  associated <br>
//!          first derivatives. <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real Param,gp_Mat& M,gp_Vec& V,gp_Mat& DM,gp_Vec& DV,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d) ;
  //! compute location 2d  points and associated <br>
//!          first and seconde  derivatives. <br>
//!  Warning : It used only for C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D2(const Standard_Real Param,gp_Mat& M,gp_Vec& V,gp_Mat& DM,gp_Vec& DV,gp_Mat& D2M,gp_Vec& D2V,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColgp_Array1OfVec2d& D2Poles2d) ;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT   virtual  void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Sets the bounds of the parametric interval on <br>
//!          the function <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
  Standard_EXPORT   virtual  void SetInterval(const Standard_Real First,const Standard_Real Last) ;
  //! Gets the bounds of the parametric interval on <br>
//!          the function <br>
  Standard_EXPORT   virtual  void GetInterval(Standard_Real& First,Standard_Real& Last) const;
  //! Gets the bounds of the function parametric domain. <br>
//!  Warning: This domain it is  not modified by the <br>
//!          SetValue method <br>
  Standard_EXPORT   virtual  void GetDomain(Standard_Real& First,Standard_Real& Last) const;
  //!  Get the maximum Norm  of the matrix-location part.  It <br>
//!           is usful to find an good Tolerance to approx M(t). <br>
  Standard_EXPORT   virtual  Standard_Real GetMaximalNorm() ;
  //! Get average value of M(t) and V(t) it is usfull to <br>
//!          make fast approximation of rational  surfaces. <br>
  Standard_EXPORT   virtual  void GetAverageLaw(gp_Mat& AM,gp_Vec& AV) ;
  //! Say if the Location  Law, is an translation of  Location <br>
//! The default implementation is " returns False ". <br>
  Standard_EXPORT   virtual  Standard_Boolean IsTranslation(Standard_Real& Error) const;
  //! Say if the Location  Law, is a rotation of Location <br>
//! The default implementation is " returns False ". <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRotation(Standard_Real& Error) const;
  
  Standard_EXPORT   virtual  void Rotation(gp_Pnt& Center) const;




  DEFINE_STANDARD_RTTI(GeomFill_CurveAndTrihedron)

protected:




private: 


Standard_Boolean WithTrans;
Handle_GeomFill_TrihedronLaw myLaw;
Handle_Adaptor3d_HCurve myCurve;
Handle_Adaptor3d_HCurve myTrimmed;
gp_Pnt Point;
gp_Vec V1;
gp_Vec V2;
gp_Vec V3;
gp_Mat Trans;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

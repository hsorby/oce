// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dInt_Geom2dCurveTool_HeaderFile
#define _Geom2dInt_Geom2dCurveTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Elips2d_HeaderFile
#include <gp_Elips2d.hxx>
#endif
#ifndef _gp_Parab2d_HeaderFile
#include <gp_Parab2d.hxx>
#endif
#ifndef _gp_Hypr2d_HeaderFile
#include <gp_Hypr2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
class Adaptor2d_Curve2d;
class gp_Pnt2d;
class gp_Vec2d;
class TColStd_Array1OfReal;



class Geom2dInt_Geom2dCurveTool  {
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

  
      static  GeomAbs_CurveType TheType(const Adaptor2d_Curve2d& C) ;
  
      static  Standard_Boolean IsComposite(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Lin2d Line(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Circ2d Circle(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Elips2d Ellipse(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Parab2d Parabola(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Hypr2d Hyperbola(const Adaptor2d_Curve2d& C) ;
  
      static  Standard_Real EpsX(const Adaptor2d_Curve2d& C) ;
  
      static  Standard_Real EpsX(const Adaptor2d_Curve2d& C,const Standard_Real Eps_XYZ) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Adaptor2d_Curve2d& C) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Adaptor2d_Curve2d& C,const Standard_Real U0,const Standard_Real U1) ;
  
      static  Standard_Real FirstParameter(const Adaptor2d_Curve2d& C) ;
  
      static  Standard_Real LastParameter(const Adaptor2d_Curve2d& C) ;
  
      static  gp_Pnt2d Value(const Adaptor2d_Curve2d& C,const Standard_Real X) ;
  
      static  void D0(const Adaptor2d_Curve2d& C,const Standard_Real U,gp_Pnt2d& P) ;
  
      static  void D1(const Adaptor2d_Curve2d& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& T) ;
  
      static  void D2(const Adaptor2d_Curve2d& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& T,gp_Vec2d& N) ;
  
      static  Standard_Integer NbIntervals(const Adaptor2d_Curve2d& C) ;
  
      static  void Intervals(const Adaptor2d_Curve2d& C,TColStd_Array1OfReal& Tab) ;
  
      static  void GetInterval(const Adaptor2d_Curve2d& C,const Standard_Integer Index,const TColStd_Array1OfReal& Tab,Standard_Real& U1,Standard_Real& U2) ;





protected:





private:





};

#define IntCurveCurve Adaptor2d_Curve2d
#define IntCurveCurve_hxx <Adaptor2d_Curve2d.hxx>
#define Geom2dInt_CurveTool Geom2dInt_Geom2dCurveTool
#define Geom2dInt_CurveTool_hxx <Geom2dInt_Geom2dCurveTool.hxx>

#include <Geom2dInt_CurveTool.lxx>

#undef IntCurveCurve
#undef IntCurveCurve_hxx
#undef Geom2dInt_CurveTool
#undef Geom2dInt_CurveTool_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

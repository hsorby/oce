// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_CCache2dOfExtCC2d_HeaderFile
#define _Extrema_CCache2dOfExtCC2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Extrema_CCache2dOfExtCC2d_HeaderFile
#include <Handle_Extrema_CCache2dOfExtCC2d.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
class TColgp_HArray1OfPnt2d;
class StdFail_NotDone;
class Adaptor2d_Curve2d;
class gp_Pnt2d;



class Extrema_CCache2dOfExtCC2d : public Standard_Transient {

public:

  
  Standard_EXPORT   Extrema_CCache2dOfExtCC2d();
  
  Standard_EXPORT   Extrema_CCache2dOfExtCC2d(const Adaptor2d_Curve2d& theC,const Standard_Real theUFirst,const Standard_Real theULast,const Standard_Integer theNbSamples,const Standard_Boolean theToCalculate);
  
  Standard_EXPORT     void SetCurve(const Adaptor2d_Curve2d& theC,const Standard_Integer theNbSamples,const Standard_Boolean theToCalculate) ;
  
  Standard_EXPORT     void SetCurve(const Adaptor2d_Curve2d& theC,const Standard_Real theUFirst,const Standard_Real theULast,const Standard_Integer theNbSamples,const Standard_Boolean theToCalculate) ;
  
  Standard_EXPORT     void SetRange(const Standard_Real Uinf,const Standard_Real Usup,const Standard_Boolean theToCalculate) ;
  
  Standard_EXPORT     void CalculatePoints() ;
  
        Standard_Boolean IsValid() const;
  
       const Handle_TColgp_HArray1OfPnt2d& Points() const;
  
        Standard_Address CurvePtr() const;
  
        Standard_Integer NbSamples() const;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
        Standard_Real TrimFirstParameter() const;
  
        Standard_Real TrimLastParameter() const;




  DEFINE_STANDARD_RTTI(Extrema_CCache2dOfExtCC2d)

protected:




private: 


Standard_Address myC;
Standard_Real myFirst;
Standard_Real myLast;
Standard_Real myTrimFirst;
Standard_Real myTrimLast;
Standard_Integer myNbSamples;
Handle_TColgp_HArray1OfPnt2d myPntArray;
Standard_Boolean myIsArrayValid;


};

#define Curve Adaptor2d_Curve2d
#define Curve_hxx <Adaptor2d_Curve2d.hxx>
#define Pnt gp_Pnt2d
#define Pnt_hxx <gp_Pnt2d.hxx>
#define Handle_ArrayOfPnt Handle_TColgp_HArray1OfPnt2d
#define ArrayOfPnt TColgp_HArray1OfPnt2d
#define ArrayOfPnt_hxx <TColgp_HArray1OfPnt2d.hxx>
#define Extrema_CurveCache Extrema_CCache2dOfExtCC2d
#define Extrema_CurveCache_hxx <Extrema_CCache2dOfExtCC2d.hxx>
#define Handle_Extrema_CurveCache Handle_Extrema_CCache2dOfExtCC2d
#define Extrema_CurveCache_Type_() Extrema_CCache2dOfExtCC2d_Type_()

#include <Extrema_CurveCache.lxx>

#undef Curve
#undef Curve_hxx
#undef Pnt
#undef Pnt_hxx
#undef Handle_ArrayOfPnt
#undef ArrayOfPnt
#undef ArrayOfPnt_hxx
#undef Extrema_CurveCache
#undef Extrema_CurveCache_hxx
#undef Handle_Extrema_CurveCache
#undef Extrema_CurveCache_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif

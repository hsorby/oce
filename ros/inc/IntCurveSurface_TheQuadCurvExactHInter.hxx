// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_TheQuadCurvExactHInter_HeaderFile
#define _IntCurveSurface_TheQuadCurvExactHInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class Adaptor3d_HCurve;
class IntCurveSurface_TheHCurveTool;
class IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter;



class IntCurveSurface_TheQuadCurvExactHInter  {
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

  
  Standard_EXPORT   IntCurveSurface_TheQuadCurvExactHInter(const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer NbRoots() const;
  
  Standard_EXPORT     Standard_Real Root(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Integer NbIntervals() const;
  
  Standard_EXPORT     void Intervals(const Standard_Integer Index,Standard_Real& U1,Standard_Real& U2) const;





protected:





private:



Standard_Integer nbpnts;
TColStd_SequenceOfReal pnts;
Standard_Integer nbintv;
TColStd_SequenceOfReal intv;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

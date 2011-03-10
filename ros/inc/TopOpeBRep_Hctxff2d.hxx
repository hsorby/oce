// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_Hctxff2d_HeaderFile
#define _TopOpeBRep_Hctxff2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRep_Hctxff2d_HeaderFile
#include <Handle_TopOpeBRep_Hctxff2d.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BRepAdaptor_HSurface;
class TopoDS_Face;



class TopOpeBRep_Hctxff2d : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopOpeBRep_Hctxff2d();
  
  Standard_EXPORT     void SetFaces(const TopoDS_Face& F1,const TopoDS_Face& F2) ;
  
  Standard_EXPORT     void SetHSurfaces(const Handle(BRepAdaptor_HSurface)& S1,const Handle(BRepAdaptor_HSurface)& S2) ;
  
  Standard_EXPORT     void SetTolerances(const Standard_Real Tol1,const Standard_Real Tol2) ;
  
  Standard_EXPORT     void GetTolerances(Standard_Real& Tol1,Standard_Real& Tol2) const;
  
  Standard_EXPORT     Standard_Real GetMaxTolerance() const;
  
  Standard_EXPORT    const TopoDS_Face& Face(const Standard_Integer I) const;
  
  Standard_EXPORT     Handle_BRepAdaptor_HSurface HSurface(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Boolean SurfacesSameOriented() const;
  
  Standard_EXPORT     Standard_Boolean FacesSameOriented() const;
  
  Standard_EXPORT     Standard_Boolean FaceSameOrientedWithRef(const Standard_Integer I) const;




  DEFINE_STANDARD_RTTI(TopOpeBRep_Hctxff2d)

protected:




private: 

  
  Standard_EXPORT     void SetHSurfacesPrivate() ;

TopoDS_Face myFace1;
Handle_BRepAdaptor_HSurface mySurface1;
GeomAbs_SurfaceType mySurfaceType1;
Standard_Boolean myf1surf1F_sameoriented;
TopoDS_Face myFace2;
Handle_BRepAdaptor_HSurface mySurface2;
GeomAbs_SurfaceType mySurfaceType2;
Standard_Boolean myf2surf1F_sameoriented;
Standard_Boolean mySurfacesSameOriented;
Standard_Boolean myFacesSameOriented;
Standard_Real myTol1;
Standard_Real myTol2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

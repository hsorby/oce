// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_WFRestrictedFace_HeaderFile
#define _VrmlConverter_WFRestrictedFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _Handle_VrmlConverter_Drawer_HeaderFile
#include <Handle_VrmlConverter_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BRepAdaptor_HSurface;
class VrmlConverter_Drawer;


//! WFRestrictedFace -     computes     the  wireframe <br>
//!          presentation  of faces  with   restrictions by <br>
//!          displaying   a  given  number    of  U   and/or  V <br>
//!          isoparametric  curves,  converts this  one into VRML <br>
//!          objects  and writes  (adds)  into anOStream. <br>
//!          All requested  properties  of the representation <br>
//!          are specify in  aDrawer. <br>
//!          This kind of the presentation is converted into <br>
//!          IndexedLineSet ( VRML ). <br>
class VrmlConverter_WFRestrictedFace  {
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

  
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,const Handle(BRepAdaptor_HSurface)& aFace,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  
  Standard_EXPORT   static  void AddUIso(Standard_OStream& anOStream,const Handle(BRepAdaptor_HSurface)& aFace,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  
  Standard_EXPORT   static  void AddVIso(Standard_OStream& anOStream,const Handle(BRepAdaptor_HSurface)& aFace,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,const Handle(BRepAdaptor_HSurface)& aFace,const Standard_Boolean DrawUIso,const Standard_Boolean DrawVIso,const Standard_Integer NBUiso,const Standard_Integer NBViso,const Handle(VrmlConverter_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

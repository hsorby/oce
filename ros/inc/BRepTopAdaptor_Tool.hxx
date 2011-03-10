// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTopAdaptor_Tool_HeaderFile
#define _BRepTopAdaptor_Tool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRepTopAdaptor_TopolTool_HeaderFile
#include <Handle_BRepTopAdaptor_TopolTool.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepTopAdaptor_TopolTool;
class Adaptor3d_HSurface;
class TopoDS_Face;



class BRepTopAdaptor_Tool  {
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

  
  Standard_EXPORT   BRepTopAdaptor_Tool();
  
  Standard_EXPORT   BRepTopAdaptor_Tool(const TopoDS_Face& F,const Standard_Real Tol2d);
  
  Standard_EXPORT   BRepTopAdaptor_Tool(const Handle(Adaptor3d_HSurface)& Surface,const Standard_Real Tol2d);
  
  Standard_EXPORT     void Init(const TopoDS_Face& F,const Standard_Real Tol2d) ;
  
  Standard_EXPORT     void Init(const Handle(Adaptor3d_HSurface)& Surface,const Standard_Real Tol2d) ;
  
  Standard_EXPORT     Handle_BRepTopAdaptor_TopolTool GetTopolTool() ;
  
  Standard_EXPORT     void SetTopolTool(const Handle(BRepTopAdaptor_TopolTool)& TT) ;
  
  Standard_EXPORT     Handle_Adaptor3d_HSurface GetSurface() ;
  
  Standard_EXPORT     void Destroy() ;
~BRepTopAdaptor_Tool()
{
  Destroy();
}





protected:





private:



Standard_Boolean myloaded;
Handle_BRepTopAdaptor_TopolTool myTopolTool;
Handle_Adaptor3d_HSurface myHSurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

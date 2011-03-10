// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlTransfer_HeaderFile
#define _StlTransfer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_StlMesh_Mesh_HeaderFile
#include <Handle_StlMesh_Mesh.hxx>
#endif
class TopoDS_Shape;
class StlMesh_Mesh;


//! The  package   Algorithm  for Meshing   implements <br>
//!          facilities to compute  the Mesh data-structure, as <br>
//!          defined in package StlMesh, from a shape of package <br>
//!          TopoDS.  The triangulation  is  computed  with the <br>
//!          Delaunay      algorithm   implemented in   package <br>
//!          BRepMesh.  The  result   is  stored  in  the  mesh <br>
//!          data-structure Mesh from package StlMesh. <br>
//! <br>
class StlTransfer  {
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

  
  Standard_EXPORT   static  void BuildIncrementalMesh(const TopoDS_Shape& Shape,const Standard_Real Deflection,const Handle(StlMesh_Mesh)& Mesh) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

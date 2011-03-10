// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_VertexInfo_HeaderFile
#define _TopOpeBRepBuild_VertexInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_IndexedMapOfOrientedShape_HeaderFile
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_Vertex;
class TopoDS_Edge;
class TopTools_IndexedMapOfOrientedShape;
class TopTools_ListOfShape;



class TopOpeBRepBuild_VertexInfo  {
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

  
  Standard_EXPORT   TopOpeBRepBuild_VertexInfo();
  
  Standard_EXPORT     void SetVertex(const TopoDS_Vertex& aV) ;
  
  Standard_EXPORT    const TopoDS_Vertex& Vertex() const;
  
  Standard_EXPORT     void SetSmart(const Standard_Boolean aFlag) ;
  
  Standard_EXPORT     Standard_Boolean Smart() const;
  
  Standard_EXPORT     Standard_Integer NbCases() const;
  
  Standard_EXPORT     Standard_Integer FoundOut() const;
  
  Standard_EXPORT     void AddIn(const TopoDS_Edge& anE) ;
  
  Standard_EXPORT     void AddOut(const TopoDS_Edge& anE) ;
  
  Standard_EXPORT     void SetCurrentIn(const TopoDS_Edge& anE) ;
  
  Standard_EXPORT    const TopTools_IndexedMapOfOrientedShape& EdgesIn() const;
  
  Standard_EXPORT    const TopTools_IndexedMapOfOrientedShape& EdgesOut() const;
  
  Standard_EXPORT     TopTools_IndexedMapOfOrientedShape& ChangeEdgesOut() ;
  
  Standard_EXPORT     void Dump() const;
  
  Standard_EXPORT    const TopoDS_Edge& CurrentOut() ;
  
  Standard_EXPORT     void AppendPassed(const TopoDS_Edge& anE) ;
  
  Standard_EXPORT     void RemovePassed() ;
  
  Standard_EXPORT    const TopTools_ListOfShape& ListPassed() const;
  
  Standard_EXPORT     void Prepare(const TopTools_ListOfShape& aL) ;





protected:





private:



TopoDS_Vertex myVertex;
TopoDS_Edge myCurrent;
TopoDS_Edge myCurrentIn;
Standard_Boolean mySmart;
TopTools_IndexedMapOfOrientedShape myEdgesIn;
TopTools_IndexedMapOfOrientedShape myEdgesOut;
TopTools_IndexedMapOfOrientedShape myLocalEdgesOut;
TopTools_ListOfShape myEdgesPassed;
Standard_Integer myFoundOut;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

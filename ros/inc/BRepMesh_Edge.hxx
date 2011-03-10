// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_Edge_HeaderFile
#define _BRepMesh_Edge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MeshDS_DegreeOfFreedom_HeaderFile
#include <MeshDS_DegreeOfFreedom.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class BRepMesh_Edge  {
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

  //! Contructs a link beetween to vertices. <br>
  Standard_EXPORT   BRepMesh_Edge(const Standard_Integer vDebut,const Standard_Integer vFin,const MeshDS_DegreeOfFreedom canMove);
  //! Give the index of first node of the Link. <br>
        Standard_Integer FirstNode() const;
  //! Give the index of Last node of the Link. <br>
        Standard_Integer LastNode() const;
  
        MeshDS_DegreeOfFreedom Movability() const;
  
  Standard_EXPORT     void SetMovability(const MeshDS_DegreeOfFreedom Move) ;
  
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  
  Standard_EXPORT     Standard_Boolean SameOrientation(const BRepMesh_Edge& Other) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const BRepMesh_Edge& Other) const;
    Standard_Boolean operator ==(const BRepMesh_Edge& Other) const
{
  return IsEqual(Other);
}





protected:





private:



Standard_Integer myFirstNode;
Standard_Integer myLastNode;
MeshDS_DegreeOfFreedom myMovability;


};


#include <BRepMesh_Edge.lxx>



// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const BRepMesh_Edge& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}



#endif

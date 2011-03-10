// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_Map_HeaderFile
#define _ChFiDS_Map_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Encapsulation of IndexedDataMapOfShapeListOfShape. <br>
class ChFiDS_Map  {
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

  //!  Create an empty Map <br>
  Standard_EXPORT   ChFiDS_Map();
  //! Fills the map with the subshapes of type T1 as keys <br>
//!          and the list of ancestors  of type T2 as items. <br>
  Standard_EXPORT     void Fill(const TopoDS_Shape& S,const TopAbs_ShapeEnum T1,const TopAbs_ShapeEnum T2) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const TopoDS_Shape& S) const;
  
  Standard_EXPORT    const TopTools_ListOfShape& FindFromKey(const TopoDS_Shape& S) const;
   const TopTools_ListOfShape& operator()(const TopoDS_Shape& S) const
{
  return FindFromKey(S);
}
  
  Standard_EXPORT    const TopTools_ListOfShape& FindFromIndex(const Standard_Integer I) const;
   const TopTools_ListOfShape& operator()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}





protected:





private:



TopTools_IndexedDataMapOfShapeListOfShape myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

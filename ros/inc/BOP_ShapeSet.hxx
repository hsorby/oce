// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ShapeSet_HeaderFile
#define _BOP_ShapeSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _TopExp_Explorer_HeaderFile
#include <TopExp_Explorer.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopTools_ListIteratorOfListOfShape_HeaderFile
#include <TopTools_ListIteratorOfListOfShape.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;



class BOP_ShapeSet  {
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

  
//! Creates a ShapeSet  in order to build shapes connected <br>
//! by <SubShapeType>  shapes. <br>
  Standard_EXPORT   BOP_ShapeSet(const TopAbs_ShapeEnum SubShapeType);
  
//! Destructor <br>
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BOP_ShapeSet(){Delete() ; }
  
//! Adds <S> to the list of shapes. (wires or shells). <br>
  Standard_EXPORT   virtual  void AddShape(const TopoDS_Shape& S) ;
  
//! Add S to the list of starting shapes used for reconstructions. <br>
//! apply AddElement(S). <br>
  Standard_EXPORT   virtual  void AddStartElement(const TopoDS_Shape& S) ;
  
//! For each subshape SE of S of type mySubShapeType <br>
//! Add subshapes of S to the map of subshapes (mySubShapeMap) <br>
//! Add S to the list of shape incident to subshapes of S. <br>
  Standard_EXPORT   virtual  void AddElement(const TopoDS_Shape& S) ;
  
//! Selector. <br>
  Standard_EXPORT    const TopTools_ListOfShape& StartElements() const;
  
//! Internal  purpose <br>
  Standard_EXPORT     void InitShapes() ;
  
//! Internal  purpose <br>
  Standard_EXPORT     Standard_Boolean MoreShapes() const;
  
//! Internal  purpose <br>
  Standard_EXPORT     void NextShape() ;
  
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT     void InitStartElements() ;
  
//! Internal  purpose <br>
  Standard_EXPORT     Standard_Boolean MoreStartElements() const;
  
//! Internal  purpose <br>
  Standard_EXPORT     void NextStartElement() ;
  
//! Iteration on the neighbours of a shape of type myShapeType <br>
//! through its subshapes of type mySubShapeType. <br>
  Standard_EXPORT    const TopoDS_Shape& StartElement() const;
  
  Standard_EXPORT   virtual  void InitNeighbours(const TopoDS_Shape& S) ;
  
//! Internal  purpose <br>
  Standard_EXPORT     Standard_Boolean MoreNeighbours() ;
  
//! Internal  purpose <br>
  Standard_EXPORT     void NextNeighbour() ;
  
//! Internal  purpose <br>
  Standard_EXPORT    const TopoDS_Shape& Neighbour() const;
  
//! Modifier <br>
  Standard_EXPORT     TopTools_ListOfShape& ChangeStartShapes() ;
  
//! Build the list of neighbour shapes of myCurrentShape <br>
//! (neighbour shapes and myCurrentShapes are of type t) <br>
//! Initialize myIncidentShapesIter on neighbour shapes. <br>
  Standard_EXPORT   virtual  void FindNeighbours() ;
  
  Standard_EXPORT   virtual const TopTools_ListOfShape& MakeNeighboursList(const TopoDS_Shape& E,const TopoDS_Shape& V) ;
  
  Standard_EXPORT     Standard_Integer MaxNumberSubShape(const TopoDS_Shape& Shape) ;
  
//! Clears myStartShapes,mySubShapeMap,myShapes <br>
  Standard_EXPORT     void ClearContents() ;





protected:

  
//! Internal  purpose <br>
  Standard_EXPORT     void ProcessAddShape(const TopoDS_Shape& S) ;
  
//! Internal  purpose <br>
  Standard_EXPORT     void ProcessAddStartElement(const TopoDS_Shape& S) ;
  
//! Internal  purpose <br>
  Standard_EXPORT     void ProcessAddElement(const TopoDS_Shape& S) ;


TopAbs_ShapeEnum myShapeType;
TopAbs_ShapeEnum mySubShapeType;
TopExp_Explorer mySubShapeExplorer;
TopTools_ListOfShape myStartShapes;
TopTools_ListIteratorOfListOfShape myStartShapesIter;
TopTools_IndexedDataMapOfShapeListOfShape mySubShapeMap;
TopTools_ListIteratorOfListOfShape myIncidentShapesIter;
TopTools_ListOfShape myShapes;
TopTools_ListIteratorOfListOfShape myShapesIter;
TopoDS_Shape myCurrentShape;
TopTools_ListOfShape myCurrentShapeNeighbours;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

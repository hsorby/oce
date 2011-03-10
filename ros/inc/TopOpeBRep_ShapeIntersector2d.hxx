// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_ShapeIntersector2d_HeaderFile
#define _TopOpeBRep_ShapeIntersector2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_HBoxTool_HeaderFile
#include <Handle_TopOpeBRepTool_HBoxTool.hxx>
#endif
#ifndef _TopOpeBRepTool_ShapeExplorer_HeaderFile
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#endif
#ifndef _TopOpeBRep_ShapeScanner_HeaderFile
#include <TopOpeBRep_ShapeScanner.hxx>
#endif
#ifndef _TopOpeBRep_EdgesIntersector_HeaderFile
#include <TopOpeBRep_EdgesIntersector.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopOpeBRepTool_HBoxTool;
class TopoDS_Shape;
class TopOpeBRep_EdgesIntersector;


//! Intersect two shapes. <br>
//! <br>
//!          A GeomShape is a  shape with a geometric domain, i.e. <br>
//!          a Face or an Edge. <br>
//! <br>
//!          The purpose   of  the  ShapeIntersector2d is   to  find <br>
//!          couples  of  intersecting   GeomShape  in  two Shapes <br>
//!          (which can   be  any kind of  topologies  : Compound, <br>
//!          Solid, Shell, etc... ) <br>
//! <br>
//!          It  is in charge  of  exploration  of the shapes  and <br>
//!          rejection. For this it is provided with two tools : <br>
//! <br>
//!            - ShapeExplorer from TopOpeBRepTool. <br>
//!            - ShapeScanner from TopOpeBRep which implements bounding boxes. <br>
class TopOpeBRep_ShapeIntersector2d  {
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

  
  Standard_EXPORT   TopOpeBRep_ShapeIntersector2d();
  //! Initialize the intersection of shapes S1,S2. <br>
  Standard_EXPORT     void InitIntersection(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  //! return  the shape  <Index> ( = 1 or 2) given to <br>
//!          InitIntersection(). <br>
//!          Index = 1 will return S1, Index = 2 will return S2. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape(const Standard_Integer Index) const;
  //! returns True if there are more intersection <br>
//!          between two the shapes. <br>
  Standard_EXPORT     Standard_Boolean MoreIntersection() const;
  //! search for the next intersection between the two shapes. <br>
  Standard_EXPORT     void NextIntersection() ;
  //! return the current intersection of two Edges. <br>
  Standard_EXPORT     TopOpeBRep_EdgesIntersector& ChangeEdgesIntersector() ;
  //! return  geometric  shape <Index> ( = 1 or 2 )  of <br>
//!          current intersection. <br>
  Standard_EXPORT    const TopoDS_Shape& CurrentGeomShape(const Standard_Integer Index) const;
  
  Standard_EXPORT     void DumpCurrent(const Standard_Integer K) const;
  
  Standard_EXPORT     Standard_Integer Index(const Standard_Integer K) const;





protected:





private:

  
  Standard_EXPORT     void Reset() ;
  
  Standard_EXPORT     void Init(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  
  Standard_EXPORT     void SetIntersectionDone() ;
  
  Standard_EXPORT     void InitFFIntersection() ;
  
  Standard_EXPORT     void FindFFIntersection() ;
  
  Standard_EXPORT     Standard_Boolean MoreFFCouple() const;
  
  Standard_EXPORT     void NextFFCouple() ;
  
  Standard_EXPORT     void InitEEFFIntersection() ;
  
  Standard_EXPORT     void FindEEFFIntersection() ;
  
  Standard_EXPORT     Standard_Boolean MoreEEFFCouple() const;
  
  Standard_EXPORT     void NextEEFFCouple() ;


TopoDS_Shape myShape1;
TopoDS_Shape myShape2;
Handle_TopOpeBRepTool_HBoxTool myHBoxTool;
TopOpeBRepTool_ShapeExplorer myFaceExplorer;
TopOpeBRep_ShapeScanner myFaceScanner;
TopOpeBRepTool_ShapeExplorer myEdgeExplorer;
TopOpeBRep_ShapeScanner myEdgeScanner;
TopOpeBRep_EdgesIntersector myEEIntersector;
Standard_Boolean myIntersectionDone;
Standard_Boolean myFFDone;
Standard_Boolean myEEFFDone;
Standard_Boolean myFFInit;
Standard_Boolean myEEFFInit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

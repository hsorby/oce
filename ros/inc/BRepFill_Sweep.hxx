// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Sweep_HeaderFile
#define _BRepFill_Sweep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomFill_ApproxStyle_HeaderFile
#include <GeomFill_ApproxStyle.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_BRepFill_LocationLaw_HeaderFile
#include <Handle_BRepFill_LocationLaw.hxx>
#endif
#ifndef _Handle_BRepFill_SectionLaw_HeaderFile
#include <Handle_BRepFill_SectionLaw.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _BRepFill_TransitionStyle_HeaderFile
#include <BRepFill_TransitionStyle.hxx>
#endif
class BRepFill_LocationLaw;
class BRepFill_SectionLaw;
class TopTools_HArray2OfShape;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_ConstructionError;
class TopoDS_Wire;
class TopoDS_Shape;


//! Topological Sweep Algorithm <br>
class BRepFill_Sweep  {
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

  
  Standard_EXPORT   BRepFill_Sweep(const Handle(BRepFill_SectionLaw)& Section,const Handle(BRepFill_LocationLaw)& Location,const Standard_Boolean WithKPart);
  
  Standard_EXPORT     void SetBounds(const TopoDS_Wire& FirstShape,const TopoDS_Wire& LastShape) ;
  //! Set Approximation Tolerance <br>
//!    Tol3d : Tolerance to surface approximation <br>
//!    Tol2d : Tolerance used to perform curve approximation <br>
//!            Normaly the 2d curve are approximated with a <br>
//!            tolerance given by the resolution on support surfaces, <br>
//!            but if this tolerance is too large Tol2d is used. <br>
//!    TolAngular : Tolerance (in radian) to control the angle <br>
//!                 beetween tangents on the section law and <br>
//!                 tangent of iso-v on approximed surface <br>
  Standard_EXPORT     void SetTolerance(const Standard_Real Tol3d,const Standard_Real BoundTol = 1.0,const Standard_Real Tol2d = 1.0e-5,const Standard_Real TolAngular = 1.0e-2) ;
  //! Tolerance  To controle Corner management. <br>
//! <br>
//!   If the discontinuity is lesser than <AngleMin> in radian The <br>
//!   Transition Performed will be alway "Modified" <br>
//! <br>
  Standard_EXPORT     void SetAngularControl(const Standard_Real AngleMin = 0.01,const Standard_Real AngleMax = 6.0) ;
  //! Build the Sweeep  Surface <br>
//!    Transition define Transition strategy <br>
//!    Approx define Approximation Strategy <br>
//!    - GeomFill_Section : The composed Function Location X Section <br>
//!                         is directly approximed. <br>
//!    - GeomFill_Location : The location law is approximed, and the <br>
//!                          SweepSurface is bulid algebric composition <br>
//!                          of approximed location law and section law <br>
//!                          This option is Ok, if Section.Surface() methode <br>
//!                          is effective. <br>
//!    Continuity : The continuity in v waiting on the surface <br>
//!    Degmax     : The maximum degree in v requiered on the surface <br>
//!    Segmax     : The maximum number of span in v requiered on <br>
//!                 the surface. <br>
  Standard_EXPORT     void Build(const BRepFill_TransitionStyle Transition = BRepFill_Modified,const GeomFill_ApproxStyle Approx = GeomFill_Location,const GeomAbs_Shape Continuity = GeomAbs_C2,const Standard_Integer Degmax = 11,const Standard_Integer Segmax = 30) ;
  //! Say if the Shape is Build. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! returns the Sweeping Shape <br>
  Standard_EXPORT     TopoDS_Shape Shape() const;
  //! Get the Approximation  error. <br>
  Standard_EXPORT     Standard_Real ErrorOnSurface() const;
  
  Standard_EXPORT     Handle_TopTools_HArray2OfShape SubShape() const;
  
  Standard_EXPORT     Handle_TopTools_HArray2OfShape InterFaces() const;
  
  Standard_EXPORT     Handle_TopTools_HArray2OfShape Sections() const;





protected:





private:

  
  Standard_EXPORT     Standard_Boolean CorrectApproxParameters() ;
  
  Standard_EXPORT     Standard_Boolean BuildWire(const BRepFill_TransitionStyle Transition) ;
  
  Standard_EXPORT     Standard_Boolean BuildShell(const BRepFill_TransitionStyle Transition,const Standard_Integer Vf,const Standard_Integer Vl,const Standard_Real ExtendFirst = 0.0,const Standard_Real ExtendLast = 0.0) ;
  
  Standard_EXPORT     void PerformCorner(const Standard_Integer Index,const BRepFill_TransitionStyle Transition,const Handle(TopTools_HArray2OfShape)& Bounds) ;
  
  Standard_EXPORT     Standard_Real EvalExtrapol(const Standard_Integer Index,const BRepFill_TransitionStyle Transition) const;
  
  Standard_EXPORT     Standard_Boolean MergeVertex(const TopoDS_Shape& V1,TopoDS_Shape& V2) const;
  
  Standard_EXPORT     void UpdateVertex(const Standard_Integer Ipath,const Standard_Integer Isec,const Standard_Real Error,const Standard_Real Param,TopoDS_Shape& V) const;


Standard_Boolean isDone;
Standard_Boolean KPart;
Standard_Real myTol3d;
Standard_Real myBoundTol;
Standard_Real myTol2d;
Standard_Real myTolAngular;
Standard_Real myAngMin;
Standard_Real myAngMax;
GeomFill_ApproxStyle myApproxStyle;
GeomAbs_Shape myContinuity;
Standard_Integer myDegmax;
Standard_Integer mySegmax;
TopoDS_Shape myShape;
Handle_BRepFill_LocationLaw myLoc;
Handle_BRepFill_SectionLaw mySec;
Handle_TopTools_HArray2OfShape myUEdges;
Handle_TopTools_HArray2OfShape myVEdges;
TopTools_DataMapOfShapeShape myVEdgesModified;
Handle_TopTools_HArray2OfShape myFaces;
TopTools_ListOfShape myAuxShape;
Standard_Real Error;
TopoDS_Wire FirstShape;
TopoDS_Wire LastShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

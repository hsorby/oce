// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_RibSlot_HeaderFile
#define _BRepFeat_RibSlot_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BRepFeat_PerfSelection_HeaderFile
#include <BRepFeat_PerfSelection.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BRepFeat_StatusError_HeaderFile
#include <BRepFeat_StatusError.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_HBuilder_HeaderFile
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
#endif
#ifndef _Handle_BOP_HistoryCollector_HeaderFile
#include <Handle_BOP_HistoryCollector.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;
class gp_Pnt;
class TopoDS_Edge;
class Geom_Plane;
class gp_Dir;
class TopoDS_Face;
class Geom_Curve;
class TopoDS_Vertex;
class LocOpe_Gluer;
class TopOpeBRepBuild_HBuilder;
class BRepAlgoAPI_BooleanOperation;
class BOP_HistoryCollector;


//!  Provides functions to build mechanical features. <br>
//! Mechanical features include ribs - protrusions and grooves (or slots) - depressions along <br>
//! planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is built <br>
//! around giving thickness to a contour. This thickness can either be unilateral - on one side <br>
//! of the contour - or bilateral - on both sides. <br>
//! As in the semantics of form features, the thickness is defined by construction of shapes <br>
//! in specific contexts. The development contexts differ, however,in case of mechanical features. <br>
//! Here they include extrusion: <br>
//! -   to a limiting face of the basis shape <br>
//! -   to or from a limiting plane <br>
//! -   to a height. <br>
class BRepFeat_RibSlot  : public BRepBuilderAPI_MakeShape {
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

  //! Returns true if F a TopoDS_Shape of type edge or face has been deleted. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& F) ;
  //! Returns the list of generated Faces F. This list may be empty. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& F) ;
  //! Returns a list TopTools_ListOfShape of the faces S created in the shape. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  //! Returns the list  of shapes created  at the bottom  of <br>
//!          the created form.  It may be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& FirstShape() const;
  //! Returns  the list of shapes  created at the top of the <br>
//!          created form.  It may be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& LastShape() const;
  //! Returns a list of the limiting and glueing faces <br>
//! generated by the feature. These faces did not originally exist in the basis shape. <br>
//! The list provides the information necessary for <br>
//! subsequent addition of a draft to a face. It may be an empty list. <br>
//! If a face has tangent edges, no draft is possible, and the tangent edges must <br>
//! subsequently be removed if you want to add a draft to the face. <br>
  Standard_EXPORT    const TopTools_ListOfShape& FacesForDraft() const;
  //! Returns a list of the limiting and glueing edges <br>
//! generated by the feature. These edges did not originally exist in the basis shape. <br>
//! The list provides the information necessary for <br>
//! subsequent addition of fillets. It may be an empty list. <br>
  Standard_EXPORT    const TopTools_ListOfShape& NewEdges() const;
  //! Returns a list of the tangent edges among the <br>
//! limiting and glueing edges generated by the <br>
//! feature. These edges did not originally exist in <br>
//! the basis shape and are tangent to the face <br>
//! against which the feature is built. <br>
//! The list provides the information necessary for <br>
//! subsequent addition of fillets. It may be an empty list. <br>
//! If an edge is tangent, no fillet is possible, and <br>
//! the edge must subsequently be removed if you want to add a fillet. <br>
  Standard_EXPORT    const TopTools_ListOfShape& TgtEdges() const;
  
  Standard_EXPORT   static  Standard_Real IntPar(const Handle(Geom_Curve)& C,const gp_Pnt& P) ;
  
  Standard_EXPORT   static  TopoDS_Face ChoiceOfFaces(TopTools_ListOfShape& faces,const Handle(Geom_Curve)& cc,const Standard_Real par,const Standard_Real bnd,const Handle(Geom_Plane)& Pln) ;
  
  Standard_EXPORT     BRepFeat_StatusError CurrentStatusError() const;





protected:

  //! Redefines the empty constructor. <br>
      BRepFeat_RibSlot();
  //! General perform method... <br>
  Standard_EXPORT     void LFPerform() ;
  
  Standard_EXPORT     gp_Pnt CheckPoint(const TopoDS_Edge& e,const Standard_Real bnd,const Handle(Geom_Plane)& Pln) ;
  
  Standard_EXPORT     gp_Dir Normal(const TopoDS_Face& F,const gp_Pnt& P) ;
  
  Standard_EXPORT     void EdgeExtention(TopoDS_Edge& e,const Standard_Real bnd,const Standard_Boolean FirstLast) ;
  
  Standard_EXPORT     Standard_Real HeightMax(const TopoDS_Shape& theSbase,const TopoDS_Shape& theSUntil,gp_Pnt& p1,gp_Pnt& p2) ;
  
  Standard_EXPORT     Standard_Boolean ExtremeFaces(const Standard_Boolean RevolRib,const Standard_Real bnd,const Handle(Geom_Plane)& Pln,TopoDS_Edge& FirstEdge,TopoDS_Edge& LastEdge,TopoDS_Face& FirstFace,TopoDS_Face& LastFace,TopoDS_Vertex& FirstVertex,TopoDS_Vertex& LastVertex,Standard_Boolean& OnFirstFace,Standard_Boolean& OnLastFace,Standard_Boolean& PtOnFirstEdge,Standard_Boolean& PtOnLastEdge,TopoDS_Edge& OnFirstEdge,TopoDS_Edge& OnLastEdge) ;
  
  Standard_EXPORT     void PtOnEdgeVertex(const Standard_Boolean RevolRib,const TopoDS_Shape& shape,const gp_Pnt& point,const TopoDS_Vertex& FirstVertex,const TopoDS_Vertex& LastVertex,Standard_Boolean& PtOnEdge,TopoDS_Edge& OnEdge,Standard_Boolean& PtOnVertex,TopoDS_Vertex& OnVertex) ;
  
  Standard_EXPORT     Standard_Boolean SlidingProfile(TopoDS_Face& Prof,const Standard_Boolean RevolRib,const Standard_Real myTol,Standard_Integer& Concavite,const Handle(Geom_Plane)& myPln,const TopoDS_Face& BndFace,const gp_Pnt& CheckPnt,const TopoDS_Face& FirstFace,const TopoDS_Face& LastFace,const TopoDS_Vertex& FirstVertex,const TopoDS_Vertex& LastVertex,const TopoDS_Edge& FirstEdge,const TopoDS_Edge& LastEdge) ;
  
  Standard_EXPORT     Standard_Boolean NoSlidingProfile(TopoDS_Face& Prof,const Standard_Boolean RevolRib,const Standard_Real myTol,Standard_Integer& Concavite,const Handle(Geom_Plane)& myPln,const Standard_Real bnd,const TopoDS_Face& BndFace,const gp_Pnt& CheckPnt,const TopoDS_Face& FirstFace,const TopoDS_Face& LastFace,const TopoDS_Vertex& FirstVertex,const TopoDS_Vertex& LastVertex,const TopoDS_Edge& FirstEdge,const TopoDS_Edge& LastEdge,const Standard_Boolean OnFirstFace,const Standard_Boolean OnLastFace) ;
  //! Updates the data structures of descendant <br>
//! shapes during the glueing operation.Returns the modified, generated <br>
//!   and deleted faces during the course of the glueing operation. <br>
  Standard_EXPORT     void UpdateDescendants(const LocOpe_Gluer& G) ;
  
  Standard_EXPORT     void UpdateDescendants(const Handle(TopOpeBRepBuild_HBuilder)& B,const TopoDS_Shape& SResult,const Standard_Boolean SkipFace = Standard_False) ;
  
  Standard_EXPORT     void UpdateDescendants(const BRepAlgoAPI_BooleanOperation& aBOP,const TopoDS_Shape& SResult,const Standard_Boolean SkipFace = Standard_False) ;
  //! Updates the data structures of descendant <br>
//! shapes during the glueing operation. <br>
//!   Returns the modified, generated and deleted faces during the course of the <br>
//!   glueing operation; furnishes the arguments of the resulting shape SResult using the <br>
//!   builder B to determine the type of modification such as orientation and splitting; <br>
//!   checks to see that the SResult belongs to the data structure of the original shape. <br>
  Standard_EXPORT     void UpdateDescendants(const Handle(BOP_HistoryCollector)& aBOP,const TopoDS_Shape& SResult,const Standard_Boolean SkipFace = Standard_False) ;


gp_Pnt myFirstPnt;
gp_Pnt myLastPnt;
Standard_Boolean myFuse;
Standard_Boolean mySliding;
TopTools_DataMapOfShapeListOfShape myMap;
TopTools_DataMapOfShapeListOfShape myLFMap;
TopoDS_Shape myFShape;
TopoDS_Shape myLShape;
BRepFeat_PerfSelection myPerfSelection;
TopoDS_Wire myWire;
TopoDS_Shape mySbase;
TopoDS_Face mySkface;
TopoDS_Face myPbase;
TopoDS_Shape myGShape;
TopoDS_Shape mySUntil;
TopTools_DataMapOfShapeShape myGluedF;
TopTools_ListOfShape myNewEdges;
TopTools_ListOfShape myTgtEdges;
TopTools_ListOfShape myFacesForDraft;
BRepFeat_StatusError myStatusError;


private:





};


#include <BRepFeat_RibSlot.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

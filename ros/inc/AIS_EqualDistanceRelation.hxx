// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_EqualDistanceRelation_HeaderFile
#define _AIS_EqualDistanceRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_EqualDistanceRelation_HeaderFile
#include <Handle_AIS_EqualDistanceRelation.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager2d_HeaderFile
#include <Handle_PrsMgr_PresentationManager2d.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
#ifndef _Handle_AIS_Drawer_HeaderFile
#include <Handle_AIS_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _AIS_TypeOfDist_HeaderFile
#include <AIS_TypeOfDist.hxx>
#endif
class TopoDS_Shape;
class Geom_Plane;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_PresentationManager2d;
class Graphic2d_GraphicObject;
class Geom_Transformation;
class SelectMgr_Selection;
class AIS_Drawer;
class TopoDS_Edge;
class Bnd_Box;
class gp_Pnt;
class TopoDS_Vertex;


//! A framework to display equivalent distances between <br>
//! shapes and a given plane. <br>
//! The distance is the length of a projection from the <br>
//! shape to the plane. <br>
//! These distances are used to compare shapes by this vector alone. <br>
class AIS_EqualDistanceRelation : public AIS_Relation {

public:

  //! Constructs a framework to display equivalent <br>
//! distances between the shapes aShape1, aShape2, <br>
//! aShape3, aShape4 and the plane aPlane. <br>
//! The distance is the length of a projection from the <br>
//! shape to the plane. <br>
  Standard_EXPORT   AIS_EqualDistanceRelation(const TopoDS_Shape& aShape1,const TopoDS_Shape& aShape2,const TopoDS_Shape& aShape3,const TopoDS_Shape& aShape4,const Handle(Geom_Plane)& aPlane);
  
//! Sets the shape aShape to be used as the shape <br>
//! aShape3 in the framework created at construction time. <br>
        void SetShape3(const TopoDS_Shape& aShape) ;
  
//! Returns the shape aShape3 from the framework <br>
//! created at construction time. <br>
       const TopoDS_Shape& Shape3() const;
  
//! Sets the shape aShape to be used as the shape <br>
//! aShape4 in the framework created at construction time. <br>
        void SetShape4(const TopoDS_Shape& aShape) ;
  
//! Returns the shape aShape4 from the framework <br>
//! created at construction time. <br>
       const TopoDS_Shape& Shape4() const;
  //! Computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  //! Computes the location of an intreval between <br>
//!          between two edges. FirstAttach , SecondAttach <br>
//!          are the returned extreme points of the interval. <br>
  Standard_EXPORT   static  void ComputeTwoEdgesLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const Standard_Real ArrowSize,const TopoDS_Edge& FirstEdge,const TopoDS_Edge& SecondEdge,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,gp_Pnt& FirstExtreme,gp_Pnt& SecondExtreme,DsgPrs_ArrowSide& SymbolPrs) ;
  //! Computes the interval position between two vertexs. FirstAttach, <br>
//!          SecondAttach are the returned extreme points of the interval. <br>
  Standard_EXPORT   static  void ComputeTwoVerticesLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const Standard_Real ArrowSize,const TopoDS_Vertex& FirstVertex,const TopoDS_Vertex& SecondVertex,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,const AIS_TypeOfDist TypeDist,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,gp_Pnt& FirstExtreme,gp_Pnt& SecondExtreme,DsgPrs_ArrowSide& SymbolPrs) ;
  //! Compute the interval location between a vertex and an edge. Edge may be <br>
//!          a line or a circle. <br>
  Standard_EXPORT   static  void ComputeOneEdgeOneVertexLength(const Handle(Prs3d_Presentation)& aPresentation,const Handle(AIS_Drawer)& aDrawer,const Standard_Real ArrowSize,const TopoDS_Shape& FirstShape,const TopoDS_Shape& SecondShape,const Handle(Geom_Plane)& Plane,const Standard_Boolean AutomaticPos,const Standard_Boolean IsSetBndBox,const Bnd_Box& BndBox,gp_Pnt& Position,gp_Pnt& FirstAttach,gp_Pnt& SecondAttach,gp_Pnt& FirstExtreme,gp_Pnt& SecondExtreme,DsgPrs_ArrowSide& SymbolPrs) ;




  DEFINE_STANDARD_RTTI(AIS_EqualDistanceRelation)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager2d)& aPresentationManager,const Handle(Graphic2d_GraphicObject)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;

TopoDS_Shape myShape3;
TopoDS_Shape myShape4;
gp_Pnt myAttachPoint1;
gp_Pnt myAttachPoint2;
gp_Pnt myAttachPoint3;
gp_Pnt myAttachPoint4;
gp_Pnt myPoint1;
gp_Pnt myPoint2;
gp_Pnt myPoint3;
gp_Pnt myPoint4;


};


#include <AIS_EqualDistanceRelation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

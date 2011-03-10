// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Axis_HeaderFile
#define _AIS_Axis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Axis_HeaderFile
#include <Handle_AIS_Axis.hxx>
#endif

#ifndef _Handle_Geom_Line_HeaderFile
#include <Handle_Geom_Line.hxx>
#endif
#ifndef _Handle_Geom_Axis2Placement_HeaderFile
#include <Handle_Geom_Axis2Placement.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _AIS_TypeOfAxis_HeaderFile
#include <AIS_TypeOfAxis.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Prs3d_LineAspect_HeaderFile
#include <Handle_Prs3d_LineAspect.hxx>
#endif
#ifndef _AIS_InteractiveObject_HeaderFile
#include <AIS_InteractiveObject.hxx>
#endif
#ifndef _Handle_Geom_Axis1Placement_HeaderFile
#include <Handle_Geom_Axis1Placement.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
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
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class Geom_Line;
class Geom_Axis2Placement;
class Prs3d_LineAspect;
class Geom_Axis1Placement;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_PresentationManager2d;
class Graphic2d_GraphicObject;
class Geom_Transformation;
class SelectMgr_Selection;
class Quantity_Color;


//! Locates the x, y and z axes in an Interactive Object. <br>
//! These are used to orient it correctly in presentations <br>
//! from different viewpoints, or to construct a revolved <br>
//! shape, for example, from one of the axes. Conversely, <br>
//! an axis can be created to build a revolved shape and <br>
//! then situated relative to one of the axes of the view. <br>
class AIS_Axis : public AIS_InteractiveObject {

public:

  //! Initializes the line aComponent <br>
  Standard_EXPORT   AIS_Axis(const Handle(Geom_Line)& aComponent);
  //! initializes the axis2 position <br>
//!   aComponent. The coordinate system used is right-handed. <br>
  Standard_EXPORT   AIS_Axis(const Handle(Geom_Axis2Placement)& aComponent,const AIS_TypeOfAxis anAxisType);
  //! Initializes the axis1 position anAxis. <br>
  Standard_EXPORT   AIS_Axis(const Handle(Geom_Axis1Placement)& anAxis);
  
//! Returns the axis entity aComponent and identifies it <br>
//! as a component of a shape. <br>
       const Handle_Geom_Line& Component() const;
  //! Sets the coordinates of the lin aComponent. <br>
  Standard_EXPORT     void SetComponent(const Handle(Geom_Line)& aComponent) ;
  
//! Returns the position of axis2 and   positions it by <br>
//! identifying it as the x, y, or z axis and giving its <br>
//! direction in 3D space. The coordinate system used is right-handed. <br>
       const Handle_Geom_Axis2Placement& Axis2Placement() const;
  
//! Allows you to provide settings for aComponent:the <br>
//! position and direction of an axis in 3D space. The <br>
//! coordinate system used is right-handed. <br>
  Standard_EXPORT     void SetAxis2Placement(const Handle(Geom_Axis2Placement)& aComponent,const AIS_TypeOfAxis anAxisType) ;
  //! Constructs a new line to serve as the axis anAxis in 3D space. <br>
  Standard_EXPORT     void SetAxis1Placement(const Handle(Geom_Axis1Placement)& anAxis) ;
  //! Returns the type of axis. <br>
        AIS_TypeOfAxis TypeOfAxis() const;
  
//! Constructs the entity aTypeAxis to stock information <br>
//! concerning type of axis. <br>
        void SetTypeOfAxis(const AIS_TypeOfAxis aTypeAxis) ;
  
//! Returns a signature of 2 for axis datums. When you <br>
//! activate mode 2 by a signature, you pick AIS objects <br>
//! of type AIS_Axis. <br>
        Standard_Boolean IsXYZAxis() const;
  //! Returns true if the interactive object accepts the display mode aMode. <br>
  Standard_EXPORT     Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  
      virtual  Standard_Integer Signature() const;
  
      virtual  AIS_KindOfInteractive Type() const;
  
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  
  Standard_EXPORT     void SetWidth(const Standard_Real aValue) ;
  
  Standard_EXPORT     void UnsetColor() ;
  
  Standard_EXPORT     void UnsetWidth() ;




  DEFINE_STANDARD_RTTI(AIS_Axis)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager2d)& aPresentationManager,const Handle(Graphic2d_GraphicObject)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeFields() ;

Handle_Geom_Line myComponent;
Handle_Geom_Axis2Placement myAx2;
gp_Pnt myPfirst;
gp_Pnt myPlast;
AIS_TypeOfAxis myTypeOfAxis;
Standard_Boolean myIsXYZAxis;
gp_Dir myDir;
Standard_Real myVal;
Standard_CString myText;
Handle_Prs3d_LineAspect myLineAspect;


};


#include <AIS_Axis.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

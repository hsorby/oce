// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignGroupedItem_HeaderFile
#define _StepAP214_AutoDesignGroupedItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepShape_AdvancedBrepShapeRepresentation_HeaderFile
#include <Handle_StepShape_AdvancedBrepShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_CsgShapeRepresentation_HeaderFile
#include <Handle_StepShape_CsgShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_FacetedBrepShapeRepresentation_HeaderFile
#include <Handle_StepShape_FacetedBrepShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_GeometricallyBoundedSurfaceShapeRepresentation_HeaderFile
#include <Handle_StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_GeometricallyBoundedWireframeShapeRepresentation_HeaderFile
#include <Handle_StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_ManifoldSurfaceShapeRepresentation_HeaderFile
#include <Handle_StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepRepr_Representation_HeaderFile
#include <Handle_StepRepr_Representation.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_StepRepr_ShapeAspect_HeaderFile
#include <Handle_StepRepr_ShapeAspect.hxx>
#endif
#ifndef _Handle_StepShape_ShapeRepresentation_HeaderFile
#include <Handle_StepShape_ShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepVisual_TemplateInstance_HeaderFile
#include <Handle_StepVisual_TemplateInstance.hxx>
#endif
class Standard_Transient;
class StepShape_AdvancedBrepShapeRepresentation;
class StepShape_CsgShapeRepresentation;
class StepShape_FacetedBrepShapeRepresentation;
class StepShape_GeometricallyBoundedSurfaceShapeRepresentation;
class StepShape_GeometricallyBoundedWireframeShapeRepresentation;
class StepShape_ManifoldSurfaceShapeRepresentation;
class StepRepr_Representation;
class StepRepr_RepresentationItem;
class StepRepr_ShapeAspect;
class StepShape_ShapeRepresentation;
class StepVisual_TemplateInstance;



class StepAP214_AutoDesignGroupedItem  : public StepData_SelectType {
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

  //! Returns a AutoDesignGroupedItem SelectType <br>
  Standard_EXPORT   StepAP214_AutoDesignGroupedItem();
  //! Recognizes a AutoDesignGroupedItem Kind Entity that is : <br>
//!        1 -> AdvancedBrepShapeRepresentation <br>
//!        2 -> CsgShapeRepresentation <br>
//!        3 -> FacetedBrepShapeRepresentation <br>
//!        4 -> GeometricallyBoundedSurfaceShapeRepresentation <br>
//!        5 -> GeometricallyBoundedWireframeShapeRepresentation <br>
//!        6 -> ManifoldSurfaceShapeRepresentation <br>
//!        7 -> Representation <br>
//!        8 -> RepresentationItem <br>
//!        9 -> ShapeAspect <br>
//!        10 -> ShapeRepresentation <br>
//!        11 -> TemplateInstance <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a AdvancedBrepShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_AdvancedBrepShapeRepresentation AdvancedBrepShapeRepresentation() const;
  //! returns Value as a CsgShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_CsgShapeRepresentation CsgShapeRepresentation() const;
  //! returns Value as a FacetedBrepShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_FacetedBrepShapeRepresentation FacetedBrepShapeRepresentation() const;
  //! returns Value as a GeometricallyBoundedSurfaceShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_GeometricallyBoundedSurfaceShapeRepresentation GeometricallyBoundedSurfaceShapeRepresentation() const;
  //! returns Value as a GeometricallyBoundedWireframeShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_GeometricallyBoundedWireframeShapeRepresentation GeometricallyBoundedWireframeShapeRepresentation() const;
  //! returns Value as a ManifoldSurfaceShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_ManifoldSurfaceShapeRepresentation ManifoldSurfaceShapeRepresentation() const;
  //! returns Value as a Representation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_Representation Representation() const;
  //! returns Value as a RepresentationItem (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_RepresentationItem RepresentationItem() const;
  //! returns Value as a ShapeAspect (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspect ShapeAspect() const;
  //! returns Value as a ShapeRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation ShapeRepresentation() const;
  //! returns Value as a TemplateInstance (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_TemplateInstance TemplateInstance() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

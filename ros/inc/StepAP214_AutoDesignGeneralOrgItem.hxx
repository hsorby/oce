// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignGeneralOrgItem_HeaderFile
#define _StepAP214_AutoDesignGeneralOrgItem_HeaderFile

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
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionFormation_HeaderFile
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionRelationship_HeaderFile
#include <Handle_StepBasic_ProductDefinitionRelationship.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionWithAssociatedDocuments_HeaderFile
#include <Handle_StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#endif
#ifndef _Handle_StepRepr_Representation_HeaderFile
#include <Handle_StepRepr_Representation.hxx>
#endif
#ifndef _Handle_StepRepr_ExternallyDefinedRepresentation_HeaderFile
#include <Handle_StepRepr_ExternallyDefinedRepresentation.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignDocumentReference_HeaderFile
#include <Handle_StepAP214_AutoDesignDocumentReference.hxx>
#endif
class Standard_Transient;
class StepBasic_Product;
class StepBasic_ProductDefinition;
class StepBasic_ProductDefinitionFormation;
class StepBasic_ProductDefinitionRelationship;
class StepBasic_ProductDefinitionWithAssociatedDocuments;
class StepRepr_Representation;
class StepRepr_ExternallyDefinedRepresentation;
class StepAP214_AutoDesignDocumentReference;



class StepAP214_AutoDesignGeneralOrgItem  : public StepData_SelectType {
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

  //! Returns a AutoDesignGeneralOrgItem SelectType <br>
  Standard_EXPORT   StepAP214_AutoDesignGeneralOrgItem();
  //! Recognizes a AutoDesignGeneralOrgItem Kind Entity that is : <br>
//! 1     Product from StepBasic, <br>
//! 2     ProductDefinition from StepBasic, <br>
//! 3     ProductDefinitionFormation from StepBasic, <br>
//! 4     ProductDefinitionRelationship from StepBasic, <br>
//! 5     ProductDefinitionWithAssociatedDocuments from StepBasic, <br>
//! 6     Representation from StepRepr <br>
//! 7     ExternallyDefinedRepresentation from StepRepr, <br>
//! 8     AutoDesignDocumentReference from StepAP214, <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Product (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Product Product() const;
  //! returns Value as a ProductDefinition (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinition ProductDefinition() const;
  //! returns Value as a ProductDefinitionFormation (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionFormation ProductDefinitionFormation() const;
  //! returns Value as a ProductDefinitionRelationship (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionRelationship ProductDefinitionRelationship() const;
  //! returns Value as a ProductDefinitionWithAssociatedDocuments (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionWithAssociatedDocuments ProductDefinitionWithAssociatedDocuments() const;
  //! returns Value as a Representation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_Representation Representation() const;
  //! returns Value as a Representation (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ExternallyDefinedRepresentation ExternallyDefinedRepresentation() const;
  
  Standard_EXPORT     Handle_StepAP214_AutoDesignDocumentReference AutoDesignDocumentReference() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

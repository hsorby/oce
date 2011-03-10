// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_Part_HeaderFile
#define _STEPConstruct_Part_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductRelatedProductCategory_HeaderFile
#include <Handle_StepBasic_ProductRelatedProductCategory.hxx>
#endif
#ifndef _Handle_StepShape_ShapeRepresentation_HeaderFile
#include <Handle_StepShape_ShapeRepresentation.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_ApplicationContext_HeaderFile
#include <Handle_StepBasic_ApplicationContext.hxx>
#endif
#ifndef _Handle_StepBasic_ProductContext_HeaderFile
#include <Handle_StepBasic_ProductContext.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionContext_HeaderFile
#include <Handle_StepBasic_ProductDefinitionContext.hxx>
#endif
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionFormation_HeaderFile
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Handle_StepRepr_ProductDefinitionShape_HeaderFile
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#endif
class StepShape_ShapeDefinitionRepresentation;
class StepBasic_ProductRelatedProductCategory;
class StepShape_ShapeRepresentation;
class TCollection_HAsciiString;
class StepBasic_ApplicationContext;
class StepBasic_ProductContext;
class StepBasic_ProductDefinitionContext;
class StepBasic_Product;
class StepBasic_ProductDefinitionFormation;
class StepBasic_ProductDefinition;
class StepRepr_ProductDefinitionShape;


//! Provides tools for creating STEP structures associated <br>
//!          with part (SDR), such as PRODUCT, PDF etc., as requied <br>
//!          by current schema <br>
//!          Also allows to investigate and modify this data <br>
class STEPConstruct_Part  {
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

  
  Standard_EXPORT   STEPConstruct_Part();
  
  Standard_EXPORT     void MakeSDR(const Handle(StepShape_ShapeRepresentation)& aShape,const Handle(TCollection_HAsciiString)& aName,const Handle(StepBasic_ApplicationContext)& AC) ;
  
  Standard_EXPORT     void ReadSDR(const Handle(StepShape_ShapeDefinitionRepresentation)& aShape) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns SDR or Null if not done <br>
  Standard_EXPORT     Handle_StepShape_ShapeDefinitionRepresentation SDRValue() const;
  //! Returns SDR->UsedRepresentation() or Null if not done <br>
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation SRValue() const;
  
  Standard_EXPORT     Handle_StepBasic_ProductContext PC() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PCname() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PCdisciplineType() const;
  
  Standard_EXPORT     void SetPCname(const Handle(TCollection_HAsciiString)& name) ;
  
  Standard_EXPORT     void SetPCdisciplineType(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     Handle_StepBasic_ApplicationContext AC() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString ACapplication() const;
  
  Standard_EXPORT     void SetACapplication(const Handle(TCollection_HAsciiString)& text) ;
  
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionContext PDC() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDCname() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDCstage() const;
  
  Standard_EXPORT     void SetPDCname(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     void SetPDCstage(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     Handle_StepBasic_Product Product() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Pid() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Pname() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Pdescription() const;
  
  Standard_EXPORT     void SetPid(const Handle(TCollection_HAsciiString)& id) ;
  
  Standard_EXPORT     void SetPname(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     void SetPdescription(const Handle(TCollection_HAsciiString)& text) ;
  
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionFormation PDF() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDFid() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDFdescription() const;
  
  Standard_EXPORT     void SetPDFid(const Handle(TCollection_HAsciiString)& id) ;
  
  Standard_EXPORT     void SetPDFdescription(const Handle(TCollection_HAsciiString)& text) ;
  
  Standard_EXPORT     Handle_StepBasic_ProductDefinition PD() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDdescription() const;
  
  Standard_EXPORT     void SetPDdescription(const Handle(TCollection_HAsciiString)& text) ;
  
  Standard_EXPORT     Handle_StepRepr_ProductDefinitionShape PDS() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDSname() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PDSdescription() const;
  
  Standard_EXPORT     void SetPDSname(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     void SetPDSdescription(const Handle(TCollection_HAsciiString)& text) ;
  
  Standard_EXPORT     Handle_StepBasic_ProductRelatedProductCategory PRPC() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PRPCname() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PRPCdescription() const;
  
  Standard_EXPORT     void SetPRPCname(const Handle(TCollection_HAsciiString)& label) ;
  
  Standard_EXPORT     void SetPRPCdescription(const Handle(TCollection_HAsciiString)& text) ;





protected:





private:



Standard_Boolean myDone;
Handle_StepShape_ShapeDefinitionRepresentation mySDR;
Handle_StepBasic_ProductRelatedProductCategory myPRPC;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

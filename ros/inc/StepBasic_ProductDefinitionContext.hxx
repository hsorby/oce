// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductDefinitionContext_HeaderFile
#define _StepBasic_ProductDefinitionContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionContext_HeaderFile
#include <Handle_StepBasic_ProductDefinitionContext.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _StepBasic_ApplicationContextElement_HeaderFile
#include <StepBasic_ApplicationContextElement.hxx>
#endif
#ifndef _Handle_StepBasic_ApplicationContext_HeaderFile
#include <Handle_StepBasic_ApplicationContext.hxx>
#endif
class TCollection_HAsciiString;
class StepBasic_ApplicationContext;



class StepBasic_ProductDefinitionContext : public StepBasic_ApplicationContextElement {

public:

  //! Returns a ProductDefinitionContext <br>
  Standard_EXPORT   StepBasic_ProductDefinitionContext();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepBasic_ApplicationContext)& aFrameOfReference) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepBasic_ApplicationContext)& aFrameOfReference,const Handle(TCollection_HAsciiString)& aLifeCycleStage) ;
  
  Standard_EXPORT     void SetLifeCycleStage(const Handle(TCollection_HAsciiString)& aLifeCycleStage) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString LifeCycleStage() const;




  DEFINE_STANDARD_RTTI(StepBasic_ProductDefinitionContext)

protected:




private: 


Handle_TCollection_HAsciiString lifeCycleStage;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

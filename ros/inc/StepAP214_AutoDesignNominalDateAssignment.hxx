// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignNominalDateAssignment_HeaderFile
#define _StepAP214_AutoDesignNominalDateAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignNominalDateAssignment_HeaderFile
#include <Handle_StepAP214_AutoDesignNominalDateAssignment.hxx>
#endif

#ifndef _Handle_StepAP214_HArray1OfAutoDesignDatedItem_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignDatedItem.hxx>
#endif
#ifndef _StepBasic_DateAssignment_HeaderFile
#include <StepBasic_DateAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_Date_HeaderFile
#include <Handle_StepBasic_Date.hxx>
#endif
#ifndef _Handle_StepBasic_DateRole_HeaderFile
#include <Handle_StepBasic_DateRole.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepAP214_HArray1OfAutoDesignDatedItem;
class StepBasic_Date;
class StepBasic_DateRole;
class StepAP214_AutoDesignDatedItem;



class StepAP214_AutoDesignNominalDateAssignment : public StepBasic_DateAssignment {

public:

  //! Returns a AutoDesignNominalDateAssignment <br>
  Standard_EXPORT   StepAP214_AutoDesignNominalDateAssignment();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Date)& aAssignedDate,const Handle(StepBasic_DateRole)& aRole) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Date)& aAssignedDate,const Handle(StepBasic_DateRole)& aRole,const Handle(StepAP214_HArray1OfAutoDesignDatedItem)& aItems) ;
  
  Standard_EXPORT     void SetItems(const Handle(StepAP214_HArray1OfAutoDesignDatedItem)& aItems) ;
  
  Standard_EXPORT     Handle_StepAP214_HArray1OfAutoDesignDatedItem Items() const;
  
  Standard_EXPORT     StepAP214_AutoDesignDatedItem ItemsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbItems() const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignNominalDateAssignment)

protected:




private: 


Handle_StepAP214_HArray1OfAutoDesignDatedItem items;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

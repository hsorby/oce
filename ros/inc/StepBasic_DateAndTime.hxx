// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DateAndTime_HeaderFile
#define _StepBasic_DateAndTime_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_DateAndTime_HeaderFile
#include <Handle_StepBasic_DateAndTime.hxx>
#endif

#ifndef _Handle_StepBasic_Date_HeaderFile
#include <Handle_StepBasic_Date.hxx>
#endif
#ifndef _Handle_StepBasic_LocalTime_HeaderFile
#include <Handle_StepBasic_LocalTime.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_Date;
class StepBasic_LocalTime;



class StepBasic_DateAndTime : public MMgt_TShared {

public:

  //! Returns a DateAndTime <br>
  Standard_EXPORT   StepBasic_DateAndTime();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Date)& aDateComponent,const Handle(StepBasic_LocalTime)& aTimeComponent) ;
  
  Standard_EXPORT     void SetDateComponent(const Handle(StepBasic_Date)& aDateComponent) ;
  
  Standard_EXPORT     Handle_StepBasic_Date DateComponent() const;
  
  Standard_EXPORT     void SetTimeComponent(const Handle(StepBasic_LocalTime)& aTimeComponent) ;
  
  Standard_EXPORT     Handle_StepBasic_LocalTime TimeComponent() const;




  DEFINE_STANDARD_RTTI(StepBasic_DateAndTime)

protected:




private: 


Handle_StepBasic_Date dateComponent;
Handle_StepBasic_LocalTime timeComponent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

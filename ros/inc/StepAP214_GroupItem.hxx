// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_GroupItem_HeaderFile
#define _StepAP214_GroupItem_HeaderFile

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
#ifndef _Handle_StepGeom_GeometricRepresentationItem_HeaderFile
#include <Handle_StepGeom_GeometricRepresentationItem.hxx>
#endif
class Standard_Transient;
class StepGeom_GeometricRepresentationItem;



class StepAP214_GroupItem  : public StepData_SelectType {
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

  //! Returns a GroupItem SelectType <br>
  Standard_EXPORT   StepAP214_GroupItem();
  //! Recognizes a GroupItem Kind Entity that is : <br>
//!        1 ->  GeometricRepresentationItem <br>
//!        0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a  GeometricRepresentationItem (Null if another type) <br>
  Standard_EXPORT   virtual  Handle_StepGeom_GeometricRepresentationItem GeometricRepresentationItem() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

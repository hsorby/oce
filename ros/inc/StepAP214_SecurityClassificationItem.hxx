// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_SecurityClassificationItem_HeaderFile
#define _StepAP214_SecurityClassificationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepAP214_ApprovalItem_HeaderFile
#include <StepAP214_ApprovalItem.hxx>
#endif



class StepAP214_SecurityClassificationItem  : public StepAP214_ApprovalItem {
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

  //! Returns a SecurityClassificationItem SelectType <br>
  Standard_EXPORT   StepAP214_SecurityClassificationItem();





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

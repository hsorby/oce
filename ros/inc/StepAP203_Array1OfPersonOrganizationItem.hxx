// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_Array1OfPersonOrganizationItem_HeaderFile
#define _StepAP203_Array1OfPersonOrganizationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP203_PersonOrganizationItem;



class StepAP203_Array1OfPersonOrganizationItem  {
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

  
  Standard_EXPORT   StepAP203_Array1OfPersonOrganizationItem(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepAP203_Array1OfPersonOrganizationItem(const StepAP203_PersonOrganizationItem& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepAP203_PersonOrganizationItem& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepAP203_Array1OfPersonOrganizationItem()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepAP203_Array1OfPersonOrganizationItem& Assign(const StepAP203_Array1OfPersonOrganizationItem& Other) ;
   const StepAP203_Array1OfPersonOrganizationItem& operator =(const StepAP203_Array1OfPersonOrganizationItem& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP203_PersonOrganizationItem& Value) ;
  
       const StepAP203_PersonOrganizationItem& Value(const Standard_Integer Index) const;
     const StepAP203_PersonOrganizationItem& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepAP203_PersonOrganizationItem& ChangeValue(const Standard_Integer Index) ;
      StepAP203_PersonOrganizationItem& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepAP203_Array1OfPersonOrganizationItem(const StepAP203_Array1OfPersonOrganizationItem& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepAP203_PersonOrganizationItem
#define Array1Item_hxx <StepAP203_PersonOrganizationItem.hxx>
#define TCollection_Array1 StepAP203_Array1OfPersonOrganizationItem
#define TCollection_Array1_hxx <StepAP203_Array1OfPersonOrganizationItem.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

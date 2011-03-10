// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfProduct_HeaderFile
#define _StepBasic_Array1OfProduct_HeaderFile

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
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_Product;



class StepBasic_Array1OfProduct  {
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

  
  Standard_EXPORT   StepBasic_Array1OfProduct(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepBasic_Array1OfProduct(const Handle(StepBasic_Product)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepBasic_Product)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepBasic_Array1OfProduct()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepBasic_Array1OfProduct& Assign(const StepBasic_Array1OfProduct& Other) ;
   const StepBasic_Array1OfProduct& operator =(const StepBasic_Array1OfProduct& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepBasic_Product)& Value) ;
  
       const Handle_StepBasic_Product& Value(const Standard_Integer Index) const;
     const Handle_StepBasic_Product& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepBasic_Product& ChangeValue(const Standard_Integer Index) ;
      Handle_StepBasic_Product& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepBasic_Array1OfProduct(const StepBasic_Array1OfProduct& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepBasic_Product
#define Array1Item_hxx <StepBasic_Product.hxx>
#define TCollection_Array1 StepBasic_Array1OfProduct
#define TCollection_Array1_hxx <StepBasic_Array1OfProduct.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_Array1OfColor_HeaderFile
#define _Quantity_Array1OfColor_HeaderFile

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
class Quantity_Color;



class Quantity_Array1OfColor  {
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

  
  Standard_EXPORT   Quantity_Array1OfColor(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Quantity_Array1OfColor(const Quantity_Color& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Quantity_Color& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Quantity_Array1OfColor()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Quantity_Array1OfColor& Assign(const Quantity_Array1OfColor& Other) ;
   const Quantity_Array1OfColor& operator =(const Quantity_Array1OfColor& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Quantity_Color& Value) ;
  
       const Quantity_Color& Value(const Standard_Integer Index) const;
     const Quantity_Color& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Quantity_Color& ChangeValue(const Standard_Integer Index) ;
      Quantity_Color& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Quantity_Array1OfColor(const Quantity_Array1OfColor& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Quantity_Color
#define Array1Item_hxx <Quantity_Color.hxx>
#define TCollection_Array1 Quantity_Array1OfColor
#define TCollection_Array1_hxx <Quantity_Array1OfColor.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

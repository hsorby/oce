// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_Array1OfFileParameter_HeaderFile
#define _Interface_Array1OfFileParameter_HeaderFile

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
class Interface_FileParameter;



class Interface_Array1OfFileParameter  {
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

  
  Standard_EXPORT   Interface_Array1OfFileParameter(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Interface_Array1OfFileParameter(const Interface_FileParameter& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Interface_FileParameter& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Interface_Array1OfFileParameter()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Interface_Array1OfFileParameter& Assign(const Interface_Array1OfFileParameter& Other) ;
   const Interface_Array1OfFileParameter& operator =(const Interface_Array1OfFileParameter& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Interface_FileParameter& Value) ;
  
       const Interface_FileParameter& Value(const Standard_Integer Index) const;
     const Interface_FileParameter& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Interface_FileParameter& ChangeValue(const Standard_Integer Index) ;
      Interface_FileParameter& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Interface_Array1OfFileParameter(const Interface_Array1OfFileParameter& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Interface_FileParameter
#define Array1Item_hxx <Interface_FileParameter.hxx>
#define TCollection_Array1 Interface_Array1OfFileParameter
#define TCollection_Array1_hxx <Interface_Array1OfFileParameter.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

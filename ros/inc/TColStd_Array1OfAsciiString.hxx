// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array1OfAsciiString_HeaderFile
#define _TColStd_Array1OfAsciiString_HeaderFile

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
class TCollection_AsciiString;



class TColStd_Array1OfAsciiString  {
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

  
  Standard_EXPORT   TColStd_Array1OfAsciiString(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TColStd_Array1OfAsciiString(const TCollection_AsciiString& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TCollection_AsciiString& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TColStd_Array1OfAsciiString()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TColStd_Array1OfAsciiString& Assign(const TColStd_Array1OfAsciiString& Other) ;
   const TColStd_Array1OfAsciiString& operator =(const TColStd_Array1OfAsciiString& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TCollection_AsciiString& Value) ;
  
       const TCollection_AsciiString& Value(const Standard_Integer Index) const;
     const TCollection_AsciiString& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TCollection_AsciiString& ChangeValue(const Standard_Integer Index) ;
      TCollection_AsciiString& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TColStd_Array1OfAsciiString(const TColStd_Array1OfAsciiString& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TCollection_AsciiString
#define Array1Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_Array1 TColStd_Array1OfAsciiString
#define TCollection_Array1_hxx <TColStd_Array1OfAsciiString.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

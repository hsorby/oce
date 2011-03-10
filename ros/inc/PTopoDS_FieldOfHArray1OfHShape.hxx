// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_FieldOfHArray1OfHShape_HeaderFile
#define _PTopoDS_FieldOfHArray1OfHShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PTopoDS_HShape_HeaderFile
#include <Handle_PTopoDS_HShape.hxx>
#endif
#ifndef _Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape_HeaderFile
#include <Handle_PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PTopoDS_HShape;
class PTopoDS_VArrayNodeOfFieldOfHArray1OfHShape;
class PTopoDS_VArrayTNodeOfFieldOfHArray1OfHShape;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PTopoDS_FieldOfHArray1OfHShape);


class PTopoDS_FieldOfHArray1OfHShape  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PTopoDS_FieldOfHArray1OfHShape();
  
  Standard_EXPORT   PTopoDS_FieldOfHArray1OfHShape(const Standard_Integer Size);
  
  Standard_EXPORT   PTopoDS_FieldOfHArray1OfHShape(const PTopoDS_FieldOfHArray1OfHShape& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PTopoDS_FieldOfHArray1OfHShape& Other) ;
    void operator =(const PTopoDS_FieldOfHArray1OfHShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PTopoDS_HShape)& Value) ;
  
  Standard_EXPORT     Handle_PTopoDS_HShape& Value(const Standard_Integer Index) const;
    Handle_PTopoDS_HShape& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PTopoDS_FieldOfHArray1OfHShape()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif

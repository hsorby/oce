// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_ArrayOfTangentZones_HeaderFile
#define _IntPolyh_ArrayOfTangentZones_HeaderFile

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
class IntPolyh_StartPoint;



class IntPolyh_ArrayOfTangentZones  {
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

  
  Standard_EXPORT   IntPolyh_ArrayOfTangentZones();
  
  Standard_EXPORT   IntPolyh_ArrayOfTangentZones(const Standard_Integer nn);
  
  Standard_EXPORT     void Init(const Standard_Integer nn) ;
  
  Standard_EXPORT    const IntPolyh_StartPoint& Value(const Standard_Integer nn) const;
   const IntPolyh_StartPoint& operator [](const Standard_Integer nn) const
{
  return Value(nn);
}
  
  Standard_EXPORT     IntPolyh_StartPoint& ChangeValue(const Standard_Integer nn) ;
    IntPolyh_StartPoint& operator [](const Standard_Integer nn) 
{
  return ChangeValue(nn);
}
  
  Standard_EXPORT     IntPolyh_ArrayOfTangentZones& Copy(const IntPolyh_ArrayOfTangentZones& Other) ;
    IntPolyh_ArrayOfTangentZones& operator =(const IntPolyh_ArrayOfTangentZones& Other) 
{
  return Copy(Other);
}
  
  Standard_EXPORT     Standard_Integer GetN() const;
  
  Standard_EXPORT     Standard_Integer NbTangentZones() const;
  
  Standard_EXPORT     void IncrementNbTangentZones() ;
  
  Standard_EXPORT     void Destroy() ;
~IntPolyh_ArrayOfTangentZones()
{
  Destroy();
}
  
  Standard_EXPORT     void Dump() const;





protected:





private:



Standard_Integer n;
Standard_Integer nbtangentzones;
Standard_Address ptr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

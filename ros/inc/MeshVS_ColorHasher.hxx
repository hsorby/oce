// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_ColorHasher_HeaderFile
#define _MeshVS_ColorHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_MapIntegerHasher_HeaderFile
#include <TColStd_MapIntegerHasher.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Quantity_Color;


//! Hasher for using in ColorToIdsMap from MeshVS <br>
class MeshVS_ColorHasher  : public TColStd_MapIntegerHasher {
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

  
  Standard_EXPORT   static  Standard_Integer HashCode(const Quantity_Color& K,const Standard_Integer Upper) ;
  
  Standard_EXPORT   static  Standard_Boolean IsEqual(const Quantity_Color& K1,const Quantity_Color& K2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

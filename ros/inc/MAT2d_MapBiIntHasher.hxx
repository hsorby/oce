// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_MapBiIntHasher_HeaderFile
#define _MAT2d_MapBiIntHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class MAT2d_BiInt;



class MAT2d_MapBiIntHasher  {
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

  
      static  Standard_Integer HashCode(const MAT2d_BiInt& Key1,const Standard_Integer Upper) ;
  
      static  Standard_Boolean IsEqual(const MAT2d_BiInt& Key1,const MAT2d_BiInt& Key2) ;





protected:





private:





};


#include <MAT2d_MapBiIntHasher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

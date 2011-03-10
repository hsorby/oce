// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_BlockIterator_HeaderFile
#define _TopOpeBRepBuild_BlockIterator_HeaderFile

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
class Standard_NoMoreObject;


//! Iterator on the elements of a block. <br>
class TopOpeBRepBuild_BlockIterator  {
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

  
  Standard_EXPORT   TopOpeBRepBuild_BlockIterator();
  
  Standard_EXPORT   TopOpeBRepBuild_BlockIterator(const Standard_Integer Lower,const Standard_Integer Upper);
  
        void Initialize() ;
  
        Standard_Boolean More() const;
  
        void Next() ;
  
        Standard_Integer Value() const;
  
        Standard_Integer Extent() const;





protected:





private:



Standard_Integer myLower;
Standard_Integer myUpper;
Standard_Integer myValue;


};


#include <TopOpeBRepBuild_BlockIterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

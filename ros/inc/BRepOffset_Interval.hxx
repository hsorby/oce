// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_Interval_HeaderFile
#define _BRepOffset_Interval_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepOffset_Type_HeaderFile
#include <BRepOffset_Type.hxx>
#endif



class BRepOffset_Interval  {
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

  
  Standard_EXPORT   BRepOffset_Interval();
  
  Standard_EXPORT   BRepOffset_Interval(const Standard_Real U1,const Standard_Real U2,const BRepOffset_Type Type);
  
        void First(const Standard_Real U) ;
  
        void Last(const Standard_Real U) ;
  
        void Type(const BRepOffset_Type T) ;
  
        Standard_Real First() const;
  
        Standard_Real Last() const;
  
        BRepOffset_Type Type() const;





protected:





private:



Standard_Real f;
Standard_Real l;
BRepOffset_Type type;


};


#include <BRepOffset_Interval.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

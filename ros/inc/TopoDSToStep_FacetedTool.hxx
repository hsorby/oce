// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_FacetedTool_HeaderFile
#define _TopoDSToStep_FacetedTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDSToStep_FacetedError_HeaderFile
#include <TopoDSToStep_FacetedError.hxx>
#endif
class TopoDS_Shape;


//! This Tool Class provides Information about Faceted Shapes <br>
//!          to be mapped to STEP. <br>
class TopoDSToStep_FacetedTool  {
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

  
  Standard_EXPORT   static  TopoDSToStep_FacetedError CheckTopoDSShape(const TopoDS_Shape& SH) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

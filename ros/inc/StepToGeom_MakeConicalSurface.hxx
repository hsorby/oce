// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeConicalSurface_HeaderFile
#define _StepToGeom_MakeConicalSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_ConicalSurface_HeaderFile
#include <Handle_StepGeom_ConicalSurface.hxx>
#endif
#ifndef _Handle_Geom_ConicalSurface_HeaderFile
#include <Handle_Geom_ConicalSurface.hxx>
#endif
class StepGeom_ConicalSurface;
class Geom_ConicalSurface;


//! This class implements the mapping between class <br>
//!          ConicalSurface from StepGeom which describes a <br>
//!          conical_surface from Prostep and ConicalSurface from Geom <br>
class StepToGeom_MakeConicalSurface  {
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

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_ConicalSurface)& SS,Handle(Geom_ConicalSurface)& CS) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

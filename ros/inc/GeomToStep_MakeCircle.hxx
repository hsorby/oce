// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeCircle_HeaderFile
#define _GeomToStep_MakeCircle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_Circle_HeaderFile
#include <Handle_StepGeom_Circle.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_Circle_HeaderFile
#include <Handle_Geom_Circle.hxx>
#endif
#ifndef _Handle_Geom2d_Circle_HeaderFile
#include <Handle_Geom2d_Circle.hxx>
#endif
class StepGeom_Circle;
class StdFail_NotDone;
class gp_Circ;
class Geom_Circle;
class Geom2d_Circle;


//! This class implements the mapping between classes <br>
//!          Circle from Geom, and Circ from gp, and the class <br>
//!          Circle from StepGeom which describes a circle from <br>
//!          Prostep. <br>
class GeomToStep_MakeCircle  : public GeomToStep_Root {
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

  
  Standard_EXPORT   GeomToStep_MakeCircle(const gp_Circ& C);
  
  Standard_EXPORT   GeomToStep_MakeCircle(const Handle(Geom_Circle)& C);
  
  Standard_EXPORT   GeomToStep_MakeCircle(const Handle(Geom2d_Circle)& C);
  
  Standard_EXPORT    const Handle_StepGeom_Circle& Value() const;





protected:





private:



Handle_StepGeom_Circle theCircle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

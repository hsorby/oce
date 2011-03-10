// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_D2_HeaderFile
#define _Plate_D2_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
class Plate_GtoCConstraint;
class Plate_FreeGtoCConstraint;
class gp_XYZ;


//! define an order 2 derivatives of a 3d valued <br>
//!          function of a 2d variable <br>
//! <br>
class Plate_D2  {
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

  
  Standard_EXPORT   Plate_D2(const gp_XYZ& duu,const gp_XYZ& duv,const gp_XYZ& dvv);
  
  Standard_EXPORT   Plate_D2(const Plate_D2& ref);


friend class Plate_GtoCConstraint;
friend class Plate_FreeGtoCConstraint;



protected:





private:



gp_XYZ Duu;
gp_XYZ Duv;
gp_XYZ Dvv;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

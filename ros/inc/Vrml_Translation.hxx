// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Translation_HeaderFile
#define _Vrml_Translation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class gp_Vec;


//!  defines a Translation of VRML specifying transform <br>
//!          properties. <br>
//!  This  node  defines  a  translation  by  3D  vector. <br>
//!  By  default  : <br>
//!    myTranslation (0,0,0) <br>
class Vrml_Translation  {
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

  
  Standard_EXPORT   Vrml_Translation();
  
  Standard_EXPORT   Vrml_Translation(const gp_Vec& aTranslation);
  
  Standard_EXPORT     void SetTranslation(const gp_Vec& aTranslation) ;
  
  Standard_EXPORT     gp_Vec Translation() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



gp_Vec myTranslation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

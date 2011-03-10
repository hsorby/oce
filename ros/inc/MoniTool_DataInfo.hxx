// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataInfo_HeaderFile
#define _MoniTool_DataInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Standard_Type;
class Standard_Transient;


//! Gives informations on an object <br>
//!           Used as template to instantiate Elem, etc <br>
//!           This class is for Transient <br>
class MoniTool_DataInfo  {
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

  //! Returns the Type attached to an object <br>
//!           Here, the Dynamic Type of a Transient. Null Type if unknown <br>
  Standard_EXPORT   static  Handle_Standard_Type Type(const Handle(Standard_Transient)& ent) ;
  //! Returns Type Name (string) <br>
//!           Allows to name type of non-handled objects <br>
  Standard_EXPORT   static  Standard_CString TypeName(const Handle(Standard_Transient)& ent) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

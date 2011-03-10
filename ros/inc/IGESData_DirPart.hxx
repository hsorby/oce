// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_DirPart_HeaderFile
#define _IGESData_DirPart_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class IGESData_IGESType;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(IGESData_DirPart);

//! litteral/numeric description of an entity's directory section, <br>
//!           taken from file <br>
class IGESData_DirPart  {

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

  //! creates an empty DirPart, ready to be filled by Init <br>
  Standard_EXPORT   IGESData_DirPart();
  //! fills DirPart with consistant data read from file <br>
  Standard_EXPORT     void Init(const Standard_Integer i1,const Standard_Integer i2,const Standard_Integer i3,const Standard_Integer i4,const Standard_Integer i5,const Standard_Integer i6,const Standard_Integer i7,const Standard_Integer i8,const Standard_Integer i9,const Standard_Integer i19,const Standard_Integer i11,const Standard_Integer i12,const Standard_Integer i13,const Standard_Integer i14,const Standard_Integer i15,const Standard_Integer i16,const Standard_Integer i17,const Standard_CString res1,const Standard_CString res2,const Standard_CString label,const Standard_CString subscript) ;
  //! returns values recorded in DirPart <br>
//!           (content of cstrings are modified) <br>
  Standard_EXPORT     void Values(Standard_Integer& i1,Standard_Integer& i2,Standard_Integer& i3,Standard_Integer& i4,Standard_Integer& i5,Standard_Integer& i6,Standard_Integer& i7,Standard_Integer& i8,Standard_Integer& i9,Standard_Integer& i19,Standard_Integer& i11,Standard_Integer& i12,Standard_Integer& i13,Standard_Integer& i14,Standard_Integer& i15,Standard_Integer& i16,Standard_Integer& i17,const Standard_CString res1,const Standard_CString res2,const Standard_CString label,const Standard_CString subscript) const;
  //! returns "type" and "form" info, used to recognize the entity <br>
  Standard_EXPORT     IGESData_IGESType Type() const;
    Standard_Integer& _CSFDB_GetIGESData_DirPartthevals(const Standard_Integer i1) { return thevals[i1]; }
    Standard_Character& _CSFDB_GetIGESData_DirParttheres1(const Standard_Integer i1) { return theres1[i1]; }
    Standard_Character& _CSFDB_GetIGESData_DirParttheres2(const Standard_Integer i1) { return theres2[i1]; }
    Standard_Character& _CSFDB_GetIGESData_DirPartthelabl(const Standard_Integer i1) { return thelabl[i1]; }
    Standard_Character& _CSFDB_GetIGESData_DirPartthesubs(const Standard_Integer i1) { return thesubs[i1]; }



protected:




private: 


Standard_Integer thevals[17];
Standard_Character theres1[10];
Standard_Character theres2[10];
Standard_Character thelabl[10];
Standard_Character thesubs[10];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

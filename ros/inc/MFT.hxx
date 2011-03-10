// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MFT_HeaderFile
#define _MFT_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _MFT_TypeOfCommand_HeaderFile
#include <MFT_TypeOfCommand.hxx>
#endif
#ifndef _MFT_TypeOfValue_HeaderFile
#include <MFT_TypeOfValue.hxx>
#endif
class MFT_FontManager;
class MFT_TextManager;
class MFT_ListOfFontHandle;
class MFT_SequenceNodeOfListOfFontHandle;


//! This package contains a Meta Font toolkit and utilities. <br>
//!	    1) Enable to creates MDTV outline fonts from others specific fonts <br>
//!	       (i.e: PostScript fonts,Euclid3 fonts,...) <br>
//!	    2) Enable to retrieves a string or  extended string <br>
//!	       outline vector list according of the current font and <br>
//!	       text attribs : <br>
//!	       (policy,size,slant,orientation and curve precision) <br>
//!	    3) Enable to retrieve policy or text attribs <br>
//!	       (i.e: Foundry,Family,..,font or text size). <br>
class MFT  {
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






protected:





private:

  //! Converts the type of command to string. <br>
  Standard_EXPORT   static  Standard_CString Convert(const MFT_TypeOfCommand aCommandType) ;
  //! Converts the type of value to string. <br>
  Standard_EXPORT   static  Standard_CString Convert(const MFT_TypeOfValue aValueType) ;



friend class MFT_FontManager;
friend class MFT_TextManager;
friend class MFT_ListOfFontHandle;
friend class MFT_SequenceNodeOfListOfFontHandle;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif

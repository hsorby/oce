// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_FontMap_HeaderFile
#define _Xw_FontMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Xw_FontMap_HeaderFile
#include <Handle_Xw_FontMap.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Aspect_FontMap_HeaderFile
#include <Handle_Aspect_FontMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Aspect_FontMapDefinitionError;
class Aspect_BadAccess;
class Xw_GraphicDevice;
class Aspect_FontMapEntry;
class Aspect_FontMap;


//! This class defines a FontMap object. <br>
class Xw_FontMap : public Standard_Transient {

public:

  //! Creates a FontMap with an unallocated FontMapEntry. <br>
  Standard_EXPORT   Xw_FontMap(const Standard_CString Connexion);
  //! Modifies an entry already defined or adds <Entry> <br>
//!	    in the font map <me> if it don't exist. <br>//!  Warning if FontMap size is exceeded. <br>
//!	   or FontMap is not defined properly <br>
//!	   or FontMapEntry Index is out of range according <br>
//!	   to the supported hardware <br>
  Standard_EXPORT   virtual  void SetEntry(const Aspect_FontMapEntry& Entry) ;
  //! Modifies all entries of <me> from the new Fontmap. <br>//!  Warning if FontMap size is exceeded. <br>
//!         or FontMap is not defined properly <br>
//!         or One of new FontMapEntry Index is out of range according <br>
//!         to the supported hardware <br>
  Standard_EXPORT   virtual  void SetEntries(const Handle(Aspect_FontMap)& Fontmap) ;
  //! Destroies the Fontmap <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Xw_FontMap()
{
  Destroy();
}
  //! Returns the number of Free Fonts in the Fontmap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Standard_Integer FreeFonts() const;

friend class Xw_GraphicDevice;


  DEFINE_STANDARD_RTTI(Xw_FontMap)

protected:

  
  Standard_EXPORT   Xw_FontMap();
  //! Returns extended data fontmap structure pointer. <br>
  Standard_EXPORT     Standard_Address ExtendedFontMap() const;



private: 


Standard_Address MyExtendedDisplay;
Standard_Address MyExtendedFontMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

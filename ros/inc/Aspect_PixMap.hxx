// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_PixMap_HeaderFile
#define _Aspect_PixMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_PixMap_HeaderFile
#include <Handle_Aspect_PixMap.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
class Aspect_PixmapDefinitionError;
class Aspect_PixmapError;
class Quantity_Color;


//! This class allows the definition of a pixmap(bitmap) <br>
class Aspect_PixMap : public MMgt_TShared {

public:

  //! Destroy the pixmap <br>
  Standard_EXPORT   virtual  void Destroy()  = 0;
  
//! Dumps the Bitmap to an image file with <br>
//! an optional gamma correction value <br>
//! and returns TRUE if the dump occurs normaly. <br>
  Standard_EXPORT   virtual  Standard_Boolean Dump(const Standard_CString aFilename,const Standard_Real aGammaValue = 1.0) const = 0;
  
//! Returns the pixel color. <br>
  Standard_EXPORT   virtual  Quantity_Color PixelColor(const Standard_Integer theX,const Standard_Integer theY) const = 0;
  //! Returns the ID of the just created pixmap <br>
  Standard_EXPORT   virtual  Aspect_Handle PixmapID() const = 0;
  //! Returns the allocated pixmap's size in PIXEL <br>
  Standard_EXPORT     void Size(Standard_Integer& aWidth,Standard_Integer& anHeight) const;
  //! Returns the allocated pixmap's depth (planes number) <br>
  Standard_EXPORT     Standard_Integer Depth() const;




  DEFINE_STANDARD_RTTI(Aspect_PixMap)

protected:

  //! Initializes the datas of a pixmap with a pixel size <br>
//! <aWidth>,<anHeight> and depth. <br>
  Standard_EXPORT   Aspect_PixMap(const Standard_Integer aWidth,const Standard_Integer anHeight,const Standard_Integer aDepth);

Standard_Integer myWidth;
Standard_Integer myHeight;
Standard_Integer myDepth;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

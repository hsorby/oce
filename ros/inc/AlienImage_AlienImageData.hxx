// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AlienImage_AlienImageData_HeaderFile
#define _AlienImage_AlienImageData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AlienImage_AlienImageData_HeaderFile
#include <Handle_AlienImage_AlienImageData.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _AlienImage_AlienImage_HeaderFile
#include <AlienImage_AlienImage.hxx>
#endif
class TCollection_AsciiString;


//! This class defines an Alien image. <br>
//! Alien Image is X11 . xwd image or SGI .rgb image for examples <br>
class AlienImage_AlienImageData : public AlienImage_AlienImage {

public:

  //! Set Image name . <br>
  Standard_EXPORT   virtual  void SetName(const TCollection_AsciiString& aName) ;
  //! get Image name . <br>
  Standard_EXPORT   virtual const TCollection_AsciiString& Name() const;




  DEFINE_STANDARD_RTTI(AlienImage_AlienImageData)

protected:

  
  Standard_EXPORT   AlienImage_AlienImageData();

TCollection_AsciiString myName;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

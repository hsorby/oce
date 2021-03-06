// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDocStd_DrawDocument_HeaderFile
#define _DDocStd_DrawDocument_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DDocStd_DrawDocument_HeaderFile
#include <Handle_DDocStd_DrawDocument.hxx>
#endif

#ifndef _Handle_TDocStd_Document_HeaderFile
#include <Handle_TDocStd_Document.hxx>
#endif
#ifndef _DDF_Data_HeaderFile
#include <DDF_Data.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TDocStd_Document;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;


//! draw variable for TDocStd_Document. <br>
//!          ================================== <br>
class DDocStd_DrawDocument : public DDF_Data {

public:

  
  Standard_EXPORT   static  Handle_DDocStd_DrawDocument Find(const Handle(TDocStd_Document)& Doc) ;
  
  Standard_EXPORT   DDocStd_DrawDocument(const Handle(TDocStd_Document)& Doc);
  
  Standard_EXPORT     Handle_TDocStd_Document GetDocument() const;
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DDocStd_DrawDocument)

protected:




private: 


Handle_TDocStd_Document myDocument;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDataStd_HeaderFile
#define _DDataStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TDataXtd_Constraint_HeaderFile
#include <Handle_TDataXtd_Constraint.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Draw_Interpretor;
class TDataXtd_Constraint;
class DDataStd_DrawPresentation;
class DDataStd_DrawDriver;
class DDataStd_TreeBrowser;


//! commands for Standard Attributes. <br>
//!          ================================= <br>
class DDataStd  {
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

  //! command to set and get modeling attributes <br>
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& I) ;
  //! to set and get NamedShape <br>
  Standard_EXPORT   static  void NamedShapeCommands(Draw_Interpretor& I) ;
  //! to set and get Integer, Real,  Reference, Geometry <br>
  Standard_EXPORT   static  void BasicCommands(Draw_Interpretor& I) ;
  //! to set and get Datum attributes <br>
  Standard_EXPORT   static  void DatumCommands(Draw_Interpretor& I) ;
  //! to set and get Constraint and Constraint  attributes <br>
  Standard_EXPORT   static  void ConstraintCommands(Draw_Interpretor& I) ;
  //! to set and get Objects attributes <br>
  Standard_EXPORT   static  void ObjectCommands(Draw_Interpretor& I) ;
  //! to display standard attributes <br>
  Standard_EXPORT   static  void DrawDisplayCommands(Draw_Interpretor& I) ;
  //! to set and get Name attribute <br>
  Standard_EXPORT   static  void NameCommands(Draw_Interpretor& I) ;
  //! to build, edit and browse an explicit tree of labels <br>//! package methods <br>
//!          =============== <br>
  Standard_EXPORT   static  void TreeCommands(Draw_Interpretor& I) ;
  
  Standard_EXPORT   static  void DumpConstraint(const Handle(TDataXtd_Constraint)& C,Standard_OStream& S) ;





protected:





private:




friend class DDataStd_DrawPresentation;
friend class DDataStd_DrawDriver;
friend class DDataStd_TreeBrowser;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif

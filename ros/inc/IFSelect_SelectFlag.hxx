// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectFlag_HeaderFile
#define _IFSelect_SelectFlag_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectFlag_HeaderFile
#include <Handle_IFSelect_SelectFlag.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _IFSelect_SelectExtract_HeaderFile
#include <IFSelect_SelectExtract.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectFlag queries a flag noted in the bitmap of the Graph. <br>
//!           The Flag is designated by its Name. Flag Names are defined <br>
//!           by Work Session and, as necessary, other functional objects <br>
//! <br>
//!           WorkSession from IFSelect defines flag "Incorrect" <br>
//!           Objects which control application running define some others <br>
class IFSelect_SelectFlag : public IFSelect_SelectExtract {

public:

  //! Creates a Select Flag, to query a flag designated by its name <br>
  Standard_EXPORT   IFSelect_SelectFlag(const Standard_CString flagname);
  //! Returns the name of the flag <br>
  Standard_EXPORT     Standard_CString FlagName() const;
  //! Returns the list of selected entities. It is redefined to <br>
//!           work on the graph itself (not queried by sort) <br>
//! <br>
//!           An entity is selected if its flag is True on Direct mode, <br>
//!           False on Reversed mode <br>
//! <br>
//!           If flag does not exist for the given name, returns an empty <br>
//!           result, whatever the Direct/Reversed sense <br>
  Standard_EXPORT   virtual  Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns always False because RootResult has done the work <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium, includes the flag name <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectFlag)

protected:




private: 


TCollection_AsciiString thename;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

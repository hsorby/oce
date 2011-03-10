// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectSent_HeaderFile
#define _IFSelect_SelectSent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectSent_HeaderFile
#include <Handle_IFSelect_SelectSent.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IFSelect_SelectExtract_HeaderFile
#include <IFSelect_SelectExtract.hxx>
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


//! This class returns entities according sending to a file <br>
//!           Once a model has been loaded, further sendings are recorded <br>
//!           as status in the graph (for each value, a count of sendings) <br>
//! <br>
//!           Hence, it is possible to query entities : sent ones (at least <br>
//!           once), non-sent (i.e. remaining) ones, duplicated ones, etc... <br>
//! <br>
//!           This selection performs this query <br>
class IFSelect_SelectSent : public IFSelect_SelectExtract {

public:

  //! Creates a SelectSent : <br>
//!           sentcount = 0 -> remaining (non-sent) entities <br>
//!           sentcount = 1, atleast = True (D) -> sent (at least once) <br>
//!           sentcount = 2, atleast = True -> duplicated (sent least twice) <br>
//!             etc... <br>
//!           sentcount = 1, atleast = False -> sent just once (non-dupl.d) <br>
//!           sentcount = 2, atleast = False -> sent just twice <br>
//!             etc... <br>
  Standard_EXPORT   IFSelect_SelectSent(const Standard_Integer sentcount = 1,const Standard_Boolean atleast = Standard_True);
  //! Returns the queried count of sending <br>
  Standard_EXPORT     Standard_Integer SentCount() const;
  //! Returns the <atleast> status, True for sending at least the <br>
//!           sending count, False for sending exactly the sending count <br>
//!           Remark : if SentCount is 0, AtLeast is ignored <br>
  Standard_EXPORT     Standard_Boolean AtLeast() const;
  //! Returns the list of selected entities. It is redefined to <br>
//!           work on the graph itself (not queried by sort) <br>
//! <br>
//!           An entity is selected if its count complies to the query in <br>
//!           Direct Mode, rejected in Reversed Mode <br>
//! <br>
//!           Query works on the sending count recorded as status in Graph <br>
  Standard_EXPORT   virtual  Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns always False because RootResult has done the work <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium : query : <br>
//!           SentCount = 0 -> "Remaining (non-sent) entities" <br>
//!           SentCount = 1, AtLeast = True  -> "Sent entities" <br>
//!           SentCount = 1, AtLeast = False -> "Sent once (no duplicated)" <br>
//!           SentCount = 2, AtLeast = True  -> "Sent several times entities" <br>
//!           SentCount = 2, AtLeast = False -> "Sent twice entities" <br>
//!           SentCount > 2, AtLeast = True  -> "Sent at least <count> times entities" <br>
//!           SentCount > 2, AtLeast = False -> "Sent <count> times entities" <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectSent)

protected:




private: 


Standard_Integer thecnt;
Standard_Boolean thelst;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

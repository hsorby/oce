// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_Location_HeaderFile
#define _XCAFDoc_Location_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_Location_HeaderFile
#include <Handle_XCAFDoc_Location.hxx>
#endif

#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TopLoc_Location;
class TDF_Attribute;
class TDF_RelocationTable;



class XCAFDoc_Location : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>
  Standard_EXPORT   XCAFDoc_Location();
  
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Find, or create, a Location attribute and set it's value <br>
//!          the Location attribute is returned. <br>//! Location methods <br>
//!          =============== <br>
  Standard_EXPORT   static  Handle_XCAFDoc_Location Set(const TDF_Label& label,const TopLoc_Location& Loc) ;
  
  Standard_EXPORT     void Set(const TopLoc_Location& Loc) ;
  //! Returns True if there is a reference on the same label <br>
  Standard_EXPORT     TopLoc_Location Get() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;




  DEFINE_STANDARD_RTTI(XCAFDoc_Location)

protected:




private: 


TopLoc_Location myLocation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

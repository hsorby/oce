// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_Area_HeaderFile
#define _XCAFDoc_Area_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_Area_HeaderFile
#include <Handle_XCAFDoc_Area.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;



class XCAFDoc_Area : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>
  Standard_EXPORT   XCAFDoc_Area();
  
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  //! Sets a value of volume <br>
  Standard_EXPORT     void Set(const Standard_Real vol) ;
  //! Find, or create, an Area attribute and set its value <br>
  Standard_EXPORT   static  Handle_XCAFDoc_Area Set(const TDF_Label& label,const Standard_Real area) ;
  
  Standard_EXPORT     Standard_Real Get() const;
  //! Returns volume of area as argument and succes status <br>
//!          returns false if no such attribute at the <label> <br>
  Standard_EXPORT   static  Standard_Boolean Get(const TDF_Label& label,Standard_Real& area) ;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(XCAFDoc_Area)

protected:




private: 


Standard_Real myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

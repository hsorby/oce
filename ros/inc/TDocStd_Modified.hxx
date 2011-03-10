// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_Modified_HeaderFile
#define _TDocStd_Modified_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDocStd_Modified_HeaderFile
#include <Handle_TDocStd_Modified.hxx>
#endif

#ifndef _TDF_LabelMap_HeaderFile
#include <TDF_LabelMap.hxx>
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
class TDF_Label;
class TDF_LabelMap;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;


//!   Transient     attribute   wich     register modified <br>
//!          labels. This attribute is attached to root label. <br>
class TDocStd_Modified : public TDF_Attribute {

public:

  //! API class methods <br>
//!          ================= <br>
  Standard_EXPORT   static  Standard_Boolean IsEmpty(const TDF_Label& access) ;
  
  Standard_EXPORT   static  Standard_Boolean Add(const TDF_Label& alabel) ;
  
  Standard_EXPORT   static  Standard_Boolean Remove(const TDF_Label& alabel) ;
  
  Standard_EXPORT   static  Standard_Boolean Contains(const TDF_Label& alabel) ;
  //! if <IsEmpty> raise an exception. <br>
  Standard_EXPORT   static const TDF_LabelMap& Get(const TDF_Label& access) ;
  //! remove all modified labels. becomes empty <br>
  Standard_EXPORT   static  void Clear(const TDF_Label& access) ;
  //! Modified methods <br>
//!          ================ <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  
  Standard_EXPORT   TDocStd_Modified();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Clear() ;
  //! add <L> as modified <br>
  Standard_EXPORT     Standard_Boolean AddLabel(const TDF_Label& L) ;
  //! remove  <L> as modified <br>
  Standard_EXPORT     Standard_Boolean RemoveLabel(const TDF_Label& L) ;
  //! returns modified label map <br>
  Standard_EXPORT    const TDF_LabelMap& Get() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDocStd_Modified)

protected:




private: 


TDF_LabelMap myModified;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_HArray1OfGeneralNote_HeaderFile
#define _IGESDimen_HArray1OfGeneralNote_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_HArray1OfGeneralNote_HeaderFile
#include <Handle_IGESDimen_HArray1OfGeneralNote.hxx>
#endif

#ifndef _IGESDimen_Array1OfGeneralNote_HeaderFile
#include <IGESDimen_Array1OfGeneralNote.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDimen_GeneralNote;
class IGESDimen_Array1OfGeneralNote;



class IGESDimen_HArray1OfGeneralNote : public MMgt_TShared {

public:

  
  Standard_EXPORT   IGESDimen_HArray1OfGeneralNote(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDimen_HArray1OfGeneralNote(const Standard_Integer Low,const Standard_Integer Up,const Handle(IGESDimen_GeneralNote)& V);
  
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESDimen_GeneralNote)& Value) ;
  
       const Handle_IGESDimen_GeneralNote& Value(const Standard_Integer Index) const;
  
        Handle_IGESDimen_GeneralNote& ChangeValue(const Standard_Integer Index) ;
  
       const IGESDimen_Array1OfGeneralNote& Array1() const;
  
        IGESDimen_Array1OfGeneralNote& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESDimen_HArray1OfGeneralNote)

protected:




private: 


IGESDimen_Array1OfGeneralNote myArray;


};

#define ItemHArray1 Handle_IGESDimen_GeneralNote
#define ItemHArray1_hxx <IGESDimen_GeneralNote.hxx>
#define TheArray1 IGESDimen_Array1OfGeneralNote
#define TheArray1_hxx <IGESDimen_Array1OfGeneralNote.hxx>
#define TCollection_HArray1 IGESDimen_HArray1OfGeneralNote
#define TCollection_HArray1_hxx <IGESDimen_HArray1OfGeneralNote.hxx>
#define Handle_TCollection_HArray1 Handle_IGESDimen_HArray1OfGeneralNote
#define TCollection_HArray1_Type_() IGESDimen_HArray1OfGeneralNote_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif

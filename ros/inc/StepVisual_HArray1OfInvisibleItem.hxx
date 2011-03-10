// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_HArray1OfInvisibleItem_HeaderFile
#define _StepVisual_HArray1OfInvisibleItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_HArray1OfInvisibleItem_HeaderFile
#include <Handle_StepVisual_HArray1OfInvisibleItem.hxx>
#endif

#ifndef _StepVisual_Array1OfInvisibleItem_HeaderFile
#include <StepVisual_Array1OfInvisibleItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepVisual_InvisibleItem;
class StepVisual_Array1OfInvisibleItem;



class StepVisual_HArray1OfInvisibleItem : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepVisual_HArray1OfInvisibleItem(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepVisual_HArray1OfInvisibleItem(const Standard_Integer Low,const Standard_Integer Up,const StepVisual_InvisibleItem& V);
  
  Standard_EXPORT     void Init(const StepVisual_InvisibleItem& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepVisual_InvisibleItem& Value) ;
  
       const StepVisual_InvisibleItem& Value(const Standard_Integer Index) const;
  
        StepVisual_InvisibleItem& ChangeValue(const Standard_Integer Index) ;
  
       const StepVisual_Array1OfInvisibleItem& Array1() const;
  
        StepVisual_Array1OfInvisibleItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepVisual_HArray1OfInvisibleItem)

protected:




private: 


StepVisual_Array1OfInvisibleItem myArray;


};

#define ItemHArray1 StepVisual_InvisibleItem
#define ItemHArray1_hxx <StepVisual_InvisibleItem.hxx>
#define TheArray1 StepVisual_Array1OfInvisibleItem
#define TheArray1_hxx <StepVisual_Array1OfInvisibleItem.hxx>
#define TCollection_HArray1 StepVisual_HArray1OfInvisibleItem
#define TCollection_HArray1_hxx <StepVisual_HArray1OfInvisibleItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepVisual_HArray1OfInvisibleItem
#define TCollection_HArray1_Type_() StepVisual_HArray1OfInvisibleItem_Type_()

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

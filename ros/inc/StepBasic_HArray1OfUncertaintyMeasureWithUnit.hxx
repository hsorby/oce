// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_HArray1OfUncertaintyMeasureWithUnit_HeaderFile
#define _StepBasic_HArray1OfUncertaintyMeasureWithUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_HArray1OfUncertaintyMeasureWithUnit_HeaderFile
#include <Handle_StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx>
#endif

#ifndef _StepBasic_Array1OfUncertaintyMeasureWithUnit_HeaderFile
#include <StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepBasic_UncertaintyMeasureWithUnit_HeaderFile
#include <Handle_StepBasic_UncertaintyMeasureWithUnit.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_UncertaintyMeasureWithUnit;
class StepBasic_Array1OfUncertaintyMeasureWithUnit;



class StepBasic_HArray1OfUncertaintyMeasureWithUnit : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepBasic_HArray1OfUncertaintyMeasureWithUnit(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepBasic_HArray1OfUncertaintyMeasureWithUnit(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepBasic_UncertaintyMeasureWithUnit)& V);
  
  Standard_EXPORT     void Init(const Handle(StepBasic_UncertaintyMeasureWithUnit)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepBasic_UncertaintyMeasureWithUnit)& Value) ;
  
       const Handle_StepBasic_UncertaintyMeasureWithUnit& Value(const Standard_Integer Index) const;
  
        Handle_StepBasic_UncertaintyMeasureWithUnit& ChangeValue(const Standard_Integer Index) ;
  
       const StepBasic_Array1OfUncertaintyMeasureWithUnit& Array1() const;
  
        StepBasic_Array1OfUncertaintyMeasureWithUnit& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepBasic_HArray1OfUncertaintyMeasureWithUnit)

protected:




private: 


StepBasic_Array1OfUncertaintyMeasureWithUnit myArray;


};

#define ItemHArray1 Handle_StepBasic_UncertaintyMeasureWithUnit
#define ItemHArray1_hxx <StepBasic_UncertaintyMeasureWithUnit.hxx>
#define TheArray1 StepBasic_Array1OfUncertaintyMeasureWithUnit
#define TheArray1_hxx <StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx>
#define TCollection_HArray1 StepBasic_HArray1OfUncertaintyMeasureWithUnit
#define TCollection_HArray1_hxx <StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx>
#define Handle_TCollection_HArray1 Handle_StepBasic_HArray1OfUncertaintyMeasureWithUnit
#define TCollection_HArray1_Type_() StepBasic_HArray1OfUncertaintyMeasureWithUnit_Type_()

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

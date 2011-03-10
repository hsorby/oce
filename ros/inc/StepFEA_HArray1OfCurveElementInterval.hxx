// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_HArray1OfCurveElementInterval_HeaderFile
#define _StepFEA_HArray1OfCurveElementInterval_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_HArray1OfCurveElementInterval_HeaderFile
#include <Handle_StepFEA_HArray1OfCurveElementInterval.hxx>
#endif

#ifndef _StepFEA_Array1OfCurveElementInterval_HeaderFile
#include <StepFEA_Array1OfCurveElementInterval.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepFEA_CurveElementInterval_HeaderFile
#include <Handle_StepFEA_CurveElementInterval.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepFEA_CurveElementInterval;
class StepFEA_Array1OfCurveElementInterval;



class StepFEA_HArray1OfCurveElementInterval : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepFEA_HArray1OfCurveElementInterval(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepFEA_HArray1OfCurveElementInterval(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepFEA_CurveElementInterval)& V);
  
  Standard_EXPORT     void Init(const Handle(StepFEA_CurveElementInterval)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepFEA_CurveElementInterval)& Value) ;
  
       const Handle_StepFEA_CurveElementInterval& Value(const Standard_Integer Index) const;
  
        Handle_StepFEA_CurveElementInterval& ChangeValue(const Standard_Integer Index) ;
  
       const StepFEA_Array1OfCurveElementInterval& Array1() const;
  
        StepFEA_Array1OfCurveElementInterval& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepFEA_HArray1OfCurveElementInterval)

protected:




private: 


StepFEA_Array1OfCurveElementInterval myArray;


};

#define ItemHArray1 Handle_StepFEA_CurveElementInterval
#define ItemHArray1_hxx <StepFEA_CurveElementInterval.hxx>
#define TheArray1 StepFEA_Array1OfCurveElementInterval
#define TheArray1_hxx <StepFEA_Array1OfCurveElementInterval.hxx>
#define TCollection_HArray1 StepFEA_HArray1OfCurveElementInterval
#define TCollection_HArray1_hxx <StepFEA_HArray1OfCurveElementInterval.hxx>
#define Handle_TCollection_HArray1 Handle_StepFEA_HArray1OfCurveElementInterval
#define TCollection_HArray1_Type_() StepFEA_HArray1OfCurveElementInterval_Type_()

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

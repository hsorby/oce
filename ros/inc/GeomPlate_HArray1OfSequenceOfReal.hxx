// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_HArray1OfSequenceOfReal_HeaderFile
#define _GeomPlate_HArray1OfSequenceOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomPlate_HArray1OfSequenceOfReal_HeaderFile
#include <Handle_GeomPlate_HArray1OfSequenceOfReal.hxx>
#endif

#ifndef _GeomPlate_Array1OfSequenceOfReal_HeaderFile
#include <GeomPlate_Array1OfSequenceOfReal.hxx>
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
class TColStd_SequenceOfReal;
class GeomPlate_Array1OfSequenceOfReal;



class GeomPlate_HArray1OfSequenceOfReal : public MMgt_TShared {

public:

  
  Standard_EXPORT   GeomPlate_HArray1OfSequenceOfReal(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   GeomPlate_HArray1OfSequenceOfReal(const Standard_Integer Low,const Standard_Integer Up,const TColStd_SequenceOfReal& V);
  
  Standard_EXPORT     void Init(const TColStd_SequenceOfReal& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TColStd_SequenceOfReal& Value) ;
  
       const TColStd_SequenceOfReal& Value(const Standard_Integer Index) const;
  
        TColStd_SequenceOfReal& ChangeValue(const Standard_Integer Index) ;
  
       const GeomPlate_Array1OfSequenceOfReal& Array1() const;
  
        GeomPlate_Array1OfSequenceOfReal& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(GeomPlate_HArray1OfSequenceOfReal)

protected:




private: 


GeomPlate_Array1OfSequenceOfReal myArray;


};

#define ItemHArray1 TColStd_SequenceOfReal
#define ItemHArray1_hxx <TColStd_SequenceOfReal.hxx>
#define TheArray1 GeomPlate_Array1OfSequenceOfReal
#define TheArray1_hxx <GeomPlate_Array1OfSequenceOfReal.hxx>
#define TCollection_HArray1 GeomPlate_HArray1OfSequenceOfReal
#define TCollection_HArray1_hxx <GeomPlate_HArray1OfSequenceOfReal.hxx>
#define Handle_TCollection_HArray1 Handle_GeomPlate_HArray1OfSequenceOfReal
#define TCollection_HArray1_Type_() GeomPlate_HArray1OfSequenceOfReal_Type_()

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

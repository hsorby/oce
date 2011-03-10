// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_HArray1OfTrsf_HeaderFile
#define _TDataXtd_HArray1OfTrsf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataXtd_HArray1OfTrsf_HeaderFile
#include <Handle_TDataXtd_HArray1OfTrsf.hxx>
#endif

#ifndef _TDataXtd_Array1OfTrsf_HeaderFile
#include <TDataXtd_Array1OfTrsf.hxx>
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
class gp_Trsf;
class TDataXtd_Array1OfTrsf;



class TDataXtd_HArray1OfTrsf : public MMgt_TShared {

public:

  
  Standard_EXPORT   TDataXtd_HArray1OfTrsf(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TDataXtd_HArray1OfTrsf(const Standard_Integer Low,const Standard_Integer Up,const gp_Trsf& V);
  
  Standard_EXPORT     void Init(const gp_Trsf& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const gp_Trsf& Value) ;
  
       const gp_Trsf& Value(const Standard_Integer Index) const;
  
        gp_Trsf& ChangeValue(const Standard_Integer Index) ;
  
       const TDataXtd_Array1OfTrsf& Array1() const;
  
        TDataXtd_Array1OfTrsf& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TDataXtd_HArray1OfTrsf)

protected:




private: 


TDataXtd_Array1OfTrsf myArray;


};

#define ItemHArray1 gp_Trsf
#define ItemHArray1_hxx <gp_Trsf.hxx>
#define TheArray1 TDataXtd_Array1OfTrsf
#define TheArray1_hxx <TDataXtd_Array1OfTrsf.hxx>
#define TCollection_HArray1 TDataXtd_HArray1OfTrsf
#define TCollection_HArray1_hxx <TDataXtd_HArray1OfTrsf.hxx>
#define Handle_TCollection_HArray1 Handle_TDataXtd_HArray1OfTrsf
#define TCollection_HArray1_Type_() TDataXtd_HArray1OfTrsf_Type_()

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

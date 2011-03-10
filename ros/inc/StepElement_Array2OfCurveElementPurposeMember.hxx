// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_Array2OfCurveElementPurposeMember_HeaderFile
#define _StepElement_Array2OfCurveElementPurposeMember_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_StepElement_CurveElementPurposeMember_HeaderFile
#include <Handle_StepElement_CurveElementPurposeMember.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class StepElement_CurveElementPurposeMember;



class StepElement_Array2OfCurveElementPurposeMember  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   StepElement_Array2OfCurveElementPurposeMember(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   StepElement_Array2OfCurveElementPurposeMember(const Handle(StepElement_CurveElementPurposeMember)& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const Handle(StepElement_CurveElementPurposeMember)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepElement_Array2OfCurveElementPurposeMember()
{
  Destroy();
}
  
  Standard_EXPORT    const StepElement_Array2OfCurveElementPurposeMember& Assign(const StepElement_Array2OfCurveElementPurposeMember& Other) ;
   const StepElement_Array2OfCurveElementPurposeMember& operator =(const StepElement_Array2OfCurveElementPurposeMember& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Handle(StepElement_CurveElementPurposeMember)& Value) ;
  
       const Handle_StepElement_CurveElementPurposeMember& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const Handle_StepElement_CurveElementPurposeMember& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        Handle_StepElement_CurveElementPurposeMember& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      Handle_StepElement_CurveElementPurposeMember& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   StepElement_Array2OfCurveElementPurposeMember(const StepElement_Array2OfCurveElementPurposeMember& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item Handle_StepElement_CurveElementPurposeMember
#define Array2Item_hxx <StepElement_CurveElementPurposeMember.hxx>
#define TCollection_Array2 StepElement_Array2OfCurveElementPurposeMember
#define TCollection_Array2_hxx <StepElement_Array2OfCurveElementPurposeMember.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

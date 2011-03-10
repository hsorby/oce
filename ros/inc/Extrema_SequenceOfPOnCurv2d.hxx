// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_SequenceOfPOnCurv2d_HeaderFile
#define _Extrema_SequenceOfPOnCurv2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv2d_HeaderFile
#include <Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Extrema_POnCurv2d;
class Extrema_SequenceNodeOfSequenceOfPOnCurv2d;



class Extrema_SequenceOfPOnCurv2d  : public TCollection_BaseSequence {
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

  
      Extrema_SequenceOfPOnCurv2d();
  
  Standard_EXPORT     void Clear() ;
~Extrema_SequenceOfPOnCurv2d()
{
  Clear();
}
  
  Standard_EXPORT    const Extrema_SequenceOfPOnCurv2d& Assign(const Extrema_SequenceOfPOnCurv2d& Other) ;
   const Extrema_SequenceOfPOnCurv2d& operator =(const Extrema_SequenceOfPOnCurv2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Extrema_POnCurv2d& T) ;
  
        void Append(Extrema_SequenceOfPOnCurv2d& S) ;
  
  Standard_EXPORT     void Prepend(const Extrema_POnCurv2d& T) ;
  
        void Prepend(Extrema_SequenceOfPOnCurv2d& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Extrema_POnCurv2d& T) ;
  
        void InsertBefore(const Standard_Integer Index,Extrema_SequenceOfPOnCurv2d& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Extrema_POnCurv2d& T) ;
  
        void InsertAfter(const Standard_Integer Index,Extrema_SequenceOfPOnCurv2d& S) ;
  
  Standard_EXPORT    const Extrema_POnCurv2d& First() const;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Last() const;
  
        void Split(const Standard_Integer Index,Extrema_SequenceOfPOnCurv2d& Sub) ;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Value(const Standard_Integer Index) const;
   const Extrema_POnCurv2d& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Extrema_POnCurv2d& I) ;
  
  Standard_EXPORT     Extrema_POnCurv2d& ChangeValue(const Standard_Integer Index) ;
    Extrema_POnCurv2d& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Extrema_SequenceOfPOnCurv2d(const Extrema_SequenceOfPOnCurv2d& Other);




};

#define SeqItem Extrema_POnCurv2d
#define SeqItem_hxx <Extrema_POnCurv2d.hxx>
#define TCollection_SequenceNode Extrema_SequenceNodeOfSequenceOfPOnCurv2d
#define TCollection_SequenceNode_hxx <Extrema_SequenceNodeOfSequenceOfPOnCurv2d.hxx>
#define Handle_TCollection_SequenceNode Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv2d
#define TCollection_SequenceNode_Type_() Extrema_SequenceNodeOfSequenceOfPOnCurv2d_Type_()
#define TCollection_Sequence Extrema_SequenceOfPOnCurv2d
#define TCollection_Sequence_hxx <Extrema_SequenceOfPOnCurv2d.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_SeqOfLinConstr_HeaderFile
#define _FEmTool_SeqOfLinConstr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_FEmTool_SequenceNodeOfSeqOfLinConstr_HeaderFile
#include <Handle_FEmTool_SequenceNodeOfSeqOfLinConstr.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class FEmTool_ListOfVectors;
class FEmTool_SequenceNodeOfSeqOfLinConstr;



class FEmTool_SeqOfLinConstr  : public TCollection_BaseSequence {
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

  
      FEmTool_SeqOfLinConstr();
  
  Standard_EXPORT     void Clear() ;
~FEmTool_SeqOfLinConstr()
{
  Clear();
}
  
  Standard_EXPORT    const FEmTool_SeqOfLinConstr& Assign(const FEmTool_SeqOfLinConstr& Other) ;
   const FEmTool_SeqOfLinConstr& operator =(const FEmTool_SeqOfLinConstr& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const FEmTool_ListOfVectors& T) ;
  
        void Append(FEmTool_SeqOfLinConstr& S) ;
  
  Standard_EXPORT     void Prepend(const FEmTool_ListOfVectors& T) ;
  
        void Prepend(FEmTool_SeqOfLinConstr& S) ;
  
        void InsertBefore(const Standard_Integer Index,const FEmTool_ListOfVectors& T) ;
  
        void InsertBefore(const Standard_Integer Index,FEmTool_SeqOfLinConstr& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const FEmTool_ListOfVectors& T) ;
  
        void InsertAfter(const Standard_Integer Index,FEmTool_SeqOfLinConstr& S) ;
  
  Standard_EXPORT    const FEmTool_ListOfVectors& First() const;
  
  Standard_EXPORT    const FEmTool_ListOfVectors& Last() const;
  
        void Split(const Standard_Integer Index,FEmTool_SeqOfLinConstr& Sub) ;
  
  Standard_EXPORT    const FEmTool_ListOfVectors& Value(const Standard_Integer Index) const;
   const FEmTool_ListOfVectors& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const FEmTool_ListOfVectors& I) ;
  
  Standard_EXPORT     FEmTool_ListOfVectors& ChangeValue(const Standard_Integer Index) ;
    FEmTool_ListOfVectors& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   FEmTool_SeqOfLinConstr(const FEmTool_SeqOfLinConstr& Other);




};

#define SeqItem FEmTool_ListOfVectors
#define SeqItem_hxx <FEmTool_ListOfVectors.hxx>
#define TCollection_SequenceNode FEmTool_SequenceNodeOfSeqOfLinConstr
#define TCollection_SequenceNode_hxx <FEmTool_SequenceNodeOfSeqOfLinConstr.hxx>
#define Handle_TCollection_SequenceNode Handle_FEmTool_SequenceNodeOfSeqOfLinConstr
#define TCollection_SequenceNode_Type_() FEmTool_SequenceNodeOfSeqOfLinConstr_Type_()
#define TCollection_Sequence FEmTool_SeqOfLinConstr
#define TCollection_Sequence_hxx <FEmTool_SeqOfLinConstr.hxx>

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

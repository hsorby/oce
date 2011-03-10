// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeSequence_HeaderFile
#define _TDF_AttributeSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_SequenceNodeOfAttributeSequence_HeaderFile
#include <Handle_TDF_SequenceNodeOfAttributeSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TDF_Attribute;
class TDF_SequenceNodeOfAttributeSequence;



class TDF_AttributeSequence  : public TCollection_BaseSequence {
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

  
      TDF_AttributeSequence();
  
  Standard_EXPORT     void Clear() ;
~TDF_AttributeSequence()
{
  Clear();
}
  
  Standard_EXPORT    const TDF_AttributeSequence& Assign(const TDF_AttributeSequence& Other) ;
   const TDF_AttributeSequence& operator =(const TDF_AttributeSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(TDF_Attribute)& T) ;
  
        void Append(TDF_AttributeSequence& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(TDF_Attribute)& T) ;
  
        void Prepend(TDF_AttributeSequence& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(TDF_Attribute)& T) ;
  
        void InsertBefore(const Standard_Integer Index,TDF_AttributeSequence& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(TDF_Attribute)& T) ;
  
        void InsertAfter(const Standard_Integer Index,TDF_AttributeSequence& S) ;
  
  Standard_EXPORT    const Handle_TDF_Attribute& First() const;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Last() const;
  
        void Split(const Standard_Integer Index,TDF_AttributeSequence& Sub) ;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Value(const Standard_Integer Index) const;
   const Handle_TDF_Attribute& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(TDF_Attribute)& I) ;
  
  Standard_EXPORT     Handle_TDF_Attribute& ChangeValue(const Standard_Integer Index) ;
    Handle_TDF_Attribute& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TDF_AttributeSequence(const TDF_AttributeSequence& Other);




};

#define SeqItem Handle_TDF_Attribute
#define SeqItem_hxx <TDF_Attribute.hxx>
#define TCollection_SequenceNode TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_hxx <TDF_SequenceNodeOfAttributeSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_TDF_SequenceNodeOfAttributeSequence
#define TCollection_SequenceNode_Type_() TDF_SequenceNodeOfAttributeSequence_Type_()
#define TCollection_Sequence TDF_AttributeSequence
#define TCollection_Sequence_hxx <TDF_AttributeSequence.hxx>

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

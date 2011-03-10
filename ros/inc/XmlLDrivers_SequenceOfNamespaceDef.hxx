// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_SequenceOfNamespaceDef_HeaderFile
#define _XmlLDrivers_SequenceOfNamespaceDef_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef_HeaderFile
#include <Handle_XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class XmlLDrivers_NamespaceDef;
class XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef;



class XmlLDrivers_SequenceOfNamespaceDef  : public TCollection_BaseSequence {
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

  
      XmlLDrivers_SequenceOfNamespaceDef();
  
  Standard_EXPORT     void Clear() ;
~XmlLDrivers_SequenceOfNamespaceDef()
{
  Clear();
}
  
  Standard_EXPORT    const XmlLDrivers_SequenceOfNamespaceDef& Assign(const XmlLDrivers_SequenceOfNamespaceDef& Other) ;
   const XmlLDrivers_SequenceOfNamespaceDef& operator =(const XmlLDrivers_SequenceOfNamespaceDef& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const XmlLDrivers_NamespaceDef& T) ;
  
        void Append(XmlLDrivers_SequenceOfNamespaceDef& S) ;
  
  Standard_EXPORT     void Prepend(const XmlLDrivers_NamespaceDef& T) ;
  
        void Prepend(XmlLDrivers_SequenceOfNamespaceDef& S) ;
  
        void InsertBefore(const Standard_Integer Index,const XmlLDrivers_NamespaceDef& T) ;
  
        void InsertBefore(const Standard_Integer Index,XmlLDrivers_SequenceOfNamespaceDef& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const XmlLDrivers_NamespaceDef& T) ;
  
        void InsertAfter(const Standard_Integer Index,XmlLDrivers_SequenceOfNamespaceDef& S) ;
  
  Standard_EXPORT    const XmlLDrivers_NamespaceDef& First() const;
  
  Standard_EXPORT    const XmlLDrivers_NamespaceDef& Last() const;
  
        void Split(const Standard_Integer Index,XmlLDrivers_SequenceOfNamespaceDef& Sub) ;
  
  Standard_EXPORT    const XmlLDrivers_NamespaceDef& Value(const Standard_Integer Index) const;
   const XmlLDrivers_NamespaceDef& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const XmlLDrivers_NamespaceDef& I) ;
  
  Standard_EXPORT     XmlLDrivers_NamespaceDef& ChangeValue(const Standard_Integer Index) ;
    XmlLDrivers_NamespaceDef& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   XmlLDrivers_SequenceOfNamespaceDef(const XmlLDrivers_SequenceOfNamespaceDef& Other);




};

#define SeqItem XmlLDrivers_NamespaceDef
#define SeqItem_hxx <XmlLDrivers_NamespaceDef.hxx>
#define TCollection_SequenceNode XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef
#define TCollection_SequenceNode_hxx <XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef.hxx>
#define Handle_TCollection_SequenceNode Handle_XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef
#define TCollection_SequenceNode_Type_() XmlLDrivers_SequenceNodeOfSequenceOfNamespaceDef_Type_()
#define TCollection_Sequence XmlLDrivers_SequenceOfNamespaceDef
#define TCollection_Sequence_hxx <XmlLDrivers_SequenceOfNamespaceDef.hxx>

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

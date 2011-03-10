// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_HSequenceOfRepresentationItem_HeaderFile
#define _StepRepr_HSequenceOfRepresentationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_HSequenceOfRepresentationItem_HeaderFile
#include <Handle_StepRepr_HSequenceOfRepresentationItem.hxx>
#endif

#ifndef _StepRepr_SequenceOfRepresentationItem_HeaderFile
#include <StepRepr_SequenceOfRepresentationItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepRepr_RepresentationItem;
class StepRepr_SequenceOfRepresentationItem;



class StepRepr_HSequenceOfRepresentationItem : public MMgt_TShared {

public:

  
      StepRepr_HSequenceOfRepresentationItem();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(StepRepr_RepresentationItem)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(StepRepr_HSequenceOfRepresentationItem)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepRepr_RepresentationItem)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepRepr_HSequenceOfRepresentationItem)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(StepRepr_RepresentationItem)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(StepRepr_HSequenceOfRepresentationItem)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(StepRepr_RepresentationItem)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(StepRepr_HSequenceOfRepresentationItem)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_StepRepr_HSequenceOfRepresentationItem Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(StepRepr_RepresentationItem)& anItem) ;
  
  Standard_EXPORT    const Handle_StepRepr_RepresentationItem& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationItem& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const StepRepr_SequenceOfRepresentationItem& Sequence() const;
  
        StepRepr_SequenceOfRepresentationItem& ChangeSequence() ;
  
  Standard_EXPORT     Handle_StepRepr_HSequenceOfRepresentationItem ShallowCopy() const;




  DEFINE_STANDARD_RTTI(StepRepr_HSequenceOfRepresentationItem)

protected:




private: 


StepRepr_SequenceOfRepresentationItem mySequence;


};

#define Item Handle_StepRepr_RepresentationItem
#define Item_hxx <StepRepr_RepresentationItem.hxx>
#define TheSequence StepRepr_SequenceOfRepresentationItem
#define TheSequence_hxx <StepRepr_SequenceOfRepresentationItem.hxx>
#define TCollection_HSequence StepRepr_HSequenceOfRepresentationItem
#define TCollection_HSequence_hxx <StepRepr_HSequenceOfRepresentationItem.hxx>
#define Handle_TCollection_HSequence Handle_StepRepr_HSequenceOfRepresentationItem
#define TCollection_HSequence_Type_() StepRepr_HSequenceOfRepresentationItem_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_StepRepr_HSequenceOfRepresentationItem ShallowCopy(const Handle_StepRepr_HSequenceOfRepresentationItem& me) {
 return me->ShallowCopy();
}



#endif

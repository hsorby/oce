// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_HSequenceOfGroup_HeaderFile
#define _Graphic3d_HSequenceOfGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_HSequenceOfGroup_HeaderFile
#include <Handle_Graphic3d_HSequenceOfGroup.hxx>
#endif

#ifndef _Graphic3d_SequenceOfGroup_HeaderFile
#include <Graphic3d_SequenceOfGroup.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Graphic3d_Group;
class Graphic3d_SequenceOfGroup;



class Graphic3d_HSequenceOfGroup : public MMgt_TShared {

public:

  
      Graphic3d_HSequenceOfGroup();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_Group)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Graphic3d_HSequenceOfGroup)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_Group)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Graphic3d_HSequenceOfGroup)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Graphic3d_Group)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Graphic3d_HSequenceOfGroup)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Graphic3d_Group)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Graphic3d_HSequenceOfGroup)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Graphic3d_HSequenceOfGroup Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Graphic3d_Group)& anItem) ;
  
  Standard_EXPORT    const Handle_Graphic3d_Group& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Graphic3d_Group& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Graphic3d_SequenceOfGroup& Sequence() const;
  
        Graphic3d_SequenceOfGroup& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Graphic3d_HSequenceOfGroup ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Graphic3d_HSequenceOfGroup)

protected:




private: 


Graphic3d_SequenceOfGroup mySequence;


};

#define Item Handle_Graphic3d_Group
#define Item_hxx <Graphic3d_Group.hxx>
#define TheSequence Graphic3d_SequenceOfGroup
#define TheSequence_hxx <Graphic3d_SequenceOfGroup.hxx>
#define TCollection_HSequence Graphic3d_HSequenceOfGroup
#define TCollection_HSequence_hxx <Graphic3d_HSequenceOfGroup.hxx>
#define Handle_TCollection_HSequence Handle_Graphic3d_HSequenceOfGroup
#define TCollection_HSequence_Type_() Graphic3d_HSequenceOfGroup_Type_()

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
inline Handle_Graphic3d_HSequenceOfGroup ShallowCopy(const Handle_Graphic3d_HSequenceOfGroup& me) {
 return me->ShallowCopy();
}



#endif

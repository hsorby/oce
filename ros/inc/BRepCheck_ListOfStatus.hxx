// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_ListOfStatus_HeaderFile
#define _BRepCheck_ListOfStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _BRepCheck_Status_HeaderFile
#include <BRepCheck_Status.hxx>
#endif
#ifndef _Handle_BRepCheck_ListNodeOfListOfStatus_HeaderFile
#include <Handle_BRepCheck_ListNodeOfListOfStatus.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BRepCheck_ListIteratorOfListOfStatus;
class BRepCheck_ListNodeOfListOfStatus;



class BRepCheck_ListOfStatus  {
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

  
  Standard_EXPORT   BRepCheck_ListOfStatus();
  
  Standard_EXPORT     void Assign(const BRepCheck_ListOfStatus& Other) ;
    void operator=(const BRepCheck_ListOfStatus& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BRepCheck_ListOfStatus()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const BRepCheck_Status& I) ;
  
  Standard_EXPORT     void Prepend(const BRepCheck_Status& I,BRepCheck_ListIteratorOfListOfStatus& theIt) ;
  
  Standard_EXPORT     void Prepend(BRepCheck_ListOfStatus& Other) ;
  
  Standard_EXPORT     void Append(const BRepCheck_Status& I) ;
  
  Standard_EXPORT     void Append(const BRepCheck_Status& I,BRepCheck_ListIteratorOfListOfStatus& theIt) ;
  
  Standard_EXPORT     void Append(BRepCheck_ListOfStatus& Other) ;
  
  Standard_EXPORT     BRepCheck_Status& First() const;
  
  Standard_EXPORT     BRepCheck_Status& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BRepCheck_ListIteratorOfListOfStatus& It) ;
  
  Standard_EXPORT     void InsertBefore(const BRepCheck_Status& I,BRepCheck_ListIteratorOfListOfStatus& It) ;
  
  Standard_EXPORT     void InsertBefore(BRepCheck_ListOfStatus& Other,BRepCheck_ListIteratorOfListOfStatus& It) ;
  
  Standard_EXPORT     void InsertAfter(const BRepCheck_Status& I,BRepCheck_ListIteratorOfListOfStatus& It) ;
  
  Standard_EXPORT     void InsertAfter(BRepCheck_ListOfStatus& Other,BRepCheck_ListIteratorOfListOfStatus& It) ;


friend class BRepCheck_ListIteratorOfListOfStatus;



protected:





private:

  
  Standard_EXPORT   BRepCheck_ListOfStatus(const BRepCheck_ListOfStatus& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item BRepCheck_Status
#define Item_hxx <BRepCheck_Status.hxx>
#define TCollection_ListNode BRepCheck_ListNodeOfListOfStatus
#define TCollection_ListNode_hxx <BRepCheck_ListNodeOfListOfStatus.hxx>
#define TCollection_ListIterator BRepCheck_ListIteratorOfListOfStatus
#define TCollection_ListIterator_hxx <BRepCheck_ListIteratorOfListOfStatus.hxx>
#define Handle_TCollection_ListNode Handle_BRepCheck_ListNodeOfListOfStatus
#define TCollection_ListNode_Type_() BRepCheck_ListNodeOfListOfStatus_Type_()
#define TCollection_List BRepCheck_ListOfStatus
#define TCollection_List_hxx <BRepCheck_ListOfStatus.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

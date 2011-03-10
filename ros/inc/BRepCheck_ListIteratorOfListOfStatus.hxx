// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_ListIteratorOfListOfStatus_HeaderFile
#define _BRepCheck_ListIteratorOfListOfStatus_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BRepCheck_ListOfStatus;
class BRepCheck_ListNodeOfListOfStatus;



class BRepCheck_ListIteratorOfListOfStatus  {
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

  
  Standard_EXPORT   BRepCheck_ListIteratorOfListOfStatus();
  
  Standard_EXPORT   BRepCheck_ListIteratorOfListOfStatus(const BRepCheck_ListOfStatus& L);
  
  Standard_EXPORT     void Initialize(const BRepCheck_ListOfStatus& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BRepCheck_Status& Value() const;


friend class BRepCheck_ListOfStatus;



protected:





private:



Standard_Address current;
Standard_Address previous;


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

#include <TCollection_ListIterator.lxx>

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

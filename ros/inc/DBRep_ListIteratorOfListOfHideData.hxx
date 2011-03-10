// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_ListIteratorOfListOfHideData_HeaderFile
#define _DBRep_ListIteratorOfListOfHideData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_DBRep_ListNodeOfListOfHideData_HeaderFile
#include <Handle_DBRep_ListNodeOfListOfHideData.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class DBRep_ListOfHideData;
class DBRep_HideData;
class DBRep_ListNodeOfListOfHideData;



class DBRep_ListIteratorOfListOfHideData  {
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

  
  Standard_EXPORT   DBRep_ListIteratorOfListOfHideData();
  
  Standard_EXPORT   DBRep_ListIteratorOfListOfHideData(const DBRep_ListOfHideData& L);
  
  Standard_EXPORT     void Initialize(const DBRep_ListOfHideData& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     DBRep_HideData& Value() const;


friend class DBRep_ListOfHideData;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item DBRep_HideData
#define Item_hxx <DBRep_HideData.hxx>
#define TCollection_ListNode DBRep_ListNodeOfListOfHideData
#define TCollection_ListNode_hxx <DBRep_ListNodeOfListOfHideData.hxx>
#define TCollection_ListIterator DBRep_ListIteratorOfListOfHideData
#define TCollection_ListIterator_hxx <DBRep_ListIteratorOfListOfHideData.hxx>
#define Handle_TCollection_ListNode Handle_DBRep_ListNodeOfListOfHideData
#define TCollection_ListNode_Type_() DBRep_ListNodeOfListOfHideData_Type_()
#define TCollection_List DBRep_ListOfHideData
#define TCollection_List_hxx <DBRep_ListOfHideData.hxx>

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

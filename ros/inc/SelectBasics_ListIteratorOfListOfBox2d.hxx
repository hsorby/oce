// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_ListIteratorOfListOfBox2d_HeaderFile
#define _SelectBasics_ListIteratorOfListOfBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_SelectBasics_ListNodeOfListOfBox2d_HeaderFile
#include <Handle_SelectBasics_ListNodeOfListOfBox2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class SelectBasics_ListOfBox2d;
class Bnd_Box2d;
class SelectBasics_ListNodeOfListOfBox2d;



class SelectBasics_ListIteratorOfListOfBox2d  {
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

  
  Standard_EXPORT   SelectBasics_ListIteratorOfListOfBox2d();
  
  Standard_EXPORT   SelectBasics_ListIteratorOfListOfBox2d(const SelectBasics_ListOfBox2d& L);
  
  Standard_EXPORT     void Initialize(const SelectBasics_ListOfBox2d& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Bnd_Box2d& Value() const;


friend class SelectBasics_ListOfBox2d;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Bnd_Box2d
#define Item_hxx <Bnd_Box2d.hxx>
#define TCollection_ListNode SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_hxx <SelectBasics_ListNodeOfListOfBox2d.hxx>
#define TCollection_ListIterator SelectBasics_ListIteratorOfListOfBox2d
#define TCollection_ListIterator_hxx <SelectBasics_ListIteratorOfListOfBox2d.hxx>
#define Handle_TCollection_ListNode Handle_SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_Type_() SelectBasics_ListNodeOfListOfBox2d_Type_()
#define TCollection_List SelectBasics_ListOfBox2d
#define TCollection_List_hxx <SelectBasics_ListOfBox2d.hxx>

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

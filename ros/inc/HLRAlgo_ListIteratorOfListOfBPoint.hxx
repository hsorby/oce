// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_ListIteratorOfListOfBPoint_HeaderFile
#define _HLRAlgo_ListIteratorOfListOfBPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_HLRAlgo_ListNodeOfListOfBPoint_HeaderFile
#include <Handle_HLRAlgo_ListNodeOfListOfBPoint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class HLRAlgo_ListOfBPoint;
class HLRAlgo_BiPoint;
class HLRAlgo_ListNodeOfListOfBPoint;



class HLRAlgo_ListIteratorOfListOfBPoint  {
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

  
  Standard_EXPORT   HLRAlgo_ListIteratorOfListOfBPoint();
  
  Standard_EXPORT   HLRAlgo_ListIteratorOfListOfBPoint(const HLRAlgo_ListOfBPoint& L);
  
  Standard_EXPORT     void Initialize(const HLRAlgo_ListOfBPoint& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     HLRAlgo_BiPoint& Value() const;


friend class HLRAlgo_ListOfBPoint;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item HLRAlgo_BiPoint
#define Item_hxx <HLRAlgo_BiPoint.hxx>
#define TCollection_ListNode HLRAlgo_ListNodeOfListOfBPoint
#define TCollection_ListNode_hxx <HLRAlgo_ListNodeOfListOfBPoint.hxx>
#define TCollection_ListIterator HLRAlgo_ListIteratorOfListOfBPoint
#define TCollection_ListIterator_hxx <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#define Handle_TCollection_ListNode Handle_HLRAlgo_ListNodeOfListOfBPoint
#define TCollection_ListNode_Type_() HLRAlgo_ListNodeOfListOfBPoint_Type_()
#define TCollection_List HLRAlgo_ListOfBPoint
#define TCollection_List_hxx <HLRAlgo_ListOfBPoint.hxx>

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

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_ListOfBPoint_HeaderFile
#define _HLRAlgo_ListOfBPoint_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class HLRAlgo_ListIteratorOfListOfBPoint;
class HLRAlgo_BiPoint;
class HLRAlgo_ListNodeOfListOfBPoint;



class HLRAlgo_ListOfBPoint  {
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

  
  Standard_EXPORT   HLRAlgo_ListOfBPoint();
  
  Standard_EXPORT     void Assign(const HLRAlgo_ListOfBPoint& Other) ;
    void operator=(const HLRAlgo_ListOfBPoint& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~HLRAlgo_ListOfBPoint()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const HLRAlgo_BiPoint& I) ;
  
  Standard_EXPORT     void Prepend(const HLRAlgo_BiPoint& I,HLRAlgo_ListIteratorOfListOfBPoint& theIt) ;
  
  Standard_EXPORT     void Prepend(HLRAlgo_ListOfBPoint& Other) ;
  
  Standard_EXPORT     void Append(const HLRAlgo_BiPoint& I) ;
  
  Standard_EXPORT     void Append(const HLRAlgo_BiPoint& I,HLRAlgo_ListIteratorOfListOfBPoint& theIt) ;
  
  Standard_EXPORT     void Append(HLRAlgo_ListOfBPoint& Other) ;
  
  Standard_EXPORT     HLRAlgo_BiPoint& First() const;
  
  Standard_EXPORT     HLRAlgo_BiPoint& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(HLRAlgo_ListIteratorOfListOfBPoint& It) ;
  
  Standard_EXPORT     void InsertBefore(const HLRAlgo_BiPoint& I,HLRAlgo_ListIteratorOfListOfBPoint& It) ;
  
  Standard_EXPORT     void InsertBefore(HLRAlgo_ListOfBPoint& Other,HLRAlgo_ListIteratorOfListOfBPoint& It) ;
  
  Standard_EXPORT     void InsertAfter(const HLRAlgo_BiPoint& I,HLRAlgo_ListIteratorOfListOfBPoint& It) ;
  
  Standard_EXPORT     void InsertAfter(HLRAlgo_ListOfBPoint& Other,HLRAlgo_ListIteratorOfListOfBPoint& It) ;


friend class HLRAlgo_ListIteratorOfListOfBPoint;



protected:





private:

  
  Standard_EXPORT   HLRAlgo_ListOfBPoint(const HLRAlgo_ListOfBPoint& Other);


Standard_Address myFirst;
Standard_Address myLast;


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

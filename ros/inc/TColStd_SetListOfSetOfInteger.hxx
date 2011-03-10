// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SetListOfSetOfInteger_HeaderFile
#define _TColStd_SetListOfSetOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfInteger_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_ListIteratorOfSetListOfSetOfInteger;
class TColStd_ListNodeOfSetListOfSetOfInteger;



class TColStd_SetListOfSetOfInteger  {
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

  
  Standard_EXPORT   TColStd_SetListOfSetOfInteger();
  
  Standard_EXPORT     void Assign(const TColStd_SetListOfSetOfInteger& Other) ;
    void operator=(const TColStd_SetListOfSetOfInteger& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TColStd_SetListOfSetOfInteger()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Standard_Integer& I) ;
  
  Standard_EXPORT     void Prepend(const Standard_Integer& I,TColStd_ListIteratorOfSetListOfSetOfInteger& theIt) ;
  
  Standard_EXPORT     void Prepend(TColStd_SetListOfSetOfInteger& Other) ;
  
  Standard_EXPORT     void Append(const Standard_Integer& I) ;
  
  Standard_EXPORT     void Append(const Standard_Integer& I,TColStd_ListIteratorOfSetListOfSetOfInteger& theIt) ;
  
  Standard_EXPORT     void Append(TColStd_SetListOfSetOfInteger& Other) ;
  
  Standard_EXPORT     Standard_Integer& First() const;
  
  Standard_EXPORT     Standard_Integer& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TColStd_ListIteratorOfSetListOfSetOfInteger& It) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer& I,TColStd_ListIteratorOfSetListOfSetOfInteger& It) ;
  
  Standard_EXPORT     void InsertBefore(TColStd_SetListOfSetOfInteger& Other,TColStd_ListIteratorOfSetListOfSetOfInteger& It) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer& I,TColStd_ListIteratorOfSetListOfSetOfInteger& It) ;
  
  Standard_EXPORT     void InsertAfter(TColStd_SetListOfSetOfInteger& Other,TColStd_ListIteratorOfSetListOfSetOfInteger& It) ;


friend class TColStd_ListIteratorOfSetListOfSetOfInteger;



protected:





private:

  
  Standard_EXPORT   TColStd_SetListOfSetOfInteger(const TColStd_SetListOfSetOfInteger& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TCollection_ListNode TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNode_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNode_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define TCollection_List TColStd_SetListOfSetOfInteger
#define TCollection_List_hxx <TColStd_SetListOfSetOfInteger.hxx>

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

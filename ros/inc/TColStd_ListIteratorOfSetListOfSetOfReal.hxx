// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListIteratorOfSetListOfSetOfReal_HeaderFile
#define _TColStd_ListIteratorOfSetListOfSetOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfReal_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TColStd_SetListOfSetOfReal;
class TColStd_ListNodeOfSetListOfSetOfReal;



class TColStd_ListIteratorOfSetListOfSetOfReal  {
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

  
  Standard_EXPORT   TColStd_ListIteratorOfSetListOfSetOfReal();
  
  Standard_EXPORT   TColStd_ListIteratorOfSetListOfSetOfReal(const TColStd_SetListOfSetOfReal& L);
  
  Standard_EXPORT     void Initialize(const TColStd_SetListOfSetOfReal& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Standard_Real& Value() const;


friend class TColStd_SetListOfSetOfReal;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define TCollection_ListNode TColStd_ListNodeOfSetListOfSetOfReal
#define TCollection_ListNode_hxx <TColStd_ListNodeOfSetListOfSetOfReal.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfSetListOfSetOfReal
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfSetListOfSetOfReal.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfSetListOfSetOfReal
#define TCollection_ListNode_Type_() TColStd_ListNodeOfSetListOfSetOfReal_Type_()
#define TCollection_List TColStd_SetListOfSetOfReal
#define TCollection_List_hxx <TColStd_SetListOfSetOfReal.hxx>

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

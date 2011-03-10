// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_ListIteratorOfRegularities_HeaderFile
#define _ChFiDS_ListIteratorOfRegularities_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_ChFiDS_ListNodeOfRegularities_HeaderFile
#include <Handle_ChFiDS_ListNodeOfRegularities.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class ChFiDS_Regularities;
class ChFiDS_Regul;
class ChFiDS_ListNodeOfRegularities;



class ChFiDS_ListIteratorOfRegularities  {
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

  
  Standard_EXPORT   ChFiDS_ListIteratorOfRegularities();
  
  Standard_EXPORT   ChFiDS_ListIteratorOfRegularities(const ChFiDS_Regularities& L);
  
  Standard_EXPORT     void Initialize(const ChFiDS_Regularities& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     ChFiDS_Regul& Value() const;


friend class ChFiDS_Regularities;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item ChFiDS_Regul
#define Item_hxx <ChFiDS_Regul.hxx>
#define TCollection_ListNode ChFiDS_ListNodeOfRegularities
#define TCollection_ListNode_hxx <ChFiDS_ListNodeOfRegularities.hxx>
#define TCollection_ListIterator ChFiDS_ListIteratorOfRegularities
#define TCollection_ListIterator_hxx <ChFiDS_ListIteratorOfRegularities.hxx>
#define Handle_TCollection_ListNode Handle_ChFiDS_ListNodeOfRegularities
#define TCollection_ListNode_Type_() ChFiDS_ListNodeOfRegularities_Type_()
#define TCollection_List ChFiDS_Regularities
#define TCollection_List_hxx <ChFiDS_Regularities.hxx>

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

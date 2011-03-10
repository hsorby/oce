// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ListNodeOfListOfShortReal_HeaderFile
#define _Graphic3d_ListNodeOfListOfShortReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ListNodeOfListOfShortReal_HeaderFile
#include <Handle_Graphic3d_ListNodeOfListOfShortReal.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Graphic3d_ListOfShortReal;
class Graphic3d_ListIteratorOfListOfShortReal;



class Graphic3d_ListNodeOfListOfShortReal : public TCollection_MapNode {

public:

  
      Graphic3d_ListNodeOfListOfShortReal(const Standard_ShortReal& I,const TCollection_MapNodePtr& n);
  
        Standard_ShortReal& Value() const;




  DEFINE_STANDARD_RTTI(Graphic3d_ListNodeOfListOfShortReal)

protected:




private: 


Standard_ShortReal myValue;


};

#define Item Standard_ShortReal
#define Item_hxx <Standard_ShortReal.hxx>
#define TCollection_ListNode Graphic3d_ListNodeOfListOfShortReal
#define TCollection_ListNode_hxx <Graphic3d_ListNodeOfListOfShortReal.hxx>
#define TCollection_ListIterator Graphic3d_ListIteratorOfListOfShortReal
#define TCollection_ListIterator_hxx <Graphic3d_ListIteratorOfListOfShortReal.hxx>
#define Handle_TCollection_ListNode Handle_Graphic3d_ListNodeOfListOfShortReal
#define TCollection_ListNode_Type_() Graphic3d_ListNodeOfListOfShortReal_Type_()
#define TCollection_List Graphic3d_ListOfShortReal
#define TCollection_List_hxx <Graphic3d_ListOfShortReal.hxx>

#include <TCollection_ListNode.lxx>

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

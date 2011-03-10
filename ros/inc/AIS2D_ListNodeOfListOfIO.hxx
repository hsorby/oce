// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_ListNodeOfListOfIO_HeaderFile
#define _AIS2D_ListNodeOfListOfIO_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_ListNodeOfListOfIO_HeaderFile
#include <Handle_AIS2D_ListNodeOfListOfIO.hxx>
#endif

#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class AIS2D_InteractiveObject;
class AIS2D_ListOfIO;
class AIS2D_ListIteratorOfListOfIO;



class AIS2D_ListNodeOfListOfIO : public TCollection_MapNode {

public:

  
      AIS2D_ListNodeOfListOfIO(const Handle(AIS2D_InteractiveObject)& I,const TCollection_MapNodePtr& n);
  
        Handle_AIS2D_InteractiveObject& Value() const;




  DEFINE_STANDARD_RTTI(AIS2D_ListNodeOfListOfIO)

protected:




private: 


Handle_AIS2D_InteractiveObject myValue;


};

#define Item Handle_AIS2D_InteractiveObject
#define Item_hxx <AIS2D_InteractiveObject.hxx>
#define TCollection_ListNode AIS2D_ListNodeOfListOfIO
#define TCollection_ListNode_hxx <AIS2D_ListNodeOfListOfIO.hxx>
#define TCollection_ListIterator AIS2D_ListIteratorOfListOfIO
#define TCollection_ListIterator_hxx <AIS2D_ListIteratorOfListOfIO.hxx>
#define Handle_TCollection_ListNode Handle_AIS2D_ListNodeOfListOfIO
#define TCollection_ListNode_Type_() AIS2D_ListNodeOfListOfIO_Type_()
#define TCollection_List AIS2D_ListOfIO
#define TCollection_List_hxx <AIS2D_ListOfIO.hxx>

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

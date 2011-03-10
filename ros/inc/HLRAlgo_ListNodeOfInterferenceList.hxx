// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_ListNodeOfInterferenceList_HeaderFile
#define _HLRAlgo_ListNodeOfInterferenceList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HLRAlgo_ListNodeOfInterferenceList_HeaderFile
#include <Handle_HLRAlgo_ListNodeOfInterferenceList.hxx>
#endif

#ifndef _HLRAlgo_Interference_HeaderFile
#include <HLRAlgo_Interference.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class HLRAlgo_Interference;
class HLRAlgo_InterferenceList;
class HLRAlgo_ListIteratorOfInterferenceList;



class HLRAlgo_ListNodeOfInterferenceList : public TCollection_MapNode {

public:

  
      HLRAlgo_ListNodeOfInterferenceList(const HLRAlgo_Interference& I,const TCollection_MapNodePtr& n);
  
        HLRAlgo_Interference& Value() const;




  DEFINE_STANDARD_RTTI(HLRAlgo_ListNodeOfInterferenceList)

protected:




private: 


HLRAlgo_Interference myValue;


};

#define Item HLRAlgo_Interference
#define Item_hxx <HLRAlgo_Interference.hxx>
#define TCollection_ListNode HLRAlgo_ListNodeOfInterferenceList
#define TCollection_ListNode_hxx <HLRAlgo_ListNodeOfInterferenceList.hxx>
#define TCollection_ListIterator HLRAlgo_ListIteratorOfInterferenceList
#define TCollection_ListIterator_hxx <HLRAlgo_ListIteratorOfInterferenceList.hxx>
#define Handle_TCollection_ListNode Handle_HLRAlgo_ListNodeOfInterferenceList
#define TCollection_ListNode_Type_() HLRAlgo_ListNodeOfInterferenceList_Type_()
#define TCollection_List HLRAlgo_InterferenceList
#define TCollection_List_hxx <HLRAlgo_InterferenceList.hxx>

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

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg_HeaderFile
#define _ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg_HeaderFile
#include <Handle_ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Message_ListOfMsg_HeaderFile
#include <Message_ListOfMsg.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class Message_ListOfMsg;
class TopTools_ShapeMapHasher;
class ShapeExtend_DataMapOfShapeListOfMsg;
class ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg;



class ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg : public TCollection_MapNode {

public:

  
      ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg(const TopoDS_Shape& K,const Message_ListOfMsg& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        Message_ListOfMsg& Value() const;




  DEFINE_STANDARD_RTTI(ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg)

protected:




private: 


TopoDS_Shape myKey;
Message_ListOfMsg myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Message_ListOfMsg
#define TheItem_hxx <Message_ListOfMsg.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg
#define TCollection_DataMapNode_hxx <ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg.hxx>
#define TCollection_DataMapIterator ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg
#define TCollection_DataMapIterator_hxx <ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx>
#define Handle_TCollection_DataMapNode Handle_ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg
#define TCollection_DataMapNode_Type_() ShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg_Type_()
#define TCollection_DataMap ShapeExtend_DataMapOfShapeListOfMsg
#define TCollection_DataMap_hxx <ShapeExtend_DataMapOfShapeListOfMsg.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

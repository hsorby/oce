// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeListOfShape;
class TopTools_DataMapIteratorOfDataMapOfShapeListOfShape;



class TopTools_DataMapNodeOfDataMapOfShapeListOfShape : public TCollection_MapNode {

public:

  
      TopTools_DataMapNodeOfDataMapOfShapeListOfShape(const TopoDS_Shape& K,const TopTools_ListOfShape& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        TopTools_ListOfShape& Value() const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeListOfShape)

protected:




private: 


TopoDS_Shape myKey;
TopTools_ListOfShape myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopTools_ListOfShape
#define TheItem_hxx <TopTools_ListOfShape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeListOfShape
#define TCollection_DataMapNode_hxx <TopTools_DataMapNodeOfDataMapOfShapeListOfShape.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeListOfShape
#define TCollection_DataMapIterator_hxx <TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeListOfShape_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeListOfShape
#define TCollection_DataMap_hxx <TopTools_DataMapOfShapeListOfShape.hxx>

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

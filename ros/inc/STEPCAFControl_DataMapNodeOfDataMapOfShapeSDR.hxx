// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR_HeaderFile
#define _STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR_HeaderFile
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class StepShape_ShapeDefinitionRepresentation;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class STEPCAFControl_DataMapOfShapeSDR;
class STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR;



class STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR : public TCollection_MapNode {

public:

  
      STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR(const TopoDS_Shape& K,const Handle(StepShape_ShapeDefinitionRepresentation)& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        Handle_StepShape_ShapeDefinitionRepresentation& Value() const;




  DEFINE_STANDARD_RTTI(STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR)

protected:




private: 


TopoDS_Shape myKey;
Handle_StepShape_ShapeDefinitionRepresentation myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Handle_StepShape_ShapeDefinitionRepresentation
#define TheItem_hxx <StepShape_ShapeDefinitionRepresentation.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR
#define TCollection_DataMapNode_hxx <STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR.hxx>
#define TCollection_DataMapIterator STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR
#define TCollection_DataMapIterator_hxx <STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR.hxx>
#define Handle_TCollection_DataMapNode Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR
#define TCollection_DataMapNode_Type_() STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR_Type_()
#define TCollection_DataMap STEPCAFControl_DataMapOfShapeSDR
#define TCollection_DataMap_hxx <STEPCAFControl_DataMapOfShapeSDR.hxx>

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

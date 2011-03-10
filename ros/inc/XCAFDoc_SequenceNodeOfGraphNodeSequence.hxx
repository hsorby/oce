// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_SequenceNodeOfGraphNodeSequence_HeaderFile
#define _XCAFDoc_SequenceNodeOfGraphNodeSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence_HeaderFile
#include <Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence.hxx>
#endif

#ifndef _Handle_XCAFDoc_GraphNode_HeaderFile
#include <Handle_XCAFDoc_GraphNode.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class XCAFDoc_GraphNode;
class XCAFDoc_GraphNodeSequence;



class XCAFDoc_SequenceNodeOfGraphNodeSequence : public TCollection_SeqNode {

public:

  
      XCAFDoc_SequenceNodeOfGraphNodeSequence(const Handle(XCAFDoc_GraphNode)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_XCAFDoc_GraphNode& Value() const;




  DEFINE_STANDARD_RTTI(XCAFDoc_SequenceNodeOfGraphNodeSequence)

protected:




private: 


Handle_XCAFDoc_GraphNode myValue;


};

#define SeqItem Handle_XCAFDoc_GraphNode
#define SeqItem_hxx <XCAFDoc_GraphNode.hxx>
#define TCollection_SequenceNode XCAFDoc_SequenceNodeOfGraphNodeSequence
#define TCollection_SequenceNode_hxx <XCAFDoc_SequenceNodeOfGraphNodeSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_XCAFDoc_SequenceNodeOfGraphNodeSequence
#define TCollection_SequenceNode_Type_() XCAFDoc_SequenceNodeOfGraphNodeSequence_Type_()
#define TCollection_Sequence XCAFDoc_GraphNodeSequence
#define TCollection_Sequence_hxx <XCAFDoc_GraphNodeSequence.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

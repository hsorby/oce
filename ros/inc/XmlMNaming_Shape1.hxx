// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMNaming_Shape1_HeaderFile
#define _XmlMNaming_Shape1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _XmlObjMgt_Element_HeaderFile
#include <XmlObjMgt_Element.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _XmlObjMgt_Document_HeaderFile
#include <XmlObjMgt_Document.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class TopoDS_Shape;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(XmlMNaming_Shape1);

//! The XmlMNaming_Shape1 is the Persistent view of a TopoDS_Shape. <br>
//! <br>
//!  a  Shape1 contains : <br>
//!          - a reference to a TShape <br>
//!          - a reference to Location <br>
//!          - an Orientation. <br>
class XmlMNaming_Shape1  {

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

  
  Standard_EXPORT   XmlMNaming_Shape1(XmlObjMgt_Document& Doc);
  
  Standard_EXPORT   XmlMNaming_Shape1(const XmlObjMgt_Element& E);
  //! return myElement <br>
  Standard_EXPORT    const XmlObjMgt_Element& Element() const;
  //! return myElement <br>
  Standard_EXPORT     XmlObjMgt_Element& Element() ;
  
  Standard_EXPORT     Standard_Integer TShapeId() const;
  
  Standard_EXPORT     Standard_Integer LocId() const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation() const;
  
  Standard_EXPORT     void SetShape(const Standard_Integer ID,const Standard_Integer LocID,const TopAbs_Orientation Orient) ;
  
  Standard_EXPORT     void SetVertex(const TopoDS_Shape& theVertex) ;
  XmlMNaming_Shape1( )
{
  
}
    XmlObjMgt_Element _CSFDB_GetXmlMNaming_Shape1myElement() const { return myElement; }
    void _CSFDB_SetXmlMNaming_Shape1myElement(const XmlObjMgt_Element p) { myElement = p; }
    Standard_Integer _CSFDB_GetXmlMNaming_Shape1myTShapeID() const { return myTShapeID; }
    void _CSFDB_SetXmlMNaming_Shape1myTShapeID(const Standard_Integer p) { myTShapeID = p; }
    Standard_Integer _CSFDB_GetXmlMNaming_Shape1myLocID() const { return myLocID; }
    void _CSFDB_SetXmlMNaming_Shape1myLocID(const Standard_Integer p) { myLocID = p; }
    TopAbs_Orientation _CSFDB_GetXmlMNaming_Shape1myOrientation() const { return myOrientation; }
    void _CSFDB_SetXmlMNaming_Shape1myOrientation(const TopAbs_Orientation p) { myOrientation = p; }



protected:




private: 


XmlObjMgt_Element myElement;
Standard_Integer myTShapeID;
Standard_Integer myLocID;
TopAbs_Orientation myOrientation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

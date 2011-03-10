// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Segment_HeaderFile
#define _Graphic2d_Segment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Segment_HeaderFile
#include <Handle_Graphic2d_Segment.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
#ifndef _Aspect_IFStream_HeaderFile
#include <Aspect_IFStream.hxx>
#endif
class Graphic2d_SegmentDefinitionError;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! The primitive Segment <br>
class Graphic2d_Segment : public Graphic2d_Line {

public:

  //! Creates a segment in the graphic object <aGraphicObject>. <br>
//!	    The first point is <X1>, <Y1>. <br>
//!	    The second point is <X2>, <Y2>. <br>
//!  Warning: Raises SegmentDefinitionError if the <br>
//!	    first point and the second point are identical. <br>
  Standard_EXPORT   Graphic2d_Segment(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Quantity_Length X1,const Quantity_Length Y1,const Quantity_Length X2,const Quantity_Length Y2);
  //! returns the coordinates of the first point of the segment <br>
  Standard_EXPORT     void FirstPoint(Quantity_Length& X,Quantity_Length& Y) const;
  //! returns the coordinates of the second point of the segment <br>
  Standard_EXPORT     void SecondPoint(Quantity_Length& X,Quantity_Length& Y) const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;
  
  Standard_EXPORT   static  void Retrieve(Aspect_IFStream& anIFStream,const Handle(Graphic2d_GraphicObject)& aGraphicObject) ;




  DEFINE_STANDARD_RTTI(Graphic2d_Segment)

protected:

  //! Draws the segment <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws edge <anIndex> of the segment <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the segment <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the segment <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Standard_ShortReal myX1;
Standard_ShortReal myY1;
Standard_ShortReal myX2;
Standard_ShortReal myY2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

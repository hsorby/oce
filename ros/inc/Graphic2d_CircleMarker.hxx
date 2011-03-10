// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_CircleMarker_HeaderFile
#define _Graphic2d_CircleMarker_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_CircleMarker_HeaderFile
#include <Handle_Graphic2d_CircleMarker.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Graphic2d_VectorialMarker_HeaderFile
#include <Graphic2d_VectorialMarker.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
#ifndef _Aspect_IFStream_HeaderFile
#include <Aspect_IFStream.hxx>
#endif
class Graphic2d_CircleDefinitionError;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! The primitive CircleMarker <br>
//!	    Every marker takes a reference point as an argument in <br>
//!	    its constructor. CircleMarker and EllipsMarker take <br>
//!	    another point as the center and PolylineMarker takes the <br>
//!	    first point of its list as its origin. <br>
//!	    The coordinates of the centre or origin point are offsets <br>
//!	    with respect to the reference point. <br>
class Graphic2d_CircleMarker : public Graphic2d_VectorialMarker {

public:

  //! Creates a complete circle. <br>
//!	    The reference point is <aXPosition>, <aYPosition> <br>
//!          The center is <X>, <Y>. <br>
//!          The radius is <Radius>. <br>
//!  Warning: Raises CircleDefinitionError if the <br>
//!          radius is null. <br>
  Standard_EXPORT   Graphic2d_CircleMarker(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Quantity_Length aXPosition,const Quantity_Length aYPosition,const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Radius);
  //! Creates an arc. <br>
//!	    The reference point is <aXPosition>, <aYPosition> <br>
//!	    The center is <X>, <Y>. <br>
//!	    The radius is <Radius>. <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
//!  Warning: Raises CircleDefinitionError if the <br>
//!          radius is null. <br>
  Standard_EXPORT   Graphic2d_CircleMarker(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Quantity_Length aXPosition,const Quantity_Length aYPosition,const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Radius,const Quantity_PlaneAngle Alpha,const Quantity_PlaneAngle Beta);
  //! returns the coordinates of center of the circle marker <br>
  Standard_EXPORT     void Center(Quantity_Length& X,Quantity_Length& Y) const;
  //! returns the radius of this circle marker <br>
  Standard_EXPORT     Quantity_Length Radius() const;
  //! returns the first angle of the arc marker <br>
  Standard_EXPORT     Quantity_PlaneAngle FirstAngle() const;
  //! returns the second angle of the arc marker <br>
  Standard_EXPORT     Quantity_PlaneAngle SecondAngle() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;
  
  Standard_EXPORT   static  void Retrieve(Aspect_IFStream& anIFStream,const Handle(Graphic2d_GraphicObject)& aGraphicObject) ;




  DEFINE_STANDARD_RTTI(Graphic2d_CircleMarker)

protected:

  //! Draws the circle <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the circle marker <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the circle marker <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the circle <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Standard_ShortReal myX;
Standard_ShortReal myY;
Standard_ShortReal myRadius;
Standard_ShortReal myFirstAngle;
Standard_ShortReal mySecondAngle;
Standard_Boolean myisArc;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

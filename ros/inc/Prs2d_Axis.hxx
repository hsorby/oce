// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_Axis_HeaderFile
#define _Prs2d_Axis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_Axis_HeaderFile
#include <Handle_Prs2d_Axis.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _TShort_Array1OfShortReal_HeaderFile
#include <TShort_Array1OfShortReal.hxx>
#endif
#ifndef _Prs2d_TypeOfArrow_HeaderFile
#include <Prs2d_TypeOfArrow.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class gp_Ax22d;
class gp_Ax2d;
class gp_Lin2d;
class Graphic2d_Drawer;
class TColgp_HArray1OfPnt2d;


//! Constructs the primitive Axis <br>
class Prs2d_Axis : public Graphic2d_Line {

public:

  //! Initializes the axis 2 position <anAx> <br>
  Standard_EXPORT   Prs2d_Axis(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const gp_Ax22d& anAx,const Standard_Real aLength,const Standard_Real anArrAngle = 30.0,const Standard_Real anArrLength = 30.0,const Prs2d_TypeOfArrow anArrType = Prs2d_TOA_OPENED,const Standard_Real aTxtScale = 10.0);
  //! Initializes the axis position <anAx>. <br>
  Standard_EXPORT   Prs2d_Axis(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const gp_Ax2d& anAx,const Standard_Real aLength,const Standard_Real anArrAngle = 30.0,const Standard_Real anArrLength = 30.0,const Prs2d_TypeOfArrow anArrType = Prs2d_TOA_OPENED,const Standard_Real aTxtScale = 10.0);
  //! Initializes the line <aLine> <br>
  Standard_EXPORT   Prs2d_Axis(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const gp_Lin2d& aLine,const Standard_Real aLength,const Standard_Real anArrAngle = 30.0,const Standard_Real anArrLength = 30.0,const Prs2d_TypeOfArrow anArrType = Prs2d_TOA_OPENED,const Standard_Real aTxtScale = 10.0);
  //! Returns type of arrow <br>
//!          Type is: <br>
//!             TOA_OPENED, <br>
//!             TOA_CLOSED, <br>
//!             TOA_FILLED <br>
  Standard_EXPORT     Prs2d_TypeOfArrow TypeOfArrow() const;
  
  Standard_EXPORT    const Handle_TColgp_HArray1OfPnt2d ArrayOfPnt2d() const;
  
  Standard_EXPORT    const Handle_TColgp_HArray1OfPnt2d ArrayOfXArrowPnt2d() const;
  
  Standard_EXPORT    const Handle_TColgp_HArray1OfPnt2d ArrayOfYArrowPnt2d() const;
  
  Standard_EXPORT     Standard_Real TextScale() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_Axis)

protected:

  //! Draws the axis <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the axis <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the axis <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if the axis <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 


Standard_ShortReal myX0;
Standard_ShortReal myY0;
Standard_ShortReal myX1;
Standard_ShortReal myY1;
Standard_ShortReal myX2;
Standard_ShortReal myY2;
TShort_Array1OfShortReal myXVertX;
TShort_Array1OfShortReal myYVertX;
TShort_Array1OfShortReal myXVertY;
TShort_Array1OfShortReal myYVertY;
Prs2d_TypeOfArrow myArrType;
Standard_Boolean myisXY;
Standard_Real myTextScale;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

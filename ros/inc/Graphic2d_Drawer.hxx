// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Drawer_HeaderFile
#define _Graphic2d_Drawer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_TypeOfDeflection_HeaderFile
#include <Aspect_TypeOfDeflection.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_DriverPtr_HeaderFile
#include <Aspect_DriverPtr.hxx>
#endif
#ifndef _Aspect_WindowDriverPtr_HeaderFile
#include <Aspect_WindowDriverPtr.hxx>
#endif
#ifndef _PlotMgt_PlotterDriverPtr_HeaderFile
#include <PlotMgt_PlotterDriverPtr.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Handle_Aspect_Driver_HeaderFile
#include <Handle_Aspect_Driver.hxx>
#endif
#ifndef _Handle_Aspect_WindowDriver_HeaderFile
#include <Handle_Aspect_WindowDriver.hxx>
#endif
#ifndef _Handle_PlotMgt_PlotterDriver_HeaderFile
#include <Handle_PlotMgt_PlotterDriver.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
#ifndef _Handle_TShort_HArray1OfShortReal_HeaderFile
#include <Handle_TShort_HArray1OfShortReal.hxx>
#endif
class Graphic2d_DrawerDefinitionError;
class Aspect_Driver;
class Aspect_WindowDriver;
class PlotMgt_PlotterDriver;
class Standard_Transient;
class TCollection_ExtendedString;
class TShort_Array1OfShortReal;
class TShort_HArray1OfShortReal;


//! A Drawer groups all conversion methods. <br>
class Graphic2d_Drawer : public Standard_Transient {

public:

  //! A drawer is : <br>
//!      - a driver <br>
//!      - a "map from" and a "map to" <br>
//!      - attributes <br>
  Standard_EXPORT   Graphic2d_Drawer();
  //! Associates the driver <ADriver> to the drawer <me>. <br>
  Standard_EXPORT     void SetDriver(const Handle(Aspect_Driver)& aDriver) ;
  //! Returns the associated driver. <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     Handle_Aspect_Driver Driver() const;
  //! Returns TRUE if the driver is a window driver. <br>
  Standard_EXPORT     Standard_Boolean IsWindowDriver() const;
  //! Returns the associated window driver. <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined or is not a WindowDriver. <br>
  Standard_EXPORT     Handle_Aspect_WindowDriver WindowDriver() const;
  //! Returns TRUE if the driver is a plotter driver. <br>
  Standard_EXPORT     Standard_Boolean IsPlotterDriver() const;
  //! Returns the associated plotter driver. <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined or is not a PlotterDriver <br>
  Standard_EXPORT     Handle_PlotMgt_PlotterDriver PlotterDriver() const;
  //! Sets the chordal deviation. <br>
//!          <aPrecision> is the chordal deviation when the type of <br>
//!          deflection is Aspect_TOD_ABSOLUTE. <br>
//!          <aCoefficient> is used when when the type of <br>
//!          deflection is Aspect_TOD_RELATIVE. <br>
//!      TypeOfDeflection is : <br>
//!              Aspect_TOD_RELATIVE <br>
//!              Aspect_TOD_ABSOLUTE <br>
//!      TypeOfDeflection defines if the maximal chordal deviation <br>
//!      used when drawing an object is absolute or relative to the <br>
//!      size of the object. <br>
//!  Warning: Specify a chordal deviation that is smaller than the <br>
//!          workstation pixel size will not improve the display, <br>
//!          but will slow the drawing. <br>
  Standard_EXPORT     void SetDrawPrecision(const Standard_Real aPrecision,const Standard_Real aCoefficient,const Aspect_TypeOfDeflection aType) ;
  //! Returns the chordal deviation. <br>
  Standard_EXPORT     void DrawPrecision(Standard_ShortReal& aPrecision,Standard_ShortReal& aCoefficient,Aspect_TypeOfDeflection& aType) const;
  //! Sets the Text precision in METER <br>
//! Any text is displayed only if his height is greater than <br>
  Standard_EXPORT     void SetTextPrecision(const Standard_ShortReal aPrecision) ;
  //! Returns the Text precision in METER. <br>
  Standard_EXPORT     Standard_ShortReal TextPrecision() const;
  //! Defines the "map from" and the "map to" of the drawer. <br>
//!          The "map from" is defined by the viewmapping. <br>
//!          The "map to" is defined by the device. <br>
//!          example : the X window for a X driver. <br>
  Standard_EXPORT     void SetValues(const Standard_Real XF,const Standard_Real YF,const Standard_Real SF,const Standard_Real XT,const Standard_Real YT,const Standard_Real ST,const Standard_Real ZF) ;
  //! Returns the "map from" and the "map to". <br>
  Standard_EXPORT     void Values(Standard_ShortReal& XF,Standard_ShortReal& YF,Standard_ShortReal& SF,Standard_ShortReal& XT,Standard_ShortReal& YT,Standard_ShortReal& ST,Standard_ShortReal& ZF) const;
  //! Manages the highlight, if the highlight color index <br>
//!          is defined (No default value) <br>
  Standard_EXPORT     void SetOverride(const Standard_Boolean aValue) ;
  //! Sets the highlight color index. <br>
//!  Warning: No default value. <br>
  Standard_EXPORT     void SetOverrideColor(const Standard_Integer anIndex) ;
  //! Specifies an offset applied to the original color <br>
//!      index when drawing a primitives, those already created <br>
//!      and the future one. <br>
//!  Warning: To reset the real color of the primitives when drawing <br>
//!      then this method is called with <anOffSet> = 0. <br>
  Standard_EXPORT     void SetOffSet(const Standard_Integer anOffSet) ;
  //! Methods to define the Current Line Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT   virtual  void SetLineAttrib(const Standard_Integer ColorIndex,const Standard_Integer TypeIndex,const Standard_Integer WidthIndex) ;
  //! Methods to define the Current Marker Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetMarkerAttrib(const Standard_Integer ColorIndex,const Standard_Integer WidthIndex,const Standard_Boolean FillMarker) ;
  //! Methods to define the Current polygon Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetPolyAttrib(const Standard_Integer ColorIndex,const Standard_Integer TileIndex,const Standard_Boolean DrawEdge) ;
  //! Methods to define the Current hiding polygon Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetHidingPolyAttrib(const Standard_Integer HidingColorIndex,const Standard_Integer FrameColorIndex,const Standard_Integer FrameTypeIndex,const Standard_Integer FrameWidthIndex) ;
  //! Methods to define the Current Text Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FontIndex,const Standard_ShortReal aSlant,const Standard_ShortReal aHScale,const Standard_ShortReal aWScale,const Standard_Boolean isUnderlined) ;
  //! Methods to define the Current Hiding Text Attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetHidingTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer HidingColorIndex,const Standard_Integer FrameColorIndex,const Standard_Integer FrameWidthIndex,const Standard_Integer FontIndex,const Standard_ShortReal aSlant,const Standard_ShortReal aHScale,const Standard_ShortReal aWScale,const Standard_Boolean isUnderlined) ;
  //! Methods to define the Current Framed Text Attributes <br>
//!  Category: Methods to manage the attributes <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void SetFramedTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FrameColorIndex,const Standard_Integer FrameWidthIndex,const Standard_Integer FontIndex,const Standard_ShortReal aSlant,const Standard_ShortReal aHScale,const Standard_ShortReal aWScale,const Standard_Boolean isUnderlined) ;
  //! Returns Standard_True if the associated driver <br>
//!          have stored the image and Standard_False if not. <br>
//!          For example, returns Standard_True if the associated <br>
//!          driver is a X Driver. <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     Standard_Boolean IsKnownImage(const Handle(Standard_Transient)& anImageId) ;
  //! Clears the image in the associated driver. <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void ClearImage(const Handle(Standard_Transient)& anImageId) ;
  //! Draws the image in the associated driver. <br>
//!          <aX>, <aY> is the center of the image. <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY) ;
  //! Clears the image file in the associated driver. <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void ClearImageFile(const Standard_CString aName) ;
  //! Draws the image in the associated driver. <br>
//!          <aX>, <aY> is the center of the image. <br>
//!          <aScale> = (if the image is zoomable) <br>
//!              initial scale factor of the image * <br>
//!              scale factor of the view. <br>
//!          <aScale> = (if the image is not zoomable) <br>
//!              initial scale factor of the image <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawImageFile(const Standard_CString aName,const Standard_ShortReal aX,const Standard_ShortReal aY,const Quantity_Factor aScale) ;
  //! Stores a complete image and draws it in the associated <br>
//!          driver. <br>
//!          <aX>, <aY> is ???? <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer aWidth,const Standard_Integer aHeight,const Standard_Address anArrayOfPixels) ;
  //! Stores a line of an image and draws it in the associated <br>
//!          driver. <br>
//!          <aX>, <aY> is ???? <br>
//!  Category: Methods to manage the images <br>
//!  Warning: Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer anIndexOfLine,const Standard_Integer aWidth,const Standard_Integer aHeight,const Standard_Address anArrayOfPixels) ;
  
//!  Category: Convert methods <br>
  Standard_EXPORT     void GetMapFrom(const Standard_ShortReal x1,const Standard_ShortReal y1,Standard_ShortReal& x2,Standard_ShortReal& y2) const;
  
  Standard_EXPORT     void GetMapFromTo(const Standard_ShortReal x1,const Standard_ShortReal y1,Standard_ShortReal& x2,Standard_ShortReal& y2) const;
  //! Get text size in world space with the current text <br>
//!         attributes and returns TRUE if the driver is enabled <br>
//!         to get the right size (WindowDriver ONLY!). <br>
//!  Category: Convert methods <br>
  Standard_EXPORT   virtual  Standard_Boolean GetTextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight) const;
  //! Get text size and offsets <br>
//!         in world space with the current text <br>
//!         attributes and returns TRUE if the driver is enabled <br>
//!         to get the right size (WindowDriver ONLY!). <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the text <br>
//!         boundary limits. <br>
//!  Warning : SetTextAttrib(...) must be call before. <br>
//!  Category: Convert methods <br>
  Standard_EXPORT     Standard_Boolean GetTextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,Standard_ShortReal& anXoffset,Standard_ShortReal& anYoffset) const;
  //! Get font height,baseline height and slant <br>
//!         in world space with the current text <br>
//!         attributes and returns TRUE if the driver is enabled <br>
//!       to get the right size (WindowDriver ONLY!). <br>
//!  Warning : SetTextAttrib(...) must be call before. <br>
//!  Category: Convert methods <br>
  Standard_EXPORT     Standard_Boolean GetFontSize(Standard_ShortReal& aHeight,Standard_ShortReal& aBheight,Standard_ShortReal& aSlant) const;
  //! Get image size in world space <br>
//!         and returns TRUE if the driver is enabled <br>
//!         to get the right size (WindowDriver ONLY!). <br>
  Standard_EXPORT     Standard_Boolean GetImageSize(const Standard_CString aFileName,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight) const;
  //! Get image size in pixel space <br>
//!         and returns TRUE if the driver is enabled <br>
//!         to get the right size (WindowDriver ONLY!). <br>
  Standard_EXPORT     Standard_Boolean GetImageSize(const Standard_CString aFileName,Standard_Integer& aWidth,Standard_Integer& aHeight) const;
  
  Standard_EXPORT     void UnMapFromTo(const Standard_ShortReal x1,const Standard_ShortReal y1,Standard_ShortReal& x2,Standard_ShortReal& y2) const;
  
  Standard_EXPORT     Standard_ShortReal Convert(const Standard_ShortReal aValue) const;
  
  Standard_EXPORT     Standard_ShortReal Convert(const Standard_Integer aValue) const;
  
  Standard_EXPORT     Standard_ShortReal ConvertMapToFrom(const Standard_ShortReal x) const;
  
  Standard_EXPORT     Standard_ShortReal Scale() const;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawSegment(const Standard_ShortReal x1,const Standard_ShortReal y1,const Standard_ShortReal x2,const Standard_ShortReal y2) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawPolyline(const Standard_Real aDeltaX,const Standard_Real aDeltaY,const TShort_Array1OfShortReal& aListX,const TShort_Array1OfShortReal& aListY) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawPolygon(const Standard_Real aDeltaX,const Standard_Real aDeltaY,const TShort_Array1OfShortReal& aListX,const TShort_Array1OfShortReal& aListY) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawArc(const Standard_Real aDeltaX,const Standard_Real aDeltaY,const Standard_ShortReal aRadius,const Standard_ShortReal angle1,const Standard_ShortReal angle2) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawPolyArc(const Standard_Real aDeltaX,const Standard_Real aDeltaY,const Standard_ShortReal aRadius,const Standard_ShortReal angle1,const Standard_ShortReal angle2) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawInfiniteLine(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal dx,const Standard_ShortReal dy) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawMarker(const Standard_Integer anindex,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal awidth,const Standard_ShortReal anheight,const Standard_ShortReal angle) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawText(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawPolyText(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Standard_ShortReal margin,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void DrawFramedText(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Standard_ShortReal margin,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapInfiniteLineFromTo(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal dx,const Standard_ShortReal dy) ;
  //!  RRaises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT   virtual  void MapSegmentFromTo(const Standard_ShortReal x1,const Standard_ShortReal y1,const Standard_ShortReal x2,const Standard_ShortReal y2,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapMarkerFromTo(const Standard_Integer anindex,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal awidth,const Standard_ShortReal anheight,const Standard_ShortReal angle,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapMarkersFromTo(const Standard_Integer index,const Handle(TShort_HArray1OfShortReal)& x,const Handle(TShort_HArray1OfShortReal)& y,const Standard_ShortReal awidth,const Standard_ShortReal anheight,const Standard_ShortReal angle,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolylineFromTo(const TShort_Array1OfShortReal& aListX,const TShort_Array1OfShortReal& aListY,const Standard_Integer aNumber = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolylineFromTo(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolygonFromTo(const TShort_Array1OfShortReal& aListX,const TShort_Array1OfShortReal& aListY,const Standard_Integer aNumber = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolygonFromTo(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT   virtual  void MapTextFromTo(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Standard_ShortReal aDeltax,const Standard_ShortReal aDeltay,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolyTextFromTo(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Standard_ShortReal margin,const Standard_ShortReal aDeltax,const Standard_ShortReal aDeltay,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapFramedTextFromTo(const TCollection_ExtendedString& aText,const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal angle,const Standard_ShortReal margin,const Standard_ShortReal aDeltax,const Standard_ShortReal aDeltay,const Aspect_TypeOfText aType) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT   virtual  void MapArcFromTo(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal aRadius,const Standard_ShortReal angle1,const Standard_ShortReal angle2,const Standard_Integer aMode = 0) ;
  //! Raises DrawerDefinitionError if the <br>
//!          associated driver is not defined. <br>
  Standard_EXPORT     void MapPolyArcFromTo(const Standard_ShortReal x,const Standard_ShortReal y,const Standard_ShortReal aRadius,const Standard_ShortReal angle1,const Standard_ShortReal angle2,const Standard_Integer aMode = 0) ;
  //! Sets the clipping flag with <aClipFlag> value. <br>
  Standard_EXPORT     void SetRejection(const Standard_Boolean aClipFlag) ;
  //! Returns Standard_True if the given min max intersects <br>
//!          with the drawer space. <br>
//!          Called by the method Draw of a primitive. <br>
//!          IsIn permits the rejection of the primitive only <br>
//!          if the Clipping flag is TRUE. <br>
//!          When the Clipping flag is FALSE,this method returns <br>
//!          always TRUE. <br>
  Standard_EXPORT     Standard_Boolean IsIn(const Standard_ShortReal aMinX,const Standard_ShortReal aMaxX,const Standard_ShortReal aMinY,const Standard_ShortReal aMaxY) const;




  DEFINE_STANDARD_RTTI(Graphic2d_Drawer)

protected:


Standard_ShortReal myDrawPrecision;
Standard_Real myDeflectionCoefficient;
Aspect_TypeOfDeflection myTypeOfDeflection;
Standard_ShortReal mySpaceWidth;
Standard_ShortReal mySpaceHeight;
Aspect_DriverPtr myDriver;
Standard_Boolean myDriverIsDefined;
Aspect_WindowDriverPtr myWDriver;
PlotMgt_PlotterDriverPtr myPDriver;
Standard_Boolean myMinMaxIsActivated;
Standard_ShortReal myMinX;
Standard_ShortReal myMinY;
Standard_ShortReal myMaxX;
Standard_ShortReal myMaxY;
Standard_Boolean myClippingIsActivated;


private: 


Standard_ShortReal myXF;
Standard_ShortReal myYF;
Standard_ShortReal mySF;
Standard_ShortReal myXT;
Standard_ShortReal myYT;
Standard_ShortReal myST;
Standard_ShortReal myZF;
Standard_ShortReal myTextPrecision;
Standard_Integer myOverrideColor;
Standard_Boolean myOverride;
Standard_Integer myOffSet;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

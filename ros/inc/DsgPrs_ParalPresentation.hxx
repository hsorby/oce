// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_ParalPresentation_HeaderFile
#define _DsgPrs_ParalPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Dir;


//! A framework to define display of relations of parallelism between shapes. <br>
class DsgPrs_ParalPresentation  {
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

  //! Defines the display of elements showing relations of <br>
//! parallelism between shapes. <br>
//! These include the two points of attachment <br>
//! AttachmentPoint1 and AttachmentPoint1, the <br>
//! direction aDirection, and the offset point OffsetPoint. <br>
//! These arguments are added to the presentation <br>
//! object aPresentation. Their display attributes are <br>
//! defined by the attribute manager aDrawer. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& AttachmentPoint1,const gp_Pnt& AttachmentPoint2,const gp_Dir& aDirection,const gp_Pnt& OffsetPoint) ;
  //! Defines the display of elements showing relations of <br>
//! parallelism between shapes. <br>
//! These include the two points of attachment <br>
//! AttachmentPoint1 and AttachmentPoint1, the <br>
//! direction aDirection, the offset point OffsetPoint and <br>
//! the text aText. <br>
//! These arguments are added to the presentation <br>
//! object aPresentation. Their display attributes are <br>
//! defined by the attribute manager aDrawer. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& AttachmentPoint1,const gp_Pnt& AttachmentPoint2,const gp_Dir& aDirection,const gp_Pnt& OffsetPoint,const DsgPrs_ArrowSide ArrowSide) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

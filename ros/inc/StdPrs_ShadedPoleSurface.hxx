// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_ShadedPoleSurface_HeaderFile
#define _StdPrs_ShadedPoleSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Prs3d_Root_HeaderFile
#include <Prs3d_Root.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
class Prs3d_Presentation;
class Adaptor3d_Surface;
class Prs3d_Drawer;


//! Draws a surface by drawing the isoparametric curves with respect to <br>
//! a maximal chordial deviation. <br>
//! The number of isoparametric curves to be drawn and their color are <br>
//! controlled by the furnished Drawer. <br>
class StdPrs_ShadedPoleSurface  : public Prs3d_Root {
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

  //! Adds the surface aSurface to the presentation object aPresentation. <br>
//! The surface's display attributes are set in the attribute manager, aDrawer. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Adaptor3d_Surface& aSurface,const Handle(Prs3d_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

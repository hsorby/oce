// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Viewer2dTest_EventManager_HeaderFile
#define _Viewer2dTest_EventManager_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Viewer2dTest_EventManager_HeaderFile
#include <Handle_Viewer2dTest_EventManager.hxx>
#endif

#ifndef _Handle_AIS2D_InteractiveContext_HeaderFile
#include <Handle_AIS2D_InteractiveContext.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_V2d_View_HeaderFile
#include <Handle_V2d_View.hxx>
#endif
class AIS2D_InteractiveContext;
class V2d_View;



class Viewer2dTest_EventManager : public MMgt_TShared {

public:

  
  Standard_EXPORT   Viewer2dTest_EventManager(const Handle(AIS2D_InteractiveContext)& aCtx);
  
  Standard_EXPORT   virtual  void MoveTo(const Standard_Integer xpix,const Standard_Integer ypix,const Handle(V2d_View)& aView) ;
  
  Standard_EXPORT   virtual  void Select() ;
  
  Standard_EXPORT   virtual  void ShiftSelect() ;
  
  Standard_EXPORT   virtual  void Select(const Standard_Integer xmin,const Standard_Integer ymin,const Standard_Integer xmax,const Standard_Integer ymax,const Handle(V2d_View)& aView) ;
  
  Standard_EXPORT   virtual  void ShiftSelect(const Standard_Integer xmin,const Standard_Integer ymin,const Standard_Integer xmax,const Standard_Integer ymax,const Handle(V2d_View)& aView) ;
  
  Standard_EXPORT    const Handle_AIS2D_InteractiveContext& Context() const;




  DEFINE_STANDARD_RTTI(Viewer2dTest_EventManager)

protected:




private: 


Handle_AIS2D_InteractiveContext myCtx;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

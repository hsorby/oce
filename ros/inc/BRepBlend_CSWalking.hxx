// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_CSWalking_HeaderFile
#define _BRepBlend_CSWalking_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRepBlend_Line_HeaderFile
#include <Handle_BRepBlend_Line.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Adaptor3d_TopolTool_HeaderFile
#include <Handle_Adaptor3d_TopolTool.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Blend_Point_HeaderFile
#include <Blend_Point.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Blend_Status_HeaderFile
#include <Blend_Status.hxx>
#endif
class BRepBlend_Line;
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Adaptor3d_TopolTool;
class TColStd_HArray1OfReal;
class StdFail_NotDone;
class Adaptor3d_HVertex;
class Adaptor2d_HCurve2d;
class BRepBlend_HCurve2dTool;
class Adaptor3d_HSurfaceTool;
class BRepBlend_HCurveTool;
class BRepBlend_BlendTool;
class BRepBlend_PointOnRst;
class BRepBlend_SequenceOfPointOnRst;
class BRepBlend_Extremity;
class Blend_CSFunction;
class math_Vector;
class IntSurf_Transition;
class gp_Pnt;
class gp_Pnt2d;
class gp_Vec;
class gp_Vec2d;



class BRepBlend_CSWalking  {
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

  
  Standard_EXPORT   BRepBlend_CSWalking(const Handle(Adaptor3d_HCurve)& Curv,const Handle(Adaptor3d_HSurface)& Surf,const Handle(Adaptor3d_TopolTool)& Domain);
  
  Standard_EXPORT     void Perform(Blend_CSFunction& F,const Standard_Real Pdep,const Standard_Real Pmax,const Standard_Real MaxStep,const Standard_Real TolGuide,const math_Vector& Soldep,const Standard_Real Tolesp,const Standard_Real Fleche,const Standard_Boolean Appro = Standard_False) ;
  
  Standard_EXPORT     Standard_Boolean Complete(Blend_CSFunction& F,const Standard_Real Pmin) ;
  
        Standard_Boolean IsDone() const;
  
       const Handle_BRepBlend_Line& Line() const;





protected:





private:

  
  Standard_EXPORT     void InternalPerform(Blend_CSFunction& F,math_Vector& Sol,const Standard_Real Bound) ;
  
  Standard_EXPORT     void Transition(const Handle(Adaptor2d_HCurve2d)& A,const Standard_Real Param,IntSurf_Transition& TLine,IntSurf_Transition& TArc) ;
  
  Standard_EXPORT     void MakeExtremity(BRepBlend_Extremity& Extrem,const Standard_Integer Index,const Standard_Real Param,const Standard_Boolean IsVtx,const Handle(Adaptor3d_HVertex)& Vtx) ;
  
  Standard_EXPORT     Blend_Status CheckDeflectionOnSurf(const gp_Pnt& Psurf,const gp_Pnt2d& Ponsurf,const gp_Vec& Tgsurf,const gp_Vec2d& Tgonsurf) ;
  
  Standard_EXPORT     Blend_Status CheckDeflectionOnCurv(const gp_Pnt& Pcurv,const Standard_Real Poncurv,const gp_Vec& Tgcurv) ;
  
  Standard_EXPORT     Blend_Status TestArret(Blend_CSFunction& F,const math_Vector& Sol,const Standard_Boolean TestDeflection,const Blend_Status State) ;


Standard_Boolean done;
Handle_BRepBlend_Line line;
Handle_Adaptor3d_HSurface surf;
Handle_Adaptor3d_HCurve curv;
Handle_Adaptor3d_TopolTool domain;
Standard_Real tolesp;
Standard_Real tolgui;
Standard_Real pasmax;
Standard_Real fleche;
Standard_Real param;
Standard_Real firstparam;
Handle_TColStd_HArray1OfReal firstsol;
Blend_Point previousP;
Standard_Boolean rebrou;
Standard_Boolean iscomplete;
Standard_Boolean comptra;
Standard_Real sens;


};

#define TheVertex Handle_Adaptor3d_HVertex
#define TheVertex_hxx <Adaptor3d_HVertex.hxx>
#define TheArc Handle_Adaptor2d_HCurve2d
#define TheArc_hxx <Adaptor2d_HCurve2d.hxx>
#define TheSurface Handle_Adaptor3d_HSurface
#define TheSurface_hxx <Adaptor3d_HSurface.hxx>
#define TheCurve Handle_Adaptor3d_HCurve
#define TheCurve_hxx <Adaptor3d_HCurve.hxx>
#define TheVertexTool Standard_Integer
#define TheVertexTool_hxx <Standard_Integer.hxx>
#define TheArcTool BRepBlend_HCurve2dTool
#define TheArcTool_hxx <BRepBlend_HCurve2dTool.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define TheCurveTool BRepBlend_HCurveTool
#define TheCurveTool_hxx <BRepBlend_HCurveTool.hxx>
#define Handle_TheTopolTool Handle_Adaptor3d_TopolTool
#define TheTopolTool Adaptor3d_TopolTool
#define TheTopolTool_hxx <Adaptor3d_TopolTool.hxx>
#define TheBlendTool BRepBlend_BlendTool
#define TheBlendTool_hxx <BRepBlend_BlendTool.hxx>
#define ThePointOnRst BRepBlend_PointOnRst
#define ThePointOnRst_hxx <BRepBlend_PointOnRst.hxx>
#define TheSeqPointOnRst BRepBlend_SequenceOfPointOnRst
#define TheSeqPointOnRst_hxx <BRepBlend_SequenceOfPointOnRst.hxx>
#define TheExtremity BRepBlend_Extremity
#define TheExtremity_hxx <BRepBlend_Extremity.hxx>
#define Handle_TheLine Handle_BRepBlend_Line
#define TheLine BRepBlend_Line
#define TheLine_hxx <BRepBlend_Line.hxx>
#define Blend_CSWalking BRepBlend_CSWalking
#define Blend_CSWalking_hxx <BRepBlend_CSWalking.hxx>

#include <Blend_CSWalking.lxx>

#undef TheVertex
#undef TheVertex_hxx
#undef TheArc
#undef TheArc_hxx
#undef TheSurface
#undef TheSurface_hxx
#undef TheCurve
#undef TheCurve_hxx
#undef TheVertexTool
#undef TheVertexTool_hxx
#undef TheArcTool
#undef TheArcTool_hxx
#undef TheSurfaceTool
#undef TheSurfaceTool_hxx
#undef TheCurveTool
#undef TheCurveTool_hxx
#undef Handle_TheTopolTool
#undef TheTopolTool
#undef TheTopolTool_hxx
#undef TheBlendTool
#undef TheBlendTool_hxx
#undef ThePointOnRst
#undef ThePointOnRst_hxx
#undef TheSeqPointOnRst
#undef TheSeqPointOnRst_hxx
#undef TheExtremity
#undef TheExtremity_hxx
#undef Handle_TheLine
#undef TheLine
#undef TheLine_hxx
#undef Blend_CSWalking
#undef Blend_CSWalking_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif

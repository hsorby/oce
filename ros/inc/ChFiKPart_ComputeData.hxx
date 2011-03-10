// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiKPart_ComputeData_HeaderFile
#define _ChFiKPart_ComputeData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_ChFiDS_SurfData_HeaderFile
#include <Handle_ChFiDS_SurfData.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Handle_ChFiDS_Spine_HeaderFile
#include <Handle_ChFiDS_Spine.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopOpeBRepDS_DataStructure;
class ChFiDS_SurfData;
class Adaptor3d_HSurface;
class ChFiDS_Spine;
class gp_Pnt2d;


//! Methodes de classe   permettant de  remplir    une <br>
//!          SurfData dans  les cas  particuliers  de  conges <br>
//!          suivants: <br>
//!          - cylindre entre 2 surfaces planes, <br>
//!          - tore/sphere entre un plan et un cylindre othogonal, <br>
//!          - tore/sphere entre un plan et un cone othogonal, <br>
class ChFiKPart_ComputeData  {
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

  //! Computes a simple fillet in several particular <br>
//!          cases. <br>
  Standard_EXPORT   static  Standard_Boolean Compute(TopOpeBRepDS_DataStructure& DStr,Handle(ChFiDS_SurfData)& Data,const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const TopAbs_Orientation Or1,const TopAbs_Orientation Or2,const Handle(ChFiDS_Spine)& Sp,const Standard_Integer Iedge) ;
  //! Computes a toric or spheric corner fillet. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeCorner(TopOpeBRepDS_DataStructure& DStr,const Handle(ChFiDS_SurfData)& Data,const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const TopAbs_Orientation OrFace1,const TopAbs_Orientation OrFace2,const TopAbs_Orientation Or1,const TopAbs_Orientation Or2,const Standard_Real minRad,const Standard_Real majRad,const gp_Pnt2d& P1S1,const gp_Pnt2d& P2S1,const gp_Pnt2d& P1S2,const gp_Pnt2d& P2S2) ;
  //! Computes spheric corner fillet with non iso pcurve on S2. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeCorner(TopOpeBRepDS_DataStructure& DStr,const Handle(ChFiDS_SurfData)& Data,const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const TopAbs_Orientation OrFace1,const TopAbs_Orientation OrFace2,const TopAbs_Orientation Or1,const TopAbs_Orientation Or2,const Standard_Real Rad,const gp_Pnt2d& PS1,const gp_Pnt2d& P1S2,const gp_Pnt2d& P2S2) ;
  //! Computes a toric corner rotule. <br>
  Standard_EXPORT   static  Standard_Boolean ComputeCorner(TopOpeBRepDS_DataStructure& DStr,const Handle(ChFiDS_SurfData)& Data,const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const TopAbs_Orientation OfS,const TopAbs_Orientation OS,const TopAbs_Orientation OS1,const TopAbs_Orientation OS2,const Standard_Real Radius) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

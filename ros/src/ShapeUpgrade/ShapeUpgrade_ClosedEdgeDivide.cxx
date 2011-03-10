// File:	ShapeUpgrade_ClosedEdgeDivide.cxx
// Created:	Thu May 25 10:19:23 2000
// Author:	data exchange team
//		<det@friendox>


#include <ShapeUpgrade_ClosedEdgeDivide.ixx>
#include <ShapeAnalysis_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <BRep_Tool.hxx>
#include <TColStd_HSequenceOfReal.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt2d.hxx>

//=======================================================================
//function : ShapeUpgrade_ClosedEdgeDivide
//purpose  : 
//=======================================================================

ShapeUpgrade_ClosedEdgeDivide::ShapeUpgrade_ClosedEdgeDivide():
      ShapeUpgrade_EdgeDivide()
{
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================

Standard_Boolean ShapeUpgrade_ClosedEdgeDivide::Compute(const TopoDS_Edge& anEdge)
{
  Clear();
  ShapeAnalysis_Edge sae;
  TopoDS_Vertex V1 = sae.FirstVertex(anEdge);
  TopoDS_Vertex V2 = sae.LastVertex(anEdge);
  if( V1.IsSame(V2) && !BRep_Tool::Degenerated ( anEdge ) ) {
    const Standard_Integer nbPoints = 23;
    gp_Pnt pntV = BRep_Tool::Pnt(V1);
    Standard_Real TolV1 = LimitTolerance( BRep_Tool::Tolerance(V1) );
    TolV1=TolV1*TolV1;
    Standard_Real f, l;
    Handle(Geom_Curve) curve3d = BRep_Tool::Curve (anEdge, f, l);
    myHasCurve3d = !curve3d.IsNull();
    Standard_Real f2d, l2d;
    Handle(Geom2d_Curve) pcurve1;
    if ( ! myFace.IsNull() ) { // process free edges
      sae.PCurve (anEdge, myFace, pcurve1, f2d, l2d, Standard_False);
    }
    myHasCurve2d = !pcurve1.IsNull();
    
    if ( myHasCurve3d ) {
      Standard_Real maxPar = f, dMax = 0;
      Standard_Real step = (l-f)/(nbPoints-1);
      Standard_Real param = f+step;
      for (Standard_Integer i = 1; i < 23; i++, param+=step) {
	gp_Pnt curPnt = curve3d->Value(param);
	Standard_Real dist = pntV.SquareDistance(curPnt);
	if(dist > dMax) {
	  maxPar = param;
	  dMax = dist;
	}
      }
      if(dMax > TolV1) {
	Handle(ShapeUpgrade_SplitCurve3d) theSplit3dTool = GetSplitCurve3dTool();
	theSplit3dTool->Init(curve3d,f,l);
	
	Handle(TColStd_HSequenceOfReal) values = new TColStd_HSequenceOfReal;
	values->Append(maxPar);
	theSplit3dTool->SetSplitValues(values);
	myKnots3d = theSplit3dTool->SplitValues();
      
	if(myHasCurve2d) {
	  Handle(ShapeUpgrade_SplitCurve2d) theSplit2dTool = GetSplitCurve2dTool();
	  theSplit2dTool->Init(pcurve1,f2d,l2d);
	  myKnots2d = theSplit2dTool->SplitValues();
	}
	return Standard_True;
      }
      else
	return Standard_False;
    }
    
    if ( myHasCurve2d ) {
      Handle(Geom_Surface) surf = BRep_Tool::Surface(myFace);
      Standard_Real maxPar = f2d, dMax = 0;
      Standard_Real step = (l2d-f2d)/(nbPoints-1);
      Standard_Real param = f2d+step;
      for (Standard_Integer i = 1; i < 23; i++, param+=step) {
	gp_Pnt2d p2d = pcurve1->Value(param);
	gp_Pnt curPnt = surf->Value(p2d.X(),p2d.Y());
	Standard_Real dist = pntV.SquareDistance(curPnt);
	if(dist > dMax) {
	  maxPar = param;
	  dMax = dist;
	}
      }
      if(dMax > TolV1) {
	
	Handle(ShapeUpgrade_SplitCurve2d) theSplit2dTool = GetSplitCurve2dTool();
	theSplit2dTool->Init(pcurve1,f2d,l2d);
      
	Handle(TColStd_HSequenceOfReal) values = new TColStd_HSequenceOfReal;
	values->Append(maxPar);
	theSplit2dTool->SetSplitValues(values);
	myKnots2d = theSplit2dTool->SplitValues();
	return Standard_True;
      }
      else
	return Standard_False;
    }
    
    return Standard_False;
    
  }
  else
    return Standard_False;
}

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_Triangulation_HeaderFile
#define _PPoly_Triangulation_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PPoly_Triangulation_HeaderFile
#include <Handle_PPoly_Triangulation.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PColgp_HArray1OfPnt_HeaderFile
#include <Handle_PColgp_HArray1OfPnt.hxx>
#endif
#ifndef _Handle_PColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_PColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Handle_PPoly_HArray1OfTriangle_HeaderFile
#include <Handle_PPoly_HArray1OfTriangle.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
class PColgp_HArray1OfPnt;
class PColgp_HArray1OfPnt2d;
class PPoly_HArray1OfTriangle;


class PPoly_Triangulation : public Standard_Persistent {

public:

  //! Defaults with allocation of Nodes and Triangles. <br>
  Standard_EXPORT   PPoly_Triangulation(const Standard_Real Defl,const Handle(PColgp_HArray1OfPnt)& Nodes,const Handle(PPoly_HArray1OfTriangle)& Triangles);
  //! Defaults with allocation of Nodes and Triangles. <br>
  Standard_EXPORT   PPoly_Triangulation(const Standard_Real Defl,const Handle(PColgp_HArray1OfPnt)& Nodes,const Handle(PColgp_HArray1OfPnt2d)& UVNodes,const Handle(PPoly_HArray1OfTriangle)& Triangles);
  
  Standard_EXPORT     Standard_Real Deflection() const;
  
  Standard_EXPORT     void Deflection(const Standard_Real D) ;
  //! Null if the nodes are not yet defined. <br>
  Standard_EXPORT     Standard_Integer NbNodes() const;
  //! Null if the Triangles are not yet defined. <br>
  Standard_EXPORT     Standard_Integer NbTriangles() const;
  
  Standard_EXPORT     Standard_Boolean HasUVNodes() const;
  //! Const reference on the 3d nodes values. <br>
  Standard_EXPORT     Handle_PColgp_HArray1OfPnt Nodes() const;
  //! Const reference on the 2d nodes values. <br>
  Standard_EXPORT     Handle_PColgp_HArray1OfPnt2d UVNodes() const;
  //! Const reference on the triangles. <br>
  Standard_EXPORT     Handle_PPoly_HArray1OfTriangle Triangles() const;

  PPoly_Triangulation( )
{
  
}
PPoly_Triangulation(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Real _CSFDB_GetPPoly_TriangulationmyDeflection() const { return myDeflection; }
    void _CSFDB_SetPPoly_TriangulationmyDeflection(const Standard_Real p) { myDeflection = p; }
    Handle(PColgp_HArray1OfPnt) _CSFDB_GetPPoly_TriangulationmyNodes() const { return myNodes; }
    void _CSFDB_SetPPoly_TriangulationmyNodes(const Handle(PColgp_HArray1OfPnt)& p) { myNodes = p; }
    Handle(PColgp_HArray1OfPnt2d) _CSFDB_GetPPoly_TriangulationmyUVNodes() const { return myUVNodes; }
    void _CSFDB_SetPPoly_TriangulationmyUVNodes(const Handle(PColgp_HArray1OfPnt2d)& p) { myUVNodes = p; }
    Handle(PPoly_HArray1OfTriangle) _CSFDB_GetPPoly_TriangulationmyTriangles() const { return myTriangles; }
    void _CSFDB_SetPPoly_TriangulationmyTriangles(const Handle(PPoly_HArray1OfTriangle)& p) { myTriangles = p; }



  DEFINE_STANDARD_RTTI(PPoly_Triangulation)

protected:




private: 


Standard_Real myDeflection;
Handle_PColgp_HArray1OfPnt myNodes;
Handle_PColgp_HArray1OfPnt2d myUVNodes;
Handle_PPoly_HArray1OfTriangle myTriangles;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

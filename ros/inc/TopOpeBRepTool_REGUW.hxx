// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_REGUW_HeaderFile
#define _TopOpeBRepTool_REGUW_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopOpeBRepTool_CORRISO_HeaderFile
#include <TopOpeBRepTool_CORRISO.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopOpeBRepTool_IndexedDataMapOfShapeconnexity_HeaderFile
#include <TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
class TopoDS_Face;
class TopTools_DataMapOfShapeListOfShape;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopOpeBRepTool_connexity;



class TopOpeBRepTool_REGUW  {
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

  
  Standard_EXPORT   TopOpeBRepTool_REGUW(const TopoDS_Face& FRef);
  
  Standard_EXPORT    const TopoDS_Face& Fref() const;
  
  Standard_EXPORT     void SetEsplits(TopTools_DataMapOfShapeListOfShape& Esplits) ;
  
  Standard_EXPORT     void GetEsplits(TopTools_DataMapOfShapeListOfShape& Esplits) const;
  
  Standard_EXPORT     void SetOwNw(TopTools_DataMapOfShapeListOfShape& OwNw) ;
  
  Standard_EXPORT     void GetOwNw(TopTools_DataMapOfShapeListOfShape& OwNw) const;
  
  Standard_EXPORT     Standard_Boolean SplitEds() ;
  
  Standard_EXPORT     void Init(const TopoDS_Shape& S) ;
  
  Standard_EXPORT    const TopoDS_Shape& S() const;
  
  Standard_EXPORT     Standard_Boolean HasInit() const;
  
  Standard_EXPORT     Standard_Boolean MapS() ;
  
  Standard_EXPORT     Standard_Boolean REGU(const Standard_Integer istep,const TopoDS_Shape& Scur,TopTools_ListOfShape& Splits) ;
  
  Standard_EXPORT     Standard_Boolean REGU() ;
  
  Standard_EXPORT     Standard_Boolean GetSplits(TopTools_ListOfShape& Splits) const;
  
  Standard_EXPORT     Standard_Boolean InitBlock() ;
  
  Standard_EXPORT     Standard_Boolean NextinBlock() ;
  
  Standard_EXPORT     Standard_Boolean NearestE(const TopTools_ListOfShape& loe,TopoDS_Edge& efound) const;
  
  Standard_EXPORT     Standard_Boolean Connexity(const TopoDS_Vertex& v,TopOpeBRepTool_connexity& co) const;
  
  Standard_EXPORT     Standard_Boolean AddNewConnexity(const TopoDS_Vertex& v,const Standard_Integer OriKey,const TopoDS_Edge& e) ;
  
  Standard_EXPORT     Standard_Boolean RemoveOldConnexity(const TopoDS_Vertex& v,const Standard_Integer OriKey,const TopoDS_Edge& e) ;
  
  Standard_EXPORT     Standard_Boolean UpdateMultiple(const TopoDS_Vertex& v) ;





protected:





private:

  
  Standard_EXPORT     void InitStep(const TopoDS_Shape& S) ;


TopoDS_Shape myS;
TopOpeBRepTool_CORRISO myCORRISO;
Standard_Boolean hasnewsplits;
TopTools_DataMapOfShapeListOfShape myEsplits;
TopTools_DataMapOfShapeListOfShape myOwNw;
TopOpeBRepTool_IndexedDataMapOfShapeconnexity mymapvEds;
TopTools_MapOfShape mymapvmultiple;
TopTools_ListOfShape myListVmultiple;
Standard_Integer iStep;
Standard_Real mytol2d;
Standard_Boolean isinit0;
TopoDS_Vertex myv0;
gp_Pnt2d myp2d0;
TopoDS_Vertex myv;
TopoDS_Edge myed;
gp_Pnt2d myp2d;
gp_Dir2d mytg2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

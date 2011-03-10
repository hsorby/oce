// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_CheckSmallFace_HeaderFile
#define _ShapeAnalysis_CheckSmallFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ShapeExtend_Status_HeaderFile
#include <ShapeExtend_Status.hxx>
#endif
class TopoDS_Face;
class gp_Pnt;
class TopoDS_Edge;
class TopTools_DataMapOfShapeListOfShape;
class ShapeAnalysis_DataMapOfShapeListOfReal;
class TopoDS_Compound;
class TopTools_DataMapOfShapeShape;



class ShapeAnalysis_CheckSmallFace  {
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

  //!Creates an empty tool <br>//! Checks a Shape i.e. each of its faces, records checks as <br>
//!           diagnostics in the <infos> <br>
//! <br>
//!           If <infos> has not been set before, no check is done <br>
//! <br>
//!           For faces which are in a Shell, topological data are recorded <br>
//!           to allow recovering connectivities after fixing or removing <br>
//!           the small faces or parts of faces <br>//! Enchains various checks on a face <br>
//!           inshell : to compute more informations, relevant to topology <br>
  Standard_EXPORT   ShapeAnalysis_CheckSmallFace();
  //! Checks if a Face is as a Spot <br>
//!           Returns 0 if not, 1 if yes, 2 if yes and all vertices are the <br>
//!           same <br>
//!           By default, considers the tolerance zone of its vertices <br>
//!           A given value <tol> may be given to check a spot of this size <br>
//!           If a Face is a Spot, its location is returned in <spot>, and <br>
//!           <spotol> returns an equivalent tolerance, which is computed as <br>
//!           half of max dimension of min-max box of the face <br>
  Standard_EXPORT     Standard_Integer IsSpotFace(const TopoDS_Face& F,gp_Pnt& spot,Standard_Real& spotol,const Standard_Real tol = -1.0) const;
  //! Acts as IsSpotFace, but records in <infos> a diagnostic <br>
//!           "SpotFace" with the Pnt as value (data "Location") <br>
  Standard_EXPORT     Standard_Boolean CheckSpotFace(const TopoDS_Face& F,const Standard_Real tol = -1.0) ;
  //! Checks if a Face lies on a Surface which is a strip <br>
//!           So the Face is a strip. But a Face may be a strip elsewhere .. <br>
//! <br>
//!           A given value <tol> may be given to check max width <br>
//!           By default, considers the tolerance zone of its edges <br>
//!           Returns 0 if not a strip support, 1 strip in U, 2 strip in V <br>
  Standard_EXPORT     Standard_Boolean IsStripSupport(const TopoDS_Face& F,const Standard_Real tol = -1.0) ;
  //! Checks if two edges define a strip, i.e. distance maxi below <br>
//!           tolerance, given or some of those of E1 and E2 <br>
  Standard_EXPORT     Standard_Boolean CheckStripEdges(const TopoDS_Edge& E1,const TopoDS_Edge& E2,const Standard_Real tol,Standard_Real& dmax) const;
  //! Searchs for two and only two edges up tolerance <br>
//!           Returns True if OK, false if not 2 edges <br>
//!           If True, returns the two edges and their maximum distance <br>
  Standard_EXPORT     Standard_Boolean FindStripEdges(const TopoDS_Face& F,TopoDS_Edge& E1,TopoDS_Edge& E2,const Standard_Real tol,Standard_Real& dmax) ;
  //! Checks if a Face is a single strip, i.e. brings two great <br>
//!           edges which are confused on their whole length, possible other <br>
//!           edges are small or null length <br>
//! <br>
//!           Returns 0 if not a strip support, 1 strip in U, 2 strip in V <br>
//!           Records diagnostic in info if it is a single strip <br>
  Standard_EXPORT     Standard_Boolean CheckSingleStrip(const TopoDS_Face& F,TopoDS_Edge& E1,TopoDS_Edge& E2,const Standard_Real tol = -1.0) ;
  //! Checks if a Face is as a Strip <br>
//!           Returns 0 if not or non determined, 1 if in U, 2 if in V <br>
//!           By default, considers the tolerance zone of its edges <br>
//!           A given value <tol> may be given to check a strip of max this width <br>
//! <br>
//!           If a Face is determined as a Strip, it is delinited by two <br>
//!           lists of edges. These lists are recorded in diagnostic <br>
//!           Diagnostic "StripFace" brings data "Direction" (U or V), <br>
//!           "List1" , "List2" (if they could be computed) <br>
  Standard_EXPORT     Standard_Boolean CheckStripFace(const TopoDS_Face& F,TopoDS_Edge& E1,TopoDS_Edge& E2,const Standard_Real tol = -1.0) ;
  //! Checks if a Face brings vertices which split it, either <br>
//!           confused with non adjacent vertices, or confused with their <br>
//!           projection on non adjacent edges <br>
//!           Returns the count of found splitting vertices <br>
//!           Each vertex then brings a diagnostic "SplittingVertex", <br>
//!           with data : "Face" for the face, "Edge" for the split edge <br>
  Standard_EXPORT     Standard_Integer CheckSplittingVertices(const TopoDS_Face& F,TopTools_DataMapOfShapeListOfShape& MapEdges,ShapeAnalysis_DataMapOfShapeListOfReal& MapParam,TopoDS_Compound& theAllVert) ;
  //! Checks if a Face has a pin, which can be edited <br>
//!           No singularity : no pin, returns 0 <br>
//!           If there is a pin, checked topics, with returned value : <br>
//!           - 0 : nothing to do more <br>
//!           - 1 : "smooth", i.e. not a really sharp pin <br>
//!             -> diagnostic "SmoothPin" <br>
//!           - 2 : stretched pin, i.e. is possible to relimit the face by <br>
//!             another vertex, so that this vertex still gives a pin <br>
//!             -> diagnostic "StretchedPin" with location of vertex (Pnt) <br>
  Standard_EXPORT     Standard_Boolean CheckPin(const TopoDS_Face& F,Standard_Integer& whatrow,Standard_Integer& sence) ;
  //! Checks if a Face is twisted (apart from checking Pin, i.e. it <br>
//!           does not give information on pin, only "it is twisted") <br>
  Standard_EXPORT     Standard_Boolean CheckTwisted(const TopoDS_Face& F,Standard_Real& paramu,Standard_Real& paramv) ;
  
  Standard_EXPORT     Standard_Boolean CheckPinFace(const TopoDS_Face& F,TopTools_DataMapOfShapeShape& mapEdges,const Standard_Real toler = -1.0) ;
  
  Standard_EXPORT     Standard_Boolean CheckPinEdges(const TopoDS_Edge& theFirstEdge,const TopoDS_Edge& theSecondEdge,const Standard_Real coef1,const Standard_Real coef2,const Standard_Real toler) const;
  //! Returns the status of last call to Perform() <br>
//!          ShapeExtend_OK   : face was OK, nothing done <br>
//!          ShapeExtend_DONE1: some wires are fixed <br>
//!          ShapeExtend_DONE2: orientation of wires fixed <br>
//!          ShapeExtend_DONE3: missing seam added <br>
//!          ShapeExtend_DONE4: small area wire removed <br>
//!          ShapeExtend_DONE5: natural bounds added <br>
//!          ShapeExtend_FAIL1: some fails during fixing wires <br>
//!          ShapeExtend_FAIL2: cannot fix orientation of wires <br>
//!          ShapeExtend_FAIL3: cannot add missing seam <br>
//!          ShapeExtend_FAIL4: cannot remove small area wire <br>
        Standard_Boolean Status(const ShapeExtend_Status status) const;
  //! Sets a fixed Tolerance to check small face <br>
//!           By default, local tolerance zone is considered <br>//! Sets a fixed MaxTolerance to check small face <br>//! Sets a fixed Tolerance to check small face <br>
//!           By default, local tolerance zone is considered <br>//! Unset fixed tolerance, comes back to local tolerance zones <br>//! Unset fixed tolerance, comes back to local tolerance zones <br>
        void SetTolerance(const Standard_Real tol) ;
  //! Returns the tolerance to check small faces, negative value if <br>
//!           local tolerances zones are to be considered <br>
        Standard_Real Tolerance() const;
  
        Standard_Boolean StatusSpot(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusStrip(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusPin(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusTwisted(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusSplitVert(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusPinFace(const ShapeExtend_Status status) const;
  
        Standard_Boolean StatusPinEdges(const ShapeExtend_Status status) const;





protected:





private:



TopoDS_Shape myComp;
Standard_Integer myStatus;
Standard_Integer myStatusSpot;
Standard_Integer myStatusStrip;
Standard_Integer myStatusPin;
Standard_Integer myStatusTwisted;
Standard_Integer myStatusSplitVert;
Standard_Integer myStatusPinFace;
Standard_Integer myStatusPinEdges;
Standard_Real myPrecision;


};


#include <ShapeAnalysis_CheckSmallFace.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

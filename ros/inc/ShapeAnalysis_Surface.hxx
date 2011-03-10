// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_Surface_HeaderFile
#define _ShapeAnalysis_Surface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeAnalysis_Surface_HeaderFile
#include <Handle_ShapeAnalysis_Surface.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_GeomAdaptor_HSurface_HeaderFile
#include <Handle_GeomAdaptor_HSurface.hxx>
#endif
#ifndef _Extrema_ExtPS_HeaderFile
#include <Extrema_ExtPS.hxx>
#endif
#ifndef _GeomAdaptor_Surface_HeaderFile
#include <GeomAdaptor_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Geom_Surface;
class GeomAdaptor_HSurface;
class Geom_Curve;
class gp_Pnt2d;
class gp_Pnt;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class Bnd_Box;


//! Complements standard tool Geom_Surface by providing additional <br>
//!          functionality for detection surface singularities, checking <br>
//!          spatial surface closure and computing projections of 3D points <br>
//!          onto a surface. <br>
class ShapeAnalysis_Surface : public MMgt_TShared {

public:

  //! Creates an analyzer object on the basis of existing surface <br>
  Standard_EXPORT   ShapeAnalysis_Surface(const Handle(Geom_Surface)& S);
  //! Loads existing surface <br>
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S) ;
  //! Reads all the data from another Surface, without recomputing <br>
  Standard_EXPORT     void Init(const Handle(ShapeAnalysis_Surface)& other) ;
  
  Standard_EXPORT     void SetDomain(const Standard_Real U1,const Standard_Real U2,const Standard_Real V1,const Standard_Real V2) ;
  //! Returns a surface being analyzed <br>
       const Handle_Geom_Surface& Surface() const;
  //! Returns the Adaptor. <br>
//!          Creates it if not yet done. <br>
  Standard_EXPORT    const Handle_GeomAdaptor_HSurface& Adaptor3d() ;
  //! Returns the Adaptor (may be Null if method Adaptor() was not called) <br>
       const Handle_GeomAdaptor_HSurface& TrueAdaptor3d() const;
  //! Returns 3D distance found by one of the following methods. <br>
//!          IsDegenerated, DegeneratedValues, ProjectDegenerated <br>
//!          (distance between 3D point and found or last (if not found) <br>
//!          singularity), <br>
//!          IsUClosed, IsVClosed (minimum value of precision to consider <br>
//!          the surface to be closed), <br>
//!          ValueOfUV (distance between 3D point and found solution). <br>
        Standard_Real Gap() const;
  //! Returns a 3D point specified by parameters in surface <br>
//!          parametrical space <br>
        gp_Pnt Value(const Standard_Real u,const Standard_Real v) ;
  //! Returns a 3d point specified by a point in surface <br>
//!          parametrical space <br>
        gp_Pnt Value(const gp_Pnt2d& p2d) ;
  //! Returns True if the surface has singularities for the given <br>
//!          precision (i.e. if there are surface singularities with sizes <br>
//!          not greater than precision). <br>
  Standard_EXPORT     Standard_Boolean HasSingularities(const Standard_Real preci) ;
  //! Returns the number of singularities for the given precision <br>
//!          (i.e. number of surface singularities with sizes not greater <br>
//!          than precision). <br>
  Standard_EXPORT     Standard_Integer NbSingularities(const Standard_Real preci) ;
  //! Returns the characteristics of the singularity specified by <br>
//!          its rank number <num>. <br>
//!          That means, that it is not neccessary for <num> to be in the <br>
//!          range [1, NbSingularities] but must be not greater than <br>
//!          possible (see ComputeSingularities). <br>
//!          The returned characteristics are: <br>
//!          preci: the smallest precision with which the iso-line is <br>
//!                 considered as degenerated, <br>
//!          P3d: 3D point of singularity (middle point of the surface <br>
//!               iso-line), <br>
//!          firstP2d and lastP2d: first and last 2D points of the <br>
//!                                iso-line in parametrical surface, <br>
//!          firstpar and lastpar: first and last parameters of the <br>
//!                                iso-line in parametrical surface, <br>
//!          uisodeg: if the degenerated iso-line is U-iso (True) or <br>
//!          V-iso (False). <br>
//!          Returns False if <num> is out of range, else returns True. <br>
  Standard_EXPORT     Standard_Boolean Singularity(const Standard_Integer num,Standard_Real& preci,gp_Pnt& P3d,gp_Pnt2d& firstP2d,gp_Pnt2d& lastP2d,Standard_Real& firstpar,Standard_Real& lastpar,Standard_Boolean& uisodeg) ;
  //! Returns True if there is at least one surface boundary which <br>
//!          is considered as degenerated with <preci> and distance <br>
//!          between P3d and corresponding singular point is less than <br>
//!          <preci> <br>
  Standard_EXPORT     Standard_Boolean IsDegenerated(const gp_Pnt& P3d,const Standard_Real preci) ;
  //! Returns True if there is at least one surface iso-line which <br>
//!          is considered as degenerated with <preci> and distance <br>
//!          between P3d and corresponding singular point is less than <br>
//!          <preci> (like IsDegenerated). <br>
//!          Returns characteristics of the first found boundary matching <br>
//!          those criteria. <br>
  Standard_EXPORT     Standard_Boolean DegeneratedValues(const gp_Pnt& P3d,const Standard_Real preci,gp_Pnt2d& firstP2d,gp_Pnt2d& lastP2d,Standard_Real& firstpar,Standard_Real& lastpar,const Standard_Boolean forward = Standard_True) ;
  //! Projects a point <P3d> on a singularity by computing <br>
//!          one of the coordinates of preliminary computed <result>. <br>
  Standard_EXPORT     Standard_Boolean ProjectDegenerated(const gp_Pnt& P3d,const Standard_Real preci,const gp_Pnt2d& neighbour,gp_Pnt2d& result) ;
  //! Checks points at the beginning (direct is True) or end <br>
//!          (direct is False) of array <points> to lie in singularity of <br>
//!          surface, and if yes, adjusts the indeterminate 2d coordinate <br>
//!          of these points by nearest point which is not in singularity. <br>
//!          Returns True if some points were adjusted. <br>
  Standard_EXPORT     Standard_Boolean ProjectDegenerated(const Standard_Integer nbrPnt,const TColgp_Array1OfPnt& points,TColgp_Array1OfPnt2d& pnt2d,const Standard_Real preci,const Standard_Boolean direct) ;
  //! Returns True if straight pcurve going from point p2d1 to p2d2 <br>
//!          is degenerate, i.e. lies in the singularity of the surface. <br>
//!          NOTE: it uses another method of detecting singularity than <br>
//!                used by ComputeSingularities() et al.! <br>
//!          For that, maximums of distances between points p2d1, p2d2 <br>
//!          and 0.5*(p2d1+p2d2) and between corresponding 3d points are <br>
//!          computed. <br>
//!          The pcurve (p2d1, p2d2) is considered as degenerate if: <br>
//!          - max distance in 3d is less than <tol> <br>
//!          - max distance in 2d is at least <ratio> times greather than <br>
//!            the Resolution computed from max distance in 3d <br>
//!            (max3d < tol && max2d > ratio * Resolution(max3d)) <br>
//!          NOTE: <ratio> should be >1 (e.g. 10) <br>
  Standard_EXPORT     Standard_Boolean IsDegenerated(const gp_Pnt2d& p2d1,const gp_Pnt2d& p2d2,const Standard_Real tol,const Standard_Real ratio) ;
  //! Returns the bounds of the surface <br>
//!          (from Bounds from Surface, but buffered) <br>
        void Bounds(Standard_Real& ufirst,Standard_Real& ulast,Standard_Real& vfirst,Standard_Real& vlast) const;
  //! Computes bound isos (protected against exceptions) <br>
  Standard_EXPORT     void ComputeBoundIsos() ;
  //! Returns a U-Iso. Null if not possible or failed <br>
//!          Remark : bound isos are buffered <br>
  Standard_EXPORT     Handle_Geom_Curve UIso(const Standard_Real U) ;
  //! Returns a V-Iso. Null if not possible or failed <br>
//!          Remark : bound isos are buffered <br>
  Standard_EXPORT     Handle_Geom_Curve VIso(const Standard_Real V) ;
  //! Tells if the Surface is spatially closed in U with given <br>
//!          precision. If <preci> < 0 then Precision::Confusion is used. <br>
//!          If Geom_Surface says that the surface is U-closed, this method <br>
//!          also says this. Otherwise additional analysis is performed, <br>
//!          comparing given precision with the following distances: <br>
//!          - periodic B-Splines are closed, <br>
//!          - polinomial B-Spline with boundary multiplicities degree+1 <br>
//!            and Bezier - maximum distance between poles, <br>
//!          - rational B-Spline or one with boundary multiplicities not <br>
//!            degree+1 - maximum distance computed at knots and their <br>
//!            middles, <br>
//!          - surface of extrusion - distance between ends of basis <br>
//!            curve, <br>
//!          - other (RectangularTrimmed and Offset) - maximum distance <br>
//!            computed at 100 equi-distanted points. <br>
  Standard_EXPORT     Standard_Boolean IsUClosed(const Standard_Real preci = -1) ;
  //! Tells if the Surface is spatially closed in V with given <br>
//!          precision. If <preci> < 0 then Precision::Confusion is used. <br>
//!          If Geom_Surface says that the surface is V-closed, this method <br>
//!          also says this. Otherwise additional analysis is performed, <br>
//!          comparing given precision with the following distances: <br>
//!          - periodic B-Splines are closed, <br>
//!          - polinomial B-Spline with boundary multiplicities degree+1 <br>
//!            and Bezier - maximum distance between poles, <br>
//!          - rational B-Spline or one with boundary multiplicities not <br>
//!            degree+1 - maximum distance computed at knots and their <br>
//!            middles, <br>
//!          - surface of revolution - distance between ends of basis <br>
//!            curve, <br>
//!          - other (RectangularTrimmed and Offset) - maximum distance <br>
//!            computed at 100 equi-distanted points. <br>
  Standard_EXPORT     Standard_Boolean IsVClosed(const Standard_Real preci = -1) ;
  //! Computes the parameters in the surface parametrical space of <br>
//!          3D point. <br>
//!          The result is parameters of the point projected onto the <br>
//!          surface. <br>
//!          This method enhances functionality provided by the standard <br>
//!          tool GeomAPI_ProjectPointOnSurface by treatment of cases when <br>
//!          the projected point is near to the surface boundaries and <br>
//!          when this standard tool fails. <br>
  Standard_EXPORT     gp_Pnt2d ValueOfUV(const gp_Pnt& P3D,const Standard_Real preci) ;
  //! Projects a point P3D on the surface. <br>
//!          Does the same thing as ValueOfUV but tries to optimize <br>
//!          computations by taking into account previous point <p2dPrev>: <br>
//!          makes a step by UV and tries Newton algorithm. <br>
//!          If <maxpreci> >0. and distance between solution and <br>
//!          P3D is greater than <maxpreci>, that solution is considered <br>
//!          as bad, and ValueOfUV() is used. <br>
//!          If not succeded, calls ValueOfUV() <br>
  Standard_EXPORT     gp_Pnt2d NextValueOfUV(const gp_Pnt2d& p2dPrev,const gp_Pnt& P3D,const Standard_Real preci,const Standard_Real maxpreci = -1.0) ;
  //! Tries a refinement of an already computed couple (U,V) by <br>
//!          using projecting 3D point on iso-lines: <br>
//!          1. boundaries of the surface, <br>
//!          2. iso-lines passing through (U,V) <br>
//!          3. iteratively received iso-lines passing through new U and <br>
//!             new V (number of iterations is limited by 5 in each <br>
//!             direction) <br>
//!          Returns the best resulting distance between P3D and Value(U,V) <br>
//!          in the case of success. Else, returns a very great value <br>
  Standard_EXPORT     Standard_Real UVFromIso(const gp_Pnt& P3D,const Standard_Real preci,Standard_Real& U,Standard_Real& V) ;
  //! Returns minimum value to consider the surface as U-closed <br>
        Standard_Real UCloseVal() const;
  //! Returns minimum value to consider the surface as V-closed <br>
        Standard_Real VCloseVal() const;
  
  Standard_EXPORT    const Bnd_Box& GetBoxUF() ;
  
  Standard_EXPORT    const Bnd_Box& GetBoxUL() ;
  
  Standard_EXPORT    const Bnd_Box& GetBoxVF() ;
  
  Standard_EXPORT    const Bnd_Box& GetBoxVL() ;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_Surface)

protected:


Handle_Geom_Surface mySurf;
Handle_GeomAdaptor_HSurface myAdSur;
Extrema_ExtPS myExtPS;
GeomAdaptor_Surface myExtSrf;
Standard_Boolean myExtOK;
Standard_Integer myNbDeg;
Standard_Real myPreci[4];
gp_Pnt myP3d[4];
gp_Pnt2d myFirstP2d[4];
gp_Pnt2d myLastP2d[4];
Standard_Real myFirstPar[4];
Standard_Real myLastPar[4];
Standard_Boolean myUIsoDeg[4];
Standard_Boolean myIsos;
Standard_Real myUF;
Standard_Real myUL;
Standard_Real myVF;
Standard_Real myVL;
Handle_Geom_Curve myIsoUF;
Handle_Geom_Curve myIsoUL;
Handle_Geom_Curve myIsoVF;
Handle_Geom_Curve myIsoVL;
Standard_Boolean myIsoBoxes;
Bnd_Box myBndUF;
Bnd_Box myBndUL;
Bnd_Box myBndVF;
Bnd_Box myBndVL;
Standard_Real myGap;
Standard_Real myUDelt;
Standard_Real myVDelt;
Standard_Real myUCloseVal;
Standard_Real myVCloseVal;


private: 

  //! Computes singularities on the surface. <br>
//!          Computes the sizes of boundaries or singular ares of the <br>
//!          surface. Then each boundary or area is considered as <br>
//!          degenerated with precision not less than its size. <br>
  Standard_EXPORT     void ComputeSingularities() ;
  
  Standard_EXPORT     void ComputeBoxes() ;
  
  Standard_EXPORT     Standard_Boolean SurfaceNewton(const gp_Pnt2d& p2dPrev,const gp_Pnt& P3D,const Standard_Real preci,gp_Pnt2d& sol) ;
  
  Standard_EXPORT     void SortSingularities() ;



};


#include <ShapeAnalysis_Surface.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

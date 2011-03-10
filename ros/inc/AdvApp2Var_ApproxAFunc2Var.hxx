// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_ApproxAFunc2Var_HeaderFile
#define _AdvApp2Var_ApproxAFunc2Var_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_IsoType_HeaderFile
#include <GeomAbs_IsoType.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _AdvApp2Var_EvaluatorFunc2Var_HeaderFile
#include <AdvApp2Var_EvaluatorFunc2Var.hxx>
#endif
#ifndef _AdvApp2Var_Context_HeaderFile
#include <AdvApp2Var_Context.hxx>
#endif
#ifndef _AdvApp2Var_Network_HeaderFile
#include <AdvApp2Var_Network.hxx>
#endif
#ifndef _AdvApp2Var_Framework_HeaderFile
#include <AdvApp2Var_Framework.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColGeom_HArray1OfSurface_HeaderFile
#include <Handle_TColGeom_HArray1OfSurface.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class TColGeom_HArray1OfSurface;
class Standard_OutOfRange;
class Standard_ConstructionError;
class AdvApprox_Cutting;
class AdvApp2Var_Criterion;
class Geom_BSplineSurface;


//! Perform   the  approximation of  <Func>     F(U,V) <br>
//! Arguments are : <br>
//! Num1DSS, Num2DSS, Num3DSS :The numbers of 1,2,3 dimensional subspaces <br>
//! OneDTol, TwoDTol, ThreeDTol: The tolerance of approximation in each <br>
//!                              subspaces <br>
//! OneDTolFr, TwoDTolFr, ThreeDTolFr: The tolerance of approximation on <br>
//!           the boundarys in each subspaces <br>
//! [FirstInU, LastInU]: The Bounds in U of the Approximation <br>
//! [FirstInV, LastInV]: The Bounds in V of the Approximation <br>
//! FavorIso : Give preference to extract u-iso or v-iso on F(U,V) <br>
//!            This can be usefull to optimize the <Func> methode <br>
//! ContInU, ContInV : Continuity waiting in u and v <br>
//! PrecisCode : Precision on approximation's error mesurement <br>
//!              1 : Fast computation and average precision <br>
//!              2 : Average computation and good precision <br>
//!              3 : Slow computation and very good precision <br>
//! MaxDegInU : Maximum u-degree waiting in U <br>
//! MaxDegInV : Maximum u-degree waiting in V <br>
//!  Warning: <br>
//!     MaxDegInU (resp. MaxDegInV) must be >= 2*iu (resp. iv) + 1, <br>
//!     where iu (resp. iv) = 0 if ContInU (resp. ContInV)  = GeomAbs_C0, <br>
//!                         = 1 if                          = GeomAbs_C1, <br>
//!                         = 2 if                          = GeomAbs_C2. <br>
//! MaxPatch  : Maximun number of Patch waiting <br>
//!             number of Patch is number of u span * number of v span <br>
//! Func      : The external method to evaluate F(U,V) <br>
//! Crit      : To (re)defined condition of convergence <br>
//! UChoice, VChoice : To define the way in U (or V) Knot insertion <br>
//!  Warning: <br>
//!     for the moment, the result is a 3D Surface <br>
//!     so Num1DSS and Num2DSS must be equals to 0 <br>
//!     and Num3DSS must be equal to 1. <br>
//!  Warning: <br>
//!     the Function of type EvaluatorFunc2Var from Approx <br>
//!     must be an extern "C" function <br>
//! <br>
//!     The evaluator Function has the following type : <br>
//!     typedef  void (* AdvApp2Var_EvaluatorFunc2Var) <br>
//!                         (Standard_Integer *,     // Total Dimension <br>
//!				Standard_Real    *,     // StartEndInU[2] <br>
//!				Standard_Real    *,     // StartEndInV[2] <br>
//!				Standard_Integer *,     // 1 for U = cte <br>
//!				                        // 2 for V = cte <br>
//!				Standard_Real    *,     // Value of cte <br>
//!				Standard_Integer *,     // Number N  of parameters <br>
//!			        Standard_Real    *,     // Tab[N] of parameters at <br>
//!			                                // which evaluation <br>
//!				                        // should take place <br>
//!			        Standard_Integer *,     // U-Derivative Request <br>
//!			        Standard_Integer *,     // V-Derivative Request <br>
//!				Standard_Real    *,     // Result[Dimension,N] <br>
//!			        Standard_Integer *      // Error Code <br>
//!			        ) ; <br>
//! <br>
//!	  the result should be formatted in the following way : <br>
//! <--Num1DSS--> <--2 * Num2DSS--> <--3 * Num3DSS--> <br>
//! R[0,0] ....   R[Num1DSS,0].....  R[Dimension-1,0] for the 1st parameter <br>
//! R[0,i] ....   R[Num1DSS,i].....  R[Dimension-1,i] for the ith parameter <br>
//! R[0,N-1] .... R[Num1DSS,N-1].... R[Dimension-1,N-1] for the Nth parameter <br>
class AdvApp2Var_ApproxAFunc2Var  {
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

  
  Standard_EXPORT   AdvApp2Var_ApproxAFunc2Var(const Standard_Integer Num1DSS,const Standard_Integer Num2DSS,const Standard_Integer Num3DSS,const Handle(TColStd_HArray1OfReal)& OneDTol,const Handle(TColStd_HArray1OfReal)& TwoDTol,const Handle(TColStd_HArray1OfReal)& ThreeDTol,const Handle(TColStd_HArray2OfReal)& OneDTolFr,const Handle(TColStd_HArray2OfReal)& TwoDTolFr,const Handle(TColStd_HArray2OfReal)& ThreeDTolFr,const Standard_Real FirstInU,const Standard_Real LastInU,const Standard_Real FirstInV,const Standard_Real LastInV,const GeomAbs_IsoType FavorIso,const GeomAbs_Shape ContInU,const GeomAbs_Shape ContInV,const Standard_Integer PrecisCode,const Standard_Integer MaxDegInU,const Standard_Integer MaxDegInV,const Standard_Integer MaxPatch,const AdvApp2Var_EvaluatorFunc2Var& Func,AdvApprox_Cutting& UChoice,AdvApprox_Cutting& VChoice);
  
  Standard_EXPORT   AdvApp2Var_ApproxAFunc2Var(const Standard_Integer Num1DSS,const Standard_Integer Num2DSS,const Standard_Integer Num3DSS,const Handle(TColStd_HArray1OfReal)& OneDTol,const Handle(TColStd_HArray1OfReal)& TwoDTol,const Handle(TColStd_HArray1OfReal)& ThreeDTol,const Handle(TColStd_HArray2OfReal)& OneDTolFr,const Handle(TColStd_HArray2OfReal)& TwoDTolFr,const Handle(TColStd_HArray2OfReal)& ThreeDTolFr,const Standard_Real FirstInU,const Standard_Real LastInU,const Standard_Real FirstInV,const Standard_Real LastInV,const GeomAbs_IsoType FavorIso,const GeomAbs_Shape ContInU,const GeomAbs_Shape ContInV,const Standard_Integer PrecisCode,const Standard_Integer MaxDegInU,const Standard_Integer MaxDegInV,const Standard_Integer MaxPatch,const AdvApp2Var_EvaluatorFunc2Var& Func,const AdvApp2Var_Criterion& Crit,AdvApprox_Cutting& UChoice,AdvApprox_Cutting& VChoice);
  //!  True if the approximation succeeded within the imposed <br>
//!  tolerances and the wished continuities <br>
//! <br>
        Standard_Boolean IsDone() const;
  //!  True if the approximation did come out with a result that <br>
//!  is not NECESSARELY within the required tolerance or a result <br>
//!  that is not recognized with the wished continuities <br>
//! <br>
        Standard_Boolean HasResult() const;
  //! returns the BSplineSurface of range Index <br>
        Handle_Geom_BSplineSurface Surface(const Standard_Integer Index) const;
  
        Standard_Integer UDegree() const;
  
        Standard_Integer VDegree() const;
  
        Standard_Integer NumSubSpaces(const Standard_Integer Dimension) const;
  //!  returns the errors max <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal MaxError(const Standard_Integer Dimension) const;
  //! returns the average errors <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal AverageError(const Standard_Integer Dimension) const;
  //! returns the errors max on UFrontiers <br>
//!  Warning: <br>
//!     Dimension must be equal to 3. <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal UFrontError(const Standard_Integer Dimension) const;
  //! returns the errors max on VFrontiers <br>
//!  Warning: <br>
//!     Dimension must be equal to 3. <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal VFrontError(const Standard_Integer Dimension) const;
  //! returns the error max of the BSplineSurface of range Index <br>
  Standard_EXPORT     Standard_Real MaxError(const Standard_Integer Dimension,const Standard_Integer Index) const;
  //! returns the average error of the BSplineSurface of range Index <br>
  Standard_EXPORT     Standard_Real AverageError(const Standard_Integer Dimension,const Standard_Integer Index) const;
  //! returns the error max of the BSplineSurface of range Index on a UFrontier <br>
  Standard_EXPORT     Standard_Real UFrontError(const Standard_Integer Dimension,const Standard_Integer Index) const;
  //! returns the error max of the BSplineSurface of range Index on a VFrontier <br>
  Standard_EXPORT     Standard_Real VFrontError(const Standard_Integer Dimension,const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Real CritError(const Standard_Integer Dimension,const Standard_Integer Index) const;
  //! Prints on the stream o informations on the current state <br>
//!          of the object. <br>
//! <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:





private:

  //!  Initialisation of the approximation ; used by Create <br>
  Standard_EXPORT     void Init() ;
  //!  Initialisation of the approximation with a grid of regular cuttings ; <br>
//!  used by Init and Perform <br>
  Standard_EXPORT     void InitGrid(const Standard_Integer NbInt) ;
  //!  Computation of the approximation result ; used by Create <br>
  Standard_EXPORT     void Perform(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func) ;
  //!  Computation of the approximation result ; used by Create <br>
  Standard_EXPORT     void Perform(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func,const AdvApp2Var_Criterion& Crit) ;
  //!  Computation of the polynomial approximations ; used by Perform <br>
  Standard_EXPORT     void ComputePatches(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func) ;
  //!  Computation of the polynomial approximations ; used by Perform <br>
  Standard_EXPORT     void ComputePatches(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func,const AdvApp2Var_Criterion& Crit) ;
  //!  Approximation of the constraints ; used by ComputePatches <br>
  Standard_EXPORT     void ComputeConstraints(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func) ;
  //!  Approximation of the constraints ; used by ComputePatches <br>
  Standard_EXPORT     void ComputeConstraints(const AdvApprox_Cutting& UChoice,const AdvApprox_Cutting& VChoice,const AdvApp2Var_EvaluatorFunc2Var& Func,const AdvApp2Var_Criterion& Crit) ;
  //!  Computation of the 3D errors on the approximation result ; used by Perform <br>
  Standard_EXPORT     void Compute3DErrors() ;
  //!  Computation of the max value of the criterion on the approximation result ; <br>
//!  used by Perform <br>
  Standard_EXPORT     void ComputeCritError() ;
  //!  Conversion of the approximation result in BSpline; used by Create <br>
  Standard_EXPORT     void ConvertBS() ;


Standard_Integer myNumSubSpaces[3];
Handle_TColStd_HArray1OfReal my1DTolerances;
Handle_TColStd_HArray1OfReal my2DTolerances;
Handle_TColStd_HArray1OfReal my3DTolerances;
Handle_TColStd_HArray2OfReal my1DTolOnFront;
Handle_TColStd_HArray2OfReal my2DTolOnFront;
Handle_TColStd_HArray2OfReal my3DTolOnFront;
Standard_Real myFirstParInU;
Standard_Real myLastParInU;
Standard_Real myFirstParInV;
Standard_Real myLastParInV;
GeomAbs_IsoType myFavoriteIso;
GeomAbs_Shape myContInU;
GeomAbs_Shape myContInV;
Standard_Integer myPrecisionCode;
Standard_Integer myMaxDegInU;
Standard_Integer myMaxDegInV;
Standard_Integer myMaxPatches;
AdvApp2Var_EvaluatorFunc2Var myEvaluator;
AdvApp2Var_Context myConditions;
AdvApp2Var_Network myResult;
AdvApp2Var_Framework myConstraints;
Standard_Boolean myDone;
Standard_Boolean myHasResult;
Handle_TColGeom_HArray1OfSurface mySurfaces;
Standard_Integer myDegreeInU;
Standard_Integer myDegreeInV;
Handle_TColStd_HArray1OfReal my1DMaxError;
Handle_TColStd_HArray1OfReal my1DAverageError;
Handle_TColStd_HArray1OfReal my1DUFrontError;
Handle_TColStd_HArray1OfReal my1DVFrontError;
Handle_TColStd_HArray1OfReal my2DMaxError;
Handle_TColStd_HArray1OfReal my2DAverageError;
Handle_TColStd_HArray1OfReal my2DUFrontError;
Handle_TColStd_HArray1OfReal my2DVFrontError;
Handle_TColStd_HArray1OfReal my3DMaxError;
Handle_TColStd_HArray1OfReal my3DAverageError;
Handle_TColStd_HArray1OfReal my3DUFrontError;
Handle_TColStd_HArray1OfReal my3DVFrontError;
Standard_Real myCriterionError;


};


#include <AdvApp2Var_ApproxAFunc2Var.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

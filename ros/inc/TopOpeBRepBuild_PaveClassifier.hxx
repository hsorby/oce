// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_PaveClassifier_HeaderFile
#define _TopOpeBRepBuild_PaveClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepBuild_LoopClassifier_HeaderFile
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_Loop_HeaderFile
#include <Handle_TopOpeBRepBuild_Loop.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepBuild_Loop;



//! This class compares vertices on an edge. <br>
//! <br>
//! A vertex V1 is inside a vertex V2 if V1 is on the <br>
//! part of the curve defined by V2. <br>
//! <br>
//! If V2 is FORWARD V1 must be after V2 on the curve. <br>
//! If V2 is REVERSED V1 must be before V2 on the curve. <br>
//! If V2 is INTERNAL V1 is always inside. <br>
//! If V2 is EXTERNAL V1 is never inside. <br>
class TopOpeBRepBuild_PaveClassifier  : public TopOpeBRepBuild_LoopClassifier {
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

  //! Create a Pave classifier to compare vertices on edge <E>. <br>
  Standard_EXPORT   TopOpeBRepBuild_PaveClassifier(const TopoDS_Shape& E);
  //! Returns state of vertex <L1> compared with <L2>. <br>
  Standard_EXPORT     TopAbs_State Compare(const Handle(TopOpeBRepBuild_Loop)& L1,const Handle(TopOpeBRepBuild_Loop)& L2) ;
  
  Standard_EXPORT     void SetFirstParameter(const Standard_Real P) ;
  
  Standard_EXPORT     void ClosedVertices(const Standard_Boolean B) ;
  
  Standard_EXPORT   static  Standard_Real AdjustCase(const Standard_Real p1,const TopAbs_Orientation o,const Standard_Real first,const Standard_Real period,const Standard_Real tol,Standard_Integer& cas) ;





protected:





private:

  
  Standard_EXPORT     TopAbs_State CompareOnNonPeriodic() ;
  
  Standard_EXPORT     TopAbs_State CompareOnPeriodic() ;
  
  Standard_EXPORT     void AdjustOnPeriodic() ;
  
  Standard_EXPORT     Standard_Boolean ToAdjustOnPeriodic() const;


TopoDS_Edge myEdge;
Standard_Boolean myEdgePeriodic;
Standard_Real myFirst;
Standard_Real myPeriod;
Standard_Boolean mySameParameters;
Standard_Boolean myClosedVertices;
Standard_Real myP1;
Standard_Real myP2;
TopAbs_Orientation myO1;
TopAbs_Orientation myO2;
Standard_Integer myCas1;
Standard_Integer myCas2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

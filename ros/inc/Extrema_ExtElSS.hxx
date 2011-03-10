// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtElSS_HeaderFile
#define _Extrema_ExtElSS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_Extrema_HArray1OfPOnSurf_HeaderFile
#include <Handle_Extrema_HArray1OfPOnSurf.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_HArray1OfReal;
class Extrema_HArray1OfPOnSurf;
class StdFail_InfiniteSolutions;
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Pln;
class gp_Sphere;
class gp_Cylinder;
class gp_Cone;
class gp_Torus;
class Extrema_POnSurf;


//! It calculates all the distances between 2 elementary <br>
//!          surfaces. <br>
//!          These distances can be maximum or minimum. <br>
class Extrema_ExtElSS  {
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

  
  Standard_EXPORT   Extrema_ExtElSS();
  //! Calculates the distances between 2 planes. <br>
//!          These planes can be parallel. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Pln& S1,const gp_Pln& S2);
  
  Standard_EXPORT     void Perform(const gp_Pln& S1,const gp_Pln& S2) ;
  //! Calculates the distances between a plane <br>
//!          and a sphere. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Pln& S1,const gp_Sphere& S2);
  
  Standard_EXPORT     void Perform(const gp_Pln& S1,const gp_Sphere& S2) ;
  //! Calculates the distances between 2 spheres. <br>
//!          These spheres can be parallel. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Sphere& S1,const gp_Sphere& S2);
  
  Standard_EXPORT     void Perform(const gp_Sphere& S1,const gp_Sphere& S2) ;
  //! Calculates the distances between a sphere <br>
//!          and a cylinder. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Sphere& S1,const gp_Cylinder& S2);
  
  Standard_EXPORT     void Perform(const gp_Sphere& S1,const gp_Cylinder& S2) ;
  //! Calculates the distances between a sphere <br>
//!          and a cone. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Sphere& S1,const gp_Cone& S2);
  
  Standard_EXPORT     void Perform(const gp_Sphere& S1,const gp_Cone& S2) ;
  //! Calculates the distances between a sphere <br>
//!          and a torus. <br>
  Standard_EXPORT   Extrema_ExtElSS(const gp_Sphere& S1,const gp_Torus& S2);
  
  Standard_EXPORT     void Perform(const gp_Sphere& S1,const gp_Torus& S2) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns True if the two surfaces are parallel. <br>
  Standard_EXPORT     Standard_Boolean IsParallel() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth extremum square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N = 1) const;
  //! Returns the points for the Nth resulting distance. <br>
//!          P1 is on the first surface, P2 on the second one. <br>
  Standard_EXPORT     void Points(const Standard_Integer N,Extrema_POnSurf& P1,Extrema_POnSurf& P2) const;





protected:





private:



Standard_Boolean myDone;
Standard_Boolean myIsPar;
Standard_Integer myNbExt;
Handle_TColStd_HArray1OfReal mySqDist;
Handle_Extrema_HArray1OfPOnSurf myPOnS1;
Handle_Extrema_HArray1OfPOnSurf myPOnS2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_Lin2dBisec_HeaderFile
#define _GccAna_Lin2dBisec_HeaderFile

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
#ifndef _TColgp_Array1OfLin2d_HeaderFile
#include <TColgp_Array1OfLin2d.hxx>
#endif
#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#include <TColgp_Array1OfPnt2d.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_OutOfRange;
class StdFail_NotDone;
class gp_Lin2d;
class gp_Pnt2d;


//! Describes functions for building bisecting lines between two 2D lines. <br>
//!          A bisecting line between two lines is such that each of its <br>
//!          points is at the same distance from the two lines. <br>
//!          If the two lines are secant, there are two orthogonal <br>
//!          bisecting lines which share the angles made by the two <br>
//!          straight lines in two equal parts. If D1 and D2 are the <br>
//!          unit vectors of the two straight lines, those of the two <br>
//!          bisecting lines are collinear with the following vectors: <br>
//!          -   D1 + D2 for the "internal" bisecting line, <br>
//!          -   D1 - D2 for the "external" bisecting line. <br>
//!          If the two lines are parallel, the (unique) bisecting line is <br>
//!          the straight line equidistant from the two straight lines. If <br>
//!          the two straight lines are coincident, the algorithm <br>
//!          returns the first straight line as the solution. <br>
//!          A Lin2dTanObl object provides a framework for: <br>
//!          -   defining the construction of the bisecting lines, <br>
//!          -   implementing the construction algorithm, and <br>
//!          -   consulting the result. <br>
class GccAna_Lin2dBisec  {
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

  //! Constructs bisecting lines between the two lines Lin1 and Lin2. <br>
  Standard_EXPORT   GccAna_Lin2dBisec(const gp_Lin2d& Lin1,const gp_Lin2d& Lin2);
  //! Returns True when the algorithm succeded. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of solutions and raise NotDone if <br>
//!          the constructor wasn't called before. <br>
  Standard_EXPORT     Standard_Integer NbSolutions() const;
  //!Returns the solution number Index . <br>
//!          The first solution is the inside one and the second is the <br>
//!          outside one. <br>
//!          For the first solution the direction is D1+D2 (D1 is <br>
//!          the direction of the first argument and D2 the <br>
//!          direction of the second argument). <br>
//!          For the second solution the direction is D1-D2. <br>
//! Raises NotDone if the construction algorithm <br>
//!          didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     gp_Lin2d ThisSolution(const Standard_Integer Index) const;
  //! Returns informations about the intersection point between <br>
//!          the result number Index and the first argument. <br>
//! Raises NotDone if the construction algorithm  didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     void Intersection1(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;
  //! Returns informations about the intersection point between <br>
//!          the result number Index and the second argument. <br>
//!    Raises NotDone if the construction algorithm <br>
//!          didn't succeed. <br>
//!          It raises OutOfRange if Index is greater than the <br>
//!          number of solutions. <br>
  Standard_EXPORT     void Intersection2(const Standard_Integer Index,Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;





protected:





private:



Standard_Boolean WellDone;
Standard_Integer NbrSol;
TColgp_Array1OfLin2d linsol;
TColgp_Array1OfPnt2d pntint1sol;
TColgp_Array1OfPnt2d pntint2sol;
TColStd_Array1OfReal par1sol;
TColStd_Array1OfReal par2sol;
TColStd_Array1OfReal pararg1;
TColStd_Array1OfReal pararg2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

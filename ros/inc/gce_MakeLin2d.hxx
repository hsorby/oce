// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeLin2d_HeaderFile
#define _gce_MakeLin2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _gce_Root_HeaderFile
#include <gce_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StdFail_NotDone;
class gp_Ax2d;
class gp_Pnt2d;
class gp_Dir2d;
class gp_Lin2d;


//! This class implements the following algorithms used <br>
//!           to create Lin2d from gp. <br>
//! <br>
//!           * Create a Lin2d parallel to another and passing <br>
//!             through a point. <br>
//!           * Create a Lin2d parallel to another at the distance <br>
//!             Dist. <br>
//!           * Create a Lin2d passing through 2 points. <br>
//!           * Create a Lin2d from its axis (Ax1 from gp). <br>
//!           * Create a Lin2d from a point and a direction. <br>
//!           * Create a Lin2d from its equation. <br>
class gce_MakeLin2d  : public gce_Root {
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

  //! Creates a line located with A. <br>
  Standard_EXPORT   gce_MakeLin2d(const gp_Ax2d& A);
  
//!  <P> is the location point (origin) of the line and <br>
//!  <V> is the direction of the line. <br>
  Standard_EXPORT   gce_MakeLin2d(const gp_Pnt2d& P,const gp_Dir2d& V);
  
//!  Creates the line from the equation A*X + B*Y + C = 0.0 <br>
//!  the status is "NullAxis"if Sqrt(A*A + B*B) <= Resolution from gp. <br>
  Standard_EXPORT   gce_MakeLin2d(const Standard_Real A,const Standard_Real B,const Standard_Real C);
  //! Make a Lin2d from gp <TheLin> parallel to another <br>
//!           Lin2d <Lin> at a distance <Dist>. <br>
//!           If Dist is greater than zero the result is on the <br>
//!           right of the Line <Lin>, else the result is on the <br>
//!           left of the Line <Lin>. <br>
  Standard_EXPORT   gce_MakeLin2d(const gp_Lin2d& Lin,const Standard_Real Dist);
  //! Make a Lin2d from gp <TheLin> parallel to another <br>
//!           Lin2d <Lin> and passing through a Pnt2d <Point>. <br>
  Standard_EXPORT   gce_MakeLin2d(const gp_Lin2d& Lin,const gp_Pnt2d& Point);
  //! Make a Lin2d from gp <TheLin> passing through 2 <br>
//!           Pnt2d <P1>,<P2>. <br>
//!           It returns false if <P1> and <P2> are confused. <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NullAxis if Sqrt(A*A + B*B) is less <br>
//!   than or equal to gp::Resolution(), or <br>
//! -   gce_ConfusedPoints if points P1 and P2 are coincident. <br>
  Standard_EXPORT   gce_MakeLin2d(const gp_Pnt2d& P1,const gp_Pnt2d& P2);
  //! Returns the constructed line. <br>
//! Exceptions StdFail_NotDone if no line is constructed. <br>
  Standard_EXPORT     gp_Lin2d Value() const;
  
  Standard_EXPORT     gp_Lin2d Operator() const;
Standard_EXPORT operator gp_Lin2d() const;





protected:





private:



gp_Lin2d TheLin2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

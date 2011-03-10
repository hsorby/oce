// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeSegment_HeaderFile
#define _GC_MakeSegment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_TrimmedCurve_HeaderFile
#include <Handle_Geom_TrimmedCurve.hxx>
#endif
#ifndef _GC_Root_HeaderFile
#include <GC_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_TrimmedCurve;
class StdFail_NotDone;
class gp_Pnt;
class gp_Lin;


//! Implements construction algorithms for a line <br>
//! segment in 3D space. The result is a Geom_TrimmedCurve curve. <br>
//! A MakeSegment object provides a framework for: <br>
//! -   defining the construction of the line segment, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed line segment. <br>
class GC_MakeSegment  : public GC_Root {
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

  //! Make a segment of Line from the 2 points <P1> and <P2>. <br>
//!          It returns NullObject if <P1> and <P2> are confused. <br>
  Standard_EXPORT   GC_MakeSegment(const gp_Pnt& P1,const gp_Pnt& P2);
  //! Make a segment of Line from the line <Line1> <br>
//!          between the two parameters U1 and U2. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
  Standard_EXPORT   GC_MakeSegment(const gp_Lin& Line,const Standard_Real U1,const Standard_Real U2);
  //! Make a segment of Line from the line <Line1> <br>
//!          between the point <Point> and the parameter Ulast. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
  Standard_EXPORT   GC_MakeSegment(const gp_Lin& Line,const gp_Pnt& Point,const Standard_Real Ulast);
  //! Make a segment of Line from the line <Line1> <br>
//!          between the two points <P1> and <P2>. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
  Standard_EXPORT   GC_MakeSegment(const gp_Lin& Line,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Returns the constructed line segment. <br>
  Standard_EXPORT    const Handle_Geom_TrimmedCurve& Value() const;
  
  Standard_EXPORT    const Handle_Geom_TrimmedCurve& Operator() const;
Standard_EXPORT operator Handle_Geom_TrimmedCurve() const;





protected:





private:



Handle_Geom_TrimmedCurve TheSegment;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Parab2d_HeaderFile
#define _gp_Parab2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Ax22d_HeaderFile
#include <gp_Ax22d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Ax2d_HeaderFile
#include <gp_Ax2d.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;
class gp_Trsf2d;
class gp_Vec2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Parab2d);

//! Describes a parabola in the plane (2D space). <br>
//! A parabola is defined by its focal length (that is, the <br>
//! distance between its focus and apex) and positioned in <br>
//! the plane with a coordinate system (a gp_Ax22d object) where: <br>
//! -   the origin of the coordinate system is on the apex of <br>
//!   the parabola, and <br>
//! -   the "X Axis" of the coordinate system is the axis of <br>
//!   symmetry; the parabola is on the positive side of this axis. <br>
//! This coordinate system is the "local coordinate system" <br>
//! of the parabola. Its orientation (direct or indirect sense) <br>
//! gives an implicit orientation to the parabola. <br>
//! In this coordinate system, the equation for the parabola is: <br>
//! Y**2 = (2*P) * X. <br>
//! where P, referred to as the parameter of the parabola, is <br>
//! the distance between the focus and the directrix (P is <br>
//! twice the focal length). <br>
//! See Also <br>
//! GCE2d_MakeParab2d which provides functions for <br>
//! more complex parabola constructions <br>
//! Geom2d_Parabola which provides additional functions <br>
//! for constructing parabolas and works, in particular, with <br>
//! the parametric equations of parabolas <br>
class gp_Parab2d  {

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

  //! Creates an indefinite parabola. <br>
      gp_Parab2d();
  
//!  Creates a parabola with its vertex point, its axis of symmetry <br>
//!  ("XAxis") and its focal length. <br>
//!  The sense of parametrization is given by Sense. <br>
//!  Warnings : It is possible to have Focal = 0. <br>
//! Raises ConstructionError if Focal < 0.0 <br>
      gp_Parab2d(const gp_Ax2d& MirrorAxis,const Standard_Real Focal,const Standard_Boolean Sense = Standard_True);
  
//!  Creates a parabola with its vertex point, its axis of symmetry <br>
//!  ("XAxis") and its focal length. <br>
//!  The sense of parametrization is given by A. <br>
//! Warnings : It is possible to have Focal = 0. <br>
//! Raises ConstructionError if Focal < 0.0 <br>
      gp_Parab2d(const gp_Ax22d& A,const Standard_Real Focal);
  
//!  Creates a parabola with the directrix and the focus point. <br>
//!  The sense of parametrization is given by Sense. <br>
  Standard_EXPORT   gp_Parab2d(const gp_Ax2d& D,const gp_Pnt2d& F,const Standard_Boolean Sense = Standard_True);
  
//!  Creates a parabola with the directrix and the focus point. <br>
//!  The Sense of parametrization is given by D. <br>
  Standard_EXPORT   gp_Parab2d(const gp_Ax22d& D,const gp_Pnt2d& F);
  
//!  Changes the focal distance of the parabola <br>
//! Warnings : It is possible to have Focal = 0. <br>
//! Raises ConstructionError if Focal < 0.0 <br>
        void SetFocal(const Standard_Real Focal) ;
  
//!  Changes the "Location" point of the parabola. It is the <br>
//!  vertex of the parabola. <br>
        void SetLocation(const gp_Pnt2d& P) ;
  //! Modifies this parabola, by redefining its local coordinate system so that <br>
//!    its origin and "X Direction" become those of the axis <br>
//!  MA. The "Y Direction" of the local coordinate system is <br>
//!   then recomputed. The orientation of the local <br>
//!   coordinate system is not modified. <br>
        void SetMirrorAxis(const gp_Ax2d& A) ;
  
//!  Changes the local coordinate system of the parabola. <br>
//!  The "Location" point of A becomes the vertex of the parabola. <br>
        void SetAxis(const gp_Ax22d& A) ;
  
//!  Computes the coefficients of the implicit equation of the parabola. <br>
//!  A * (X**2) + B * (Y**2) + 2*C*(X*Y) + 2*D*X + 2*E*Y + F = 0. <br>
  Standard_EXPORT     void Coefficients(Standard_Real& A,Standard_Real& B,Standard_Real& C,Standard_Real& D,Standard_Real& E,Standard_Real& F) const;
  
//!  Computes the directrix of the parabola. <br>
//! The directrix is: <br>
//! -   a line parallel to the "Y Direction" of the local <br>
//!   coordinate system of this parabola, and <br>
//! -   located on the negative side of the axis of symmetry, <br>
//!   at a distance from the apex which is equal to the focal  length of this parabola. <br>
//!   The directrix is returned as an axis (a gp_Ax2d object), <br>
//! the origin of which is situated on the "X Axis" of this parabola. <br>
        gp_Ax2d Directrix() const;
  
//!  Returns the distance between the vertex and the focus <br>
//!  of the parabola. <br>
        Standard_Real Focal() const;
  //! Returns the focus of the parabola. <br>
        gp_Pnt2d Focus() const;
  //! Returns the vertex of the parabola. <br>
        gp_Pnt2d Location() const;
  
//!  Returns the symmetry axis of the parabola. <br>
//!  The "Location" point of this axis is the vertex of the parabola. <br>
        gp_Ax2d MirrorAxis() const;
  
//!  Returns the local coordinate system of the parabola. <br>
//!  The "Location" point of this axis is the vertex of the parabola. <br>
        gp_Ax22d Axis() const;
  
//!  Returns the distance between the focus and the <br>
//!  directrix of the parabola. <br>
        Standard_Real Parameter() const;
  
        void Reverse() ;
  
//! Reverses the orientation of the local coordinate system <br>
//! of this parabola (the "Y Direction" is reversed). <br>
//! Therefore, the implicit orientation of this parabola is reversed. <br>
//! Note: <br>
//! -   Reverse assigns the result to this parabola, while <br>
//! -   Reversed creates a new one. <br>
        gp_Parab2d Reversed() const;
  //! Returns true if the local coordinate system is direct <br>
//!            and false in the other case. <br>
        Standard_Boolean IsDirect() const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt2d& P) ;
  
//!  Performs the symmetrical transformation of a parabola with respect <br>
//!  to the point P which is the center of the symmetry <br>
  Standard_EXPORT     gp_Parab2d Mirrored(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  
//!  Performs the symmetrical transformation of a parabola with respect <br>
//!  to an axis placement which is the axis of the symmetry. <br>
  Standard_EXPORT     gp_Parab2d Mirrored(const gp_Ax2d& A) const;
  
        void Rotate(const gp_Pnt2d& P,const Standard_Real Ang) ;
  
//!  Rotates a parabola. P is the center of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
        gp_Parab2d Rotated(const gp_Pnt2d& P,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt2d& P,const Standard_Real S) ;
  
//!  Scales a parabola. S is the scaling value. <br>
//!  If S is negative the direction of the symmetry axis <br>
//!  "XAxis" is reversed and the direction of the "YAxis" too. <br>
        gp_Parab2d Scaled(const gp_Pnt2d& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf2d& T) ;
  
//!  Transforms an parabola with the transformation T from class Trsf2d. <br>
        gp_Parab2d Transformed(const gp_Trsf2d& T) const;
  
        void Translate(const gp_Vec2d& V) ;
  
//!  Translates a parabola in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Parab2d Translated(const gp_Vec2d& V) const;
  
        void Translate(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  
//!  Translates a parabola from the point P1 to the point P2. <br>
        gp_Parab2d Translated(const gp_Pnt2d& P1,const gp_Pnt2d& P2) const;
    const gp_Ax22d& _CSFDB_Getgp_Parab2dpos() const { return pos; }
    Standard_Real _CSFDB_Getgp_Parab2dfocalLength() const { return focalLength; }
    void _CSFDB_Setgp_Parab2dfocalLength(const Standard_Real p) { focalLength = p; }



protected:




private: 


gp_Ax22d pos;
Standard_Real focalLength;


};


#include <gp_Parab2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

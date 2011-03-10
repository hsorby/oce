// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Trsf_HeaderFile
#define _gp_Trsf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_TrsfForm_HeaderFile
#include <gp_TrsfForm.hxx>
#endif
#ifndef _gp_Mat_HeaderFile
#include <gp_Mat.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class gp_GTrsf;
class gp_Trsf2d;
class gp_Pnt;
class gp_Ax1;
class gp_Ax2;
class gp_Quaternion;
class gp_Ax3;
class gp_Vec;
class gp_XYZ;
class gp_Mat;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Trsf);

//! Defines a non-persistent transformation in 3D space. <br>
//!  The following transformations are implemented : <br>
//!  . Translation, Rotation, Scale <br>
//!  . Symmetry with respect to a point, a line, a plane. <br>
//!  Complex transformations can be obtained by combining the <br>
//!  previous elementary transformations using the method <br>
//!  Multiply. <br>
//!  The transformations can be represented as follow : <br>
//! <br>
//!       V1   V2   V3    T       XYZ        XYZ <br>
//!    | a11  a12  a13   a14 |   | x |      | x'| <br>
//!    | a21  a22  a23   a24 |   | y |      | y'| <br>
//!    | a31  a32  a33   a34 |   | z |   =  | z'| <br>
//!    |  0    0    0     1  |   | 1 |      | 1 | <br>
class gp_Trsf  {

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

  //! Returns the identity transformation. <br>
      gp_Trsf();
  //! Creates  a 3D transformation from the 2D transformation T. <br>
//! The resulting transformation has a homogeneous <br>
//! vectorial part, V3, and a translation part, T3, built from T: <br>
//!       a11    a12 <br>
//! 0             a13 <br>
//! V3 =    a21    a22    0       T3 <br>
//! =   a23 <br>
//!           0    0    1. <br>
//! 0 <br>
//! It also has the same scale factor as T. This <br>
//! guarantees (by projection) that the transformation <br>
//! which would be performed by T in a plane (2D space) <br>
//! is performed by the resulting transformation in the xOy <br>
//! plane of the 3D space, (i.e. in the plane defined by the <br>
//! origin (0., 0., 0.) and the vectors DX (1., 0., 0.), and DY <br>
//! (0., 1., 0.)). The scale factor is applied to the entire space. <br>
      gp_Trsf(const gp_Trsf2d& T);
  
//!  Makes the transformation into a symmetrical transformation. <br>
//!  P is the center of the symmetry. <br>
        void SetMirror(const gp_Pnt& P) ;
  
//!  Makes the transformation into a symmetrical transformation. <br>
//!  A1 is the center of the axial symmetry. <br>
  Standard_EXPORT     void SetMirror(const gp_Ax1& A1) ;
  
//!  Makes the transformation into a symmetrical transformation. <br>
//!  A2 is the center of the planar symmetry <br>
//!  and defines the plane of symmetry by its origin, "X <br>
//!  Direction" and "Y Direction". <br>
  Standard_EXPORT     void SetMirror(const gp_Ax2& A2) ;
  
//!  Changes the transformation into a rotation. <br>
//!  A1 is the rotation axis and Ang is the angular value of the <br>
//!  rotation in radians. <br>
  Standard_EXPORT     void SetRotation(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Changes the transformation into a rotation defined by quaternion. <br>
//!  Note that rotation is performed around origin, i.e. <br>
//!  no translation is involved. <br>
  Standard_EXPORT     void SetRotation(const gp_Quaternion& R) ;
  
//!  Changes the transformation into a scale. <br>
//!  P is the center of the scale and S is the scaling value. <br>
//!  Raises ConstructionError  If <S> is null. <br>
  Standard_EXPORT     void SetScale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Modifies this transformation so that it transforms the <br>
//!  coordinate system defined by FromSystem1 into the <br>
//!  one defined by ToSystem2. After this modification, this <br>
//!  transformation transforms: <br>
//! -   the origin of FromSystem1 into the origin of ToSystem2, <br>
//! -   the "X Direction" of FromSystem1 into the "X <br>
//!   Direction" of ToSystem2, <br>
//! -   the "Y Direction" of FromSystem1 into the "Y <br>
//!   Direction" of ToSystem2, and <br>
//! -   the "main Direction" of FromSystem1 into the "main <br>
//!   Direction" of ToSystem2. <br>
//! Warning <br>
//! When you know the coordinates of a point in one <br>
//! coordinate system and you want to express these <br>
//! coordinates in another one, do not use the <br>
//! transformation resulting from this function. Use the <br>
//! transformation that results from SetTransformation instead. <br>
//! SetDisplacement and SetTransformation create <br>
//! related transformations: the vectorial part of one is the <br>
//! inverse of the vectorial part of the other. <br>
  Standard_EXPORT     void SetDisplacement(const gp_Ax3& FromSystem1,const gp_Ax3& ToSystem2) ;
  //! Modifies this transformation so that it transforms the <br>
//! coordinates of any point, (x, y, z), relative to a source <br>
//! coordinate system into the coordinates (x', y', z') which <br>
//! are relative to a target coordinate system, but which <br>
//! represent the same point <br>
//!  The transformation is from the coordinate <br>
//!  system "FromSystem1" to the coordinate system "ToSystem2". <br>
//! Example : <br>
//!  In a C++ implementation : <br>
//!  Real x1, y1, z1;  // are the coordinates of a point in the <br>
//!                    // local system FromSystem1 <br>
//!  Real x2, y2, z2;  // are the coordinates of a point in the <br>
//!                    // local system ToSystem2 <br>
//!  gp_Pnt P1 (x1, y1, z1) <br>
//!  Trsf T; <br>
//!  T.SetTransformation (FromSystem1, ToSystem2); <br>
//!  gp_Pnt P2 = P1.Transformed (T); <br>
//!  P2.Coord (x2, y2, z2); <br>
  Standard_EXPORT     void SetTransformation(const gp_Ax3& FromSystem1,const gp_Ax3& ToSystem2) ;
  //! Modifies this transformation so that it transforms the <br>
//!  coordinates of any point, (x, y, z), relative to a source <br>
//!  coordinate system into the coordinates (x', y', z') which <br>
//!  are relative to a target coordinate system, but which <br>
//!  represent the same point <br>
//!  The transformation is from the default coordinate system <br>
//!  {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.), VZ (0., 0. ,1.) } <br>
//!  to the local coordinate system defined with the Ax3 ToSystem. <br>
//!  Use in the same way  as the previous method. FromSystem1 is <br>
//!  defaulted to the absolute coordinate system. <br>
  Standard_EXPORT     void SetTransformation(const gp_Ax3& ToSystem) ;
  
//!  Sets transformation by directly specified rotation and translation. <br>
  Standard_EXPORT     void SetTransformation(const gp_Quaternion& R,const gp_Vec& T) ;
  
//!  Changes the transformation into a translation. <br>
//!  V is the vector of the translation. <br>
        void SetTranslation(const gp_Vec& V) ;
  
//! Makes the transformation into a translation where the translation vector <br>
//! is the vector (P1, P2) defined from point P1 to point P2. <br>
        void SetTranslation(const gp_Pnt& P1,const gp_Pnt& P2) ;
  //!  Replaces the translation vector with the vector V. <br>
  Standard_EXPORT     void SetTranslationPart(const gp_Vec& V) ;
  //!  Modifies the scale factor. <br>
//! Raises ConstructionError  If S is null. <br>
  Standard_EXPORT     void SetScaleFactor(const Standard_Real S) ;
  //! Sets the coefficients  of the transformation.  The <br>
//!          transformation  of the  point  x,y,z is  the point <br>
//!          x',y',z' with : <br>
//! <br>
//!          x' = a11 x + a12 y + a13 z + a14 <br>
//!          y' = a21 x + a22 y + a23 z + a24 <br>
//!          z' = a31 x + a32 y + a43 z + a34 <br>
//! <br>
//!          Tolang and  TolDist are  used  to  test  for  null <br>
//!          angles and null distances to determine the form of <br>
//!          the transformation (identity, translation, etc..). <br>
//! <br>
//!          The method Value(i,j) will return aij. <br>
//!          Raises ConstructionError if the determinant of  the aij is null. Or  if <br>
//!          the matrix as not a uniform scale. <br>
  Standard_EXPORT     void SetValues(const Standard_Real a11,const Standard_Real a12,const Standard_Real a13,const Standard_Real a14,const Standard_Real a21,const Standard_Real a22,const Standard_Real a23,const Standard_Real a24,const Standard_Real a31,const Standard_Real a32,const Standard_Real a33,const Standard_Real a34,const Standard_Real Tolang,const Standard_Real TolDist) ;
  //! Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative. <br>
        Standard_Boolean IsNegative() const;
  
//!  Returns the nature of the transformation. It can be: an <br>
//! identity transformation, a rotation, a translation, a mirror <br>
//! transformation (relative to a point, an axis or a plane), a <br>
//! scaling transformation, or a compound transformation. <br>
        gp_TrsfForm Form() const;
  //! Returns the scale factor. <br>
        Standard_Real ScaleFactor() const;
  
//!  Returns the translation part of the transformation's matrix <br>
       const gp_XYZ& TranslationPart() const;
  
//!  Returns the boolean True if there is non-zero rotation. <br>
//!  In the presence of rotation, the output parameters store the axis <br>
//!  and the angle of rotation. The method always returns positive <br>
//!  value "theAngle", i.e., 0. < theAngle <= PI. <br>
//!  Note that this rotation is defined only by the vectorial part of <br>
//!  the transformation; generally you would need to check also the <br>
//!  translational part to obtain the axis (gp_Ax1) of rotation. <br>
  Standard_EXPORT     Standard_Boolean GetRotation(gp_XYZ& theAxis,Standard_Real& theAngle) const;
  
//!  Returns quaternion representing rotational part of the transformation. <br>
  Standard_EXPORT     gp_Quaternion GetRotation() const;
  
//!  Returns the vectorial part of the transformation. It is <br>
//!  a 3*3 matrix which includes the scale factor. <br>
  Standard_EXPORT     gp_Mat VectorialPart() const;
  
//!  Computes the homogeneous vectorial part of the transformation. <br>
//!  It is a 3*3 matrix which doesn't include the scale factor. <br>
//!  In other words, the vectorial part of this transformation is equal <br>
//!  to its homogeneous vectorial part, multiplied by the scale factor. <br>
//!  The coefficients of this matrix must be multiplied by the <br>
//!  scale factor to obtain the coefficients of the transformation. <br>
       const gp_Mat& HVectorialPart() const;
  
//!  Returns the coefficients of the transformation's matrix. <br>
//!  It is a 3 rows * 4 columns matrix. <br>
//!  This coefficient includes the scale factor. <br>
//!  Raises OutOfRanged if Row < 1 or Row > 3 or Col < 1 or Col > 4 <br>
        Standard_Real Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     void Invert() ;
  
//!  Computes the reverse transformation <br>
//!  Raises an exception if the matrix of the transformation <br>
//!  is not inversible, it means that the scale factor is lower <br>
//!  or equal to Resolution from package gp. <br>
//!  Computes the transformation composed with T and  <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//! Example : <br>
//!      Trsf T1, T2, Tcomp; ............... <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!        Pnt P1(10.,3.,4.); <br>
//!        Pnt P2 = P1.Transformed(Tcomp);    //using Tcomp <br>
//!        Pnt P3 = P1.Transformed(T1);       //using T1 then T2 <br>
//!        P3.Transform(T2);                  // P3 = P2 !!! <br>
        gp_Trsf Inverted() const;
  
        gp_Trsf Multiplied(const gp_Trsf& T) const;
      gp_Trsf operator *(const gp_Trsf& T) const
{
  return Multiplied(T);
}
  
//!  Computes the transformation composed with T and  <me>. <br>
//!  In a C++ implementation you can also write Tcomposed = <me> * T. <br>
//!  Example : <br>
//!      Trsf T1, T2, Tcomp; ............... <br>
//!      //composition : <br>
//!        Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1) <br>
//!      // transformation of a point <br>
//!        Pnt P1(10.,3.,4.); <br>
//!        Pnt P2 = P1.Transformed(Tcomp);    //using Tcomp <br>
//!        Pnt P3 = P1.Transformed(T1);       //using T1 then T2 <br>
//!        P3.Transform(T2);                  // P3 = P2 !!! <br>
//!  Computes the transformation composed with <me> and T. <br>
//!  <me> = T * <me> <br>
  Standard_EXPORT     void Multiply(const gp_Trsf& T) ;
    void operator *=(const gp_Trsf& T) 
{
  Multiply(T);
}
  
//!  Computes the transformation composed with <me> and T. <br>
//!  <me> = T * <me> <br>
  Standard_EXPORT     void PreMultiply(const gp_Trsf& T) ;
  
  Standard_EXPORT     void Power(const Standard_Integer N) ;
  
//!  Computes the following composition of transformations <br>
//!  <me> * <me> * .......* <me>, N time. <br>
//!  if N = 0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
        gp_Trsf Powered(const Standard_Integer N) ;
  
        void Transforms(Standard_Real& X,Standard_Real& Y,Standard_Real& Z) const;
  //! Transformation of a triplet XYZ with a Trsf <br>
        void Transforms(gp_XYZ& Coord) const;
    Standard_Real _CSFDB_Getgp_Trsfscale() const { return scale; }
    void _CSFDB_Setgp_Trsfscale(const Standard_Real p) { scale = p; }
    gp_TrsfForm _CSFDB_Getgp_Trsfshape() const { return shape; }
    void _CSFDB_Setgp_Trsfshape(const gp_TrsfForm p) { shape = p; }
    const gp_Mat& _CSFDB_Getgp_Trsfmatrix() const { return matrix; }
    const gp_XYZ& _CSFDB_Getgp_Trsfloc() const { return loc; }

friend class gp_GTrsf;


protected:




private: 


Standard_Real scale;
gp_TrsfForm shape;
gp_Mat matrix;
gp_XYZ loc;


};


#include <gp_Trsf.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

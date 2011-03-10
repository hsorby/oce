// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_Circuit_HeaderFile
#define _MAT2d_Circuit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT2d_Circuit_HeaderFile
#include <Handle_MAT2d_Circuit.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColGeom2d_SequenceOfGeometry_HeaderFile
#include <TColGeom2d_SequenceOfGeometry.hxx>
#endif
#ifndef _MAT2d_DataMapOfIntegerConnexion_HeaderFile
#include <MAT2d_DataMapOfIntegerConnexion.hxx>
#endif
#ifndef _MAT2d_DataMapOfBiIntSequenceOfInteger_HeaderFile
#include <MAT2d_DataMapOfBiIntSequenceOfInteger.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_MAT2d_Connexion_HeaderFile
#include <Handle_MAT2d_Connexion.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
class MAT2d_SequenceOfSequenceOfGeometry;
class TColStd_SequenceOfBoolean;
class MAT2d_Connexion;
class TColGeom2d_SequenceOfGeometry;
class MAT2d_BiInt;
class MAT2d_SequenceOfConnexion;
class MAT2d_MiniPath;
class Geom2d_Geometry;
class TColStd_SequenceOfInteger;


//! Constructs a circuit on a set of lines. <br>
//! <br>
//! <br>
class MAT2d_Circuit : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT2d_Circuit();
  
  Standard_EXPORT     void Perform(MAT2d_SequenceOfSequenceOfGeometry& aFigure,const TColStd_SequenceOfBoolean& IsClosed,const Standard_Integer IndRefLine,const Standard_Boolean Trigo) ;
  //! Returns the Number of Items . <br>
  Standard_EXPORT     Standard_Integer NumberOfItems() const;
  //! Returns the item at position <Index> in <me>. <br>
  Standard_EXPORT     Handle_Geom2d_Geometry Value(const Standard_Integer Index) const;
  //! Returns the number of items on the line <IndexLine>. <br>
  Standard_EXPORT     Standard_Integer LineLength(const Standard_Integer IndexLine) const;
  //! Returns the set of index of the items in <me>corresponding <br>
//!          to the curve <IndCurve> on the line <IndLine> from the <br>
//!          initial figure. <br>
//! <br>
  Standard_EXPORT    const TColStd_SequenceOfInteger& RefToEqui(const Standard_Integer IndLine,const Standard_Integer IndCurve) const;
  //!  Returns the Connexion on the item <Index> in me. <br>
  Standard_EXPORT     Handle_MAT2d_Connexion Connexion(const Standard_Integer Index) const;
  //! Returns <True> is there is a connexion on the item <Index> <br>
//!          in <me>. <br>
  Standard_EXPORT     Standard_Boolean ConnexionOn(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(MAT2d_Circuit)

protected:




private: 

  
  Standard_EXPORT     Standard_Boolean PassByLast(const Handle(MAT2d_Connexion)& C1,const Handle(MAT2d_Connexion)& C2) const;
  
  Standard_EXPORT     Standard_Real Side(const Handle(MAT2d_Connexion)& C,const TColGeom2d_SequenceOfGeometry& Line) const;
  
  Standard_EXPORT     void UpDateLink(const Standard_Integer IFirst,const Standard_Integer ILine,const Standard_Integer ICurveFirst,const Standard_Integer ICurveLast) ;
  
  Standard_EXPORT     void SortRefToEqui(const MAT2d_BiInt& aBiInt) ;
  
  Standard_EXPORT     void InitOpen(TColGeom2d_SequenceOfGeometry& Line) const;
  
  Standard_EXPORT     void InsertCorner(TColGeom2d_SequenceOfGeometry& Line) const;
  
  Standard_EXPORT     void DoubleLine(TColGeom2d_SequenceOfGeometry& Line,MAT2d_SequenceOfConnexion& Connexions,const Handle(MAT2d_Connexion)& Father,const Standard_Real Side) const;
  
  Standard_EXPORT     void ConstructCircuit(const MAT2d_SequenceOfSequenceOfGeometry& aFigure,const Standard_Integer IndRefLine,const MAT2d_MiniPath& aPath) ;

Standard_Real direction;
TColGeom2d_SequenceOfGeometry geomElements;
MAT2d_DataMapOfIntegerConnexion connexionMap;
MAT2d_DataMapOfBiIntSequenceOfInteger linkRefEqui;
TColStd_SequenceOfInteger linesLength;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

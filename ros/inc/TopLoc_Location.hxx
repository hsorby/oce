// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_Location_HeaderFile
#define _TopLoc_Location_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopLoc_SListOfItemLocation_HeaderFile
#include <TopLoc_SListOfItemLocation.hxx>
#endif
#ifndef _Handle_TopLoc_Datum3D_HeaderFile
#include <Handle_TopLoc_Datum3D.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_NoSuchObject;
class Standard_ConstructionError;
class gp_Trsf;
class TopLoc_Datum3D;


//! A Location is a composite transition. It comprises a <br>
//! series of elementary reference coordinates, i.e. <br>
//! objects of type TopLoc_Datum3D, and the powers to <br>
//! which these objects are raised. <br>
class TopLoc_Location  {
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

  //! Constructs an empty local coordinate system object. <br>
//! Note: A Location constructed from a default datum is said to be "empty". <br>
  Standard_EXPORT   TopLoc_Location();
  //! Constructs the local coordinate system object defined <br>
//! by the transformation T. T invokes in turn, a TopLoc_Datum3D object. <br>
  Standard_EXPORT   TopLoc_Location(const gp_Trsf& T);
  //! Constructs the local coordinate system object defined by the 3D datum D. <br>
//! Exceptions <br>
//! Standard_ConstructionError if the transformation <br>
//! T does not represent a 3D coordinate system. <br>
  Standard_EXPORT   TopLoc_Location(const Handle(TopLoc_Datum3D)& D);
  //! Returns true if this location is equal to the Identity transformation. <br>
        Standard_Boolean IsIdentity() const;
  //! Resets this location to the Identity transformation. <br>
        void Identity() ;
  //! Returns    the  first   elementary  datum  of  the <br>
//!          Location.  Use the NextLocation function recursively to access <br>
//! the other data comprising this location. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if this location is empty. <br>
       const Handle_TopLoc_Datum3D& FirstDatum() const;
  //! Returns   the  power  elevation  of    the   first <br>
//!          elementary datum. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if this location is empty. <br>
        Standard_Integer FirstPower() const;
  //! Returns  a Location representing  <me> without the <br>
//!          first datum. We have the relation : <br>
//! <br>
//!            <me> = NextLocation() * FirstDatum() ^ FirstPower() <br>
//!  Exceptions <br>
//!  Standard_NoSuchObject if this location is empty. <br>
       const TopLoc_Location& NextLocation() const;
  //! Returns  the transformation    associated  to  the <br>
//!          coordinate system. <br>
//! <br>
  Standard_EXPORT    const gp_Trsf& Transformation() const;
Standard_EXPORT operator gp_Trsf() const;
  //! Returns the inverse of <me>. <br>
//! <br>
//!          <me> * Inverted() is an Identity. <br>
  Standard_EXPORT     TopLoc_Location Inverted() const;
  //! Returns <me> * <Other>, the  elementary datums are <br>
//!          concatenated. <br>
//! <br>
  Standard_EXPORT     TopLoc_Location Multiplied(const TopLoc_Location& Other) const;
    TopLoc_Location operator*(const TopLoc_Location& Other) const
{
  return Multiplied(Other);
}
  //! Returns  <me> / <Other>. <br>
//! <br>
  Standard_EXPORT     TopLoc_Location Divided(const TopLoc_Location& Other) const;
    TopLoc_Location operator/(const TopLoc_Location& Other) const
{
  return Divided(Other);
}
  //! Returns <Other>.Inverted() * <me>. <br>
  Standard_EXPORT     TopLoc_Location Predivided(const TopLoc_Location& Other) const;
  //! Returns me at the power <pwr>.   If <pwr>  is zero <br>
//!          returns  Identity.  <pwr> can  be lower  than zero <br>
//!          (usual meaning for powers). <br>
  Standard_EXPORT     TopLoc_Location Powered(const Standard_Integer pwr) const;
  //! Returns a hashed value for this local coordinate system. <br>
//! This value is used, with map tables, to store and <br>
//! retrieve the object easily, and is in the range [ 1..Upper ]. <br>
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  //! Returns true if this location and the location Other <br>
//! have the same elementary data, i.e. contain the same <br>
//! series of TopLoc_Datum3D and respective powers. <br>
//! This method is an alias for operator ==. <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const TopLoc_Location& Other) const;
    Standard_Boolean operator ==(const TopLoc_Location& Other) const
{
  return IsEqual(Other);
}
  //! Returns true if this location and the location Other do <br>
//! not have the same elementary data, i.e. do not <br>
//! contain the same series of TopLoc_Datum3D and respective powers. <br>
//! This method is an alias for operator !=. <br>
  Standard_EXPORT     Standard_Boolean IsDifferent(const TopLoc_Location& Other) const;
    Standard_Boolean operator !=(const TopLoc_Location& Other) const
{
  return IsDifferent(Other);
}
  //! Prints the contents of <me> on the stream <s>. <br>
  Standard_EXPORT     void ShallowDump(Standard_OStream& S) const;





protected:





private:



TopLoc_SListOfItemLocation myItems;


};


#include <TopLoc_Location.lxx>



// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const TopLoc_Location& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}

inline void ShallowDump(const TopLoc_Location& me,Standard_OStream& S) {
 me.ShallowDump(S);
}



#endif

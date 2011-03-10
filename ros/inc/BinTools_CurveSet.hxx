// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinTools_CurveSet_HeaderFile
#define _BinTools_CurveSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
class Standard_OutOfRange;
class Geom_Curve;


//! Stores a set of Curves from Geom in binary format. <br>
class BinTools_CurveSet  {
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

  //! Returns an empty set of Curves. <br>
  Standard_EXPORT   BinTools_CurveSet();
  //! Clears the content of the set. <br>
  Standard_EXPORT     void Clear() ;
  //! Incorporate a new Curve in the  set and returns <br>
//!          its index. <br>
  Standard_EXPORT     Standard_Integer Add(const Handle(Geom_Curve)& C) ;
  //! Returns the Curve of index <I>. <br>
  Standard_EXPORT     Handle_Geom_Curve Curve(const Standard_Integer I) const;
  //! Returns the index of <L>. <br>
  Standard_EXPORT     Standard_Integer Index(const Handle(Geom_Curve)& C) const;
  //! Writes the content of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
  Standard_EXPORT     void Write(Standard_OStream& OS) const;
  //! Reads the content of me from the  stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
  Standard_EXPORT     void Read(Standard_IStream& IS) ;
  //! Dumps the curve on the stream in binary format <br>
//!          that can be read back. <br>
  Standard_EXPORT   static  void WriteCurve(const Handle(Geom_Curve)& C,Standard_OStream& OS) ;
  //! Reads the curve  from  the stream.  The  curve  is <br>
//!          assumed  to have  been  written  with  the Write <br>
//!          method <br>
//! <br>
  Standard_EXPORT   static  Standard_IStream& ReadCurve(Standard_IStream& IS,Handle(Geom_Curve)& C) ;





protected:





private:



TColStd_IndexedMapOfTransient myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_WidthMap_HeaderFile
#define _Aspect_WidthMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Aspect_WidthMap_HeaderFile
#include <Handle_Aspect_WidthMap.hxx>
#endif

#ifndef _Aspect_SequenceOfWidthMapEntry_HeaderFile
#include <Aspect_SequenceOfWidthMapEntry.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_WidthOfLine_HeaderFile
#include <Aspect_WidthOfLine.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class Aspect_BadAccess;
class Aspect_WidthMapEntry;


//! This class defines a WidthMap object. <br>
class Aspect_WidthMap : public MMgt_TShared {

public:

  //! Creates a width map. <br>
  Standard_EXPORT   Aspect_WidthMap();
  //! Adds an entry in the Width map <me>. <br>
//!  Warning: Raises BadAccess if WidthMap size is exceeded. <br>
  Standard_EXPORT     void AddEntry(const Aspect_WidthMapEntry& AnEntry) ;
  //! Search an identical line width entry in the width map <me> <br>
//! and returns the WidthMapEntry Index if exist. <br>
//! Or add a new entry and returns the computed WidthMapEntry index used. <br>
  Standard_EXPORT     Standard_Integer AddEntry(const Aspect_WidthOfLine aStyle) ;
  //! Search an identical line width entry in the width map <me> <br>
//! and returns the WidthMapEntry Index if exist. <br>
//! Or add a new entry and returns the computed WidthMapEntry index used. <br>
  Standard_EXPORT     Standard_Integer AddEntry(const Quantity_Length aStyle) ;
  //! Returns the Allocated widthmap Size <br>
  Standard_EXPORT     Standard_Integer Size() const;
  //! Returns the WidthMapEntry.Index of the WidthMap <br>
//!          at rank <aWidthmapIndex> . <br>
  Standard_EXPORT     Standard_Integer Index(const Standard_Integer aWidthmapIndex) const;
  //! Returns the Width map entry with the index <AnIndex>. <br>
//!  Warning: Raises BadAccess if the index less than 1 or <br>
//!	    greater than Size. <br>
  Standard_EXPORT     Aspect_WidthMapEntry Entry(const Standard_Integer AnIndex) const;
  
  Standard_EXPORT     void Dump() const;




  DEFINE_STANDARD_RTTI(Aspect_WidthMap)

protected:


Aspect_SequenceOfWidthMapEntry mydata;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

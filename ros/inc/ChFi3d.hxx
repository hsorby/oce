// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFi3d_HeaderFile
#define _ChFi3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BRepAdaptor_Surface;
class TopoDS_Edge;
class ChFi3d_Builder;
class ChFi3d_ChBuilder;
class ChFi3d_FilBuilder;
class ChFi3d_SearchSing;


//! creation of spatial fillets on a solid. <br>
class ChFi3d  {
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

  
  Standard_EXPORT   static  Standard_Integer ConcaveSide(const BRepAdaptor_Surface& S1,const BRepAdaptor_Surface& S2,const TopoDS_Edge& E,TopAbs_Orientation& Or1,TopAbs_Orientation& Or2) ;
  
  Standard_EXPORT   static  Standard_Integer NextSide(TopAbs_Orientation& Or1,TopAbs_Orientation& Or2,const TopAbs_Orientation OrSave1,const TopAbs_Orientation OrSave2,const Standard_Integer ChoixSauv) ;
  //! Same  as  the  other NextSide, but the calculation is  done <br>
//!          on an edge  only. <br>
  Standard_EXPORT   static  void NextSide(TopAbs_Orientation& Or,const TopAbs_Orientation OrSave,const TopAbs_Orientation OrFace) ;
  
  Standard_EXPORT   static  Standard_Boolean SameSide(const TopAbs_Orientation Or,const TopAbs_Orientation OrSave1,const TopAbs_Orientation OrSave2,const TopAbs_Orientation OrFace1,const TopAbs_Orientation OrFace2) ;





protected:





private:




friend class ChFi3d_Builder;
friend class ChFi3d_ChBuilder;
friend class ChFi3d_FilBuilder;
friend class ChFi3d_SearchSing;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif

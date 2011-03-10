// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_PntOnFace_HeaderFile
#define _IntTools_PntOnFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
class TopoDS_Face;
class gp_Pnt;


//! Contains a Face, a 3d point, corresponded UV parameters and a flag <br>
class IntTools_PntOnFace  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_PntOnFace();
  
//! Initializes me by aFace, a 3d point <br>
//! and it's UV parameters on face <br>
  Standard_EXPORT     void Init(const TopoDS_Face& aF,const gp_Pnt& aP,const Standard_Real U,const Standard_Real V) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetFace(const TopoDS_Face& aF) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetPnt(const gp_Pnt& aP) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetParameters(const Standard_Real U,const Standard_Real V) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetValid(const Standard_Boolean bF) ;
  
//! Selector <br>
  Standard_EXPORT     Standard_Boolean Valid() const;
  
//! Selector <br>
  Standard_EXPORT    const TopoDS_Face& Face() const;
  
//! Selector <br>
  Standard_EXPORT    const gp_Pnt& Pnt() const;
  
//! Selector <br>
  Standard_EXPORT     void Parameters(Standard_Real& U,Standard_Real& V) const;
  
//! Selector <br>
  Standard_EXPORT     Standard_Boolean IsValid() const;





protected:





private:



Standard_Boolean myIsValid;
gp_Pnt myPnt;
Standard_Real myU;
Standard_Real myV;
TopoDS_Face myFace;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepProj_Projection_HeaderFile
#define _BRepProj_Projection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopoDS_Compound_HeaderFile
#include <TopoDS_Compound.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
class TopTools_HSequenceOfShape;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class Standard_NullObject;
class TopoDS_Shape;
class gp_Dir;
class gp_Pnt;


//! The  Projection   class provides  conical  and <br>
//!          cylindrical projections of  Edge  or  Wire  on <br>
//!          a Shape from TopoDS. The result will be a Edge <br>
//!          or  Wire  from  TopoDS. <br>
class BRepProj_Projection  {
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

  //! Makes a Cylindrical projection of Wire om Shape <br>
  Standard_EXPORT   BRepProj_Projection(const TopoDS_Shape& Wire,const TopoDS_Shape& Shape,const gp_Dir& D);
  //! Makes a Conical projection of Wire om Shape <br>
  Standard_EXPORT   BRepProj_Projection(const TopoDS_Shape& Wire,const TopoDS_Shape& Shape,const gp_Pnt& P);
  //! returns False if the section failed <br>
        Standard_Boolean IsDone() const;
  //! Resets the iterator by resulting wires. <br>
        void Init() ;
  //! Returns True if there is a current result wire <br>
        Standard_Boolean More() const;
  //! Move to the next result wire. <br>
        void Next() ;
  //! Returns the current result wire. <br>
        TopoDS_Wire Current() const;
  //! Returns the complete result as compound of wires. <br>
        TopoDS_Compound Shape() const;





protected:





private:

  //! Performs section of theShape by theTool <br>
//!         and stores result in the fields. <br>
  Standard_EXPORT     void BuildSection(const TopoDS_Shape& Shape,const TopoDS_Shape& Tool) ;


Standard_Boolean myIsDone;
TopoDS_Shape myLsh;
TopoDS_Compound myShape;
Handle_TopTools_HSequenceOfShape mySection;
Standard_Integer myItr;


};


#include <BRepProj_Projection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif

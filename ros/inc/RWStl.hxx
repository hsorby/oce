// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStl_HeaderFile
#define _RWStl_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StlMesh_Mesh_HeaderFile
#include <Handle_StlMesh_Mesh.hxx>
#endif
class StlMesh_Mesh;
class OSD_Path;


//! This package contains the methods to be used in <br>
//!          the Stereo Lithograpy Application. The main <br>
//!          features of this application are ,starting from a <br>
//!          Shape : <br>
//!          - mesh this shape with a maximun tolerance, <br>
//!          - display the meshing, <br>
//!          - write the meshing in a file (binary or ascii), <br>
//!          - read of file (binary or ascii) and display it, <br>
//!          - translate a binary file to an ascii file, <br>
//!          - translate an ascii file to an binary file. <br>
class RWStl  {
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

  //! write the meshing in a file following the <br>
//!         binary format of an STL file. <br>
//!         Returns false if the cannot be opened; <br>
  Standard_EXPORT   static  Standard_Boolean WriteBinary(const Handle(StlMesh_Mesh)& aMesh,const OSD_Path& aPath) ;
  //! write the meshing in a file following the <br>
//!         Ascii  format of an STL file. <br>
//!         Returns false if the cannot be opened; <br>
  Standard_EXPORT   static  Standard_Boolean WriteAscii(const Handle(StlMesh_Mesh)& aMesh,const OSD_Path& aPath) ;
  //! This method will chwck if the file is a binary <br>
//!         file or an AsciiFile testing  the 5 first <br>
//!         characters of the file wich are :"solid" in an <br>
//!         ascii file. If we do not find that word we assume <br>
//!         that it is a binary file. <br>
  Standard_EXPORT   static  Handle_StlMesh_Mesh ReadFile(const OSD_Path& aPath) ;
  //! Read a meshing from a binary file <br>
//!        Raises NoMoreObject from Standard if a statement <br>
//!        does not contain the right number of tokens <br>
//!        Raises TypeMisMatch if a token has not the good <br>
//!        type (often real) <br>
  Standard_EXPORT   static  Handle_StlMesh_Mesh ReadBinary(const OSD_Path& aPath) ;
  //! Read a meshing from a binary file <br>
//!        Raises NoMoreObject from Standard if a statement <br>
//!        does not contain the right number of tokens <br>
//!        Raises TypeMisMatch if a token has not the good <br>
//!        type (often real) <br>
//!        Raises MoMoreObject if a file is finished before <br>
//!        having found the word endsolid; <br>
  Standard_EXPORT   static  Handle_StlMesh_Mesh ReadAscii(const OSD_Path& aPath) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Planar_HeaderFile
#define _IGESDraw_Planar_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDraw_Planar_HeaderFile
#include <Handle_IGESDraw_Planar.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESGeom_TransformationMatrix_HeaderFile
#include <Handle_IGESGeom_TransformationMatrix.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class IGESGeom_TransformationMatrix;
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class IGESData_IGESEntity;


//! defines IGESPlanar, Type <402> Form <16> <br>
//!          in package IGESDraw <br>
class IGESDraw_Planar : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDraw_Planar();
  //! This method is used to set the fields of the class Planar <br>
//!       - nbMats                : Number of Transformation matrices <br>
//!       - aTransformationMatrix : Pointer to the Transformation matrix <br>
//!       - allEntities           : Pointers to the entities specified <br>
  Standard_EXPORT     void Init(const Standard_Integer nbMats,const Handle(IGESGeom_TransformationMatrix)& aTransformationMatrix,const Handle(IGESData_HArray1OfIGESEntity)& allEntities) ;
  //! returns the number of Transformation matrices in <me> <br>
  Standard_EXPORT     Standard_Integer NbMatrices() const;
  //! returns the number of Entities in the plane pointed to by this <br>
//! associativity <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! returns True if TransformationMatrix is Identity Matrix, <br>
//! i.e:- No Matrix defined. <br>
  Standard_EXPORT     Standard_Boolean IsIdentityMatrix() const;
  //! returns the Transformation matrix moving data from the XY plane <br>
//! into space or zero <br>
  Standard_EXPORT     Handle_IGESGeom_TransformationMatrix TransformMatrix() const;
  //! returns the Entity on the specified plane, indicated by EntityIndex <br>
//! raises an exception if EntityIndex <= 0 or <br>
//! EntityIndex > NbEntities() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Entity(const Standard_Integer EntityIndex) const;




  DEFINE_STANDARD_RTTI(IGESDraw_Planar)

protected:




private: 


Standard_Integer theNbMatrices;
Handle_IGESGeom_TransformationMatrix theTransformationMatrix;
Handle_IGESData_HArray1OfIGESEntity theEntities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

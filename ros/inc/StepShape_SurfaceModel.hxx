// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_SurfaceModel_HeaderFile
#define _StepShape_SurfaceModel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepShape_ShellBasedSurfaceModel_HeaderFile
#include <Handle_StepShape_ShellBasedSurfaceModel.hxx>
#endif
class Standard_Transient;
class StepShape_ShellBasedSurfaceModel;



class StepShape_SurfaceModel  : public StepData_SelectType {
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

  //! Returns a SurfaceModel SelectType <br>
  Standard_EXPORT   StepShape_SurfaceModel();
  //! Recognizes a SurfaceModel Kind Entity that is : <br>
//!        1 -> ShellBasedSurfaceModel <br>
//!        2 -> FaceBasedSurfaceModel <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a ShellBasedSurfaceModel (Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_ShellBasedSurfaceModel ShellBasedSurfaceModel() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif

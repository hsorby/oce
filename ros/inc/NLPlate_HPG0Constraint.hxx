// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG0Constraint_HeaderFile
#define _NLPlate_HPG0Constraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_NLPlate_HPG0Constraint_HeaderFile
#include <Handle_NLPlate_HPG0Constraint.hxx>
#endif

#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _NLPlate_HGPPConstraint_HeaderFile
#include <NLPlate_HGPPConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_XY;
class gp_XYZ;


//! define a PinPoint G0  Constraint  used to load a Non Linear <br>
//!          Plate <br>
class NLPlate_HPG0Constraint : public NLPlate_HGPPConstraint {

public:

  
  Standard_EXPORT   NLPlate_HPG0Constraint(const gp_XY& UV,const gp_XYZ& Value);
  
  Standard_EXPORT   virtual  void SetUVFreeSliding(const Standard_Boolean UVFree) ;
  
  Standard_EXPORT   virtual  void SetIncrementalLoadAllowed(const Standard_Boolean ILA) ;
  
  Standard_EXPORT   virtual  Standard_Boolean UVFreeSliding() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IncrementalLoadAllowed() const;
  
  Standard_EXPORT   virtual  Standard_Integer ActiveOrder() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsG0() const;
  
  Standard_EXPORT   virtual const gp_XYZ& G0Target() const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG0Constraint)

protected:




private: 


gp_XYZ myXYZTarget;
Standard_Boolean UVIsFree;
Standard_Boolean IncrementalLoadingAllowed;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

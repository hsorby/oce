// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepDimTol_DatumReference_HeaderFile
#define _StepDimTol_DatumReference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepDimTol_DatumReference_HeaderFile
#include <Handle_StepDimTol_DatumReference.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepDimTol_Datum_HeaderFile
#include <Handle_StepDimTol_Datum.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepDimTol_Datum;


//! Representation of STEP entity DatumReference <br>
class StepDimTol_DatumReference : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepDimTol_DatumReference();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Standard_Integer aPrecedence,const Handle(StepDimTol_Datum)& aReferencedDatum) ;
  //! Returns field Precedence <br>
  Standard_EXPORT     Standard_Integer Precedence() const;
  //! Set field Precedence <br>
  Standard_EXPORT     void SetPrecedence(const Standard_Integer Precedence) ;
  //! Returns field ReferencedDatum <br>
  Standard_EXPORT     Handle_StepDimTol_Datum ReferencedDatum() const;
  //! Set field ReferencedDatum <br>
  Standard_EXPORT     void SetReferencedDatum(const Handle(StepDimTol_Datum)& ReferencedDatum) ;




  DEFINE_STANDARD_RTTI(StepDimTol_DatumReference)

protected:




private: 


Standard_Integer thePrecedence;
Handle_StepDimTol_Datum theReferencedDatum;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

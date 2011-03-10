// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_DrilledHole_HeaderFile
#define _IGESAppli_DrilledHole_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_DrilledHole_HeaderFile
#include <Handle_IGESAppli_DrilledHole.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif


//! defines DrilledHole, Type <406> Form <6> <br>
//!          in package IGESAppli <br>
//!          Identifies an entity representing a drilled hole <br>
//!          through a printed circuit board. <br>
class IGESAppli_DrilledHole : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_DrilledHole();
  //! This method is used to set the fields of the class <br>
//!           DrilledHole <br>
//!       - nbPropVal    : Number of property values = 5 <br>
//!       - aSize        : Drill diameter size <br>
//!       - anotherSize  : Finish diameter size <br>
//!       - aPlating     : Plating indication flag <br>
//!                        False = not plating <br>
//!                        True  = is plating <br>
//!       - aLayer       : Lower numbered layer <br>
//!       - anotherLayer : Higher numbered layer <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Standard_Real aSize,const Standard_Real anotherSize,const Standard_Integer aPlating,const Standard_Integer aLayer,const Standard_Integer anotherLayer) ;
  //! is always 5 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the drill diameter size <br>
  Standard_EXPORT     Standard_Real DrillDiaSize() const;
  //! returns the finish diameter size <br>
  Standard_EXPORT     Standard_Real FinishDiaSize() const;
  //! Returns Plating Status : <br>
//!           False = not plating  /  True  = is plating <br>
  Standard_EXPORT     Standard_Boolean IsPlating() const;
  //! returns the lower numbered layer <br>
  Standard_EXPORT     Standard_Integer NbLowerLayer() const;
  //! returns the higher numbered layer <br>
  Standard_EXPORT     Standard_Integer NbHigherLayer() const;




  DEFINE_STANDARD_RTTI(IGESAppli_DrilledHole)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Real theDrillDiaSize;
Standard_Real theFinishDiaSize;
Standard_Integer thePlatingFlag;
Standard_Integer theNbLowerLayer;
Standard_Integer theNbHigherLayer;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdDrivers_DocumentRetrievalDriver_HeaderFile
#define _StdDrivers_DocumentRetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StdDrivers_DocumentRetrievalDriver_HeaderFile
#include <Handle_StdDrivers_DocumentRetrievalDriver.hxx>
#endif

#ifndef _MDocStd_DocumentRetrievalDriver_HeaderFile
#include <MDocStd_DocumentRetrievalDriver.hxx>
#endif
#ifndef _Handle_MDF_ARDriverTable_HeaderFile
#include <Handle_MDF_ARDriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class MDF_ARDriverTable;
class CDM_MessageDriver;


//! retrieval driver of a Part document <br>
class StdDrivers_DocumentRetrievalDriver : public MDocStd_DocumentRetrievalDriver {

public:

  
  Standard_EXPORT   StdDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT   virtual  Handle_MDF_ARDriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMessageDriver) ;




  DEFINE_STANDARD_RTTI(StdDrivers_DocumentRetrievalDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

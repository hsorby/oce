// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinDrivers_DocumentRetrievalDriver_HeaderFile
#define _BinDrivers_DocumentRetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BinDrivers_DocumentRetrievalDriver_HeaderFile
#include <Handle_BinDrivers_DocumentRetrievalDriver.hxx>
#endif

#ifndef _BinLDrivers_DocumentRetrievalDriver_HeaderFile
#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#endif
#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Storage_Position_HeaderFile
#include <Storage_Position.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinLDrivers_DocumentSection;



class BinDrivers_DocumentRetrievalDriver : public BinLDrivers_DocumentRetrievalDriver {

public:

  //! Constructor <br>
  Standard_EXPORT   BinDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT   virtual  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   virtual  void ReadShapeSection(BinLDrivers_DocumentSection& theSection,Standard_IStream& theIS,const Standard_Boolean isMess = Standard_False) ;
  
  Standard_EXPORT   virtual  void CheckShapeSection(const Storage_Position& thePos,Standard_IStream& theIS) ;
  
  Standard_EXPORT   virtual  void PropagateDocumentVersion(const Standard_Integer theVersion) ;




  DEFINE_STANDARD_RTTI(BinDrivers_DocumentRetrievalDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

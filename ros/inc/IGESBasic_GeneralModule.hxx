// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_GeneralModule_HeaderFile
#define _IGESBasic_GeneralModule_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESBasic_GeneralModule_HeaderFile
#include <Handle_IGESBasic_GeneralModule.hxx>
#endif

#ifndef _IGESData_GeneralModule_HeaderFile
#include <IGESData_GeneralModule.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class IGESData_IGESEntity;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Standard_Transient;
class Interface_CopyTool;


//! Definition of General Services for IGESBasic (specific part) <br>
//!           This Services comprise : Shared & Implied Lists, Copy, Check <br>
class IGESBasic_GeneralModule : public IGESData_GeneralModule {

public:

  //! Creates a GeneralModule from IGESBasic and puts it into GeneralLib <br>
  Standard_EXPORT   IGESBasic_GeneralModule();
  //! Lists the Entities shared by a given IGESEntity <ent>, from <br>
//!           its specific parameters : specific for each type <br>
  Standard_EXPORT     void OwnSharedCase(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent,Interface_EntityIterator& iter) const;
  //! Returns a DirChecker, specific for each type of Entity <br>
//!           (identified by its Case Number) : this DirChecker defines <br>
//!           constraints which must be respected by the DirectoryPart <br>
  Standard_EXPORT     IGESData_DirChecker DirChecker(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent) const;
  //! Performs Specific Semantic Check for each type of Entity <br>
  Standard_EXPORT     void OwnCheckCase(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;
  //! Specific creation of a new void entity <br>
  Standard_EXPORT     Standard_Boolean NewVoid(const Standard_Integer CN,Handle(Standard_Transient)& entto) const;
  //! Copies parameters which are specific of each Type of Entity <br>
  Standard_EXPORT     void OwnCopyCase(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& entfrom,const Handle(IGESData_IGESEntity)& entto,Interface_CopyTool& TC) const;
  //! Returns a category number which characterizes an entity <br>
//!           Structure for Groups, Figures & Co <br>
//!           Description for External Refs <br>
//!           Auxiliary for other <br>
  Standard_EXPORT   virtual  Standard_Integer CategoryNumber(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Interface_ShareTool& shares) const;




  DEFINE_STANDARD_RTTI(IGESBasic_GeneralModule)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

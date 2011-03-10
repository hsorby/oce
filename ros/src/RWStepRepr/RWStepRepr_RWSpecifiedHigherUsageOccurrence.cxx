// File:	RWStepRepr_RWSpecifiedHigherUsageOccurrence.cxx
// Created:	Mon Jul  3 20:13:37 2000 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1
// Copyright:	Matra Datavision 2000

#include <RWStepRepr_RWSpecifiedHigherUsageOccurrence.ixx>

//=======================================================================
//function : RWStepRepr_RWSpecifiedHigherUsageOccurrence
//purpose  : 
//=======================================================================

RWStepRepr_RWSpecifiedHigherUsageOccurrence::RWStepRepr_RWSpecifiedHigherUsageOccurrence ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWSpecifiedHigherUsageOccurrence::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                            const Standard_Integer num,
                                                            Handle(Interface_Check)& ach,
                                                            const Handle(StepRepr_SpecifiedHigherUsageOccurrence) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,8,ach,"specified_higher_usage_occurrence") ) return;

  // Inherited fields of ProductDefinitionRelationship

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Id;
  data->ReadString (num, 1, "product_definition_relationship.id", ach, aProductDefinitionRelationship_Id);

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Name;
  data->ReadString (num, 2, "product_definition_relationship.name", ach, aProductDefinitionRelationship_Name);

  Handle(TCollection_HAsciiString) aProductDefinitionRelationship_Description;
  Standard_Boolean hasProductDefinitionRelationship_Description = Standard_True;
  if ( data->IsParamDefined (num,3) ) {
    data->ReadString (num, 3, "product_definition_relationship.description", ach, aProductDefinitionRelationship_Description);
  }
  else {
    hasProductDefinitionRelationship_Description = Standard_False;
  }

  Handle(StepBasic_ProductDefinition) aProductDefinitionRelationship_RelatingProductDefinition;
  data->ReadEntity (num, 4, "product_definition_relationship.relating_product_definition", ach, STANDARD_TYPE(StepBasic_ProductDefinition), aProductDefinitionRelationship_RelatingProductDefinition);

  Handle(StepBasic_ProductDefinition) aProductDefinitionRelationship_RelatedProductDefinition;
  data->ReadEntity (num, 5, "product_definition_relationship.related_product_definition", ach, STANDARD_TYPE(StepBasic_ProductDefinition), aProductDefinitionRelationship_RelatedProductDefinition);

  // Inherited fields of AssemblyComponentUsage

  Handle(TCollection_HAsciiString) aAssemblyComponentUsage_ReferenceDesignator;
  Standard_Boolean hasAssemblyComponentUsage_ReferenceDesignator = Standard_True;
  if ( data->IsParamDefined (num,6) ) {
    data->ReadString (num, 6, "assembly_component_usage.reference_designator", ach, aAssemblyComponentUsage_ReferenceDesignator);
  }
  else {
    hasAssemblyComponentUsage_ReferenceDesignator = Standard_False;
  }

  // Own fields of SpecifiedHigherUsageOccurrence

  Handle(StepRepr_AssemblyComponentUsage) aUpperUsage;
  data->ReadEntity (num, 7, "upper_usage", ach, STANDARD_TYPE(StepRepr_AssemblyComponentUsage), aUpperUsage);

  Handle(StepRepr_NextAssemblyUsageOccurrence) aNextUsage;
  data->ReadEntity (num, 8, "next_usage", ach, STANDARD_TYPE(StepRepr_NextAssemblyUsageOccurrence), aNextUsage);

  // Initialize entity
  ent->Init(aProductDefinitionRelationship_Id,
            aProductDefinitionRelationship_Name,
            hasProductDefinitionRelationship_Description,
            aProductDefinitionRelationship_Description,
            aProductDefinitionRelationship_RelatingProductDefinition,
            aProductDefinitionRelationship_RelatedProductDefinition,
            hasAssemblyComponentUsage_ReferenceDesignator,
            aAssemblyComponentUsage_ReferenceDesignator,
            aUpperUsage,
            aNextUsage);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWSpecifiedHigherUsageOccurrence::WriteStep (StepData_StepWriter& SW,
                                                             const Handle(StepRepr_SpecifiedHigherUsageOccurrence) &ent) const
{

  // Inherited fields of ProductDefinitionRelationship

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::Id());

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::Name());

  if ( ent->StepBasic_ProductDefinitionRelationship::HasDescription() ) {
    SW.Send (ent->StepBasic_ProductDefinitionRelationship::Description());
  }
  else SW.SendUndef();

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::RelatingProductDefinition());

  SW.Send (ent->StepBasic_ProductDefinitionRelationship::RelatedProductDefinition());

  // Inherited fields of AssemblyComponentUsage

  if ( ent->StepRepr_AssemblyComponentUsage::HasReferenceDesignator() ) {
    SW.Send (ent->StepRepr_AssemblyComponentUsage::ReferenceDesignator());
  }
  else SW.SendUndef();

  // Own fields of SpecifiedHigherUsageOccurrence

  SW.Send (ent->UpperUsage());

  SW.Send (ent->NextUsage());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepRepr_RWSpecifiedHigherUsageOccurrence::Share (const Handle(StepRepr_SpecifiedHigherUsageOccurrence) &ent,
                                                         Interface_EntityIterator& iter) const
{

  // Inherited fields of ProductDefinitionRelationship

  iter.AddItem (ent->StepBasic_ProductDefinitionRelationship::RelatingProductDefinition());

  iter.AddItem (ent->StepBasic_ProductDefinitionRelationship::RelatedProductDefinition());

  // Inherited fields of AssemblyComponentUsage

  // Own fields of SpecifiedHigherUsageOccurrence

  iter.AddItem (ent->UpperUsage());

  iter.AddItem (ent->NextUsage());
}

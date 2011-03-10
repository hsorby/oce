
#include <RWStepShape_RWExtrudedAreaSolid.ixx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepShape_ExtrudedAreaSolid.hxx>


RWStepShape_RWExtrudedAreaSolid::RWStepShape_RWExtrudedAreaSolid () {}

void RWStepShape_RWExtrudedAreaSolid::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepShape_ExtrudedAreaSolid)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,4,ach,"extruded_area_solid")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : sweptArea ---

	Handle(StepGeom_CurveBoundedSurface) aSweptArea;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"swept_area", ach, STANDARD_TYPE(StepGeom_CurveBoundedSurface), aSweptArea);

	// --- own field : extrudedDirection ---

	Handle(StepGeom_Direction) aExtrudedDirection;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"extruded_direction", ach, STANDARD_TYPE(StepGeom_Direction), aExtrudedDirection);

	// --- own field : depth ---

	Standard_Real aDepth;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat4 =` not needed
	data->ReadReal (num,4,"depth",ach,aDepth);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aSweptArea, aExtrudedDirection, aDepth);
}


void RWStepShape_RWExtrudedAreaSolid::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepShape_ExtrudedAreaSolid)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field sweptArea ---

	SW.Send(ent->SweptArea());

	// --- own field : extrudedDirection ---

	SW.Send(ent->ExtrudedDirection());

	// --- own field : depth ---

	SW.Send(ent->Depth());
}


void RWStepShape_RWExtrudedAreaSolid::Share(const Handle(StepShape_ExtrudedAreaSolid)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->SweptArea());


	iter.GetOneItem(ent->ExtrudedDirection());
}


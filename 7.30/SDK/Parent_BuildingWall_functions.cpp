#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Parent_BuildingWall.Parent_BuildingWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AParent_BuildingWall_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Parent_BuildingWall_C", "UserConstructionScript");

	Params::AParent_BuildingWall_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_DetailLevelMesh.BP_DetailLevelMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DetailLevelMesh_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_DetailLevelMesh_C", "UserConstructionScript");

	Params::ABP_DetailLevelMesh_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

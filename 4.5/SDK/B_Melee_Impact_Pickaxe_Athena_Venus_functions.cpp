#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Melee_Impact_Pickaxe_Athena_Venus.B_Melee_Impact_Pickaxe_Athena_Venus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Melee_Impact_Pickaxe_Athena_Venus_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Melee_Impact_Pickaxe_Athena_Venus_C", "UserConstructionScript");

	Params::AB_Melee_Impact_Pickaxe_Athena_Venus_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

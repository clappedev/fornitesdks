#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Glider_Rocker_Punk.B_Glider_Rocker_Punk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_Rocker_Punk_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Glider_Rocker_Punk_C", "UserConstructionScript");

	Params::AB_Glider_Rocker_Punk_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

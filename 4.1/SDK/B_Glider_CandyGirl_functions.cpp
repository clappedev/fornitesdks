#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Glider_CandyGirl.B_Glider_CandyGirl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Glider_CandyGirl_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Glider_CandyGirl_C", "UserConstructionScript");

	Params::AB_Glider_CandyGirl_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

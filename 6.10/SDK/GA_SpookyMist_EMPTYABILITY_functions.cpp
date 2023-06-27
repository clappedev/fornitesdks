#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SpookyMist_EMPTYABILITY_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_SpookyMist_EMPTYABILITY_C", "K2_ActivateAbility");

	Params::UGA_SpookyMist_EMPTYABILITY_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpookyMist_EMPTYABILITY_C::ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_SpookyMist_EMPTYABILITY_C", "ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY");

	Params::UGA_SpookyMist_EMPTYABILITY_C_ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

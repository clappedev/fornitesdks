#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorMatchStatus_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "Construct");

	Params::UAthenaSpectatorMatchStatus_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorMatchStatus_C::ExecuteUbergraph_AthenaSpectatorMatchStatus(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaSpectatorMatchStatus_C", "ExecuteUbergraph_AthenaSpectatorMatchStatus");

	Params::UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

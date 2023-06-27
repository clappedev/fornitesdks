#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinnerOverlay_v2_C::PlayVictoryAnim()
{
	static auto Func = Class->GetFunction("WinnerOverlay_v2_C", "PlayVictoryAnim");

	Params::UWinnerOverlay_v2_C_PlayVictoryAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinnerOverlay_v2_C::ExecuteUbergraph_WinnerOverlay_v2(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("WinnerOverlay_v2_C", "ExecuteUbergraph_WinnerOverlay_v2");

	Params::UWinnerOverlay_v2_C_ExecuteUbergraph_WinnerOverlay_v2_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

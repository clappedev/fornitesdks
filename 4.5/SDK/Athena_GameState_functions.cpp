#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Athena_GameState.Athena_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_GameState_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "UserConstructionScript");

	Params::AAthena_GameState_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Athena_GameState.Athena_GameState_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__FinishedFunc");

	Params::AAthena_GameState_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Athena_GameState.Athena_GameState_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAthena_GameState_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "Timeline_0__UpdateFunc");

	Params::AAthena_GameState_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintEvent)
// Parameters:

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "OnWinnerAnnounced");

	Params::AAthena_GameState_C_OnWinnerAnnounced_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Athena_GameState_C", "ExecuteUbergraph_Athena_GameState");

	Params::AAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

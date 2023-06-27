// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Athena_GameState.Athena_GameState_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AAthena_GameState_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.Timeline_0__FinishedFunc");

	AAthena_GameState_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AAthena_GameState_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.Timeline_0__UpdateFunc");

	AAthena_GameState_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced");

	AAthena_GameState_C_OnWinnerAnnounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState");

	AAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

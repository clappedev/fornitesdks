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

// Function W_AvailableSparks.W_AvailableSparks_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)

void UW_AvailableSparks_C::PlayIncreaseVote()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayIncreaseVote");

	UW_AvailableSparks_C_PlayIncreaseVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayDecreaseVote
// (Event, Protected, BlueprintEvent)

void UW_AvailableSparks_C::PlayDecreaseVote()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayDecreaseVote");

	UW_AvailableSparks_C_PlayDecreaseVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          StartValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_AvailableSparks_C::PlayCountdown(float StartValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayCountdown");

	UW_AvailableSparks_C_PlayCountdown_Params params;
	params.StartValue = StartValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayEventOver
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          StartValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_AvailableSparks_C::PlayEventOver(float StartValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayEventOver");

	UW_AvailableSparks_C_PlayEventOver_Params params;
	params.StartValue = StartValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayAvailableVotes
// (Event, Protected, BlueprintEvent)

void UW_AvailableSparks_C::PlayAvailableVotes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayAvailableVotes");

	UW_AvailableSparks_C_PlayAvailableVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayIdle
// (Event, Protected, BlueprintEvent)

void UW_AvailableSparks_C::PlayIdle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.PlayIdle");

	UW_AvailableSparks_C_PlayIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AvailableSparks.W_AvailableSparks_C.ExecuteUbergraph_W_AvailableSparks
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_AvailableSparks_C::ExecuteUbergraph_W_AvailableSparks(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function W_AvailableSparks.W_AvailableSparks_C.ExecuteUbergraph_W_AvailableSparks");

	UW_AvailableSparks_C_ExecuteUbergraph_W_AvailableSparks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

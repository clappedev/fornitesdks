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

// Function FlameCounter.FlameCounter_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayIncreaseVote()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FlameCounter.FlameCounter_C.PlayIncreaseVote");

	UFlameCounter_C_PlayIncreaseVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlameCounter.FlameCounter_C.PlayIdle
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayIdle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FlameCounter.FlameCounter_C.PlayIdle");

	UFlameCounter_C_PlayIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlameCounter.FlameCounter_C.PlayFadeOut
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayFadeOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FlameCounter.FlameCounter_C.PlayFadeOut");

	UFlameCounter_C_PlayFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlameCounter.FlameCounter_C.PlayFadeIn
// (Event, Protected, BlueprintEvent)

void UFlameCounter_C::PlayFadeIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FlameCounter.FlameCounter_C.PlayFadeIn");

	UFlameCounter_C_PlayFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlameCounter_C::ExecuteUbergraph_FlameCounter(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter");

	UFlameCounter_C_ExecuteUbergraph_FlameCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

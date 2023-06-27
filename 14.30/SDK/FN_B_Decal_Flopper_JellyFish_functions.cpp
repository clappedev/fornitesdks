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

// Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Decal_Flopper_JellyFish_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.UserConstructionScript");

	AB_Decal_Flopper_JellyFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__FinishedFunc
// (BlueprintEvent)

void AB_Decal_Flopper_JellyFish_C::FadeIn__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__FinishedFunc");

	AB_Decal_Flopper_JellyFish_C_FadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__UpdateFunc
// (BlueprintEvent)

void AB_Decal_Flopper_JellyFish_C::FadeIn__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__UpdateFunc");

	AB_Decal_Flopper_JellyFish_C_FadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Decal_Flopper_JellyFish_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ReceiveBeginPlay");

	AB_Decal_Flopper_JellyFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ExecuteUbergraph_B_Decal_Flopper_JellyFish
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Decal_Flopper_JellyFish_C::ExecuteUbergraph_B_Decal_Flopper_JellyFish(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ExecuteUbergraph_B_Decal_Flopper_JellyFish");

	AB_Decal_Flopper_JellyFish_C_ExecuteUbergraph_B_Decal_Flopper_JellyFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

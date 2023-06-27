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

// Function B_HeavyRainPost.B_HeavyRainPost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_HeavyRainPost_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.UserConstructionScript");

	AB_HeavyRainPost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_HeavyRainPost_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__FinishedFunc");

	AB_HeavyRainPost_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_HeavyRainPost_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__UpdateFunc");

	AB_HeavyRainPost_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.CE_Deactivate
// (BlueprintCallable, BlueprintEvent)

void AB_HeavyRainPost_C::CE_Deactivate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.CE_Deactivate");

	AB_HeavyRainPost_C_CE_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeavyRainPost_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.ReceiveBeginPlay");

	AB_HeavyRainPost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.ExecuteUbergraph_B_HeavyRainPost
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeavyRainPost_C::ExecuteUbergraph_B_HeavyRainPost(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeavyRainPost.B_HeavyRainPost_C.ExecuteUbergraph_B_HeavyRainPost");

	AB_HeavyRainPost_C_ExecuteUbergraph_B_HeavyRainPost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

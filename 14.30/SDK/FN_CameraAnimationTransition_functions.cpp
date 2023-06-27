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

// Function CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACameraAnimationTransition_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript");

	ACameraAnimationTransition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACameraAnimationTransition_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc");

	ACameraAnimationTransition_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACameraAnimationTransition_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc");

	ACameraAnimationTransition_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp
// (BlueprintCallable, BlueprintEvent)

void ACameraAnimationTransition_C::MoveCameraUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp");

	ACameraAnimationTransition_C_MoveCameraUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown
// (BlueprintCallable, BlueprintEvent)

void ACameraAnimationTransition_C::MoveCameraDown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown");

	ACameraAnimationTransition_C_MoveCameraDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACameraAnimationTransition_C::ExecuteUbergraph_CameraAnimationTransition(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition");

	ACameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

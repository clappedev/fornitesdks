// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

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
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript");

	ACameraAnimationTransition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline
// (BlueprintEvent)

void ACameraAnimationTransition_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.Timeline");

	ACameraAnimationTransition_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp
// (BlueprintCallable, BlueprintEvent)

void ACameraAnimationTransition_C::MoveCameraUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp");

	ACameraAnimationTransition_C_MoveCameraUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown
// (BlueprintCallable, BlueprintEvent)

void ACameraAnimationTransition_C::MoveCameraDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown");

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
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition");

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

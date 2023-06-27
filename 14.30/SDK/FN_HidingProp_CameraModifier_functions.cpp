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

// Function HidingProp_CameraModifier.HidingProp_CameraModifier_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ViewLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ViewRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewViewLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewViewRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHidingProp_CameraModifier_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HidingProp_CameraModifier.HidingProp_CameraModifier_C.BlueprintModifyCamera");

	UHidingProp_CameraModifier_C_BlueprintModifyCamera_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewLocation = ViewLocation;
	params.ViewRotation = ViewRotation;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewLocation != nullptr)
		*NewViewLocation = params.NewViewLocation;
	if (NewViewRotation != nullptr)
		*NewViewRotation = params.NewViewRotation;
	if (NewFOV != nullptr)
		*NewFOV = params.NewFOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

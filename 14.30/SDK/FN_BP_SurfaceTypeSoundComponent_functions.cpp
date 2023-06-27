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

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_SurfaceTypeSoundComponent_C::ActuallyPlaySound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound");

	UBP_SurfaceTypeSoundComponent_C_ActuallyPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SurfaceTypeSoundComponent_C::SetSurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType, class AActor* Actor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType");

	UBP_SurfaceTypeSoundComponent_C_SetSurfaceType_Params params;
	params.SurfaceType = SurfaceType;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SurfaceTypeSoundComponent_C::PlaySound(const struct FVector& Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound");

	UBP_SurfaceTypeSoundComponent_C_PlaySound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay
// (BlueprintCallable, BlueprintEvent)

void UBP_SurfaceTypeSoundComponent_C::Test_Delay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay");

	UBP_SurfaceTypeSoundComponent_C_Test_Delay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SurfaceTypeSoundComponent_C::ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent");

	UBP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

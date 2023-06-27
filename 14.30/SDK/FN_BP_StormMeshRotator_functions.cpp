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

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StormMeshRotator_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript");

	ABP_StormMeshRotator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StormMeshRotator_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay");

	ABP_StormMeshRotator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StormMeshRotator_C::OnStormEffectsEnabled(bool bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled");

	ABP_StormMeshRotator_C_OnStormEffectsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ToggleStormMeshesVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StormMeshRotator_C::ToggleStormMeshesVisibility(bool bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_StormMeshRotator.BP_StormMeshRotator_C.ToggleStormMeshesVisibility");

	ABP_StormMeshRotator_C_ToggleStormMeshesVisibility_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StormMeshRotator_C::ExecuteUbergraph_BP_StormMeshRotator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator");

	ABP_StormMeshRotator_C_ExecuteUbergraph_BP_StormMeshRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_CreativeRadio.BP_CreativeRadio_C.CheckMinigameStateOnPropertyChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::CheckMinigameStateOnPropertyChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.CheckMinigameStateOnPropertyChanged");

	ABP_CreativeRadio_C_CheckMinigameStateOnPropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.PlaybackTypeUpgradePath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::PlaybackTypeUpgradePath()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.PlaybackTypeUpgradePath");

	ABP_CreativeRadio_C_PlaybackTypeUpgradePath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.UpdateCachedAttenuationSettings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::UpdateCachedAttenuationSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.UpdateCachedAttenuationSettings");

	ABP_CreativeRadio_C_UpdateCachedAttenuationSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.SetAttenuationDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::SetAttenuationDistance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.SetAttenuationDistance");

	ABP_CreativeRadio_C_SetAttenuationDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CreativeRadio_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintCanInteract");

	ABP_CreativeRadio_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_CreativeRadio_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintGetInteractionString");

	ABP_CreativeRadio_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedShouldDriveVisualization
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::OnRep_CachedShouldDriveVisualization()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedShouldDriveVisualization");

	ABP_CreativeRadio_C_OnRep_CachedShouldDriveVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedAttenuationSetting
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::OnRep_CachedAttenuationSetting()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedAttenuationSetting");

	ABP_CreativeRadio_C_OnRep_CachedAttenuationSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedVolumeMultiplier
// (BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::OnRep_CachedVolumeMultiplier()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedVolumeMultiplier");

	ABP_CreativeRadio_C_OnRep_CachedVolumeMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.OnPropertyChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CreativeRadio_C::OnPropertyChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.OnPropertyChanged");

	ABP_CreativeRadio_C_OnPropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CreativeRadio_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.ReceiveBeginPlay");

	ABP_CreativeRadio_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_CreativeRadio_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature");

	ABP_CreativeRadio_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_CreativeRadio_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	ABP_CreativeRadio_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ABP_CreativeRadio_C::OnWorldReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.OnWorldReady");

	ABP_CreativeRadio_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CreativeRadio.BP_CreativeRadio_C.ExecuteUbergraph_BP_CreativeRadio
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CreativeRadio_C::ExecuteUbergraph_BP_CreativeRadio(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_CreativeRadio.BP_CreativeRadio_C.ExecuteUbergraph_BP_CreativeRadio");

	ABP_CreativeRadio_C_ExecuteUbergraph_BP_CreativeRadio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

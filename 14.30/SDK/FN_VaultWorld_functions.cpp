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

// Function VaultWorld.VaultWorld_C.GetVaultRotator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVaultRotator_C*         VaultRotator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVaultWorld_C::GetVaultRotator(class AVaultRotator_C** VaultRotator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.GetVaultRotator");

	AVaultWorld_C_GetVaultRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VaultRotator != nullptr)
		*VaultRotator = params.VaultRotator;
}


// Function VaultWorld.VaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UTexture2D*              LoadedBackgroundTexture        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTrackDynamicBackground BackgroundInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVaultWorld_C::OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, const struct FTrackDynamicBackground& BackgroundInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.OnSetupBackground");

	AVaultWorld_C_OnSetupBackground_Params params;
	params.LoadedBackgroundTexture = LoadedBackgroundTexture;
	params.BackgroundInfo = BackgroundInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWorld.VaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPlayForward                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultWorld_C::OnTransitionBackground(bool bPlayForward)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.OnTransitionBackground");

	AVaultWorld_C_OnTransitionBackground_Params params;
	params.bPlayForward = bPlayForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWorld.VaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultWorld_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.ReceiveBeginPlay");

	AVaultWorld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWorld.VaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShowFloor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowEffects                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.OnUpdateDisplay");

	AVaultWorld_C_OnUpdateDisplay_Params params;
	params.bShowFloor = bShowFloor;
	params.bShowEffects = bShowEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultWorld_C::ExecuteUbergraph_VaultWorld(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld");

	AVaultWorld_C_ExecuteUbergraph_VaultWorld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

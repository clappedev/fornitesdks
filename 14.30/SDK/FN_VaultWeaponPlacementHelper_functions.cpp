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

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::GetFrontendAnimInstance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance");

	AVaultWeaponPlacementHelper_C_GetFrontendAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultWeaponPlacementHelper_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged");

	AVaultWeaponPlacementHelper_C_OnFrontEndCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::Initialize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize");

	AVaultWeaponPlacementHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::InitializeContextEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents");

	AVaultWeaponPlacementHelper_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay");

	AVaultWeaponPlacementHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
// (BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ItemRez()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez");

	AVaultWeaponPlacementHelper_C_ItemRez_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultWeaponPlacementHelper_C::ExecuteUbergraph_VaultWeaponPlacementHelper(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper");

	AVaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature");

	AVaultWeaponPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

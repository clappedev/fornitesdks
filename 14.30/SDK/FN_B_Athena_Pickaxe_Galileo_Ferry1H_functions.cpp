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

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.UserConstructionScript");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveBeginPlay");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ImpactPhysicalSurface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFXSystemComponent*      SpawnedPSC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnPlayImpactFX");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetForLocalControllerOnly     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnWeaponVisibilityChanged");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;
	params.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnInitWeaponCosmetics
// (Event, Protected, BlueprintEvent)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::OnInitWeaponCosmetics()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnInitWeaponCosmetics");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnInitWeaponCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.FrontEndIdle
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::FrontEndIdle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.FrontEndIdle");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_FrontEndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveEndPlay");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Galileo_Ferry1H_C::ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H");

	AB_Athena_Pickaxe_Galileo_Ferry1H_C_ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

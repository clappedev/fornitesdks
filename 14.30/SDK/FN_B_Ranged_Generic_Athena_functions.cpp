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

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.GetScopeParameters
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    ScopeComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               DepthOfFieldVignetteRange      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          WeaponSightsCameraOffset       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, float* WeaponSightsCameraOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.GetScopeParameters");

	AB_Ranged_Generic_Athena_C_GetScopeParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScopeComponent != nullptr)
		*ScopeComponent = params.ScopeComponent;
	if (DepthOfFieldVignetteRange != nullptr)
		*DepthOfFieldVignetteRange = params.DepthOfFieldVignetteRange;
	if (WeaponSightsCameraOffset != nullptr)
		*WeaponSightsCameraOffset = params.WeaponSightsCameraOffset;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HandlePawnAndWeaponVisFor1PTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HandlePawnAndWeaponVisFor1PTargeting");

	AB_Ranged_Generic_Athena_C_HandlePawnAndWeaponVisFor1PTargeting_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ShowReticle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowReticle");

	AB_Ranged_Generic_Athena_C_ShowReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::HideReticle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideReticle");

	AB_Ranged_Generic_Athena_C_HideReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideIronSightsMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::HideIronSightsMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideIronSightsMesh");

	AB_Ranged_Generic_Athena_C_HideIronSightsMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateOrDeactivateWindParticle");

	AB_Ranged_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateMuzzleFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::DeactivateMuzzleFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateMuzzleFX");

	AB_Ranged_Generic_Athena_C_DeactivateMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::DeactivateReloadSmokeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateReloadSmokeFX");

	AB_Ranged_Generic_Athena_C_DeactivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ActivateReloadSmokeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateReloadSmokeFX");

	AB_Ranged_Generic_Athena_C_ActivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::ActivateShellsFX(bool Bool)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateShellsFX");

	AB_Ranged_Generic_Athena_C_ActivateShellsFX_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::DeactivateShellsFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateShellsFX");

	AB_Ranged_Generic_Athena_C_DeactivateShellsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetupShellFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::SetupShellFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetupShellFX");

	AB_Ranged_Generic_Athena_C_SetupShellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UpdateShellEmittersFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::UpdateShellEmittersFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UpdateShellEmittersFX");

	AB_Ranged_Generic_Athena_C_UpdateShellEmittersFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Play Reload FX");

	AB_Ranged_Generic_Athena_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Flash FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Flash FX");

	AB_Ranged_Generic_Athena_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::SetWpnRarity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWpnRarity");

	AB_Ranged_Generic_Athena_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AddRandomScale
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::AddRandomScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AddRandomScale");

	AB_Ranged_Generic_Athena_C_AddRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UserConstructionScript");

	AB_Ranged_Generic_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)

void AB_Ranged_Generic_Athena_C::AnimateScopePostProcess__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc");

	AB_Ranged_Generic_Athena_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)

void AB_Ranged_Generic_Athena_C::AnimateScopePostProcess__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc");

	AB_Ranged_Generic_Athena_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_43F549264BB135D3D385D4BB5846412A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnLoaded_43F549264BB135D3D385D4BB5846412A(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_43F549264BB135D3D385D4BB5846412A");

	AB_Ranged_Generic_Athena_C_OnLoaded_43F549264BB135D3D385D4BB5846412A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnLoaded_109F12F046377B483CA7FF92A795CBD2(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2");

	AB_Ranged_Generic_Athena_C_OnLoaded_109F12F046377B483CA7FF92A795CBD2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_65280D504DA982E453E39BA22D9D1643
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnLoaded_65280D504DA982E453E39BA22D9D1643(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_65280D504DA982E453E39BA22D9D1643");

	AB_Ranged_Generic_Athena_C_OnLoaded_65280D504DA982E453E39BA22D9D1643_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_351A9D71483BD9CF417705946595CB08
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnLoaded_351A9D71483BD9CF417705946595CB08(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_351A9D71483BD9CF417705946595CB08");

	AB_Ranged_Generic_Athena_C_OnLoaded_351A9D71483BD9CF417705946595CB08_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayWeaponFireFX");

	AB_Ranged_Generic_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::OnStopWeaponFireFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnStopWeaponFireFX");

	AB_Ranged_Generic_Athena_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> ReloadStage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayReloadFX");

	AB_Ranged_Generic_Athena_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnSetTargeting");

	AB_Ranged_Generic_Athena_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.K2_OnUnEquip");

	AB_Ranged_Generic_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::InitializeScopeVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.InitializeScopeVariables");

	AB_Ranged_Generic_Athena_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StencilBufferValue             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Update Enemy Custom Depths");

	AB_Ranged_Generic_Athena_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponAttached");

	AB_Ranged_Generic_Athena_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition* NewAlteration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitAlteration");

	AB_Ranged_Generic_Athena_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Ranged_Generic_Athena_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitCosmeticAlterations");

	AB_Ranged_Generic_Athena_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ShellsON__onPump_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShellsON_(onPump)");

	AB_Ranged_Generic_Athena_C_ShellsON__onPump__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::OnEquippedWeaponDestory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnEquippedWeaponDestory");

	AB_Ranged_Generic_Athena_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::SetWeaponPierceThrough(bool Enable, int TargetLimit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough");

	AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough_ClientRep");

	AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ReceiveBeginPlay");

	AB_Ranged_Generic_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetForLocalControllerOnly     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponVisibilityChanged");

	AB_Ranged_Generic_Athena_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;
	params.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::HideWeaponMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeaponMesh");

	AB_Ranged_Generic_Athena_C_HideWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ShowWeaponMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeaponMesh");

	AB_Ranged_Generic_Athena_C_ShowWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideGunMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::HideGunMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideGunMesh");

	AB_Ranged_Generic_Athena_C_HideGunMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowGunMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ShowGunMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowGunMesh");

	AB_Ranged_Generic_Athena_C_ShowGunMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::HideWeapon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeapon");

	AB_Ranged_Generic_Athena_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_Athena_C::ShowWeapon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeapon");

	AB_Ranged_Generic_Athena_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Generic_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_Athena_C::ExecuteUbergraph_B_Ranged_Generic_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Generic_Athena");

	AB_Ranged_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Generic_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    ScopeComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               DepthOfFieldVignetteRange      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          WeaponSightsCameraOffset       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, float* WeaponSightsCameraOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters");

	AB_Ranged_Generic_C_GetScopeParameters_Params params;

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


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFXSystemComponent*> NewParam                       (Parm, OutParm)

void AB_Ranged_Generic_C::GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents");

	AB_Ranged_Generic_C_GetActiveMuzzleComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NiagaraEnabled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::SetActiveMuzzleComponent(bool NiagaraEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent");

	AB_Ranged_Generic_C_SetActiveMuzzleComponent_Params params;
	params.NiagaraEnabled = NiagaraEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::StopScopedAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio");

	AB_Ranged_Generic_C_StopScopedAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::StartScopedAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio");

	AB_Ranged_Generic_C_StartScopedAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::SetPostProcessParams(float InputPin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams");

	AB_Ranged_Generic_C_SetPostProcessParams_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::SetActiveAlterationIdleParticles(bool Active)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles");

	AB_Ranged_Generic_C_SetActiveAlterationIdleParticles_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShowReticle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle");

	AB_Ranged_Generic_C_ShowReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::HideReticle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle");

	AB_Ranged_Generic_C_HideReticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle");

	AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateMuzzleFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX");

	AB_Ranged_Generic_C_DeactivateMuzzleFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX");

	AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ActivateReloadSmokeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX");

	AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX");

	AB_Ranged_Generic_C_ActivateShellsFX_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::DeactivateShellsFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX");

	AB_Ranged_Generic_C_DeactivateShellsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::SetupShellFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX");

	AB_Ranged_Generic_C_SetupShellFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::UpdateShellEmittersFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX");

	AB_Ranged_Generic_C_UpdateShellEmittersFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX");

	AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX");

	AB_Ranged_Generic_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity");

	AB_Ranged_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::AddRandomScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale");

	AB_Ranged_Generic_C_AddRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript");

	AB_Ranged_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc");

	AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_4D1409A247BFDB4C074B628406FC7A72(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72");

	AB_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632");

	AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9");

	AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX");

	AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX");

	AB_Ranged_Generic_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState> ReloadStage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX");

	AB_Ranged_Generic_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting");

	AB_Ranged_Generic_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip");

	AB_Ranged_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables");

	AB_Ranged_Generic_C_InitializeScopeVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Or_Disable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StencilBufferValue             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths");

	AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params params;
	params.Enable_Or_Disable = Enable_Or_Disable;
	params.StencilBufferValue = StencilBufferValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached");

	AB_Ranged_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition* NewAlteration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration");

	AB_Ranged_Generic_C_OnInitAlteration_Params params;
	params.NewAlteration = NewAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations");

	AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)");

	AB_Ranged_Generic_C_ShellsON__onPump__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory");

	AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int TargetLimit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough");

	AB_Ranged_Generic_C_SetWeaponPierceThrough_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetLimit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep");

	AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params params;
	params.Enable = Enable;
	params.TargetLimit = TargetLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay");

	AB_Ranged_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetForLocalControllerOnly     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged");

	AB_Ranged_Generic_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;
	params.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::HideWeaponMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh");

	AB_Ranged_Generic_C_HideWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShowWeaponMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh");

	AB_Ranged_Generic_C_ShowWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::HideWeapon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon");

	AB_Ranged_Generic_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShowWeapon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon");

	AB_Ranged_Generic_C_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ReverseScopePP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP");

	AB_Ranged_Generic_C_ReverseScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ResetDoonceScopeSound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound");

	AB_Ranged_Generic_C_ResetDoonceScopeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::UnhideThirdPersonStuff()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff");

	AB_Ranged_Generic_C_UnhideThirdPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::PlayScopePP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP");

	AB_Ranged_Generic_C_PlayScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::HideFirstPersonStuff()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff");

	AB_Ranged_Generic_C_HideFirstPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_C::AbortScopeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX");

	AB_Ranged_Generic_C_AbortScopeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::HideThirdPersonStuff()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff");

	AB_Ranged_Generic_C_HideThirdPersonStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Which_Call                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart2(int Which_Call)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2");

	AB_Ranged_Generic_C_UnhideFirstPersonStuffPart2_Params params;
	params.Which_Call = Which_Call;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1");

	AB_Ranged_Generic_C_UnhideFirstPersonStuffPart1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
// (Event, Public, BlueprintEvent)

void AB_Ranged_Generic_C::ForceScopeFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX");

	AB_Ranged_Generic_C_ForceScopeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::BindFireRateChange()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange");

	AB_Ranged_Generic_C_BindFireRateChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRateOfFire                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::PitchUpOnRateOfFireChange(float NewRateOfFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange");

	AB_Ranged_Generic_C_PitchUpOnRateOfFireChange_Params params;
	params.NewRateOfFire = NewRateOfFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShellEjectionFixOn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn");

	AB_Ranged_Generic_C_ShellEjectionFixOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::Bind_on_Effects_Quality()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality");

	AB_Ranged_Generic_C_Bind_on_Effects_Quality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ShellEjectionOff()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff");

	AB_Ranged_Generic_C_ShellEjectionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::ForceScopeBackImmediatly()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly");

	AB_Ranged_Generic_C_ForceScopeBackImmediatly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ImpactPhysicalSurface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFXSystemComponent*      SpawnedPSC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Ranged_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX");

	AB_Ranged_Generic_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)

void AB_Ranged_Generic_C::OnStartOverheated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated");

	AB_Ranged_Generic_C_OnStartOverheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject
// (BlueprintCallable, BlueprintEvent)

void AB_Ranged_Generic_C::LoadNiagaraMuzzleSoftObject()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject");

	AB_Ranged_Generic_C_LoadNiagaraMuzzleSoftObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortWeaponFireModeData* FireModeData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData");

	AB_Ranged_Generic_C_OnApplyFireModeData_Params params;
	params.FireModeData = FireModeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic");

	AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AimDownsights                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Ranged_Generic_C::onAimDownSightsChanged__DelegateSignature(bool AimDownsights)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature");

	AB_Ranged_Generic_C_onAimDownSightsChanged__DelegateSignature_Params params;
	params.AimDownsights = AimDownsights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

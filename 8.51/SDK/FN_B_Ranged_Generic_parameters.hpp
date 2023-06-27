#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
struct AB_Ranged_Generic_C_StopScopedAudio_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
struct AB_Ranged_Generic_C_StartScopedAudio_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
struct AB_Ranged_Generic_C_SetPostProcessParams_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Generic_C_SetActiveAlterationIdleParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
struct AB_Ranged_Generic_C_ShowReticle_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
struct AB_Ranged_Generic_C_HideReticle_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params
{
	bool                                               bNewActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
struct AB_Ranged_Generic_C_DeactivateMuzzleFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
struct AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
struct AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
struct AB_Ranged_Generic_C_ActivateShellsFX_Params
{
	bool                                               Bool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
struct AB_Ranged_Generic_C_DeactivateShellsFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
struct AB_Ranged_Generic_C_SetupShellFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
struct AB_Ranged_Generic_C_UpdateShellEmittersFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
struct AB_Ranged_Generic_C_Muzzle_Flash_FX_Params
{
	bool                                               Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
struct AB_Ranged_Generic_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
struct AB_Ranged_Generic_C_AddRandomScale_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
struct AB_Ranged_Generic_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded
struct AB_Ranged_Generic_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
struct AB_Ranged_Generic_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
struct AB_Ranged_Generic_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>                    ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
struct AB_Ranged_Generic_C_OnSetTargeting_Params
{
	bool                                               bNewIsTargeting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
struct AB_Ranged_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
struct AB_Ranged_Generic_C_InitializeScopeVariables_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilBufferValue;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
struct AB_Ranged_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
struct AB_Ranged_Generic_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition*               NewAlteration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
struct AB_Ranged_Generic_C_ShellsON__onPump__Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
struct AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
struct AB_Ranged_Generic_C_ReceiveBeginPlay_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
struct AB_Ranged_Generic_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
struct AB_Ranged_Generic_C_HideWeaponMesh_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
struct AB_Ranged_Generic_C_ShowWeaponMesh_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
struct AB_Ranged_Generic_C_HideWeapon_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
struct AB_Ranged_Generic_C_ShowWeapon_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
struct AB_Ranged_Generic_C_ReverseScopePP_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
struct AB_Ranged_Generic_C_ResetDoonceScopeSound_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
struct AB_Ranged_Generic_C_UnhideThirdPersonStuff_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
struct AB_Ranged_Generic_C_PlayScopePP_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
struct AB_Ranged_Generic_C_HideFirstPersonStuff_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
struct AB_Ranged_Generic_C_AbortScopeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
struct AB_Ranged_Generic_C_HideThirdPersonStuff_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
struct AB_Ranged_Generic_C_UnhideFirstPersonStuffPart2_Params
{
	int                                                Which_Call;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
struct AB_Ranged_Generic_C_UnhideFirstPersonStuffPart1_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
struct AB_Ranged_Generic_C_ForceScopeFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupScopePostProcess
struct AB_Ranged_Generic_C_SetupScopePostProcess_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
struct AB_Ranged_Generic_C_BindFireRateChange_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
struct AB_Ranged_Generic_C_PitchUpOnRateOfFireChange_Params
{
	float                                              NewRateOfFire;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
struct AB_Ranged_Generic_C_ShellEjectionFixOn_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
struct AB_Ranged_Generic_C_Bind_on_Effects_Quality_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
struct AB_Ranged_Generic_C_ShellEjectionOff_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
struct AB_Ranged_Generic_C_ForceScopeBackImmediatly_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
struct AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
struct AB_Ranged_Generic_C_onAimDownSightsChanged__DelegateSignature_Params
{
	bool                                               AimDownsights;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

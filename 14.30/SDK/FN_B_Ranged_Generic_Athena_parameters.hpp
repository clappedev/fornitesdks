#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.GetScopeParameters
struct AB_Ranged_Generic_Athena_C_GetScopeParameters_Params
{
	class UStaticMeshComponent*                        ScopeComponent;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   DepthOfFieldVignetteRange;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              WeaponSightsCameraOffset;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HandlePawnAndWeaponVisFor1PTargeting
struct AB_Ranged_Generic_Athena_C_HandlePawnAndWeaponVisFor1PTargeting_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowReticle
struct AB_Ranged_Generic_Athena_C_ShowReticle_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideReticle
struct AB_Ranged_Generic_Athena_C_HideReticle_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideIronSightsMesh
struct AB_Ranged_Generic_Athena_C_HideIronSightsMesh_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Generic_Athena_C_ActivateOrDeactivateWindParticle_Params
{
	bool                                               bNewActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateMuzzleFX
struct AB_Ranged_Generic_Athena_C_DeactivateMuzzleFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateReloadSmokeFX
struct AB_Ranged_Generic_Athena_C_DeactivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateReloadSmokeFX
struct AB_Ranged_Generic_Athena_C_ActivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ActivateShellsFX
struct AB_Ranged_Generic_Athena_C_ActivateShellsFX_Params
{
	bool                                               Bool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.DeactivateShellsFX
struct AB_Ranged_Generic_Athena_C_DeactivateShellsFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetupShellFX
struct AB_Ranged_Generic_Athena_C_SetupShellFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UpdateShellEmittersFX
struct AB_Ranged_Generic_Athena_C_UpdateShellEmittersFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_Athena_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Muzzle Flash FX
struct AB_Ranged_Generic_Athena_C_Muzzle_Flash_FX_Params
{
	bool                                               Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWpnRarity
struct AB_Ranged_Generic_Athena_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AddRandomScale
struct AB_Ranged_Generic_Athena_C_AddRandomScale_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.UserConstructionScript
struct AB_Ranged_Generic_Athena_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__FinishedFunc
struct AB_Ranged_Generic_Athena_C_AnimateScopePostProcess__FinishedFunc_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.AnimateScopePostProcess__UpdateFunc
struct AB_Ranged_Generic_Athena_C_AnimateScopePostProcess__UpdateFunc_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_43F549264BB135D3D385D4BB5846412A
struct AB_Ranged_Generic_Athena_C_OnLoaded_43F549264BB135D3D385D4BB5846412A_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2
struct AB_Ranged_Generic_Athena_C_OnLoaded_109F12F046377B483CA7FF92A795CBD2_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_65280D504DA982E453E39BA22D9D1643
struct AB_Ranged_Generic_Athena_C_OnLoaded_65280D504DA982E453E39BA22D9D1643_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnLoaded_351A9D71483BD9CF417705946595CB08
struct AB_Ranged_Generic_Athena_C_OnLoaded_351A9D71483BD9CF417705946595CB08_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_Athena_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnStopWeaponFireFX
struct AB_Ranged_Generic_Athena_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnPlayReloadFX
struct AB_Ranged_Generic_Athena_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>                    ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnSetTargeting
struct AB_Ranged_Generic_Athena_C_OnSetTargeting_Params
{
	bool                                               bNewIsTargeting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.K2_OnUnEquip
struct AB_Ranged_Generic_Athena_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.InitializeScopeVariables
struct AB_Ranged_Generic_Athena_C_InitializeScopeVariables_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_Athena_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilBufferValue;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponAttached
struct AB_Ranged_Generic_Athena_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitAlteration
struct AB_Ranged_Generic_Athena_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition*               NewAlteration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_Athena_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShellsON_(onPump)
struct AB_Ranged_Generic_Athena_C_ShellsON__onPump__Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnEquippedWeaponDestory
struct AB_Ranged_Generic_Athena_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough
struct AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Generic_Athena_C_SetWeaponPierceThrough_ClientRep_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ReceiveBeginPlay
struct AB_Ranged_Generic_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.OnWeaponVisibilityChanged
struct AB_Ranged_Generic_Athena_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetForLocalControllerOnly;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeaponMesh
struct AB_Ranged_Generic_Athena_C_HideWeaponMesh_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeaponMesh
struct AB_Ranged_Generic_Athena_C_ShowWeaponMesh_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideGunMesh
struct AB_Ranged_Generic_Athena_C_HideGunMesh_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowGunMesh
struct AB_Ranged_Generic_Athena_C_ShowGunMesh_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.HideWeapon
struct AB_Ranged_Generic_Athena_C_HideWeapon_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ShowWeapon
struct AB_Ranged_Generic_Athena_C_ShowWeapon_Params
{
};

// Function B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C.ExecuteUbergraph_B_Ranged_Generic_Athena
struct AB_Ranged_Generic_Athena_C_ExecuteUbergraph_B_Ranged_Generic_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

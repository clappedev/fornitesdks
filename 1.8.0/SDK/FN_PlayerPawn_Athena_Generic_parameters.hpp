#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color
struct APlayerPawn_Athena_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled
struct APlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick
struct APlayerPawn_Athena_Generic_C_DisableWaterLevelTick_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetAdrenalineRushVisibility
struct APlayerPawn_Athena_Generic_C_SetAdrenalineRushVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_On_Player_Built_Floor
struct APlayerPawn_Athena_Generic_C_OnRep_On_Player_Built_Floor_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Setup FX Mesh Duplicates
struct APlayerPawn_Athena_Generic_C_Setup_FX_Mesh_Duplicates_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Charm_MID_Array;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Charm_Mesh;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Head_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Head_Mesh;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Body_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Body_Mesh;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Translucent_Sort_Order;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Transfer_Material_Parameters;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleShieldVisibility
struct APlayerPawn_Athena_Generic_C_ToggleShieldVisibility_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody
struct APlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Master;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids_InternalLoop
struct APlayerPawn_Athena_Generic_C_SetShieldMids_InternalLoop_Params
{
	float                                              Highlight_Cracks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Push;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Push;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            NewParam1;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetShieldMids
struct APlayerPawn_Athena_Generic_C_SetShieldMids_Params
{
	float                                              Highlight_Cracks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Push;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Push;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FindShieldOpacity
struct APlayerPawn_Athena_Generic_C_FindShieldOpacity_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
struct APlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript
struct APlayerPawn_Athena_Generic_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__FinishedFunc
struct APlayerPawn_Athena_Generic_C_CapsuleFadeTL__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CapsuleFadeTL__UpdateFunc
struct APlayerPawn_Athena_Generic_C_CapsuleFadeTL__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__FinishedFunc
struct APlayerPawn_Athena_Generic_C_HealthSweep__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.HealthSweep__UpdateFunc
struct APlayerPawn_Athena_Generic_C_HealthSweep__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield Regen Timeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_ShatterTimeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Shield_DamageTimeline__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Shield_DamageTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__FinishedFunc
struct APlayerPawn_Athena_Generic_C_Full_Shield_Health__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Full Shield Health__UpdateFunc
struct APlayerPawn_Athena_Generic_C_Full_Shield_Health__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight
struct APlayerPawn_Athena_Generic_C_MeleeSwingRight_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft
struct APlayerPawn_Athena_Generic_C_MeleeSwingLeft_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects
struct APlayerPawn_Athena_Generic_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded
struct APlayerPawn_Athena_Generic_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathPlayEffects
struct APlayerPawn_Athena_Generic_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped
struct APlayerPawn_Athena_Generic_C_OnWeaponEquipped_Params
{
	class AFortWeapon**                                NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon**                                PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveTick
struct APlayerPawn_Athena_Generic_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft
struct APlayerPawn_Athena_Generic_C_FootStepLeft_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight
struct APlayerPawn_Athena_Generic_C_FootStepRight_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized
struct APlayerPawn_Athena_Generic_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SetFirstPersonCamera
struct APlayerPawn_Athena_Generic_C_SetFirstPersonCamera_Params
{
	bool*                                              bNewUseFirstPersonCamera;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.GravitySphere
struct APlayerPawn_Athena_Generic_C_GameplayCue_GravitySphere_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.InternalSetFirstPersonCamera
struct APlayerPawn_Athena_Generic_C_InternalSetFirstPersonCamera_Params
{
	bool                                               NewUseFirstPersonCamera;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnBaseChanged
struct APlayerPawn_Athena_Generic_C_OnBaseChanged_Params
{
	class AActor**                                     NewBase;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceivePossessed
struct APlayerPawn_Athena_Generic_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CleanupGravitySphereFootEffects
struct APlayerPawn_Athena_Generic_C_CleanupGravitySphereFootEffects_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed
struct APlayerPawn_Athena_Generic_C_ReceiveDestroyed_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ClientBindWeaponSwap
struct APlayerPawn_Athena_Generic_C_ClientBindWeaponSwap_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindWeaponSwap
struct APlayerPawn_Athena_Generic_C_BindWeaponSwap_Params
{
	float                                              InDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiSwapWeapon
struct APlayerPawn_Athena_Generic_C_MultiSwapWeapon_Params
{
	class AFortWeapon*                                 New;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 Prev;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UnBindWeaponSwap
struct APlayerPawn_Athena_Generic_C_UnBindWeaponSwap_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MultiEndSwap
struct APlayerPawn_Athena_Generic_C_MultiEndSwap_Params
{
	class AFortWeapon*                                 CurrentWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Clean up DBNO fx
struct APlayerPawn_Athena_Generic_C_Clean_up_DBNO_fx_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer
struct APlayerPawn_Athena_Generic_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume
struct APlayerPawn_Athena_Generic_C_Entered_WaterVolume_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed
struct APlayerPawn_Athena_Generic_C_CharacterDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed
struct APlayerPawn_Athena_Generic_C_BindOnDestroyed_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FadeOutCapsuleShadow
struct APlayerPawn_Athena_Generic_C_FadeOutCapsuleShadow_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify
struct APlayerPawn_Athena_Generic_C_AnimTrailsNotify_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup
struct APlayerPawn_Athena_Generic_C_AnimTrailsSetup_Params
{
	class UParticleSystem**                            ParticleSystemReference;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      FirstSocketName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SecondSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable
struct APlayerPawn_Athena_Generic_C_AnimTrailsDisable_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLand_CE
struct APlayerPawn_Athena_Generic_C_OnLand_CE_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Test Adrenaline Rush
struct APlayerPawn_Athena_Generic_C_Test_Adrenaline_Rush_Params
{
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
struct APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
struct APlayerPawn_Athena_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.FullyCharged
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_FullyCharged_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied
struct APlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic
struct APlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
struct APlayerPawn_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetHealthPercent2
struct APlayerPawn_Generic_C_GetHealthPercent2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetShieldPercent2
struct APlayerPawn_Generic_C_GetShieldPercent2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_BlockedByPawns
struct APlayerPawn_Generic_C_OnRep_BlockedByPawns_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayHitSound
struct APlayerPawn_Generic_C_PlayHitSound_Params
{
	class AFortPawn*                                   Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Damage_Causer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.EnableWaterAudio
struct APlayerPawn_Generic_C_EnableWaterAudio_Params
{
	bool                                               IsEnteringWater;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Body Type Sounds
struct APlayerPawn_Generic_C_Set_Body_Type_Sounds_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Duplicate Mesh MIDs
struct APlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Parameter_Value;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Character MIDs
struct APlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Parameter_Value;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Weapons Mesh
struct APlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh_Params
{
	class AFortWeapon*                                 Weapon_to_Restore;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Character Mesh
struct APlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Override Materials and Copy Parameters on Weapons Mesh
struct APlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter
struct APlayerPawn_Generic_C_TriggerGameplayWindEmitter_Params
{
	TEnumAsByte<EPlayerWindParticleEmitters>           Player_Wind_Particle_Emitter_To_Fire;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled
struct APlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick
struct APlayerPawn_Generic_C_DisableWaterLevelTick_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor
struct APlayerPawn_Generic_C_OnRep_On_Player_Built_Floor_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
struct APlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Charm_MID_Array;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      Charm_Mesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Head_MID_Array;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      Head_Mesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Body_MID_Array;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      Body_Mesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	int                                                Translucent_Sort_Order;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Transfer_Material_Parameters;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
struct APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
struct APlayerPawn_Generic_C_ToggleShieldVisibility_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
struct APlayerPawn_Generic_C_SlaveAMeshToTheBody_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Master;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
struct APlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params
{
	float                                              Highlight_Cracks;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Push;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Push;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
struct APlayerPawn_Generic_C_SetShieldMids_Params
{
	float                                              Highlight_Cracks;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Highlight_Cracks;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Push;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Push;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
struct APlayerPawn_Generic_C_FindShieldOpacity_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
struct APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params
{
	TEnumAsByte<EFortCustomPartType>                   BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UMaterialInterface*                          Material_to_Apply;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TranslucentSortPriority;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
struct APlayerPawn_Generic_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__FinishedFunc
struct APlayerPawn_Generic_C_ShatterShield__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__UpdateFunc
struct APlayerPawn_Generic_C_ShatterShield__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
struct APlayerPawn_Generic_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
struct APlayerPawn_Generic_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
struct APlayerPawn_Generic_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
struct APlayerPawn_Generic_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
struct APlayerPawn_Generic_C_FootStepLeft_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
struct APlayerPawn_Generic_C_FootStepRight_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
struct APlayerPawn_Generic_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
struct APlayerPawn_Generic_C_SetFirstPersonCamera_Params
{
	bool                                               bNewUseFirstPersonCamera;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
struct APlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params
{
	bool                                               NewUseFirstPersonCamera;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged
struct APlayerPawn_Generic_C_OnBaseChanged_Params
{
	class AActor*                                      NewBase;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed
struct APlayerPawn_Generic_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence
struct APlayerPawn_Generic_C_OnDisplaySentence_Params
{
	struct FText                                       SpeechText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence
struct APlayerPawn_Generic_C_OnClearSentence_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap
struct APlayerPawn_Generic_C_ClientBindWeaponSwap_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap
struct APlayerPawn_Generic_C_BindWeaponSwap_Params
{
	float                                              InDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon
struct APlayerPawn_Generic_C_MultiSwapWeapon_Params
{
	class AFortWeapon*                                 New;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 Prev;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap
struct APlayerPawn_Generic_C_UnBindWeaponSwap_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap
struct APlayerPawn_Generic_C_MultiEndSwap_Params
{
	class AFortWeapon*                                 CurrentWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer
struct APlayerPawn_Generic_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect
struct APlayerPawn_Generic_C_PlayGameplayWindEffect_Params
{
	TEnumAsByte<EPlayerWindParticleEmitters>           Player_Wind_Particle_Emitter_To_Fire;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered Water Volume
struct APlayerPawn_Generic_C_Entered_Water_Volume_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash
struct APlayerPawn_Generic_C_Player_Creates_a_Splash_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReinitializeWeaponMaterials
struct APlayerPawn_Generic_C_ReinitializeWeaponMaterials_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
struct APlayerPawn_Generic_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
struct APlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
struct APlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage
struct APlayerPawn_Generic_C_GameplayCue_Damage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredVehicle
struct APlayerPawn_Generic_C_OnEnteredVehicle_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedVehicle
struct APlayerPawn_Generic_C_OnExitedVehicle_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
struct APlayerPawn_Generic_C_MeleeSwingLeft_Params
{
	bool                                               First_Left;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
struct APlayerPawn_Generic_C_MeleeSwingRight_Params
{
	bool                                               First_Right;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft_End
struct APlayerPawn_Generic_C_MeleeSwingLeft_End_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight_End
struct APlayerPawn_Generic_C_MeleeSwingRight_End_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredWaterVolume
struct APlayerPawn_Generic_C_OnEnteredWaterVolume_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedWaterVolume
struct APlayerPawn_Generic_C_OnExitedWaterVolume_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetBlockedByPawns
struct APlayerPawn_Generic_C_SetBlockedByPawns_Params
{
	bool                                               bLocked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
struct APlayerPawn_Generic_C_OnLand_CE_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable
struct APlayerPawn_Generic_C_AnimTrailsDisable_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup
struct APlayerPawn_Generic_C_AnimTrailsSetup_Params
{
	class UParticleSystem*                             ParticleSystemReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              NiagaraSystemReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FirstSocketName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFXSystemComponent*                          OverrideParticleComp;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverideFirstSocketName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverideSecondSocketName;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify
struct APlayerPawn_Generic_C_AnimTrailsNotify_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
struct APlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft2__DelegateSignature
struct APlayerPawn_Generic_C_SwingLeft2__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight2__DelegateSignature
struct APlayerPawn_Generic_C_SwingRight2__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_End__DelegateSignature
struct APlayerPawn_Generic_C_AnimNotify_End__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_Begin__DelegateSignature
struct APlayerPawn_Generic_C_AnimNotify_Begin__DelegateSignature_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeftEnd__DelegateSignature
struct APlayerPawn_Generic_C_SwingLeftEnd__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft__DelegateSignature
struct APlayerPawn_Generic_C_SwingLeft__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRightEnd__DelegateSignature
struct APlayerPawn_Generic_C_SwingRightEnd__DelegateSignature_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight__DelegateSignature
struct APlayerPawn_Generic_C_SwingRight__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

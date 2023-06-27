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

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color
struct AB_Athena_Pickaxe_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents
struct AB_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents
struct AB_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio
struct AB_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio_Params
{
	struct FHitResult                                  Hit_Result;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles
struct AB_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity
struct AB_Athena_Pickaxe_Generic_C_SetWpnRarity_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript
struct AB_Athena_Pickaxe_Generic_C_UserConstructionScript_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21
struct AB_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21_Params
{
	struct FName                                       StatName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2
struct AB_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight
struct AB_Athena_Pickaxe_Generic_C_MeleeSwingRight_Params
{
	bool                                               First_Right;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft
struct AB_Athena_Pickaxe_Generic_C_MeleeSwingLeft_Params
{
	bool                                               First_Left;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft
struct AB_Athena_Pickaxe_Generic_C_FootStepLeft_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight
struct AB_Athena_Pickaxe_Generic_C_FootStepRight_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End
struct AB_Athena_Pickaxe_Generic_C_MeleeSwingRight_End_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End
struct AB_Athena_Pickaxe_Generic_C_MeleeSwingLeft_End_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX
struct AB_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts
struct AB_Athena_Pickaxe_Generic_C_PlayRClickImpacts_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory
struct AB_Athena_Pickaxe_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached
struct AB_Athena_Pickaxe_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations
struct AB_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged
struct AB_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetForLocalControllerOnly;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached
struct AB_Athena_Pickaxe_Generic_C_OnWeaponDetached_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics
struct AB_Athena_Pickaxe_Generic_C_OnInitWeaponCosmetics_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch
struct AB_Athena_Pickaxe_Generic_C_HandleKillWatch_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills
struct AB_Athena_Pickaxe_Generic_C_UpdateBasedOnKills_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.CandyCaneUpdate
struct AB_Athena_Pickaxe_Generic_C_CandyCaneUpdate_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify
struct AB_Athena_Pickaxe_Generic_C_Anim_Trails_Notify_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable
struct AB_Athena_Pickaxe_Generic_C_Anim_Trails_Disable_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight
struct AB_Athena_Pickaxe_Generic_C_SwingRight_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft
struct AB_Athena_Pickaxe_Generic_C_SwingLeft_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd
struct AB_Athena_Pickaxe_Generic_C_SwingRightEnd_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd
struct AB_Athena_Pickaxe_Generic_C_SwingLeftEnd_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet
struct AB_Athena_Pickaxe_Generic_C_OnInstigatorSet_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip
struct AB_Athena_Pickaxe_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic
struct AB_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

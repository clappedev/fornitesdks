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

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity
struct AB_Athena_Pickaxe_DualWield_Generic_C_SetWpnRarity_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events
struct AB_Athena_Pickaxe_DualWield_Generic_C_Unbind_Dual_Melee_Swing_Events_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events
struct AB_Athena_Pickaxe_DualWield_Generic_C_Bind_Dual_Melee_Swing_Events_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles
struct AB_Athena_Pickaxe_DualWield_Generic_C_Set_Active_Alteration_Idle_Particles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript
struct AB_Athena_Pickaxe_DualWield_Generic_C_UserConstructionScript_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts
struct AB_Athena_Pickaxe_DualWield_Generic_C_PlayRClickImpacts_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnEquippedWeaponDestory_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetForLocalControllerOnly;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponDetached_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInitWeaponCosmetics_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_End_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_End_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInstigatorSet_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip
struct AB_Athena_Pickaxe_DualWield_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common
struct AB_Athena_Pickaxe_DualWield_Generic_C_SwingRight_Common_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common
struct AB_Athena_Pickaxe_DualWield_Generic_C_SwingLeft_Common_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_2_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_2_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify
struct AB_Athena_Pickaxe_DualWield_Generic_C_Anim_Trails_Notify_Params
{
	bool                                               bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable
struct AB_Athena_Pickaxe_DualWield_Generic_C_Anim_Trails_Disable_Params
{
};

// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic
struct AB_Athena_Pickaxe_DualWield_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

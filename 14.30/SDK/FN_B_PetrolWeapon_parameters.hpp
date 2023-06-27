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

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor
struct AB_PetrolWeapon_C_OnRep_AttachedBGAActor_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile
struct AB_PetrolWeapon_C_OnSpawnProjectile_Params
{
	class AFortProjectileBase*                         SpawnProjectile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached
struct AB_PetrolWeapon_C_OnWeaponAttached_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip
struct AB_PetrolWeapon_C_K2_OnUnEquip_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA
struct AB_PetrolWeapon_C_UpdateAndAttachBGA_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX
struct AB_PetrolWeapon_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy)
struct AB_PetrolWeapon_C_OnEquip_Copy__Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX
struct AB_PetrolWeapon_C_OnStopWeaponFireFX_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy)
struct AB_PetrolWeapon_C_OnUnEquip_Copy__Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay
struct AB_PetrolWeapon_C_ReceiveBeginPlay_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting
struct AB_PetrolWeapon_C_HUDKeyAction_Targeting_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered
struct AB_PetrolWeapon_C_OnHolstered_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered
struct AB_PetrolWeapon_C_OnUnholstered_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents
struct AB_PetrolWeapon_C_BindHolsterEvents_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents
struct AB_PetrolWeapon_C_UnbindHolsterEvents_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld
struct AB_PetrolWeapon_C_BGADestroyedWhileHeld_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered
struct AB_PetrolWeapon_C_ReplicateOnUnholstered_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered
struct AB_PetrolWeapon_C_ReplicateOnHolstered_Params
{
};

// Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon
struct AB_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

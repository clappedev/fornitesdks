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

// Function B_FerretWeapon.B_FerretWeapon_C.K2_OnUnEquip
struct AB_FerretWeapon_C_K2_OnUnEquip_Params
{
};

// Function B_FerretWeapon.B_FerretWeapon_C.FerretSnowmanCheck
struct AB_FerretWeapon_C_FerretSnowmanCheck_Params
{
};

// Function B_FerretWeapon.B_FerretWeapon_C.OnWeaponAttached
struct AB_FerretWeapon_C_OnWeaponAttached_Params
{
};

// Function B_FerretWeapon.B_FerretWeapon_C.HandFired
struct AB_FerretWeapon_C_HandFired_Params
{
	EDualWeaponHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_FerretWeapon.B_FerretWeapon_C.OnStartOverheated
struct AB_FerretWeapon_C_OnStartOverheated_Params
{
};

// Function B_FerretWeapon.B_FerretWeapon_C.ExecuteUbergraph_B_FerretWeapon
struct AB_FerretWeapon_C_ExecuteUbergraph_B_FerretWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.K2_OnUnEquip
struct AB_Shotgun_Charge_Athena_C_K2_OnUnEquip_Params
{
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnStartCharge
struct AB_Shotgun_Charge_Athena_C_OnStartCharge_Params
{
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnReachedMaxCharge
struct AB_Shotgun_Charge_Athena_C_OnReachedMaxCharge_Params
{
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnEndCharge
struct AB_Shotgun_Charge_Athena_C_OnEndCharge_Params
{
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ChargeAudioVisualizer
struct AB_Shotgun_Charge_Athena_C_ChargeAudioVisualizer_Params
{
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnPlayWeaponFireFX
struct AB_Shotgun_Charge_Athena_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ExecuteUbergraph_B_Shotgun_Charge_Athena
struct AB_Shotgun_Charge_Athena_C_ExecuteUbergraph_B_Shotgun_Charge_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

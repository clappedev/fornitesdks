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

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.UserConstructionScript
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_UserConstructionScript_Params
{
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveBeginPlay
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_ReceiveBeginPlay_Params
{
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnPlayImpactFX
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnPlayImpactFX_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ImpactPhysicalSurface;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFXSystemComponent*                          SpawnedPSC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnWeaponVisibilityChanged
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetForLocalControllerOnly;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.OnInitWeaponCosmetics
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_OnInitWeaponCosmetics_Params
{
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.FrontEndIdle
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_FrontEndIdle_Params
{
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ReceiveEndPlay
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_Pickaxe_Galileo_Ferry1H.B_Athena_Pickaxe_Galileo_Ferry1H_C.ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H
struct AB_Athena_Pickaxe_Galileo_Ferry1H_C_ExecuteUbergraph_B_Athena_Pickaxe_Galileo_Ferry1H_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

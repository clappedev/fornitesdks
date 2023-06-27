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

// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized
struct AB_BGA_Athena_CampFire_Trap_C_OnBuildingActorInitialized_Params
{
	TEnumAsByte<EFortBuildingInitializationReason>     InitializationReason;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBuildingPersistentState>          BuildingPersistentState;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.ExecuteUbergraph_B_BGA_Athena_CampFire_Trap
struct AB_BGA_Athena_CampFire_Trap_C_ExecuteUbergraph_B_BGA_Athena_CampFire_Trap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

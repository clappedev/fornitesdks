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

// Function LowTowerRuntime.FortHardyComponent_Telemetry.SetExtractionReason
struct UFortHardyComponent_Telemetry_SetExtractionReason_Params
{
	EHardyExtractionReason                             Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowTowerRuntime.FortLaurelAnimInstance.SetLaurelInformation
struct UFortLaurelAnimInstance_SetLaurelInformation_Params
{
	bool                                               bInHasItemInInventory;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInPawnIsDestroyingBuildingForNav;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInHasPawnGoal;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InGoalActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowTowerRuntime.FortLaurelAnimInstance.SetAnimInstanceInformation
struct UFortLaurelAnimInstance_SetAnimInstanceInformation_Params
{
	bool                                               bInIsActive;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetLaurelType
struct UFortLaurelComponent_Telemetry_SetLaurelType_Params
{
	ELaurelType                                        Type;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetExtractionReason
struct UFortLaurelComponent_Telemetry_SetExtractionReason_Params
{
	ELaurelExtractionReason                            Reason;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowTowerRuntime.FortLaurelComponent_Telemetry.OnDropAllItems
struct UFortLaurelComponent_Telemetry_OnDropAllItems_Params
{
	TEnumAsByte<ELaurelDropItemReason>                 DropItemReason;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function HuskInterface.HuskInterface_C.ManageBurpEffect
struct UHuskInterface_C_ManageBurpEffect_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HuskInterface.HuskInterface_C.BeeCloudDespawned
struct UHuskInterface_C_BeeCloudDespawned_Params
{
public:
	class AFortProjectileBase*                   Cloud;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HuskInterface.HuskInterface_C.FSMBeginPropaneTankMelee
struct UHuskInterface_C_FSMBeginPropaneTankMelee_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HuskInterface.HuskInterface_C.FSMFailedToSpawnTank
struct UHuskInterface_C_FSMFailedToSpawnTank_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HuskInterface.HuskInterface_C.FSMRemovePropaneTank
struct UHuskInterface_C_FSMRemovePropaneTank_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function HuskInterface.HuskInterface_C.IgnitePropaneTank
struct UHuskInterface_C_IgnitePropaneTank_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RemainingFuseTime;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         JustDrop;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

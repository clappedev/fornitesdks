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
// 0x0 (0x0 - 0x0)
// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_ActivateAbility
struct UGAB_SmasherChargeDecelerate_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_OnEndAbility
struct UGAB_SmasherChargeDecelerate_C_K2_OnEndAbility_Params
{
public:
	//bool                                       bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.ExecuteUbergraph_GAB_SmasherChargeDecelerate
struct UGAB_SmasherChargeDecelerate_C_ExecuteUbergraph_GAB_SmasherChargeDecelerate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_256F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASmasherPawn_C*                        K2Node_DynamicCast_AsSmasher_Pawn;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

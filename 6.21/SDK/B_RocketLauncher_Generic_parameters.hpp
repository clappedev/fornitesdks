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
// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.UserConstructionScript
struct AB_RocketLauncher_Generic_C_UserConstructionScript_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.Muzzle Flash FX
struct AB_RocketLauncher_Generic_C_Muzzle_Flash_FX_Params
{
public:
	//bool                                       Persistent_Fire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.ExecuteUbergraph_B_RocketLauncher_Generic
struct AB_RocketLauncher_Generic_C_ExecuteUbergraph_B_RocketLauncher_Generic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Persistent_Fire;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AEC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.UserConstructionScript
struct ADA_GuidedMissilePack_C_UserConstructionScript_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.BPPressTrigger
struct ADA_GuidedMissilePack_C_BPPressTrigger_Params
{
public:
	//class AFortDecoHelper*                     FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DA_GuidedMissilePack.DA_GuidedMissilePack_C.ExecuteUbergraph_DA_GuidedMissilePack
struct ADA_GuidedMissilePack_C_ExecuteUbergraph_DA_GuidedMissilePack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// 0xA8 (0xA8 - 0x0)
// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
public:
	//struct FGameplayEventData                  EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
struct UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

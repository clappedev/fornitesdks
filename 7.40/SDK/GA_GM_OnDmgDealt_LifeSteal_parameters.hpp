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
// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.DoOnDmgDealtBehavior
struct UGA_GM_OnDmgDealt_LifeSteal_C_DoOnDmgDealtBehavior_Params
{
public:
	//struct FGameplayEventData                  EventData;                                         // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal
struct UGA_GM_OnDmgDealt_LifeSteal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

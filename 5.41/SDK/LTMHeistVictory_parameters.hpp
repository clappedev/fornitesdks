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
// Function LTMHeistVictory.LTMHeistVictory_C.Construct
struct ULTMHeistVictory_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LTMHeistVictory.LTMHeistVictory_C.Event Intro
struct ULTMHeistVictory_C_Event_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LTMHeistVictory.LTMHeistVictory_C.Event Outro
struct ULTMHeistVictory_C_Event_Outro_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function LTMHeistVictory.LTMHeistVictory_C.ExecuteUbergraph_LTMHeistVictory
struct ULTMHeistVictory_C_ExecuteUbergraph_LTMHeistVictory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3670[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

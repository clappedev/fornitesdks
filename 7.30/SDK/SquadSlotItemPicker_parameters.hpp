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
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct
struct USquadSlotItemPicker_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort
struct USquadSlotItemPicker_C_HandleChangeSort_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
struct USquadSlotItemPicker_C_HandleSortChanged_Params
{
public:
	enum class ESquadSlotSortType                CurrentSortType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotType                    NewParam;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
struct USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotSortType                Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x50(0x18)()
	enum class ESquadSlotType                    Temp_byte_Variable1;                               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable4;                               // 0x70(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x88(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xA0(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xB8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xD0(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xE8(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x100(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x118(0x18)()
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue1;               // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x140(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue2;               // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotSortType                K2Node_CustomEvent_CurrentSortType;                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotType                    K2Node_CustomEvent_NewParam;                       // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x160(0x18)()
	class FText                                  K2Node_Select1_Default;                            // 0x178(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

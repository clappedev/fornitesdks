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
// Function AthenaCountdown.AthenaCountdown_C.Construct
struct UAthenaCountdown_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.OnCountdownUpdate
struct UAthenaCountdown_C_OnCountdownUpdate_Params
{
public:
	//int32                                      TimeRemaining;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class FText                                CountdownUpdateText;                               // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.OnCountdownFinished
struct UAthenaCountdown_C_OnCountdownFinished_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.Tick
struct UAthenaCountdown_C_Tick_Params
{
public:
	//struct FGeometry                           MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	//float                                      InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.Set Countdown Loop Audio Enabled
struct UAthenaCountdown_C_Set_Countdown_Loop_Audio_Enabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.InitializeCountdown
struct UAthenaCountdown_C_InitializeCountdown_Params
{
public:
	int32                                        TimeRemaining;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.OnDisplayWarningMessage
struct UAthenaCountdown_C_OnDisplayWarningMessage_Params
{
public:
	//class FText                                FirstLineText;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	//class FText                                SecondLineText;                                    // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x12C (0x12C - 0x0)
// Function AthenaCountdown.AthenaCountdown_C.ExecuteUbergraph_AthenaCountdown
struct UAthenaCountdown_C_ExecuteUbergraph_AthenaCountdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_TimeRemaining;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_CountdownUpdateText;                  // 0x30(0x18)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x48(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enabled;                        // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSound2D_ReturnValue;                 // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloatValue_ReturnValue1;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default;                             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Min_ReturnValue;                          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select1_Default;                            // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_TimeRemaining;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_DisplayText;                    // 0xD8(0x18)()
	class FText                                  K2Node_Event_FirstLineText;                        // 0xF0(0x18)(ConstParm)
	class FText                                  K2Node_Event_SecondLineText;                       // 0x108(0x18)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

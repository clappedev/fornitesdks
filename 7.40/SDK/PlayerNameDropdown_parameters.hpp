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
// Function PlayerNameDropdown.PlayerNameDropdown_C.Destruct
struct UPlayerNameDropdown_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerNameDropdown.PlayerNameDropdown_C.Construct
struct UPlayerNameDropdown_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerNameDropdown.PlayerNameDropdown_C.OnActivated
struct UPlayerNameDropdown_C_OnActivated_Params
{
public:
};

// 0xB1 (0xB1 - 0x0)
// Function PlayerNameDropdown.PlayerNameDropdown_C.ExecuteUbergraph_PlayerNameDropdown
struct UPlayerNameDropdown_C_ExecuteUbergraph_PlayerNameDropdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3405[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUISubsystem*                    CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameFeedbackBase*                 K2Node_DynamicCast_AsFort_Game_Feedback_Base;      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3407[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerNameInfoContainer              CallFunc_GetPlayerNameInfoContainer_ReturnValue;   // 0x48(0x18)(ConstParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3408[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerNameInfo                       CallFunc_Array_Get_Item;                           // 0x68(0x48)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

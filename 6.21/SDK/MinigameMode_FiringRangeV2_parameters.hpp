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
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons
struct AMinigameMode_FiringRangeV2_C_GiftWeapons_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayspaceManager*                 CallFunc_GetPlayspaceManager_OutPlayspaceManager;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValidityResult                   CallFunc_GetPlayspaceManager_OutIsValid;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AController*>                   CallFunc_GetAllPlayersInPlayspace_ReturnValue;     // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UInterfaceProperty_                          CallFunc_GiveItemToInventoryOwner_InventoryOwner1_CastInput; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UInterfaceProperty_                          CallFunc_GiveItemToInventoryOwner_InventoryOwner2_CastInput; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UInterfaceProperty_                          CallFunc_GiveItemToInventoryOwner_InventoryOwner3_CastInput; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UInterfaceProperty_                          CallFunc_GiveItemToInventoryOwner_InventoryOwner4_CastInput; // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript
struct AMinigameMode_FiringRangeV2_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.Timer Expired
struct AMinigameMode_FiringRangeV2_C_Timer_Expired_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted
struct AMinigameMode_FiringRangeV2_C_HandleMinigameStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameEnded
struct AMinigameMode_FiringRangeV2_C_HandleMinigameEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.K2_PreGameTransitionEvent
struct AMinigameMode_FiringRangeV2_C_K2_PreGameTransitionEvent_Params
{
public:
};

// 0x29 (0x29 - 0x0)
// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2
struct AMinigameMode_FiringRangeV2_C_ExecuteUbergraph_MinigameMode_FiringRangeV2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class AMinigameState_Generic_C*              K2Node_DynamicCast_AsMinigame_State_Generic;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

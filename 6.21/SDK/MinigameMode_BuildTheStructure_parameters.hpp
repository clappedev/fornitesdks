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
// 0x58 (0x58 - 0x0)
// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.GiveWood
struct AMinigameMode_BuildTheStructure_C_GiveWood_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayspaceManager*                 CallFunc_GetPlayspaceManager_OutPlayspaceManager;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValidityResult                   CallFunc_GetPlayspaceManager_OutIsValid;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AController*>                   CallFunc_GetAllPlayersInPlayspace_ReturnValue;     // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.UserConstructionScript
struct AMinigameMode_BuildTheStructure_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.K2_PreGameTransitionEvent
struct AMinigameMode_BuildTheStructure_C_K2_PreGameTransitionEvent_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.ExecuteUbergraph_MinigameMode_BuildTheStructure
struct AMinigameMode_BuildTheStructure_C_ExecuteUbergraph_MinigameMode_BuildTheStructure_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntroBP
struct UQuestUpdateEntry_C_StartQuestIntroBP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.SetupAsAnnouncement
struct UQuestUpdateEntry_C_SetupAsAnnouncement_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.QuestItemSet
struct UQuestUpdateEntry_C_QuestItemSet_Params
{
public:
	//class UFortQuestItem*                      QuestItemToCheck;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestOutro
struct UQuestUpdateEntry_C_StartQuestOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntro
struct UQuestUpdateEntry_C_StartQuestIntro_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
struct UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_53BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue1;       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_GetContentSlot_ReturnValue;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                           K2Node_DynamicCast_AsBorder_Slot;                  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        K2Node_Event_QuestItemToCheck;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x50(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
struct UQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params
{
public:
	class UQuestUpdateEntry_C*                   UpdateWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

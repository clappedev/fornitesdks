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
// 0x1C8 (0x1C8 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Get Streaming Attached Quest Name
struct UQuestTreeEntry_C_Get_Streaming_Attached_Quest_Name_Params
{
public:
	class FText                                  ModifiedName;                                      // 0x0(0x18)(Parm, OutParm)
	enum class EFortQuestType                    Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x50(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x68(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x98(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xE0(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0xF8(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x110(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x128(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x140(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x158(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x170(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x188(0x18)()
	class UFortQuestItemDefinition*              CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x1B0(0x18)()
};

// 0x16 (0x16 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Is Streaming Quest
struct UQuestTreeEntry_C_Is_Streaming_Quest_Params
{
public:
	bool                                         bStreamingQuest;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Category Display Name
struct UQuestTreeEntry_C_Set_Quest_Category_Display_Name_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Display Name
struct UQuestTreeEntry_C_Set_Quest_Display_Name_Params
{
public:
	class FText                                  LocalQuestName;                                    // 0x0(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Get_Streaming_Attached_Quest_Name_ModifiedName; // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x78(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Is_Streaming_Quest_bStreamingQuest;       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD0(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xE8(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x100(0x18)()
};

// 0x19 (0x19 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Get Quest Item Def
struct UQuestTreeEntry_C_Get_Quest_Item_Def_Params
{
public:
	class UFortQuestItemDefinition*              AsFort_Quest_Item_Definition;                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              K2Node_DynamicCast_AsFort_Quest_Item_Definition;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Quest Category Have Unseen Quests
struct UQuestTreeEntry_C_Quest_Category_Have_Unseen_Quests_Params
{
public:
	bool                                         HasUnseen;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LocalHasUnseen;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E54[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue2;                 // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Category Bang State
struct UQuestTreeEntry_C_Update_Quest_Category_Bang_State_Params
{
public:
	bool                                         CallFunc_HasUnseenQuests_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Seen
struct UQuestTreeEntry_C_Update_Quest_Item_Seen_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Bang State
struct UQuestTreeEntry_C_Update_Quest_Item_Bang_State_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.SetCompletionPercentage
struct UQuestTreeEntry_C_SetCompletionPercentage_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetPercentageComplete_ReturnValue;        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Unpin
struct UQuestTreeEntry_C_Unpin_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.SetPinnedState
struct UQuestTreeEntry_C_SetPinnedState_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestPinned_ReturnValue;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsCategory
struct UQuestTreeEntry_C_SetupAsCategory_Params
{
public:
	//class UFortQuestCategory*                  Category;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsQuest
struct UQuestTreeEntry_C_SetupAsQuest_Params
{
public:
	//class UFortQuestItem*                      Category;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.BP_OnSelected
struct UQuestTreeEntry_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestsUpdated
struct UQuestTreeEntry_C_OnQuestsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.BP_OnHovered
struct UQuestTreeEntry_C_BP_OnHovered_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestSeen_Event_0
struct UQuestTreeEntry_C_OnQuestSeen_Event_0_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.Destruct
struct UQuestTreeEntry_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.BP_OnDeselected
struct UQuestTreeEntry_C_BP_OnDeselected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.BP_OnItemExpansionChanged
struct UQuestTreeEntry_C_BP_OnItemExpansionChanged_Params
{
public:
	//bool                                       bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function QuestTreeEntry.QuestTreeEntry_C.ExecuteUbergraph_QuestTreeEntry
struct UQuestTreeEntry_C_ExecuteUbergraph_QuestTreeEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E5A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue1;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue2;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestCategory*                    K2Node_Event_Category1;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        K2Node_Event_Category;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x68(0x28)(HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetOrLoadSynchronously_ReturnValue;       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortQuestType                    CallFunc_GetQuestType_ReturnValue;                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0xAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select1_Default;                            // 0xB4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItem*                        K2Node_CustomEvent_Quest;                          // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable2;                                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable3;                                // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x108(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortQuestState                   Temp_byte_Variable2;                               // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select2_Default;                            // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// 0x10 (0x10 - 0x0)
// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle
struct UAlterationOptionsIngredientsList_C_SetupTitle_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmptyList_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ADC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry
struct UAlterationOptionsIngredientsList_C_AddListEntry_Params
{
public:
	//class UFortItemQuantityListEntryBase*      ListEntry;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.Construct
struct UAlterationOptionsIngredientsList_C_Construct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList
struct UAlterationOptionsIngredientsList_C_ExecuteUbergraph_AlterationOptionsIngredientsList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ADD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemQuantityListEntryBase*        K2Node_Event_ListEntry;                            // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

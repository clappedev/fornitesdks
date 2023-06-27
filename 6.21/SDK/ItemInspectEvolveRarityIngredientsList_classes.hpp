#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x70 (0x288 - 0x218)
// WidgetBlueprintGeneratedClass ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C
class UItemInspectEvolveRarityIngredientsList_C : public UUserWidget
{
public:
	class UVerticalBox*                          IngredientsListBox;                                // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>         IngredientsList;                                   // 0x220(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateColor                           HaveColor;                                         // 0x230(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           NotHaveColor;                                      // 0x258(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        HaveQuantity;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NeedQuantity;                                      // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolveRarityIngredientsList_C");
		return Clss;
	}

	void Add_XP_Cost_to_Upgrade(class UFortItem* Target, int32 CallFunc_GetLevelRelativeCostForRarityUpgrade_ReturnValue, class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, class UItemInspectEvolutionIngredientsEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ClearIngredients();
	void SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>& InIngredients, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UItemInspectEvolutionIngredientsEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

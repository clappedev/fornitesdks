#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x148 (0x368 - 0x220)
// WidgetBlueprintGeneratedClass Quest-RewardCards.Quest-RewardCards_C
class UQuest_RewardCards_C : public UFortQuestMapCosmeticListWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_FourReward;                                  // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro_ThreeReward;                                 // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro_TwoReward;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro_OneReward;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bounce_FourReward;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bounce_ThreeReward;                                // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bounce_TwoReward;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bounce_OneReward;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ChoiceReward_QuestionMark;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget1a;                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget2a;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget2b;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget3a;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget3b;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget3c;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget4a;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget4b;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget4c;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuest_RewardCard_Widget_C*            RewardCardWidget4d;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardFlare_01;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardFlare_02;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardFlare_03;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardFlare_04;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          OneCard_Rarity;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Flare_01;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Flare_02;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Fare_03;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Flare_04;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GlowColor_Overide;                                 // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Explicit_GlowColor;                                // 0x31C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChoiceReward_Overide;                              // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            ChoiceMaterialArray;                               // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Widget_Index;                                      // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   Card_Slot_01;                                      // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Card_Slot_02;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Card_Slot_03;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   Card_Slot_04;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Quest-RewardCards_C");
		return Clss;
	}

	void PlayIntro(int32 Temp_int_Variable, class UWidgetAnimation* K2Node_Select_Default);
	void PlayBounceLoop(int32 Temp_int_Variable, class UWidgetAnimation* K2Node_Select_Default);
	void PopulateCards(TArray<class UFortItemDefinition*>& InItemDefinitions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItemDefinition* CallFunc_Array_Get_Item2, class UFortItemDefinition* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	void WidgetSetUp(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable1, int32 Temp_int_Variable1, int32 Temp_int_Variable2, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, class UMaterialInterface* Temp_object_Variable6, bool K2Node_SwitchInteger_CmpSuccess, class UMaterialInterface* Temp_object_Variable7, class UMaterialInterface* Temp_object_Variable8, class UMaterialInterface* Temp_object_Variable9, enum class EFortRarity Temp_byte_Variable5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue3, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, class UFortItem* K2Node_Select3_Default, const struct FLinearColor& CallFunc_GetRaritySecondaryColor_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FLinearColor& K2Node_Select4_Default, class UMaterialInterface* K2Node_Select5_Default);
	void HandleIntroComplete();
	void Construct();
	void UpdateCosmeticListDisplay();
	void ExecuteUbergraph_Quest_RewardCards(int32 EntryPoint, TArray<class UFortItemDefinition*>& CallFunc_GetDisplayItemDefs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

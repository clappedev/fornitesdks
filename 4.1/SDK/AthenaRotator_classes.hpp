#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x4A (0x8BA - 0x870)
// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
class UAthenaRotator_C : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x870(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonLeft;                                        // 0x878(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRight;                                       // 0x880(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MainBorder;                                        // 0x888(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Left_Triggering_Input_Action;                      // 0x890(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   Right_Triggering_Input_Action;                     // 0x8A0(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                TextStyle;                                         // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowGamepadButtonOnlyWhenFocused;                  // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OneDirectionalModeActive;                          // 0x8B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaRotator_C");
		return Clss;
	}

	void ConfigureForOneDirectionMode(bool UseOneDirectionalMode, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue);
	void ChangeDirection(bool bDirection, bool CallFunc_IsInteractionEnabled_ReturnValue);
	void Construct();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnClicked();
	void ExecuteUbergraph_AthenaRotator(int32 EntryPoint, bool Temp_bool_Variable, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform1, bool CallFunc_IsInteractionEnabled_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsInteractionEnabled_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

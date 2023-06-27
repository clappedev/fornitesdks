#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xB88 - 0xB80)
// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
class UTopBarTabButton_C : public UFortTopBarTabButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopBarTabButton_C");
		return Clss;
	}

	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void OnSelectedChangedEvent(class UCommonButton* Button, bool Selected);
	void ExecuteUbergraph_TopBarTabButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobileGame_ReturnValue, class UNormalBangWrapper_C* K2Node_DynamicCast_AsNormal_Bang_Wrapper, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default, class UCommonButton* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x270 - 0x240)
// WidgetBlueprintGeneratedClass HudLayoutToolVisibilityWidget.HudLayoutToolVisibilityWidget_C
class UHudLayoutToolVisibilityWidget_C : public UHUDLayoutToolVisibilityWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WrapperBox;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Style_Show;                                        // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Style_Hide;                                        // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Style_DoNothing;                                   // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HudLayoutToolVisibilityWidget_C");
		return Clss;
	}

	void SetButtonStyle(class UCommonButton* Button, class UClass* Style, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void GetButtonStyle(enum class EBacchusHUDStateType Vis_Type, class UClass** Style, enum class EBacchusHUDStateType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_Select_Default);
	void Construct();
	void Refresh();
	void ExecuteUbergraph_HudLayoutToolVisibilityWidget(int32 EntryPoint, enum class EBacchusHUDStateType CallFunc_GetVisibilities_CombatVisibility, enum class EBacchusHUDStateType CallFunc_GetVisibilities_BuildVisibility, enum class EBacchusHUDStateType CallFunc_GetVisibilities_EditVisibility, class UClass* CallFunc_GetButtonStyle_Style, class UClass* CallFunc_GetButtonStyle_Style1, class UClass* CallFunc_GetButtonStyle_Style2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEditVisibility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

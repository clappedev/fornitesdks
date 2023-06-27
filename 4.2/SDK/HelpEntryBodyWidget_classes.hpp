#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x38 (0x248 - 0x210)
// WidgetBlueprintGeneratedClass HelpEntryBodyWidget.HelpEntryBodyWidget_C
class UHelpEntryBodyWidget_C : public UCommonUserWidget
{
public:
	class UCommonBorder*                         BottomContentBorder;                               // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomImage;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        EntryBody;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RootVerticalBox;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TopContentBorder;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopImage;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHelpItem*                         ActiveHelpItem;                                    // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HelpEntryBodyWidget_C");
		return Clss;
	}

	void ResetAdditionalContent();
	void UpdateAdditionalImage(class UImage* ImageComponent, enum class EFortHelpContentLocation Temp_byte_Variable, class UImage* K2Node_Select_Default);
	void UpdateAdditionalWidget(class UPanelWidget* ContentContainer, enum class EFortHelpContentLocation Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateBodyText();
	void SetActiveEntry(class UFortHelpItem* InHelpItem, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

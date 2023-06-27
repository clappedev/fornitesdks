#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
// 0x0048 (0x02C8 - 0x0280)
class UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                            ChoicesEntryBox;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonHierarchicalScrollBox*                ChoicesScrollBox;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     DummyButton;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCommonButton*>                       ChoiceButtons;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       Text_Subtitle;                                            // 0x02B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C");
		return ptr;
	}


	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination);
	void UpdateEntryBoxContents();
	void GetDefaultInitialChoiceIndex(int* Index);
	void GetDefaultFocusedWidgetPostDummy(EUINavigation Navigation, class UWidget** Widget);
	struct FText GetSubtitleText();
	void HandlePlayerRequestAnswer(int AnswerIndex);
	class UWidget* GetDefaultFocusedWidget();
	void Construct();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo);
	void HandleQuestionChanged();
	void HandleButtonClicked(int ButtonIndex);
	void HandleButtonFocused(int ButtonIndex);
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

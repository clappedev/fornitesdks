#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C
// 0x00F8 (0x0458 - 0x0360)
class UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C : public UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                         Action_ActionDisplay;                                     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            ChoicesEntryBox;                                          // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonHierarchicalScrollBox*                ChoicesScrollBox;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     DummyButton;                                              // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            SelectionCountTextBlock;                                  // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Text_ActionDisplay;                                       // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCommonButton*>                       ChoiceButtons;                                            // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_Subtitle;                                            // 0x03A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_SelectionCount_NoLimit;                              // 0x03C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_SelectionCount_MinLimit;                             // 0x03D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_SelectionCount_MaxLimit;                             // 0x03F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommonTextStyle*                            SelectionCountStyle_Valid;                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            SelectionCountStyle_Invalid;                              // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text_ActionDisplay_ToggleOff;                             // 0x0418(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_ActionDisplay_ToggleOn;                              // 0x0430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommonTextStyle*                            ActionDisplayStyle_CannotToggle;                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            ActionDisplayStyle_CanToggle;                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C");
		
		return ptr;
	}


	void UpdateActionDisplay();
	void UpdateQuestionAnswerDisplay();
	void UpdateValidDisplay();
	void UpdateSelectionCountText();
	void HandlePlayerRequestToggleChoice(int Index);
	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination);
	void UpdateEntryBoxContents();
	void GetDefaultInitialChoiceIndex(int* Index);
	void GetDefaultFocusedWidgetPostDummy(EUINavigation Navigation, class UWidget** Widget);
	struct FText GetSubtitleText();
	void HandlePlayerRequestAnswer(TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer>* AnswerChoices);
	class UWidget* GetDefaultFocusedWidget();
	void Construct();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleQuestionChanged();
	void HandleButtonClicked(int ButtonIndex);
	void HandleFocusChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

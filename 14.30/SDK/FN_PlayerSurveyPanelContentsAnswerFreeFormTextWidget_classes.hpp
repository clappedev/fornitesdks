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

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// 0x0048 (0x0368 - 0x0320)
class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C : public UFortPlayerSurveyFreeFormTextAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*                   EntryTextBox;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            LimitsTextBlock;                                          // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIgnoreAnswerChange;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FText                                       Text_Subtitle;                                            // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommonTextStyle*                            LimitsStyle_Normal;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            LimitsStyle_Overflow;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
		
		return ptr;
	}


	struct FText GetSubtitleText();
	void UpdateLimitsText();
	class UWidget* GetDefaultFocusedWidget();
	void HandlePlayerEnterAnswer(const struct FString& AnswerString);
	void UpdateHintText();
	void UpdateEntryText();
	void Construct();
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void HandleCommitCurrentAnswer();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

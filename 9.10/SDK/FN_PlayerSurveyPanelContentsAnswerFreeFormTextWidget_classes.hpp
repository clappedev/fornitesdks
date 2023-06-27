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

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// 0x0048 (0x0298 - 0x0250)
class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C : public UFortPlayerSurveyFreeFormTextAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*                   EntryTextBox;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            LimitsTextBlock;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIgnoreAnswerChange;                                      // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FText                                       Text_Subtitle;                                            // 0x0270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      LimitsStyle_Normal;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LimitsStyle_Overflow;                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
		return ptr;
	}


	struct FText GetSubtitleText();
	void UpdateLimitsText();
	class UWidget* GetDefaultFocusedWidget();
	void HandlePlayerEnterAnswer(struct FString AnswerString);
	void UpdateHintText();
	void UpdateEntryText();
	void Construct();
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent(struct FText Text);
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo);
	void HandleCommitCurrentAnswer();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

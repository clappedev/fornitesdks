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

// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
// 0x0078 (0x02B8 - 0x0240)
class UPlayerSurveyPanelAnswerSelectorWidget_C : public UFortPlayerSurveyQuestionDisplayWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                                     EmptyWidget;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       Switcher;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UFortPlayerSurveyAnswerWidgetBase*> SwitcherWidgets;                                          // 0x0258(0x0050) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class UFortPlayerSurveyAnswerWidgetBase*           CurrentChild;                                             // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFortPlayerSurveyAnswerWidgetDataTable*      AnswerWidgetTable;                                        // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C");
		return ptr;
	}


	void GetCurrentQuestion(class UFortPlayerSurveyQuestion** Question);
	void PropagateCurrentQuestion();
	void GetSubtitleText(struct FText* Text);
	void CommitCurrentAnswer();
	void GetDefaultFocusedWidget(class UWidget** Result);
	void SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool ForcePropagateQuestion);
	void UpdateCurrentChild(bool ForcePropagateQuestion);
	void InitSwitcherChildren();
	void InitSwitcherChildrenLoop(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, class UClass* WidgetClass);
	void Construct();
	void OnInitialized();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

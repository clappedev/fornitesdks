#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x5C (0x434 - 0x3D8)
// WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
class UFrontEnd_C : public UFortUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaFPS_C*                          AthenaFPS;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTemperature_C*                  AthenaTemperature;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_PTT;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonToggleChat;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortVoiceChannelSpeakerContainer_C*   FortVoiceChannelSpeakerContainer;                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PTT_Image;                                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxPTT;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         StartedPlayingVideo;                               // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AthenaEventVideoID;                                // 0x42C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void GetPlayerSurveyDispatcher(class UFortPlayerSurveyDispatcher** Result, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess);
	void LoadTrailer(class UFortActivatableVideoPanel* ActivatableMovieWidget, int32 VideoIndex, bool* Return_Value, bool CallFunc_LoadVideo_ReturnValue);
	void PlayTrailer(int32 VideoIndex, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadTrailer_Return_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default);
	void SetOverlayTitleBarVisibility(bool Visible);
	void SetChatWidgetVisibility(bool Visible, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* CallFunc_PopWidget_ReturnValue);
	void HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1);
	void Finished_74C01B50486C9D234AEBBB83F5C50040();
	void Finished_10D32F9F43CC39E50616E5BD00C13DDE();
	void OnEventEnded_A90920F14C278A03D30D3299F0DD7057(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_A90920F14C278A03D30D3299F0DD7057(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventActive_A90920F14C278A03D30D3299F0DD7057(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void Construct();
	void Loading_Screen_Changed(bool IsVisible);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void On_Can_PTT();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void On_Social_Import_Closed();
	void OnMovieFinished();
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void On_Crossplay_Widget_Closed_1();
	void GoToSleep();
	void RockyRidge();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EPTTState Temp_byte_Variable, enum class EPTTState Temp_byte_Variable_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPTTState CallFunc_GetPTTState_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, enum class EPTTState CallFunc_GetPTTState_ReturnValue_1, bool CallFunc_ShouldShowSocialImport_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6, enum class ESubGame CallFunc_GetSubGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_7, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAsyncAction_WaitForScriptedActions* CallFunc_WaitForScriptedAction_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, enum class EPTTState Temp_byte_Variable_4, bool K2Node_CustomEvent_IsVisible, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, enum class EPTTState Temp_byte_Variable_5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_8, class UClass* Temp_class_Variable, enum class EPTTState CallFunc_GetPTTState_ReturnValue_2, class UClass* Temp_class_Variable_1, enum class EPTTState K2Node_Select_Default, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_1, enum class EFortUIState K2Node_Event_PreviousUIState, class UClass* K2Node_Select_Default_2, bool CallFunc_CheckForGifts_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, bool CallFunc_NeedSeeTrailerMovie_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, bool CallFunc_ShowInitialCrossplayDialog_ReturnValue, class UFortPlayerSurveyDispatcher* CallFunc_GetPlayerSurveyDispatcher_Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys* CallFunc_DisplaySurveys_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ShowInitialCrossplayDialog_ReturnValue_1, bool CallFunc_AttemptToOpenBattlePassTabForNewSeason_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_9, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

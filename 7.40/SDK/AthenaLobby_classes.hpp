#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x150 (0x530 - 0x3E0)
// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialImportButton_C*                 Button_SocialImport;                               // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonGamepadSelect;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestsPanel_C*                   DailyQuestsPanel;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmergencyNoticeWidget_C*              EmergencyNoticeWidget;                             // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendLinkButton_C*                   FriendLinkButton;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchmakingRegionAndPool_C*           MatchmakingRegion;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPCB_InfoPannel_C*                     PCB_InfoPannel;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPendingAccountMergeNotification_C*    PendingAccountMergeNotification;                   // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                  PlayerEmblemAndXp;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanel_C*             PlayerPanel;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaFrontEndRadialPicker_C*         RadialPicker;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ShadowPlayHighlights;                              // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                   StoreToastWidget;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputCancel;                                       // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SwitcherDetailsActiveIndex;                        // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortTeamMemberInfo>           TeamMembersInfo;                                   // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        HoveredPlayerIndex;                                // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   InputScroll;                                       // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SelectedPlayerIndex;                               // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NavigationOrderToPlayerIndex;                      // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                   InputNews;                                         // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputCustomMatchmaking;                            // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaNewsModal_C*                    NewsModal;                                         // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHeadlessReminder_C*             HeadlessReminder;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                        SpawnedPartyFinder;                                // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDpadUpKeyIsDown;                                  // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   InputEmote;                                        // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UStoreToastRequest*                    StoreToastRequest;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TryShowToast;                                      // 0x508(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        HoveredPlayerIndex_0;                              // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialPanel_C*                        SpawnedSocialPanel;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputAction_InspectChallenges;                     // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobby_C");
		return Clss;
	}

	void ConfigureGenericLinkButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, class FText Temp_text_Variable, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableLobbyGenericLinkButton_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select1_Default);
	void OnKeybindsChanged();
	void CloseEmotePicker(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void HandleOnPlayerLeaveUpdatePlayerPanel(int32 PlayerIndex, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RefreshAllPlayerHeroes(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnInputEmote(bool* PassThrough, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void HighlightsCountChanged(int32 NewParam, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void ShowModalNews(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaNewsModal_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnInputNews(bool* bPassThrough);
	void IsLocalPlayer(int32 PlayerIndex, bool* IsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void OnSelect(int32 PlayerIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess2, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldShowExternalFriendsUI_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CanNavigatePlayers(bool* bCanNavigatePlayers, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHoveredPlayer(int32 PlayerIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanNavigatePlayers_bCanNavigatePlayers);
	void HoverNextPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void HoverPreviousPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void ShouldAddPlay(bool* bShouldAdd, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
	void OnLobbyPlayerPadUnhovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLobbyPlayerPadHovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void OnLobbyPlayerGadgetsClicked(int32 PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int32 PlayerIndex);
	void OnLobbyDisconnected(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_ShouldAddCancel_bShouldAdd, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_OnInputCancel_bCommited, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd, bool CallFunc_IsVisible_ReturnValue);
	void RefreshInput(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_ShouldAddScroll_bShouldAdd, enum class ESlateVisibility K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default, bool CallFunc_ShouldAddCancel_bShouldAdd1, enum class EInputActionState K2Node_Select2_Default);
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(bool Register, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue10, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue11);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnInputCancel(bool* bCommited, bool CallFunc_IsVisible_ReturnValue);
	void RefreshPlayerHeroes(int32 UpdatedPlayerIndex, int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, const struct FDisplayManagerVariantData& CallFunc_GetVariantDataForMemberIndex_ReturnValue);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 EmptySlot, bool CallFunc_IsActivated_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_IsActivated_ReturnValue);
	void Refresh(int32 UpdatedPlayerIndex);
	void Initialize(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue);
	void DialogResult_156754AE468EF93DCA2009A412591BA7(enum class EFortDialogResult Result, class FName ResultName);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayerClicked(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Event_Abandon();
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void Construct();
	void OnActivated();
	void OnNavigationUp();
	void Destruct();
	void ShowDailyNews();
	void AcceptPartySuggestion();
	void Tester();
	void ShowMobileAutoFireScreen();
	void OnDeactivated();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void AttemptToShowToast();
	void TryToastAgainNextFrame();
	void ClosePlayerPanel();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void OnPlaylistChanged(enum class EFortLobbyType LobbyType);
	void LoadLobbyBackground();
	void Load_Lobby_Background_Recursive();
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortPickerContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class EFortLobbyType Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable1, enum class EFrontEndCamera Temp_byte_Variable2, enum class EFrontEndCamera Temp_byte_Variable3, enum class EFortLobbyType Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, int32 K2Node_Event_PlayerIndex2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue6, int32 K2Node_Event_PlayerIndex1, int32 K2Node_Event_PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, const struct FMargin& K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue8, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue9, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class UStoreToastRequest* K2Node_Event_StoreUpdatedRequest, bool Temp_bool_Has_Been_Initd_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue10, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue11, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsVisible_ReturnValue1, bool CallFunc_IsVisible_ReturnValue2, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End2, bool K2Node_DynamicCast_bSuccess3, enum class EFortLobbyType K2Node_Event_LobbyType, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_ShouldDisplayPCBData_ReturnValue, class UAthenaMatchmakingPlay_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play, bool K2Node_DynamicCast_bSuccess4, enum class EFortDialogResult Temp_byte_Variable8, bool K2Node_SwitchEnum1_CmpSuccess, class FName Temp_name_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, enum class EFrontEndCamera K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

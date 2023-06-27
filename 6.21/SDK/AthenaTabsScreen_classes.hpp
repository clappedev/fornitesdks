#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE0 (0x480 - 0x3A0)
// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
class UAthenaTabsScreen_C : public UFortAthenaTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroTabLabel;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentTab;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                     FriendInviteBang;                                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMainTabBar;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxContainer;                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LargeMenuButton;                                   // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MainMenuButton;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonContainer;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayContent;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySocial;                                     // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZoneContent;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxMenu;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxSocial;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTabLabel;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxVbucks;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Social;                                            // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TopTabContentWidgetSwitcher;                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  LastActiveTabId;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnclaimedResearchBangThreshold;                    // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UnclaimedResearchPointsHandle;                     // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 HotfixDisableArray;                                // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCommonButton*>                 HotfixButtonArray;                                 // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTabsScreen_C");
		return Clss;
	}

	void SetTopBar(class UTopBar_C* InTopbar);
	void HandleTabSelected(class FName TabName, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UClass* Temp_class_Variable, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class UClass* Temp_class_Variable1, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, class UClass* K2Node_Select_Default);
	void Construct();
	void OnActivated();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnDeactivated();
	void HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget);
	void BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void DisableTabsHotfixedOffTabs(class FName TabId, class UCommonButton* NewParam);
	void ShowReplayBrowser();
	void BndEvt__LargeMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetActiveInvitesCount(int32 NewActiveInvitesCount);
	void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);
	void ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName K2Node_ComponentBoundEvent_TabId, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, TArray<class FString>& K2Node_MakeArray_Array, class FName K2Node_CustomEvent_TabId1, class UCommonUserWidget* K2Node_CustomEvent_TabWidget, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFortTabListRegistrationInfo& CallFunc_GetPreregisteredTabInfo_OutTabInfo, bool CallFunc_GetPreregisteredTabInfo_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess2, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List1, bool K2Node_DynamicCast_bSuccess3, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List2, bool K2Node_DynamicCast_bSuccess4, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List3, bool K2Node_DynamicCast_bSuccess5, class FName K2Node_CustomEvent_TabId, class UCommonButton* K2Node_CustomEvent_NewParam, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UCareerScreen_C* K2Node_DynamicCast_AsCareer_Screen, bool K2Node_DynamicCast_bSuccess6, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<struct FRuntimeOptionTabStateInfo>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRuntimeOptionTabStateInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanShowLeaderboards_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class UCommonButton* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Array_Get_Item2, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Event_NewActiveInvitesCount, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Event_NewOnlineFriendsCount, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x158 (0x608 - 0x4B0)
// WidgetBlueprintGeneratedClass AthenaSeasonTab.AthenaSeasonTab_C
class UAthenaSeasonTab_C : public USeasonPassScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemInfoHeaderFade;                                // 0x4B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonBPTrackerWidget_C*        AthenaSeasonBPTrackerWidget;                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundGradient;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border_SaleInfo;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentPageNumber;                                 // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              FramingWidget;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeaderWidget;                              // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LeftSeasonPanel;                                   // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LevelPageWidgetSwitcher;                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainViewItemInfoOverlay;                           // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OutOfSeasonSwitcher;                               // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PageLeftBtn;                                       // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PageRightBtn;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PassCompleted;                                     // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PassNotOwned;                                      // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PassOwned;                                         // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PurchaseBattlePassText;                            // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseLevelBtn;                                  // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PurchaseLevelDescription;                          // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseSeasonBtn;                                 // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              SeasonCountdown;                                   // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonHeadingTextLabel;                            // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNameSmall;                                   // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SeasonPassOwnedSwitcher;                           // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonVariantUnlockCondition;                      // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                       SwipePanel;                                        // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_ExclusiveText;                                   // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalPageNumber;                                   // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VariantSetInfoBlock;                               // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VariantUnlockPreviewSet;                           // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSeasonPageWidget_C*             CurrentPage;                                       // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotNavigateToFirstLevel;                         // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5578[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Input_ShowAbout;                                   // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_Purchase;                                    // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5579[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTranslationAmount;                              // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TouchTranslationPercent;                           // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TranslationDecayRate;                              // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ReplayCinematic;                             // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          DetailsTimer;                                      // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             LastViewVaultItem;                                 // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSeasonTab_C");
		return Clss;
	}

	void UpdateSeasonPurchaseStateNoTransition();
	class UWidget* GetWidgetForFramingViewedItem();
	void PlaySeasonCinematic(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UActivatableMovieWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadVideo_ReturnValue);
	void Handle_ReplayCinematic(bool* PassThrough);
	void UpdateLevelPageWidgetSwitcherTranslation(float CallFunc_FClamp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void OnUpdateInputType(enum class ECommonInputType NewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OpenPurchaseScreen(bool CallFunc_IsMobileGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UAthenaSeasonItemDefinition* CallFunc_GetCurrentSeasonDefinition_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBattlePassDirectAcquisitionScreen_C* CallFunc_Create_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue3, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Handle_GiftBattlePass(bool* PassThrough);
	void Handle_ShowAbout(bool* PassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaSeasonAboutWidget_C* CallFunc_Create_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess);
	void UpdatePageCount(int32 ActiveIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1);
	void UpdateSeasonPurchaseState(const struct FDateTime& CallFunc_GetSeasonEndDate_ReturnValue, bool CallFunc_PurchaseAvailible_ReturnValue, int32 CallFunc_GetSeasonPassLevel_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OwnsSeasonPass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupViewedItemData(class UFortItem* Item, int32 CallFunc_GetNumInStack_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetItemQuantityPairToRepresent_ReturnValue, bool CallFunc_HasValidItemDefinition_HasValidDescription, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1);
	void SelectPageByLevel(int32 TargetLevel, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class USeasonPassPageWidget* K2Node_DynamicCast_AsSeason_Pass_Page_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_ContainsLevel_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	TArray<class USeasonPassLevelWidget*> GenerateLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class USeasonPassLevelWidget*>& CallFunc_AddLevelWidgets_LevelWidgets, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonPageWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFull_Full, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void OnNavigateToLevel(int32 Level);
	void OnSeasonPassChanged();
	void BndEvt__PurchaseSeasonBtn_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnLevelsGenerated();
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandlePageLeft();
	void HandlePageRight();
	void BndEvt__LevelPageWidgetSwitcher_K2Node_ComponentBoundEvent_1_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__PurchaseLevelBtn_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ScrollPositive();
	void ScrollNegative();
	void UpdateStoreHasStarsNotification(bool bShowNotification);
	void SetupInput();
	void OnFAQStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason StateReason);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_103_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_118_OnFortSwipeEvent__DelegateSignature();
	void OnNoCurrentSeason();
	void OnSetGiftability(bool bIsGiftable);
	void Season_Variant_Preview_Info_Updated();
	void OnAddedToActivationStack();
	void ExecuteUbergraph_AthenaSeasonTab(int32 EntryPoint, int32 K2Node_Event_Level, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetSeasonPassLevel_ReturnValue, class UAthenaSeasonPageWidget_C* K2Node_DynamicCast_AsAthena_Season_Page_Widget, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetFirstLevel_FirstLevel, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UAthenaSeasonLevelConfirmationScreen_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetSeasonPassLevel_ReturnValue1, int32 CallFunc_GetSeasonPassLevel_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, class UFortSeasonPassLevelInfo* CallFunc_GetLevelInfo_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, enum class EInputActionState Temp_byte_Variable2, const struct FUnlockableVariantPreviewInfo& CallFunc_GetSeasonTabVariantPreviewInfo_ReturnValue, TMap<int32, class UFortSeasonPassLevelInfo*> CallFunc_GetAllLevelInfos_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetSeasonPassLevelMax_ReturnValue, bool K2Node_Event_bShowNotification, enum class EInputActionState Temp_byte_Variable3, bool Temp_bool_Variable1, enum class EFortUIFeature K2Node_CustomEvent_ChangedFeature, enum class EFortUIFeatureState K2Node_CustomEvent_NewState, enum class EFortUIFeatureStateReason K2Node_CustomEvent_StateReason, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsActivated_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UWidget* CallFunc_GetActiveWidget_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UAthenaSeasonPageWidget_C* K2Node_DynamicCast_AsAthena_Season_Page_Widget1, bool K2Node_DynamicCast_bSuccess1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue4, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue5, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue6, enum class ESlateVisibility Temp_byte_Variable4, class UAthenaSeasonItemDefinition* CallFunc_GetCurrentSeasonDefinition_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetSwipeInfo_OutIndex, const struct FVector2D& CallFunc_GetSwipeInfo_OutSwipePercentage, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetShowReplayTrailerButton_Athena_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue1, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue1, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_bIsGiftable, enum class EInputActionState K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_ShouldOpenAboutScreen_ReturnValue, bool CallFunc_Handle_ShowAbout_Passthrough);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

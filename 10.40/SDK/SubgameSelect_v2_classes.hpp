#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1B3 (0x4CB - 0x318)
// WidgetBlueprintGeneratedClass SubgameSelect_v2.SubgameSelect_v2_C
class USubgameSelect_v2_C : public UFortSubGameSelectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      V2_Outro;                                          // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SelectModeIdle;                                    // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      V2_Intro;                                          // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutBGImage;                                    // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInBGImage;                                     // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowCreativeImage;                                 // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SaleANIM;                                          // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Button_Shine;                                      // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1P2;                                          // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P1;                                            // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Pan_P2;                                            // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ContractSeperator;                                 // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ToggleCycle;                                       // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ExpandSeperator;                                   // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DescriptionIntro;                                  // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitchMaterial;                                    // 0x3A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USubgameOptionButton_C*                BattleRoyaleTile;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BGImage;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonBack;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPurchase;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRedeem;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleProfileWidget_C*               ConsoleProfileWidget;                              // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubgameOptionButton_C*                CreativeTile;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IdlePulse;                                   // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubgameOptionButton_C*                SaveTheWorldTile;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpeedLines;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpinnerImage;                                      // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherMenu;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Description;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      TitleImage;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PveRotatorIndex;                                   // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubGameSelectRotatorItems>    Items;                                             // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class ESubGame                          SelectedSubgame;                                   // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortSubgameSelectOption, class UTexture2D*> SubGameCMSTexture;                                 // 0x460(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShouldStartOnSTWUpsell;                            // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SaleDelayAnim;                                     // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShineAnimDelay;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SlideShownCampaign;                                // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownBR;                                      // 0x4C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlideShownCreative;                                // 0x4CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelect_v2_C");
		return Clss;
	}

	void AnimShineDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void AnimSaleDelay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetCMSTextureToKeyArt(enum class EFortSubgameSelectOption Key, enum class EFortSubgameSelectOption Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName K2Node_Select_Default, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShowUpsell(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
	void InitializeRedeemButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitializeShortDescriptions(class FText ShortDescription);
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void Update(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void AdvanceRotator(int32 CallFunc_Array_Length_ReturnValue, const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetKeyArtForMainMenu(const struct FSubGameSelectRotatorItems& CallFunc_Array_Get_Item);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SafeSetSubGame(enum class ESubGame SubGame, bool CallFunc_InstallAllOnDemandChunks_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetDescriptionForSubGame(enum class EFortSubgameSelectOption SubGame, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGameBySubGameSelectOption_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void DialogResult_7EC32B25493920B99C7CF79EFDA28EB7(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_332144D14BEB8E8CF33D23B1E41D9870(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_1A2E7C4A4105C9DABC5FBA893C0E9939(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_60E26A51407B9D65CE40D19A874C53B1(enum class EFortDialogResult Result, class FName ResultName);
	void CustomEvent_2();
	void OnRealMoneyPurchaseComleteHandler(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void Destruct();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowMinorShutdownMessage(bool bIsCampaign);
	void HandleMinorWarning_Campaign();
	void HandleMinorWarning_Athena();
	void BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_68_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRedeemCodeComplete();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnSubGameImageLoadedFromCMS(enum class EFortSubgameSelectOption SubGameOption, class UTexture2D* Image);
	void CustomEvent_1();
	void TryShowUpsellDireclty();
	void CustomEvent_0(enum class EMatchmakingCompleteResult Result);
	void Clear_Party_and_Matchmaking_Delegates();
	void Try_And_Remove_The_Dialog();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void Construct();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Show_Busy_If_Async_Tasks_Still_Pending();
	void SwapBGImage();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CreativeTile_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CreativeTile_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SaveTheWorldSelected();
	void BattleRoyaleSelected();
	void CreativeSelected();
	void ExecuteUbergraph_SubgameSelect_v2(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result_3, class FName K2Node_CustomEvent_ResultName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EFortDialogResult K2Node_CustomEvent_Result_2, class FName K2Node_CustomEvent_ResultName_1, class FName Temp_name_Variable_1, enum class EFortDialogResult Temp_byte_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable_2, enum class EFortDialogResult Temp_byte_Variable_2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue_2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, enum class ESubGameAccessReason CallFunc_GetAccessReason_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, class UCMSContext* CallFunc_GetContext_ReturnValue_5, const struct FSubgameScreenSource& CallFunc_GetLatestSubgameInfo_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6, class FText CallFunc_GetPlatformDisplayName_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetAccountGameplayRestrictionText_ReturnValue, bool K2Node_CustomEvent_bSuccess, TArray<struct FPurchasedItemInfo>& K2Node_CustomEvent_PurchasedItems, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsBusyMatchmaking_ReturnValue, bool CallFunc_IsBusyMatchmaking_ReturnValue_1, enum class EFortDialogResult Temp_byte_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_9, enum class EFortDialogResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ResultName_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled, bool K2Node_CustomEvent_bIsCampaign, bool CallFunc_IsMinorShutdownWarningEnabled_Enabled_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, bool CallFunc_CheckRewardRate_ReturnValue, enum class EFortSubgameSelectOption K2Node_Event_SubGameOption, class UTexture2D* K2Node_Event_Image, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_9, class UFortMcpContext* CallFunc_GetContext_ReturnValue_10, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, class UStoreMain_Root_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_11, class UProgressModalWidget_C* CallFunc_Create_ReturnValue_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_12, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_10, bool CallFunc_IsAnimationPlaying_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_11, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_13, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_CanPlay_DenialReason_1, bool CallFunc_CanPlay_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

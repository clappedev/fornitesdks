#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FortniteUI.FortItemCardBase.PortBrushSize
struct UFortItemCardBase_PortBrushSize_Params
{
};

// Function FortniteUI.AthenaMatchReadyDesktopPopup.UserDismissedDialog
struct UAthenaMatchReadyDesktopPopup_UserDismissedDialog_Params
{
};

// Function FortniteUI.FortAccountStatsContext.CanShowAccountStats
struct UFortAccountStatsContext_CanShowAccountStats_Params
{
};

// Function FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged
struct UFortAccountWidgetBase_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo                      Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged
struct UFortAccountWidgetBase_HandleCurrentlyViewedAccountInfoChanged_Params
{
};

// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonReward
struct UFortAccountWidgetBase_GetNextSeasonReward_Params
{
};

// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward
struct UFortAccountWidgetBase_GetNextSeasonChaseReward_Params
{
};

// Function FortniteUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
struct UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortAbilitySystemContext.RegisterForAttributeChanged
struct UFortAbilitySystemContext_RegisterForAttributeChanged_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortTabButtonInterface.SetTabLabelInfo
struct UFortTabButtonInterface_SetTabLabelInfo_Params
{
};

// Function FortniteUI.FortDailyRewards.TryGetDailyRewardsData
struct UFortDailyRewards_TryGetDailyRewardsData_Params
{
};

// Function FortniteUI.FortDailyRewards.SetupDailyRewards
struct UFortDailyRewards_SetupDailyRewards_Params
{
};

// Function FortniteUI.FortDailyRewards.FinishedClaiming
struct UFortDailyRewards_FinishedClaiming_Params
{
};

// Function FortniteUI.FortDailyRewards.ClaimResultReceived
struct UFortDailyRewards_ClaimResultReceived_Params
{
};

// Function FortniteUI.FortOptionsMenu.UpdateEula
struct UFortOptionsMenu_UpdateEula_Params
{
};

// Function FortniteUI.FortOptionsMenu.ShowVideoOptions
struct UFortOptionsMenu_ShowVideoOptions_Params
{
};

// Function FortniteUI.FortOptionsMenu.ShowInputOptions
struct UFortOptionsMenu_ShowInputOptions_Params
{
};

// Function FortniteUI.FortOptionsMenu.ShowGameOptions
struct UFortOptionsMenu_ShowGameOptions_Params
{
};

// Function FortniteUI.FortOptionsMenu.ShowControllerOptions
struct UFortOptionsMenu_ShowControllerOptions_Params
{
};

// Function FortniteUI.FortOptionsMenu.ResetGameOptionsSettings
struct UFortOptionsMenu_ResetGameOptionsSettings_Params
{
};

// Function FortniteUI.FortOptionsMenu.ResetClientHUDSettings
struct UFortOptionsMenu_ResetClientHUDSettings_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnVideoAccept
struct UFortOptionsMenu_OnVideoAccept_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnResetToDefaults
struct UFortOptionsMenu_OnResetToDefaults_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnReset
struct UFortOptionsMenu_OnReset_Params
{
};

// Function FortniteUI.FortOptionsMenu.OnApply
struct UFortOptionsMenu_OnApply_Params
{
};

// Function FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation
struct UFortOptionsMenu_NeedsVideoChangeConfirmation_Params
{
};

// Function FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation
struct UFortOptionsMenu_NeedsLanguageChangeConfirmation_Params
{
};

// Function FortniteUI.FortOptionsMenu.HandleSettingsErrorMessageClosed
struct UFortOptionsMenu_HandleSettingsErrorMessageClosed_Params
{
};

// Function FortniteUI.FortOptionsMenu.HandleBenchmarkComplete
struct UFortOptionsMenu_HandleBenchmarkComplete_Params
{
};

// Function FortniteUI.FortFrontendInventoryFilterFunctionLibrary.ToText
struct UFortFrontendInventoryFilterFunctionLibrary_ToText_Params
{
};

// Function FortniteUI.FortCheatMenuFactory.AddStoreCheatMenu
struct UFortCheatMenuFactory_AddStoreCheatMenu_Params
{
	class UCommonUserWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortCheatMenuFactory.AddGrantCheatMenu
struct UFortCheatMenuFactory_AddGrantCheatMenu_Params
{
	class UCommonUserWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionExpiresWidget.SetData
struct UFortExpeditionExpiresWidget_SetData_Params
{
};

// Function FortniteUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
struct UFortExpeditionExpiresWidget_OnExpeditionExpirationUpdated_Params
{
};

// Function FortniteUI.FortExpeditionListItemWidget.OnItemChanged
struct UFortExpeditionListItemWidget_OnItemChanged_Params
{
};

// Function FortniteUI.FortExpeditionPickVehicleWidget.SetData
struct UFortExpeditionPickVehicleWidget_SetData_Params
{
};

// Function FortniteUI.FortExpeditionReturnsWidget.SetData
struct UFortExpeditionReturnsWidget_SetData_Params
{
};

// Function FortniteUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
struct UFortExpeditionReturnsWidget_OnExpeditionInProgressUpdated_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
struct UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.IsSquadOnExpedition
struct UFortExpeditionUtilities_IsSquadOnExpedition_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
struct UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
struct UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
struct UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortExpeditionUtilities.GetMatchedCriteriaTags
struct UFortExpeditionUtilities_GetMatchedCriteriaTags_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
struct UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadPower
struct UFortExpeditionUtilities_GetExpeditionSquadPower_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
struct UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.CalculateTotalPower
struct UFortExpeditionUtilities_CalculateTotalPower_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
struct UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
struct UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.AreExpeditionsUnlocked
struct UFortExpeditionUtilities_AreExpeditionsUnlocked_Params
{
};

// Function FortniteUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
struct UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHeroNotificationHandler.OnFortItemUpdated
struct UFortHeroNotificationHandler_OnFortItemUpdated_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.TryGetHomebaseNodeState
struct UFortHomebaseNodeItemUtilities_TryGetHomebaseNodeState_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen
struct UFortHomebaseNodeItemUtilities_IsSquadSlotUnseen_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer
struct UFortHomebaseNodeItemUtilities_IsHomebaseNodeItemUnseenForTagContainer_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodePageNames
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodePageNames_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItems
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItems_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemNameForTagContainer_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForTagContainer_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForSquadSlot_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItem
struct UFortHomebaseNodeItemUtilities_GetHomebaseNodeItem_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadType_Params
{
};

// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId
struct UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadId_Params
{
};

// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayOutroTransitionBP
struct UFortSkillTreeCanvasEntityInterface_PlayOutroTransitionBP_Params
{
};

// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayIntroTransitionBP
struct UFortSkillTreeCanvasEntityInterface_PlayIntroTransitionBP_Params
{
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.UpdateMessaging
struct UAthenaHUDGamePhaseChangingBase_UpdateMessaging_Params
{
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_HandleGamePhaseStepChanged_Params
{
};

// Function FortniteUI.AthenaHUDGamePhaseChangingBase.GamePhaseStepChanged
struct UAthenaHUDGamePhaseChangingBase_GamePhaseStepChanged_Params
{
};

// Function FortniteUI.FortHUDObjectiveSizeInterface.GetHeightEstimate
struct UFortHUDObjectiveSizeInterface_GetHeightEstimate_Params
{
};

// Function FortniteUI.FortReticle.OnWeaponEquipped
struct UFortReticle_OnWeaponEquipped_Params
{
};

// Function FortniteUI.FortReticle.OnReticleColorChanged
struct UFortReticle_OnReticleColorChanged_Params
{
};

// Function FortniteUI.FortReticle.OnPawnSet
struct UFortReticle_OnPawnSet_Params
{
};

// Function FortniteUI.FortReticle.OnContextualReticleChanged
struct UFortReticle_OnContextualReticleChanged_Params
{
};

// Function FortniteUI.FortItemCardUtilities.GetCardDimensions
struct UFortItemCardUtilities_GetCardDimensions_Params
{
	EFortItemType                                      ItemType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
struct UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
struct UFortSquadSlotItemDetailElementWidget_HandlePostDifferentSquadSlotSetBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
struct UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortOutpostStorageItemPicker.UseFilters
struct UFortOutpostStorageItemPicker_UseFilters_Params
{
};

// Function FortniteUI.FortOutpostStorageItemPicker.UseFilter
struct UFortOutpostStorageItemPicker_UseFilter_Params
{
	EFortItemType                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
struct UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params
{
};

// Function FortniteUI.FortTransformKeyPicker.RebuildTransformKeys
struct UFortTransformKeyPicker_RebuildTransformKeys_Params
{
};

// Function FortniteUI.FortTransformSlotItemPicker.RebuildSlottableItems
struct UFortTransformSlotItemPicker_RebuildSlottableItems_Params
{
};

// Function FortniteUI.AthenaInventoryFortItemTileButtonBase.HandleEquipSlotChanged
struct UAthenaInventoryFortItemTileButtonBase_HandleEquipSlotChanged_Params
{
};

// Function FortniteUI.FortDefenderItemTileButton.HandleEquipSlotChanged
struct UFortDefenderItemTileButton_HandleEquipSlotChanged_Params
{
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
struct UFortSquadSlotItemPickerTileButton_HandleSlottingRestrictionReasonsChanged_Params
{
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
struct UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params
{
};

// Function FortniteUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
struct UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params
{
};

// Function FortniteUI.FortItemTransform.ProcessPendingSeenTransformKeys
struct UFortItemTransform_ProcessPendingSeenTransformKeys_Params
{
};

// Function FortniteUI.FortItemTransform.OnRequestCloseItemPicker
struct UFortItemTransform_OnRequestCloseItemPicker_Params
{
};

// Function FortniteUI.FortJournalQuestProgressBar.HandleNewQuestObjectiveBP
struct UFortJournalQuestProgressBar_HandleNewQuestObjectiveBP_Params
{
};

// Function FortniteUI.FortJournalQuestProgressBar.GetProgressDetails
struct UFortJournalQuestProgressBar_GetProgressDetails_Params
{
};

// Function FortniteUI.FortLeaderboardContext.CanShowStats
struct UFortLeaderboardContext_CanShowStats_Params
{
};

// Function FortniteUI.FortLeaderboardContext.CanShowLeaderboards
struct UFortLeaderboardContext_CanShowLeaderboards_Params
{
};

// Function FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId
struct UFortMicIndicatorWidget_SetPlayerUniqueId_Params
{
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged
struct UFortMicIndicatorWidget_OnPlayerTalkingChanged_Params
{
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMuted
struct UFortMicIndicatorWidget_OnPlayerMuted_Params
{
};

// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable
struct UFortMicIndicatorWidget_OnPlayerMicAvailable_Params
{
};

// Function FortniteUI.FortVideoOptions.WindowModeChanged
struct UFortVideoOptions_WindowModeChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.ViewDistanceQualityChanged
struct UFortVideoOptions_ViewDistanceQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.UseVsyncChanged
struct UFortVideoOptions_UseVsyncChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.TextureQualityChanged
struct UFortVideoOptions_TextureQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.ShowGrassChanged
struct UFortVideoOptions_ShowGrassChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ShowFPSChanged
struct UFortVideoOptions_ShowFPSChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.ShadowQualityChanged
struct UFortVideoOptions_ShadowQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.ResolutionChanged
struct UFortVideoOptions_ResolutionChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.PostProcessQualityChanged
struct UFortVideoOptions_PostProcessQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.OnQualitySelectorChanged
struct UFortVideoOptions_OnQualitySelectorChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.MotionBlurChanged
struct UFortVideoOptions_MotionBlurChanged_Params
{
	bool                                               IsChecked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.IsWindowedFullscreen
struct UFortVideoOptions_IsWindowedFullscreen_Params
{
};

// Function FortniteUI.FortVideoOptions.InitializeValues
struct UFortVideoOptions_InitializeValues_Params
{
};

// Function FortniteUI.FortVideoOptions.GetViewDistanceQuality
struct UFortVideoOptions_GetViewDistanceQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetUseVsync
struct UFortVideoOptions_GetUseVsync_Params
{
};

// Function FortniteUI.FortVideoOptions.GetTextureQuality
struct UFortVideoOptions_GetTextureQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetShowGrass
struct UFortVideoOptions_GetShowGrass_Params
{
};

// Function FortniteUI.FortVideoOptions.GetShowFPS
struct UFortVideoOptions_GetShowFPS_Params
{
};

// Function FortniteUI.FortVideoOptions.GetShadowQuality
struct UFortVideoOptions_GetShadowQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetPostProcessQuality
struct UFortVideoOptions_GetPostProcessQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetPossibleWindowModes
struct UFortVideoOptions_GetPossibleWindowModes_Params
{
};

// Function FortniteUI.FortVideoOptions.GetPossibleFPS
struct UFortVideoOptions_GetPossibleFPS_Params
{
};

// Function FortniteUI.FortVideoOptions.GetPossibleDisplayResolutions
struct UFortVideoOptions_GetPossibleDisplayResolutions_Params
{
};

// Function FortniteUI.FortVideoOptions.GetMotionBlur
struct UFortVideoOptions_GetMotionBlur_Params
{
};

// Function FortniteUI.FortVideoOptions.GetEffectsQuality
struct UFortVideoOptions_GetEffectsQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetDiscreteResolutionQuality
struct UFortVideoOptions_GetDiscreteResolutionQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.GetCurrentWindowMode
struct UFortVideoOptions_GetCurrentWindowMode_Params
{
};

// Function FortniteUI.FortVideoOptions.GetCurrentFPS
struct UFortVideoOptions_GetCurrentFPS_Params
{
};

// Function FortniteUI.FortVideoOptions.GetCurrentDisplayResolution
struct UFortVideoOptions_GetCurrentDisplayResolution_Params
{
};

// Function FortniteUI.FortVideoOptions.GetAntiAliasingQuality
struct UFortVideoOptions_GetAntiAliasingQuality_Params
{
};

// Function FortniteUI.FortVideoOptions.FrameRateLimitChanged
struct UFortVideoOptions_FrameRateLimitChanged_Params
{
	int                                                FrameRateLimit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortVideoOptions.EffectsQualityChanged
struct UFortVideoOptions_EffectsQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.DiscreteResolutionQualityChanged
struct UFortVideoOptions_DiscreteResolutionQualityChanged_Params
{
};

// Function FortniteUI.FortVideoOptions.AntiAliasingQualityChanged
struct UFortVideoOptions_AntiAliasingQualityChanged_Params
{
};

// Function FortniteUI.FortQuestExpiresWidget.SetData
struct UFortQuestExpiresWidget_SetData_Params
{
};

// Function FortniteUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
struct UFortQuestExpiresWidget_OnQuestExpirationUpdated_Params
{
};

// Function FortniteUI.FortQuestScreen.ProcessPendingSeenQuestItems
struct UFortQuestScreen_ProcessPendingSeenQuestItems_Params
{
};

// Function FortniteUI.FortAudioOptions.SoundFXVolumeChanged
struct UFortAudioOptions_SoundFXVolumeChanged_Params
{
};

// Function FortniteUI.FortAudioOptions.ShowQuality
struct UFortAudioOptions_ShowQuality_Params
{
};

// Function FortniteUI.FortAudioOptions.ShowChatVolume
struct UFortAudioOptions_ShowChatVolume_Params
{
};

// Function FortniteUI.FortAudioOptions.SetVoiceChatPTTEnabled
struct UFortAudioOptions_SetVoiceChatPTTEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.SetVoiceChatEnabled
struct UFortAudioOptions_SetVoiceChatEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.SetSubtitlesEnabled
struct UFortAudioOptions_SetSubtitlesEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.SetQuality
struct UFortAudioOptions_SetQuality_Params
{
};

// Function FortniteUI.FortAudioOptions.MusicVolumeChanged
struct UFortAudioOptions_MusicVolumeChanged_Params
{
};

// Function FortniteUI.FortAudioOptions.GetVoiceChatPTTEnabled
struct UFortAudioOptions_GetVoiceChatPTTEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.GetVoiceChatEnabled
struct UFortAudioOptions_GetVoiceChatEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.GetSubtitlesEnabled
struct UFortAudioOptions_GetSubtitlesEnabled_Params
{
};

// Function FortniteUI.FortAudioOptions.GetSoundFXVolumeValue
struct UFortAudioOptions_GetSoundFXVolumeValue_Params
{
};

// Function FortniteUI.FortAudioOptions.GetQuality
struct UFortAudioOptions_GetQuality_Params
{
};

// Function FortniteUI.FortAudioOptions.GetMusicVolumeValue
struct UFortAudioOptions_GetMusicVolumeValue_Params
{
};

// Function FortniteUI.FortAudioOptions.GetDialogVolumeValue
struct UFortAudioOptions_GetDialogVolumeValue_Params
{
};

// Function FortniteUI.FortAudioOptions.GetChatVolumeValue
struct UFortAudioOptions_GetChatVolumeValue_Params
{
};

// Function FortniteUI.FortAudioOptions.DialogVolumeChanged
struct UFortAudioOptions_DialogVolumeChanged_Params
{
};

// Function FortniteUI.FortAudioOptions.ChatVolumeChanged
struct UFortAudioOptions_ChatVolumeChanged_Params
{
};

// Function FortniteUI.FortRewardEpicQuestData.GetIconBrush
struct UFortRewardEpicQuestData_GetIconBrush_Params
{
};

// Function FortniteUI.FortRewardQuestData.GetIconBrush
struct UFortRewardQuestData_GetIconBrush_Params
{
};

// Function FortniteUI.FortRewardConversationWidget.IsValidConversation
struct UFortRewardConversationWidget_IsValidConversation_Params
{
};

// Function FortniteUI.FortRewardConversationWidget.GetDataFromSentence
struct UFortRewardConversationWidget_GetDataFromSentence_Params
{
};

// Function FortniteUI.FortRewardNewQuestWidget.IsValidConversation
struct UFortRewardNewQuestWidget_IsValidConversation_Params
{
};

// Function FortniteUI.FortRewardNewQuestWidget.GetDataFromSentence
struct UFortRewardNewQuestWidget_GetDataFromSentence_Params
{
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleClearDefenderSquadDetailsBP_Params
{
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params
{
};

// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
struct UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params
{
};

// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
struct UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params
{
};

// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
struct UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params
{
};

// Function FortniteUI.FortSubGameSelectBase.GetShortDescription
struct UFortSubGameSelectBase_GetShortDescription_Params
{
};

// Function FortniteUI.FortSubGameSelectBase.GetFullDescription
struct UFortSubGameSelectBase_GetFullDescription_Params
{
};

// Function FortniteUI.FortSubGameSelectButtonBase.UpdateButtonState
struct UFortSubGameSelectButtonBase_UpdateButtonState_Params
{
};

// Function FortniteUI.FortResultsSummaryScreenWidget.GetTotalScoreSortedScoreIndices
struct UFortResultsSummaryScreenWidget_GetTotalScoreSortedScoreIndices_Params
{
};

// Function FortniteUI.FortTooltipUIContext.GetUpgradeStats
struct UFortTooltipUIContext_GetUpgradeStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetUIDataForTag
struct UFortTooltipUIContext_GetUIDataForTag_Params
{
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipStats
struct UFortTooltipUIContext_GetTooltipStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipStat
struct UFortTooltipUIContext_GetTooltipStat_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetTooltipAttributes
struct UFortTooltipUIContext_GetTooltipAttributes_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag
struct UFortTooltipUIContext_GetDisplayNameAndMultiBrushForTag_Params
{
};

// Function FortniteUI.FortTooltipUIContext.GetDescription
struct UFortTooltipUIContext_GetDescription_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetComparisonStats
struct UFortTooltipUIContext_GetComparisonStats_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortTooltipUIContext.GetCombinedDescription
struct UFortTooltipUIContext_GetCombinedDescription_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaStringOnOffer_Params
{
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaIntOnOffer_Params
{
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer
struct UFortUIBlueprintFunctionLibrary_GetMetaBoolOnOffer_Params
{
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageMultiSizeBrush_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageBrush_Params
{
	class UFortItem*                                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageMultiSizeBrush_Params
{
};

// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush
struct UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageBrush_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.UseSpecificPinataWeapon
struct UFortUIDataConfigurationContext_UseSpecificPinataWeapon_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.IsQuestVOEnabled
struct UFortUIDataConfigurationContext_IsQuestVOEnabled_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.IsLimitedToES2Features
struct UFortUIDataConfigurationContext_IsLimitedToES2Features_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.IsChatEnabled
struct UFortUIDataConfigurationContext_IsChatEnabled_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.GetFrontEndFFSettings
struct UFortUIDataConfigurationContext_GetFrontEndFFSettings_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.AreSocialFeaturesEnabled
struct UFortUIDataConfigurationContext_AreSocialFeaturesEnabled_Params
{
};

// Function FortniteUI.FortUIDataConfigurationContext.ArePartyFeaturesEnabled
struct UFortUIDataConfigurationContext_ArePartyFeaturesEnabled_Params
{
};

// Function FortniteUI.FortUIScoreReport.IsLocalPlayer
struct UFortUIScoreReport_IsLocalPlayer_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetXpToCompleteLevel
struct UFortUIScoreReport_GetXpToCompleteLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetXpInfo
struct UFortUIScoreReport_GetXpInfo_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetTeamScore
struct UFortUIScoreReport_GetTeamScore_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID
struct UFortUIScoreReport_GetScoreReportIndicesByPlayerID_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetScoreReportIndex
struct UFortUIScoreReport_GetScoreReportIndex_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetPlayerScore
struct UFortUIScoreReport_GetPlayerScore_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetPlayerName
struct UFortUIScoreReport_GetPlayerName_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex
struct UFortUIScoreReport_GetPlayerIDFromScoreReportIndex_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetPlayerCount
struct UFortUIScoreReport_GetPlayerCount_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetLevelProgress
struct UFortUIScoreReport_GetLevelProgress_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortUIScoreReport.GetDifficultBonusScore
struct UFortUIScoreReport_GetDifficultBonusScore_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier
struct UFortUIScoreReport_GetDifficultBonusMultiplier_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn
struct UFortUIScoreReport_GetCurrentPlayerPawn_Params
{
};

// Function FortniteUI.FortUIScoreReport.GetBadgeScore
struct UFortUIScoreReport_GetBadgeScore_Params
{
};

// Function FortniteUI.AthenaHUDBase.TeamMembersChanged
struct UAthenaHUDBase_TeamMembersChanged_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.StartUpdateCheck
struct UFortUIStateWidget_Login_StartUpdateCheck_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.StartManualLogin
struct UFortUIStateWidget_Login_StartManualLogin_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.StartAutoLogin
struct UFortUIStateWidget_Login_StartAutoLogin_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.ShowPostLoginLogoutError
struct UFortUIStateWidget_Login_ShowPostLoginLogoutError_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.SendEulaResponse
struct UFortUIStateWidget_Login_SendEulaResponse_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnShowLoginMessage
struct UFortUIStateWidget_Login_OnShowLoginMessage_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnPostLoginLogoutComplete
struct UFortUIStateWidget_Login_OnPostLoginLogoutComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnPatchingComplete
struct UFortUIStateWidget_Login_OnPatchingComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnNeedsPurchaseOrAccountLinking
struct UFortUIStateWidget_Login_OnNeedsPurchaseOrAccountLinking_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnLogoutComplete
struct UFortUIStateWidget_Login_OnLogoutComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnLoginSuceeded
struct UFortUIStateWidget_Login_OnLoginSuceeded_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnLoginFailed
struct UFortUIStateWidget_Login_OnLoginFailed_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnEulaAvailable
struct UFortUIStateWidget_Login_OnEulaAvailable_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.OnDisplayErrorComplete
struct UFortUIStateWidget_Login_OnDisplayErrorComplete_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.IsLoggingOut
struct UFortUIStateWidget_Login_IsLoggingOut_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.IsLoggedIn
struct UFortUIStateWidget_Login_IsLoggedIn_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.GetPlatformDisplayName
struct UFortUIStateWidget_Login_GetPlatformDisplayName_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.GetEULAText
struct UFortUIStateWidget_Login_GetEULAText_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.CheckShowLoginMessage
struct UFortUIStateWidget_Login_CheckShowLoginMessage_Params
{
};

// Function FortniteUI.FortUIStateWidget_Login.CheckNetworkError
struct UFortUIStateWidget_Login_CheckNetworkError_Params
{
};

// Function FortniteUI.FortQuestRewardChoiceWidget.SetQuest
struct UFortQuestRewardChoiceWidget_SetQuest_Params
{
	class UFortQuestItem*                              Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
struct UFortBluGloCounter_OnBluGloQuantityChanged_Params
{
};

// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
struct UFortCapturePointWidget_OnCapturePointDataChanged_Params
{
};

// Function FortniteUI.FortListItem.ToggleExpansion
struct UFortListItem_ToggleExpansion_Params
{
};

// Function FortniteUI.FortListItem.SetSelected
struct UFortListItem_SetSelected_Params
{
};

// Function FortniteUI.FortListItem.SetIndexInList
struct UFortListItem_SetIndexInList_Params
{
};

// Function FortniteUI.FortListItem.SetData
struct UFortListItem_SetData_Params
{
};

// Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked
struct UFortListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function FortniteUI.FortListItem.IsItemExpanded
struct UFortListItem_IsItemExpanded_Params
{
};

// Function FortniteUI.FortListItem.GetSelectionMode
struct UFortListItem_GetSelectionMode_Params
{
};

// Function FortniteUI.FortListItem.GetIndentLevel
struct UFortListItem_GetIndentLevel_Params
{
};

// Function FortniteUI.FortListItem.DoesItemHaveChildren
struct UFortListItem_DoesItemHaveChildren_Params
{
};

// Function FortniteUI.FortUIStateWidget.OnExitState
struct UFortUIStateWidget_OnExitState_Params
{
};

// Function FortniteUI.FortUIStateWidget.OnEnterState
struct UFortUIStateWidget_OnEnterState_Params
{
};

// Function FortniteUI.FortSocialItemWidget.SetSocialItem
struct UFortSocialItemWidget_SetSocialItem_Params
{
};

// Function FortniteUI.FortUserChoiceWidget.SetChoices
struct UFortUserChoiceWidget_SetChoices_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

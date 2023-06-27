#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FortniteGame.FortInventorySortFunctionLibrary.GetCriterionDisplayNameOfSortType
struct UFortInventorySortFunctionLibrary_GetCriterionDisplayNameOfSortType_Params
{
};

// Function FortniteGame.FortBrushSizeFunctionLibrary.ShrinkBrushSize
struct UFortBrushSizeFunctionLibrary_ShrinkBrushSize_Params
{
};

// Function FortniteGame.FortBrushSizeFunctionLibrary.GrowBrushSize
struct UFortBrushSizeFunctionLibrary_GrowBrushSize_Params
{
};

// Function FortniteGame.FortInteractInterface.ServerOnAttemptInteract
struct UFortInteractInterface_ServerOnAttemptInteract_Params
{
};

// Function FortniteGame.FortTeamActorInterface.GetTeam
struct UFortTeamActorInterface_GetTeam_Params
{
};

// Function FortniteGame.FortInitializationInterface.WorldReady
struct UFortInitializationInterface_WorldReady_Params
{
};

// Function FortniteGame.FortInitializationInterface.NeedsWorldReady
struct UFortInitializationInterface_NeedsWorldReady_Params
{
};

// Function FortniteGame.FortInitializationInterface.MatchStarted
struct UFortInitializationInterface_MatchStarted_Params
{
};

// Function FortniteGame.FortSpawnableByPlacementSystemInterface.GetMissionGuid
struct UFortSpawnableByPlacementSystemInterface_GetMissionGuid_Params
{
};

// Function FortniteGame.FortSpawnableByPlacementSystemInterface.GetMission
struct UFortSpawnableByPlacementSystemInterface_GetMission_Params
{
};

// Function FortniteGame.FortAttachToActorInterface.GetActorAttachedTo
struct UFortAttachToActorInterface_GetActorAttachedTo_Params
{
};

// Function FortniteGame.AIHotSpotSlotGenerator.GetHotSpot
struct UAIHotSpotSlotGenerator_GetHotSpot_Params
{
};

// Function FortniteGame.AIHotSpotSlotGenerator.GenerateSlots
struct UAIHotSpotSlotGenerator_GenerateSlots_Params
{
};

// Function FortniteGame.AIHotSpotSlotGenerator.AddSlot
struct UAIHotSpotSlotGenerator_AddSlot_Params
{
};

// Function FortniteGame.FortTargetSelectionInterface.GetTargetingTransform
struct UFortTargetSelectionInterface_GetTargetingTransform_Params
{
	EFortAbilityTargetingSource                        Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectDetach
struct UFortCarriedObjectHolderInterface_OnCarriedObjectDetach_Params
{
};

// Function FortniteGame.FortCarriedObjectHolderInterface.OnCarriedObjectAttach
struct UFortCarriedObjectHolderInterface_OnCarriedObjectAttach_Params
{
};

// Function FortniteGame.FortCarriedObjectHolderInterface.GetCarriedObjectAttachmentInfo
struct UFortCarriedObjectHolderInterface_GetCarriedObjectAttachmentInfo_Params
{
};

// Function FortniteGame.FortCarriedObjectHolderInterface.GetAttachmentComponent
struct UFortCarriedObjectHolderInterface_GetAttachmentComponent_Params
{
};

// Function FortniteGame.FortCarriedObjectHolderInterface.CanHoldObject
struct UFortCarriedObjectHolderInterface_CanHoldObject_Params
{
};

// Function FortniteGame.FortItemTypeFunctionLibrary.ToText
struct UFortItemTypeFunctionLibrary_ToText_Params
{
	EFortItemType                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortTooltipInterface.GetTooltip
struct UFortTooltipInterface_GetTooltip_Params
{
};

// Function FortniteGame.FortTooltipInterface.GetDisplayStats
struct UFortTooltipInterface_GetDisplayStats_Params
{
};

// Function FortniteGame.FortTooltip.SetLocalizationText
struct UFortTooltip_SetLocalizationText_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function FortniteGame.FortTooltip.SetLocalizationInt
struct UFortTooltip_SetLocalizationInt_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function FortniteGame.FortTooltip.SetLocalizationFloat
struct UFortTooltip_SetLocalizationFloat_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function FortniteGame.FortTooltip.GetValueData
struct UFortTooltip_GetValueData_Params
{
};

// Function FortniteGame.FortTooltip.GetTokenizedDescriptionText
struct UFortTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortTooltip.GetTextForToken
struct UFortTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortTooltip.GetNumericValue
struct UFortTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortTooltip.BP_GetValueData
struct UFortTooltip_BP_GetValueData_Params
{
};

// Function FortniteGame.FortTooltip.BP_GetTokenizedDescriptionText
struct UFortTooltip_BP_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortTooltip.BP_GetTextForToken
struct UFortTooltip_BP_GetTextForToken_Params
{
};

// Function FortniteGame.FortTooltip.BP_GetNumericValue
struct UFortTooltip_BP_GetNumericValue_Params
{
};

// Function FortniteGame.BuildingFOBCoreSpawnPad.GetCoreSpawnTransform
struct ABuildingFOBCoreSpawnPad_GetCoreSpawnTransform_Params
{
};

// Function FortniteGame.FortAlterationFunctionLibrary.GetAlterationImpactPhysicalSurfaceEffects
struct UFortAlterationFunctionLibrary_GetAlterationImpactPhysicalSurfaceEffects_Params
{
};

// Function FortniteGame.FortGameplayTagVolumeInterface.ApplyTags
struct UFortGameplayTagVolumeInterface_ApplyTags_Params
{
};

// Function FortniteGame.CustomCharacterPartOwnerInterface.PlayAnimationsMatchingQuery
struct UCustomCharacterPartOwnerInterface_PlayAnimationsMatchingQuery_Params
{
};

// Function FortniteGame.CustomCharacterPartOwnerInterface.GetCustomizationRootSkeletalMeshComponent
struct UCustomCharacterPartOwnerInterface_GetCustomizationRootSkeletalMeshComponent_Params
{
};

// Function FortniteGame.FortAbilitySystemUI.GetStaticGameplayEffectDescription
struct UFortAbilitySystemUI_GetStaticGameplayEffectDescription_Params
{
};

// Function FortniteGame.FortAbilitySystemUI.GetDefaultObjectOfGameplayEffectType
struct UFortAbilitySystemUI_GetDefaultObjectOfGameplayEffectType_Params
{
};

// Function FortniteGame.FortAbilityTestObserver.WasAbilityTagActivated
struct AFortAbilityTestObserver_WasAbilityTagActivated_Params
{
};

// Function FortniteGame.FortAbilityTestObserver.WasAbilityActivated
struct AFortAbilityTestObserver_WasAbilityActivated_Params
{
};

// Function FortniteGame.FortAbilityTestObserver.StopObserving
struct AFortAbilityTestObserver_StopObserving_Params
{
};

// Function FortniteGame.FortAbilityTestObserver.StartObserving
struct AFortAbilityTestObserver_StartObserving_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortAIEncounterInfoOwnerInterface.GetEncounterInfo
struct UFortAIEncounterInfoOwnerInterface_GetEncounterInfo_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetShieldRegenGameplayEffectClass
struct UFortHealthRegenInterface_GetShieldRegenGameplayEffectClass_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetShieldRegenGameplayEffect
struct UFortHealthRegenInterface_GetShieldRegenGameplayEffect_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetShieldRegenDelayGameplayEffect
struct UFortHealthRegenInterface_GetShieldRegenDelayGameplayEffect_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetHealthRegenGameplayEffectClass
struct UFortHealthRegenInterface_GetHealthRegenGameplayEffectClass_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetHealthRegenGameplayEffect
struct UFortHealthRegenInterface_GetHealthRegenGameplayEffect_Params
{
};

// Function FortniteGame.FortHealthRegenInterface.GetHealthRegenDelayGameplayEffect
struct UFortHealthRegenInterface_GetHealthRegenDelayGameplayEffect_Params
{
};

// Function FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetHealthPercentage
struct UFortHUDTargetUnderReticleInterface_GetHUDTargetHealthPercentage_Params
{
};

// Function FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayName
struct UFortHUDTargetUnderReticleInterface_GetHUDTargetDisplayName_Params
{
};

// Function FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayModifiers
struct UFortHUDTargetUnderReticleInterface_GetHUDTargetDisplayModifiers_Params
{
};

// Function FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDifficultyRating
struct UFortHUDTargetUnderReticleInterface_GetHUDTargetDifficultyRating_Params
{
};

// Function FortniteGame.FortMissionPowerPointsInterface.GetPowerPointsCost
struct UFortMissionPowerPointsInterface_GetPowerPointsCost_Params
{
};

// Function FortniteGame.FortMissionPowerPointsInterface.GetMaxRangeLerpValue
struct UFortMissionPowerPointsInterface_GetMaxRangeLerpValue_Params
{
};

// Function FortniteGame.FortMissionPowerPointsInterface.GetInitialRangeLerpValue
struct UFortMissionPowerPointsInterface_GetInitialRangeLerpValue_Params
{
};

// Function FortniteGame.FortMissionPowerPointsInterface.GetAvailabilityWeight
struct UFortMissionPowerPointsInterface_GetAvailabilityWeight_Params
{
};

// Function FortniteGame.FortPatrolWardInterface.GetAffectingType
struct UFortPatrolWardInterface_GetAffectingType_Params
{
};

// Function FortniteGame.FortPatrolWardInterface.GetAffectingDistance
struct UFortPatrolWardInterface_GetAffectingDistance_Params
{
};

// Function FortniteGame.FortAIEncounterTargetInterface.IsFloatingTarget
struct UFortAIEncounterTargetInterface_IsFloatingTarget_Params
{
};

// Function FortniteGame.FortAIEncounterTargetInterface.GetObjectiveCompletionPercentage
struct UFortAIEncounterTargetInterface_GetObjectiveCompletionPercentage_Params
{
};

// Function FortniteGame.FortAIFunctionLibrary.MakeNoiseEventAtLocation
struct UFortAIFunctionLibrary_MakeNoiseEventAtLocation_Params
{
};

// Function FortniteGame.FortAIFunctionLibrary.MakeNoiseEvent
struct UFortAIFunctionLibrary_MakeNoiseEvent_Params
{
};

// Function FortniteGame.FortAIRootAssignmentProviderInterface.GetRootAssignmentIdentifier
struct UFortAIRootAssignmentProviderInterface_GetRootAssignmentIdentifier_Params
{
};

// Function FortniteGame.FortAISpawnerInterface.OnReceiveSpawnGroup
struct UFortAISpawnerInterface_OnReceiveSpawnGroup_Params
{
};

// Function FortniteGame.FortAISpawnerInterface.IsReadyToReceiveNewSpawnGroup
struct UFortAISpawnerInterface_IsReadyToReceiveNewSpawnGroup_Params
{
};

// Function FortniteGame.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsWidth
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsWidth_Params
{
};

// Function FortniteGame.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsHeight
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsHeight_Params
{
};

// Function FortniteGame.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSSpaceBetween
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSSpaceBetween_Params
{
};

// Function FortniteGame.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSGridSize
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSGridSize_Params
{
};

// Function FortniteGame.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsCenter
struct UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsCenter_Params
{
};

// Function FortniteGame.FortClientEventInterface.BlueprintCustomHandleClientEvent
struct UFortClientEventInterface_BlueprintCustomHandleClientEvent_Params
{
};

// Function FortniteGame.FortMcpProfileAthena.SetBattleRoyaleBanner
struct UFortMcpProfileAthena_SetBattleRoyaleBanner_Params
{
};

// Function FortniteGame.FortMcpProfileAthena.ReportConsumableUsed
struct UFortMcpProfileAthena_ReportConsumableUsed_Params
{
};

// Function FortniteGame.FortMcpProfileAthena.EquipBattleRoyaleCustomization
struct UFortMcpProfileAthena_EquipBattleRoyaleCustomization_Params
{
};

// Function FortniteGame.FortMcpProfileAthena.EndBattleRoyaleGame
struct UFortMcpProfileAthena_EndBattleRoyaleGame_Params
{
};

// Function FortniteGame.FortBannerUtilities.LoadAndGetBannerLargeIconFromRowName
struct UFortBannerUtilities_LoadAndGetBannerLargeIconFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetSecondaryColor
struct UFortBannerUtilities_GetSecondaryColor_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetRowNameForBannerIconItem
struct UFortBannerUtilities_GetRowNameForBannerIconItem_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetRowNameForBannerColorItem
struct UFortBannerUtilities_GetRowNameForBannerColorItem_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetPrimaryColor
struct UFortBannerUtilities_GetPrimaryColor_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerSmallIconAssetFromRowName
struct UFortBannerUtilities_GetBannerSmallIconAssetFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerSmallIconAsset
struct UFortBannerUtilities_GetBannerSmallIconAsset_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerLargeIconAssetFromRowName
struct UFortBannerUtilities_GetBannerLargeIconAssetFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerLargeIconAsset
struct UFortBannerUtilities_GetBannerLargeIconAsset_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerIconsForCategory
struct UFortBannerUtilities_GetBannerIconsForCategory_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerIconItemFromRowName
struct UFortBannerUtilities_GetBannerIconItemFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerIconCategoryRowName
struct UFortBannerUtilities_GetBannerIconCategoryRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerIconCategoryName
struct UFortBannerUtilities_GetBannerIconCategoryName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorsForCategory
struct UFortBannerUtilities_GetBannerColorsForCategory_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorSecondaryColorFromRowName
struct UFortBannerUtilities_GetBannerColorSecondaryColorFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorSecondaryColor
struct UFortBannerUtilities_GetBannerColorSecondaryColor_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorPrimaryColorFromRowName
struct UFortBannerUtilities_GetBannerColorPrimaryColorFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorPrimaryColor
struct UFortBannerUtilities_GetBannerColorPrimaryColor_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorItemFromRowName
struct UFortBannerUtilities_GetBannerColorItemFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorFromRowName
struct UFortBannerUtilities_GetBannerColorFromRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorCategoryRowName
struct UFortBannerUtilities_GetBannerColorCategoryRowName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColorCategoryName
struct UFortBannerUtilities_GetBannerColorCategoryName_Params
{
};

// Function FortniteGame.FortBannerUtilities.GetBannerColor
struct UFortBannerUtilities_GetBannerColor_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireQuestAnalyticsEvent_BlueprintArray
struct UFortBlueprintAnalytics_FireQuestAnalyticsEvent_BlueprintArray_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireQuestAnalyticsEvent_Blueprint
struct UFortBlueprintAnalytics_FireQuestAnalyticsEvent_Blueprint_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireMissionAnalyticsEvent_BlueprintArray
struct UFortBlueprintAnalytics_FireMissionAnalyticsEvent_BlueprintArray_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireMissionAnalyticsEvent_Blueprint
struct UFortBlueprintAnalytics_FireMissionAnalyticsEvent_Blueprint_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientStatusTextChanged
struct UFortBlueprintAnalytics_FireEvent_MatchmakingClientStatusTextChanged_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientStarted
struct UFortBlueprintAnalytics_FireEvent_MatchmakingClientStarted_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientEnded
struct UFortBlueprintAnalytics_FireEvent_MatchmakingClientEnded_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireEvent_BuildLimitProgressIncremented
struct UFortBlueprintAnalytics_FireEvent_BuildLimitProgressIncremented_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireEvent_BuildLimitProgressDecremented
struct UFortBlueprintAnalytics_FireEvent_BuildLimitProgressDecremented_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireAnalyticsEvent_BlueprintArray
struct UFortBlueprintAnalytics_FireAnalyticsEvent_BlueprintArray_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.FireAnalyticsEvent_Blueprint
struct UFortBlueprintAnalytics_FireAnalyticsEvent_Blueprint_Params
{
};

// Function FortniteGame.FortBlueprintAnalytics.ConstructAnalyticsAttribute
struct UFortBlueprintAnalytics_ConstructAnalyticsAttribute_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_VinderTipPlayed
struct UFortOnboardingAnalytics_FireAnalyticsEvent_VinderTipPlayed_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialStartupFailed
struct UFortOnboardingAnalytics_FireAnalyticsEvent_TutorialStartupFailed_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCompleted
struct UFortOnboardingAnalytics_FireAnalyticsEvent_TutorialCompleted_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCanceled
struct UFortOnboardingAnalytics_FireAnalyticsEvent_TutorialCanceled_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_MineCartDestroyed
struct UFortOnboardingAnalytics_FireAnalyticsEvent_MineCartDestroyed_Params
{
};

// Function FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_CinematicSkipped
struct UFortOnboardingAnalytics_FireAnalyticsEvent_CinematicSkipped_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostSupplyDropPickedUp
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostSupplyDropPickedUp_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostLoaded
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostLoaded_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostLeaveOutpost
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostLeaveOutpost_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostDefenseStart
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostDefenseStart_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostDefenseEnd
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostDefenseEnd_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostBuildingDefended
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostBuildingDefended_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostBuildingActivated
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostBuildingActivated_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostAttackWaveStarted
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostAttackWaveStarted_Params
{
};

// Function FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostAttackWaveCompleted
struct UFortOutpostAnalytics_FireAnalyticsEvent_OutpostAttackWaveCompleted_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_Neighborhood_ConsoleOpened
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_Neighborhood_ConsoleOpened_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_WaveStarted
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_WaveStarted_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_WaveFailed
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_WaveFailed_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierStarted
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_TierStarted_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierFailed
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_TierFailed_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierCompleted
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_TierCompleted_Params
{
};

// Function FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_ConsoleOpened
struct UFortDeployableBaseAnalytics_FireAnalyticsEvent_CombatZone_ConsoleOpened_Params
{
};

// Function FortniteGame.FortTheaterCamera.SetTileFocus
struct AFortTheaterCamera_SetTileFocus_Params
{
};

// Function FortniteGame.FortTheaterCamera.LimitToTheater
struct AFortTheaterCamera_LimitToTheater_Params
{
};

// Function FortniteGame.FortClientAnnouncement_Cinematic.OnPlayerSkippedCutscene
struct AFortClientAnnouncement_Cinematic_OnPlayerSkippedCutscene_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationInterface.ShouldPlaySentence
struct UFortClientAnnouncement_ConversationInterface_ShouldPlaySentence_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationInterface.OnSentenceStarted
struct UFortClientAnnouncement_ConversationInterface_OnSentenceStarted_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationInterface.OnSentenceFinished
struct UFortClientAnnouncement_ConversationInterface_OnSentenceFinished_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationInterface.OnConversationStarted
struct UFortClientAnnouncement_ConversationInterface_OnConversationStarted_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationInterface.OnConversationFinished
struct UFortClientAnnouncement_ConversationInterface_OnConversationFinished_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.StopConversation
struct UFortClientAnnouncement_ConversationCodeInterface_StopConversation_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentenceIndex
struct UFortClientAnnouncement_ConversationCodeInterface_PlayConversationFromSentenceIndex_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentence
struct UFortClientAnnouncement_ConversationCodeInterface_PlayConversationFromSentence_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversation
struct UFortClientAnnouncement_ConversationCodeInterface_PlayConversation_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentenceIndex
struct UFortClientAnnouncement_ConversationCodeInterface_IsPlayingSentenceIndex_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentence
struct UFortClientAnnouncement_ConversationCodeInterface_IsPlayingSentence_Params
{
};

// Function FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingConversation
struct UFortClientAnnouncement_ConversationCodeInterface_IsPlayingConversation_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.WaitForContinue
struct UFortClientAnnouncement_TutorialInterface_WaitForContinue_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetVAlign
struct UFortClientAnnouncement_TutorialInterface_SetVAlign_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetTitleText
struct UFortClientAnnouncement_TutorialInterface_SetTitleText_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetSystemText
struct UFortClientAnnouncement_TutorialInterface_SetSystemText_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetPadding
struct UFortClientAnnouncement_TutorialInterface_SetPadding_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetNameText
struct UFortClientAnnouncement_TutorialInterface_SetNameText_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetLightboxEnabled
struct UFortClientAnnouncement_TutorialInterface_SetLightboxEnabled_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetLightboxDisableInputOnly
struct UFortClientAnnouncement_TutorialInterface_SetLightboxDisableInputOnly_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetHAlign
struct UFortClientAnnouncement_TutorialInterface_SetHAlign_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetDetailText
struct UFortClientAnnouncement_TutorialInterface_SetDetailText_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.SetButtonEnabled
struct UFortClientAnnouncement_TutorialInterface_SetButtonEnabled_Params
{
};

// Function FortniteGame.FortClientAnnouncement_TutorialInterface.HideTutorialWidget
struct UFortClientAnnouncement_TutorialInterface_HideTutorialWidget_Params
{
};

// Function FortniteGame.FortDateTimeLibrary.GetTimespanAsText
struct UFortDateTimeLibrary_GetTimespanAsText_Params
{
	struct FTimespan                                   Timespan;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortDateTimeLibrary.GetPlayerUtcNowMcpOffset
struct UFortDateTimeLibrary_GetPlayerUtcNowMcpOffset_Params
{
	class UFortLocalPlayer*                            LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortDateTimeLibrary.GetPlayerControllerUtcNowMcpOffset
struct UFortDateTimeLibrary_GetPlayerControllerUtcNowMcpOffset_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.UpdateDeployableBaseTierProgressionForPlayers
struct UFortDeployableBaseLibrary_UpdateDeployableBaseTierProgressionForPlayers_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.SetupDeployableBaseCombatZoneInventoriesOnPlayers
struct UFortDeployableBaseLibrary_SetupDeployableBaseCombatZoneInventoriesOnPlayers_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.SetDeployableBaseMatchJoinability
struct UFortDeployableBaseLibrary_SetDeployableBaseMatchJoinability_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.ResetDeployableBaseHordePlayerInventories
struct UFortDeployableBaseLibrary_ResetDeployableBaseHordePlayerInventories_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.OnPreHordeTierStart
struct UFortDeployableBaseLibrary_OnPreHordeTierStart_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.IsWorldItemDefValidToPersistForDeployableBasePlayerInventory
struct UFortDeployableBaseLibrary_IsWorldItemDefValidToPersistForDeployableBasePlayerInventory_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.GrantPlayersCompletedWaveRewards
struct UFortDeployableBaseLibrary_GrantPlayersCompletedWaveRewards_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.GetTieredModifierSet
struct UFortDeployableBaseLibrary_GetTieredModifierSet_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.GetPrimaryHordeMission
struct UFortDeployableBaseLibrary_GetPrimaryHordeMission_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.GetHordeTierStartStatus
struct UFortDeployableBaseLibrary_GetHordeTierStartStatus_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.GetGameDifficultyInfo
struct UFortDeployableBaseLibrary_GetGameDifficultyInfo_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.ForceRestartDeployableBasePlayers
struct UFortDeployableBaseLibrary_ForceRestartDeployableBasePlayers_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.ForceDeployableBaseHordePlayersToResetAndRespawn
struct UFortDeployableBaseLibrary_ForceDeployableBaseHordePlayersToResetAndRespawn_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.ForceClearAllDefenders
struct UFortDeployableBaseLibrary_ForceClearAllDefenders_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.BroadcastHordeTierComplete
struct UFortDeployableBaseLibrary_BroadcastHordeTierComplete_Params
{
};

// Function FortniteGame.FortDeployableBaseLibrary.ApplyTieredModifierSet
struct UFortDeployableBaseLibrary_ApplyTieredModifierSet_Params
{
};

// Function FortniteGame.FortGameModeSurvival.FireEvent_SurvivalVoteReport
struct AFortGameModeSurvival_FireEvent_SurvivalVoteReport_Params
{
};

// Function FortniteGame.FortGameModeSurvival.FireEvent_SurvivalPeriodicReport
struct AFortGameModeSurvival_FireEvent_SurvivalPeriodicReport_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.UpgradeItem
struct UFortMcpProfileAccount_UpgradeItem_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.UpdateBuildingLevelAndRating
struct UFortMcpProfileAccount_UpdateBuildingLevelAndRating_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.UnslotAllWorkers
struct UFortMcpProfileAccount_UnslotAllWorkers_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.UnloadWarehouse
struct UFortMcpProfileAccount_UnloadWarehouse_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.UnassignAllSquads
struct UFortMcpProfileAccount_UnassignAllSquads_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.TwitchUpdateBroadcasterRegistration
struct UFortMcpProfileAccount_TwitchUpdateBroadcasterRegistration_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.TransmogItem
struct UFortMcpProfileAccount_TransmogItem_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.StartPrimaryMission
struct UFortMcpProfileAccount_StartPrimaryMission_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.StartExpedition
struct UFortMcpProfileAccount_StartExpedition_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SlotItemInCollectionBook
struct UFortMcpProfileAccount_SlotItemInCollectionBook_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SkipTutorial
struct UFortMcpProfileAccount_SkipTutorial_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetMtxPlatform
struct UFortMcpProfileAccount_SetMtxPlatform_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetModeLoadout
struct UFortMcpProfileAccount_SetModeLoadout_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetItemFavoriteStatus
struct UFortMcpProfileAccount_SetItemFavoriteStatus_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetHomebaseName
struct UFortMcpProfileAccount_SetHomebaseName_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetHomebaseMeta
struct UFortMcpProfileAccount_SetHomebaseMeta_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetHomebaseBanner
struct UFortMcpProfileAccount_SetHomebaseBanner_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetHeroModeLoadout
struct UFortMcpProfileAccount_SetHeroModeLoadout_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetGameplayStats
struct UFortMcpProfileAccount_SetGameplayStats_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.SetDefaultHeroSquad
struct UFortMcpProfileAccount_SetDefaultHeroSquad_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.RefreshExpeditions
struct UFortMcpProfileAccount_RefreshExpeditions_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.RecycleItemBatch
struct UFortMcpProfileAccount_RecycleItemBatch_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.RecycleItem
struct UFortMcpProfileAccount_RecycleItem_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.PurchaseHomebaseNode
struct UFortMcpProfileAccount_PurchaseHomebaseNode_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.OpenCardPackBatch
struct UFortMcpProfileAccount_OpenCardPackBatch_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.OpenCardPack
struct UFortMcpProfileAccount_OpenCardPack_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ModifyMission
struct UFortMcpProfileAccount_ModifyMission_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.IssueFriendCode
struct UFortMcpProfileAccount_IssueFriendCode_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.IncrementNamedCounterStat
struct UFortMcpProfileAccount_IncrementNamedCounterStat_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.GetMcpTimeForLogin
struct UFortMcpProfileAccount_GetMcpTimeForLogin_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.EquipCharCosmetic
struct UFortMcpProfileAccount_EquipCharCosmetic_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.EndPrimaryMission
struct UFortMcpProfileAccount_EndPrimaryMission_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.EarnScore
struct UFortMcpProfileAccount_EarnScore_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ConvertItem
struct UFortMcpProfileAccount_ConvertItem_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ConsumeItems
struct UFortMcpProfileAccount_ConsumeItems_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.CollectExpedition
struct UFortMcpProfileAccount_CollectExpedition_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ClaimMissionAlertRewards
struct UFortMcpProfileAccount_ClaimMissionAlertRewards_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ClaimLoginReward
struct UFortMcpProfileAccount_ClaimLoginReward_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ClaimCollectionBookRewards
struct UFortMcpProfileAccount_ClaimCollectionBookRewards_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ClaimCollectedResources
struct UFortMcpProfileAccount_ClaimCollectedResources_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.AssignWorkerToSquadBatch
struct UFortMcpProfileAccount_AssignWorkerToSquadBatch_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.AssignWorkerToSquad
struct UFortMcpProfileAccount_AssignWorkerToSquad_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ApplyAlteration
struct UFortMcpProfileAccount_ApplyAlteration_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.ActivateConsumable
struct UFortMcpProfileAccount_ActivateConsumable_Params
{
};

// Function FortniteGame.FortMcpProfileAccount.AbandonExpedition
struct UFortMcpProfileAccount_AbandonExpedition_Params
{
};

// Function FortniteGame.FortMcpProfileMetadata.UpdateOutpostCore
struct UFortMcpProfileMetadata_UpdateOutpostCore_Params
{
};

// Function FortniteGame.FortMcpProfileMetadata.UpdateDeployableBaseTierProgression
struct UFortMcpProfileMetadata_UpdateDeployableBaseTierProgression_Params
{
};

// Function FortniteGame.FortMcpProfileMetadata.CreateOrUpgradeOutpostItem
struct UFortMcpProfileMetadata_CreateOrUpgradeOutpostItem_Params
{
};

// Function FortniteGame.FortMcpProfileMetadata.CreateDeployableBaseItem
struct UFortMcpProfileMetadata_CreateDeployableBaseItem_Params
{
};

// Function FortniteGame.FortPlayerControllerGameplay.SetHUDElementVisibility
struct AFortPlayerControllerGameplay_SetHUDElementVisibility_Params
{
};

// Function FortniteGame.FortPlayerControllerGameplay.ResetHUDElementVisibilityToSettings
struct AFortPlayerControllerGameplay_ResetHUDElementVisibilityToSettings_Params
{
};

// Function FortniteGame.FortPlayerControllerGameplay.RefreshHUDElementVisibilitiesToSettings
struct AFortPlayerControllerGameplay_RefreshHUDElementVisibilitiesToSettings_Params
{
};

// Function FortniteGame.FortPlayerControllerGameplay.AreHUDElementsVisible
struct AFortPlayerControllerGameplay_AreHUDElementsVisible_Params
{
};

// Function FortniteGame.FortPlayerControllerPvP.ServerAttemptSelectFOBCore
struct AFortPlayerControllerPvP_ServerAttemptSelectFOBCore_Params
{
};

// Function FortniteGame.FortPlayerControllerPvP.ClientShowGameOverWidget
struct AFortPlayerControllerPvP_ClientShowGameOverWidget_Params
{
};

// Function FortniteGame.FortPlayerControllerPvP.ClientReceiveKillNotification
struct AFortPlayerControllerPvP_ClientReceiveKillNotification_Params
{
};

// Function FortniteGame.FortGameStateChunkDownloader.OnRep_TimeOfDayManager
struct AFortGameStateChunkDownloader_OnRep_TimeOfDayManager_Params
{
};

// Function FortniteGame.FortGameStateSurvival.SetGameDifficultyRow
struct AFortGameStateSurvival_SetGameDifficultyRow_Params
{
	struct FDataTableRowHandle                         GameDifficultyInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterUnboundServer
struct UFortHomeTeleporterInterface_OnHomeTeleporterUnboundServer_Params
{
};

// Function FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterUnbound
struct UFortHomeTeleporterInterface_OnHomeTeleporterUnbound_Params
{
};

// Function FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterBoundServer
struct UFortHomeTeleporterInterface_OnHomeTeleporterBoundServer_Params
{
};

// Function FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterBound
struct UFortHomeTeleporterInterface_OnHomeTeleporterBound_Params
{
};

// Function FortniteGame.FortInitializeFromObjectInterface.InitFromObject
struct UFortInitializeFromObjectInterface_InitFromObject_Params
{
};

// Function FortniteGame.FortAlterationItem.GetAlterationDefinitionBP
struct UFortAlterationItem_GetAlterationDefinitionBP_Params
{
};

// Function FortniteGame.FortCompendiumBundle.GetPercentageComplete
struct UFortCompendiumBundle_GetPercentageComplete_Params
{
};

// Function FortniteGame.FortCompendiumBundle.GetCompendiumBundleDefinitionBP
struct UFortCompendiumBundle_GetCompendiumBundleDefinitionBP_Params
{
};

// Function FortniteGame.FortCompendiumBundle.GetAchievedCount
struct UFortCompendiumBundle_GetAchievedCount_Params
{
};

// Function FortniteGame.FortCompendiumItem.GetPercentageComplete
struct UFortCompendiumItem_GetPercentageComplete_Params
{
};

// Function FortniteGame.FortCompendiumItem.GetCompendiumDefinitionBP
struct UFortCompendiumItem_GetCompendiumDefinitionBP_Params
{
};

// Function FortniteGame.FortCompendiumItem.GetAchievedCount
struct UFortCompendiumItem_GetAchievedCount_Params
{
};

// Function FortniteGame.FortConsumableAccountItem.CanActivateOnSelf
struct UFortConsumableAccountItem_CanActivateOnSelf_Params
{
};

// Function FortniteGame.FortConsumableAccountItem.CanActivateOnOthers
struct UFortConsumableAccountItem_CanActivateOnOthers_Params
{
};

// Function FortniteGame.FortEmoteItemDefinition.GetCommandName
struct UFortEmoteItemDefinition_GetCommandName_Params
{
};

// Function FortniteGame.FortKismetLibrary.UnhideTutorialWidget
struct UFortKismetLibrary_UnhideTutorialWidget_Params
{
};

// Function FortniteGame.FortKismetLibrary.UnhideAllTutorialWidgets
struct UFortKismetLibrary_UnhideAllTutorialWidgets_Params
{
};

// Function FortniteGame.FortKismetLibrary.UnequipFortAbilitySet
struct UFortKismetLibrary_UnequipFortAbilitySet_Params
{
};

// Function FortniteGame.FortKismetLibrary.TriggerFeedbackEvent
struct UFortKismetLibrary_TriggerFeedbackEvent_Params
{
};

// Function FortniteGame.FortKismetLibrary.SwitchHeroType
struct UFortKismetLibrary_SwitchHeroType_Params
{
};

// Function FortniteGame.FortKismetLibrary.SpawnTracerFromPool
struct UFortKismetLibrary_SpawnTracerFromPool_Params
{
};

// Function FortniteGame.FortKismetLibrary.SpawnProjectile
struct UFortKismetLibrary_SpawnProjectile_Params
{
};

// Function FortniteGame.FortKismetLibrary.SpawnBuildingGameplayActor
struct UFortKismetLibrary_SpawnBuildingGameplayActor_Params
{
};

// Function FortniteGame.FortKismetLibrary.SpawnAreaOfEffectCloud
struct UFortKismetLibrary_SpawnAreaOfEffectCloud_Params
{
};

// Function FortniteGame.FortKismetLibrary.ShouldHideTutorialWidget
struct UFortKismetLibrary_ShouldHideTutorialWidget_Params
{
};

// Function FortniteGame.FortKismetLibrary.SetTimeOfDaySpeed
struct UFortKismetLibrary_SetTimeOfDaySpeed_Params
{
};

// Function FortniteGame.FortKismetLibrary.SetTimeOfDay
struct UFortKismetLibrary_SetTimeOfDay_Params
{
};

// Function FortniteGame.FortKismetLibrary.SetCanBeDamaged
struct UFortKismetLibrary_SetCanBeDamaged_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.SelectMaterialInstance
struct UFortKismetLibrary_SelectMaterialInstance_Params
{
	class UMaterialInstance*                           A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.RemoveActorsOfClassFromBuildingSMActorArray
struct UFortKismetLibrary_RemoveActorsOfClassFromBuildingSMActorArray_Params
{
};

// Function FortniteGame.FortKismetLibrary.RegisterDayTimeHitCallback
struct UFortKismetLibrary_RegisterDayTimeHitCallback_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.RegisterDayPhaseHitCallback
struct UFortKismetLibrary_RegisterDayPhaseHitCallback_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.PushOffTransformByHitLocation
struct UFortKismetLibrary_PushOffTransformByHitLocation_Params
{
};

// Function FortniteGame.FortKismetLibrary.PushOffHitLocation
struct UFortKismetLibrary_PushOffHitLocation_Params
{
};

// Function FortniteGame.FortKismetLibrary.PlayLocalForceFeedbackAtLocationMulti
struct UFortKismetLibrary_PlayLocalForceFeedbackAtLocationMulti_Params
{
};

// Function FortniteGame.FortKismetLibrary.PlayLocalForceFeedbackAtLocation
struct UFortKismetLibrary_PlayLocalForceFeedbackAtLocation_Params
{
};

// Function FortniteGame.FortKismetLibrary.PickLootDrops
struct UFortKismetLibrary_PickLootDrops_Params
{
};

// Function FortniteGame.FortKismetLibrary.OpenTalkingHead
struct UFortKismetLibrary_OpenTalkingHead_Params
{
};

// Function FortniteGame.FortKismetLibrary.OnSameTeam
struct UFortKismetLibrary_OnSameTeam_Params
{
};

// Function FortniteGame.FortKismetLibrary.NotEqual_UniqueNetIdReplUniqueNetIdRepl
struct UFortKismetLibrary_NotEqual_UniqueNetIdReplUniqueNetIdRepl_Params
{
	struct FUniqueNetIdRepl                            A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUniqueNetIdRepl                            B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortKismetLibrary.NotEqual_FFortDialogWaitingForLatentActionHandle
struct UFortKismetLibrary_NotEqual_FFortDialogWaitingForLatentActionHandle_Params
{
	struct FFortDialogExternalLatentActionHandle       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortDialogExternalLatentActionHandle       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortKismetLibrary.MakeWeaponCoreAnimation
struct UFortKismetLibrary_MakeWeaponCoreAnimation_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeResourceType
struct UFortKismetLibrary_MakeResourceType_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeMovementStyle
struct UFortKismetLibrary_MakeMovementStyle_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeGameplayEffectContainerSpecFromAbilityComponent
struct UFortKismetLibrary_MakeGameplayEffectContainerSpecFromAbilityComponent_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeGameplayEffectContainerSpecFromAbility
struct UFortKismetLibrary_MakeGameplayEffectContainerSpecFromAbility_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeDayNightPhase
struct UFortKismetLibrary_MakeDayNightPhase_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeBuildingState
struct UFortKismetLibrary_MakeBuildingState_Params
{
};

// Function FortniteGame.FortKismetLibrary.MakeAllPlayersTalkToSelf
struct UFortKismetLibrary_MakeAllPlayersTalkToSelf_Params
{
};

// Function FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorld
struct UFortKismetLibrary_K2_SpawnPickupInWorld_Params
{
};

// Function FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayer
struct UFortKismetLibrary_K2_RemoveItemFromPlayer_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.K2_RemoveItemFromAllPlayers
struct UFortKismetLibrary_K2_RemoveItemFromAllPlayers_Params
{
};

// Function FortniteGame.FortKismetLibrary.K2_GiveItemToPlayer
struct UFortKismetLibrary_K2_GiveItemToPlayer_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.K2_GiveItemToAllPlayers
struct UFortKismetLibrary_K2_GiveItemToAllPlayers_Params
{
};

// Function FortniteGame.FortKismetLibrary.K2_GetItemQuantityOnPlayer
struct UFortKismetLibrary_K2_GetItemQuantityOnPlayer_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.K2_GetClosestAxisXY
struct UFortKismetLibrary_K2_GetClosestAxisXY_Params
{
};

// Function FortniteGame.FortKismetLibrary.JonLHack_GetAllObjectsOfClassFromPath
struct UFortKismetLibrary_JonLHack_GetAllObjectsOfClassFromPath_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsValid_UniqueNetIdRepl
struct UFortKismetLibrary_IsValid_UniqueNetIdRepl_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsValid
struct UFortKismetLibrary_IsValid_Params
{
	struct FAttributeInfo                              AttributeInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortKismetLibrary.IsLinkingStreamedAccountsEnabled
struct UFortKismetLibrary_IsLinkingStreamedAccountsEnabled_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsLatentActionHandleValid
struct UFortKismetLibrary_IsLatentActionHandleValid_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsFullBodyHit
struct UFortKismetLibrary_IsFullBodyHit_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsFatalHit
struct UFortKismetLibrary_IsFatalHit_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsCriticalHit
struct UFortKismetLibrary_IsCriticalHit_Params
{
};

// Function FortniteGame.FortKismetLibrary.IsAssetNull
struct UFortKismetLibrary_IsAssetNull_Params
{
};

// Function FortniteGame.FortKismetLibrary.InvalidateLatentActionHandle
struct UFortKismetLibrary_InvalidateLatentActionHandle_Params
{
};

// Function FortniteGame.FortKismetLibrary.HideTutorialWidget
struct UFortKismetLibrary_HideTutorialWidget_Params
{
};

// Function FortniteGame.FortKismetLibrary.HasSelectableRewards
struct UFortKismetLibrary_HasSelectableRewards_Params
{
};

// Function FortniteGame.FortKismetLibrary.HasRewards
struct UFortKismetLibrary_HasRewards_Params
{
};

// Function FortniteGame.FortKismetLibrary.HasOpenBroadcasterGrantWindow
struct UFortKismetLibrary_HasOpenBroadcasterGrantWindow_Params
{
};

// Function FortniteGame.FortKismetLibrary.HasMultipleVisibleRewards
struct UFortKismetLibrary_HasMultipleVisibleRewards_Params
{
};

// Function FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner
struct UFortKismetLibrary_GiveItemToInventoryOwner_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetWeaponStatsRow
struct UFortKismetLibrary_GetWeaponStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetWeaponDurabilityByRarityStatsRow
struct UFortKismetLibrary_GetWeaponDurabilityByRarityStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetTrapStatsRow
struct UFortKismetLibrary_GetTrapStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetTooltipTextFromTokenFromTooltipClass
struct UFortKismetLibrary_GetTooltipTextFromTokenFromTooltipClass_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTooltipTextFromToken
struct UFortKismetLibrary_GetTooltipTextFromToken_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTooltipNumericValueFromTooltipClass
struct UFortKismetLibrary_GetTooltipNumericValueFromTooltipClass_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTooltipNumericValue
struct UFortKismetLibrary_GetTooltipNumericValue_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTooltipDescriptionFromTooltipClass
struct UFortKismetLibrary_GetTooltipDescriptionFromTooltipClass_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTooltipDescription
struct UFortKismetLibrary_GetTooltipDescription_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTimeUntilInRealTimeSeconds
struct UFortKismetLibrary_GetTimeUntilInRealTimeSeconds_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTimeOfDaySpeed
struct UFortKismetLibrary_GetTimeOfDaySpeed_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTimeOfDayAccumulator
struct UFortKismetLibrary_GetTimeOfDayAccumulator_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTimeOfDay
struct UFortKismetLibrary_GetTimeOfDay_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTimeDayPhaseBegins
struct UFortKismetLibrary_GetTimeDayPhaseBegins_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetThreatVisualsManager
struct UFortKismetLibrary_GetThreatVisualsManager_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTeamInfo
struct UFortKismetLibrary_GetTeamInfo_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTeamAffiliationBetweenTeams
struct UFortKismetLibrary_GetTeamAffiliationBetweenTeams_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetTeamAffiliation
struct UFortKismetLibrary_GetTeamAffiliation_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetStunTime
struct UFortKismetLibrary_GetStunTime_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetShowHeroHeadAccessoriesForLocalPlayer
struct UFortKismetLibrary_GetShowHeroHeadAccessoriesForLocalPlayer_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetShowHeroBackpackForLocalPlayer
struct UFortKismetLibrary_GetShowHeroBackpackForLocalPlayer_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetRemovedAbilityKit
struct UFortKismetLibrary_GetRemovedAbilityKit_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetRangedWeaponStatsRow
struct UFortKismetLibrary_GetRangedWeaponStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetRandomSurvivorName
struct UFortKismetLibrary_GetRandomSurvivorName_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetRandomLiveStreamingViewerName
struct UFortKismetLibrary_GetRandomLiveStreamingViewerName_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetPrimaryInstance
struct UFortKismetLibrary_GetPrimaryInstance_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetPreviousDayPhase
struct UFortKismetLibrary_GetPreviousDayPhase_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetPlayerInfoFromUniqueID
struct UFortKismetLibrary_GetPlayerInfoFromUniqueID_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetPawnStatsRow
struct UFortKismetLibrary_GetPawnStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetNumericCVar
struct UFortKismetLibrary_GetNumericCVar_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetMusicManager
struct UFortKismetLibrary_GetMusicManager_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetMIDForSkeletalMeshComponent
struct UFortKismetLibrary_GetMIDForSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetMeleeWeaponStatsRow
struct UFortKismetLibrary_GetMeleeWeaponStatsRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (Parm)
};

// Function FortniteGame.FortKismetLibrary.GetMatchmakingDifficultyRangeFromDifficultyInfo
struct UFortKismetLibrary_GetMatchmakingDifficultyRangeFromDifficultyInfo_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetLootLevel
struct UFortKismetLibrary_GetLootLevel_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetLocalPlayerHasHeroHeadAccessories
struct UFortKismetLibrary_GetLocalPlayerHasHeroHeadAccessories_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetLocalPlayerHasHeroBackpack
struct UFortKismetLibrary_GetLocalPlayerHasHeroBackpack_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetLocalFortPlayerControllers
struct UFortKismetLibrary_GetLocalFortPlayerControllers_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetImpulseData
struct UFortKismetLibrary_GetImpulseData_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetHumanReadableName
struct UFortKismetLibrary_GetHumanReadableName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetHoursUntilDayPhase
struct UFortKismetLibrary_GetHoursUntilDayPhase_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetHostilityPercentage
struct UFortKismetLibrary_GetHostilityPercentage_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetGrantedAbilityKit
struct UFortKismetLibrary_GetGrantedAbilityKit_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetGameDifficulty
struct UFortKismetLibrary_GetGameDifficulty_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetFortPlayerPawns
struct UFortKismetLibrary_GetFortPlayerPawns_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetFortPhysicalSurface
struct UFortKismetLibrary_GetFortPhysicalSurface_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetFloatHoursUntilDayPhase
struct UFortKismetLibrary_GetFloatHoursUntilDayPhase_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetDirectionActorToActor
struct UFortKismetLibrary_GetDirectionActorToActor_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetDefaultAbsoluteTimeOfDaySpeed
struct UFortKismetLibrary_GetDefaultAbsoluteTimeOfDaySpeed_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetDebugStringForUniqueId
struct UFortKismetLibrary_GetDebugStringForUniqueId_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetDayNightDirectionalLightVector
struct UFortKismetLibrary_GetDayNightDirectionalLightVector_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetDayNightDirectionalLightColor
struct UFortKismetLibrary_GetDayNightDirectionalLightColor_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetCurrentDayPhase
struct UFortKismetLibrary_GetCurrentDayPhase_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetClosestFortPlayerPawn
struct UFortKismetLibrary_GetClosestFortPlayerPawn_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetClosestBuildingActorFromArray
struct UFortKismetLibrary_GetClosestBuildingActorFromArray_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetClosestActorFromArray
struct UFortKismetLibrary_GetClosestActorFromArray_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetCalculatedGameDifficulty
struct UFortKismetLibrary_GetCalculatedGameDifficulty_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetBuildingStructuralSupportSystem
struct UFortKismetLibrary_GetBuildingStructuralSupportSystem_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetBuildingHealthPercentage
struct UFortKismetLibrary_GetBuildingHealthPercentage_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetBroadcasterGrantWindowSecondsRemaining
struct UFortKismetLibrary_GetBroadcasterGrantWindowSecondsRemaining_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetAllFortPlayerPawns
struct UFortKismetLibrary_GetAllFortPlayerPawns_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetAllFortPlayerControllers
struct UFortKismetLibrary_GetAllFortPlayerControllers_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetAIGoalManager
struct UFortKismetLibrary_GetAIGoalManager_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetAIDirector
struct UFortKismetLibrary_GetAIDirector_Params
{
};

// Function FortniteGame.FortKismetLibrary.GetActorTeamInfo
struct UFortKismetLibrary_GetActorTeamInfo_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.GetActorTeam
struct UFortKismetLibrary_GetActorTeam_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.FilterTargetHitResultList
struct UFortKismetLibrary_FilterTargetHitResultList_Params
{
};

// Function FortniteGame.FortKismetLibrary.FilterTargetActorList
struct UFortKismetLibrary_FilterTargetActorList_Params
{
};

// Function FortniteGame.FortKismetLibrary.FilterSingleTargetHitResult
struct UFortKismetLibrary_FilterSingleTargetHitResult_Params
{
};

// Function FortniteGame.FortKismetLibrary.FilterSingleTargetActor
struct UFortKismetLibrary_FilterSingleTargetActor_Params
{
};

// Function FortniteGame.FortKismetLibrary.ExecuteClientEvent
struct UFortKismetLibrary_ExecuteClientEvent_Params
{
};

// Function FortniteGame.FortKismetLibrary.EvaluateCurveTableRow
struct UFortKismetLibrary_EvaluateCurveTableRow_Params
{
	struct FCurveTableRowHandle                        CurveTableRowHandle;                                      // (Parm)
};

// Function FortniteGame.FortKismetLibrary.EquipItemToQuickBarSlot
struct UFortKismetLibrary_EquipItemToQuickBarSlot_Params
{
};

// Function FortniteGame.FortKismetLibrary.EquipFortAbilitySet
struct UFortKismetLibrary_EquipFortAbilitySet_Params
{
};

// Function FortniteGame.FortKismetLibrary.EqualEqual_UniqueNetIdReplUniqueNetIdRepl
struct UFortKismetLibrary_EqualEqual_UniqueNetIdReplUniqueNetIdRepl_Params
{
	struct FUniqueNetIdRepl                            A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FUniqueNetIdRepl                            B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortKismetLibrary.EqualEqual_FFortDialogWaitingForLatentActionHandle
struct UFortKismetLibrary_EqualEqual_FFortDialogWaitingForLatentActionHandle_Params
{
	struct FFortDialogExternalLatentActionHandle       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFortDialogExternalLatentActionHandle       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortKismetLibrary.EndWaitForConfirmationDialog
struct UFortKismetLibrary_EndWaitForConfirmationDialog_Params
{
};

// Function FortniteGame.FortKismetLibrary.EnableTutorialHighlight
struct UFortKismetLibrary_EnableTutorialHighlight_Params
{
};

// Function FortniteGame.FortKismetLibrary.EmptyQuickBarSlot
struct UFortKismetLibrary_EmptyQuickBarSlot_Params
{
};

// Function FortniteGame.FortKismetLibrary.EffectContextAddSourceObject
struct UFortKismetLibrary_EffectContextAddSourceObject_Params
{
};

// Function FortniteGame.FortKismetLibrary.DisableTutorialHighlight
struct UFortKismetLibrary_DisableTutorialHighlight_Params
{
};

// Function FortniteGame.FortKismetLibrary.CreateNewSplineObject
struct UFortKismetLibrary_CreateNewSplineObject_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortKismetLibrary.ConvertToRealTime
struct UFortKismetLibrary_ConvertToRealTime_Params
{
};

// Function FortniteGame.FortKismetLibrary.ConvertToGameTime
struct UFortKismetLibrary_ConvertToGameTime_Params
{
};

// Function FortniteGame.FortKismetLibrary.CloseTalkingHead
struct UFortKismetLibrary_CloseTalkingHead_Params
{
};

// Function FortniteGame.FortKismetLibrary.ClientRequestSetTimeOfDay
struct UFortKismetLibrary_ClientRequestSetTimeOfDay_Params
{
};

// Function FortniteGame.FortKismetLibrary.ClearTutorialHighlights
struct UFortKismetLibrary_ClearTutorialHighlights_Params
{
};

// Function FortniteGame.FortKismetLibrary.BroadcastSoundAtLocation
struct UFortKismetLibrary_BroadcastSoundAtLocation_Params
{
};

// Function FortniteGame.FortKismetLibrary.BroadcastSound
struct UFortKismetLibrary_BroadcastSound_Params
{
};

// Function FortniteGame.FortKismetLibrary.BroadcastPlayerImpactAtLocation
struct UFortKismetLibrary_BroadcastPlayerImpactAtLocation_Params
{
};

// Function FortniteGame.FortKismetLibrary.BroadcastMessage
struct UFortKismetLibrary_BroadcastMessage_Params
{
};

// Function FortniteGame.FortKismetLibrary.AuthorityGetFortPossessedPlayerPawns
struct UFortKismetLibrary_AuthorityGetFortPossessedPlayerPawns_Params
{
};

// Function FortniteGame.FortKismetLibrary.ApplyGlobalEnvironmentGameplayEffectToActor
struct UFortKismetLibrary_ApplyGlobalEnvironmentGameplayEffectToActor_Params
{
};

// Function FortniteGame.FortKismetLibrary.ApplyGlobalEnvironmentDamageToActor
struct UFortKismetLibrary_ApplyGlobalEnvironmentDamageToActor_Params
{
};

// Function FortniteGame.FortKismetLibrary.ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings
struct UFortKismetLibrary_ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerTeamChatRoomReady
struct AFortLobbyBeaconClient_ServerTeamChatRoomReady_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetMatchmakingLevel
struct AFortLobbyBeaconClient_ServerSetMatchmakingLevel_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetHeroType
struct AFortLobbyBeaconClient_ServerSetHeroType_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetHeroSquadId
struct AFortLobbyBeaconClient_ServerSetHeroSquadId_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetHeroId
struct AFortLobbyBeaconClient_ServerSetHeroId_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetGadget
struct AFortLobbyBeaconClient_ServerSetGadget_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetCurrentCharacterXp
struct AFortLobbyBeaconClient_ServerSetCurrentCharacterXp_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetConsoleUniqueNetId
struct AFortLobbyBeaconClient_ServerSetConsoleUniqueNetId_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerSetCharacterGender
struct AFortLobbyBeaconClient_ServerSetCharacterGender_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ServerIncrementHomeBaseVersion
struct AFortLobbyBeaconClient_ServerIncrementHomeBaseVersion_Params
{
};

// Function FortniteGame.FortLobbyBeaconClient.ClientCreateOrJoinChatRoom
struct AFortLobbyBeaconClient_ClientCreateOrJoinChatRoom_Params
{
};

// Function FortniteGame.FortLobbyBeaconClientPvP.ServerReadyUp
struct AFortLobbyBeaconClientPvP_ServerReadyUp_Params
{
};

// Function FortniteGame.FortTwitchAccount.HandleQuestsUpdated
struct UFortTwitchAccount_HandleQuestsUpdated_Params
{
};

// Function FortniteGame.FortMcpProfileCollectionBook.UpgradeSlottedItem
struct UFortMcpProfileCollectionBook_UpgradeSlottedItem_Params
{
};

// Function FortniteGame.FortMcpProfileCollectionBook.ConvertSlottedItem
struct UFortMcpProfileCollectionBook_ConvertSlottedItem_Params
{
};

// Function FortniteGame.FortMcpProfileCollectionBook.ClaimCollectionBookPageRewards
struct UFortMcpProfileCollectionBook_ClaimCollectionBookPageRewards_Params
{
};

// Function FortniteGame.FortMissionLibrary.UnregisterForMissionEvents
struct UFortMissionLibrary_UnregisterForMissionEvents_Params
{
};

// Function FortniteGame.FortMissionLibrary.TeleportPlayerPawn
struct UFortMissionLibrary_TeleportPlayerPawn_Params
{
};

// Function FortniteGame.FortMissionLibrary.TeleportPawnNearLocation
struct UFortMissionLibrary_TeleportPawnNearLocation_Params
{
	class AFortPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortMissionLibrary.StopAIEncounterAgainstActor
struct UFortMissionLibrary_StopAIEncounterAgainstActor_Params
{
};

// Function FortniteGame.FortMissionLibrary.StopAIEncounter
struct UFortMissionLibrary_StopAIEncounter_Params
{
};

// Function FortniteGame.FortMissionLibrary.StartPlayingMission
struct UFortMissionLibrary_StartPlayingMission_Params
{
};

// Function FortniteGame.FortMissionLibrary.StartAIEncounterWithEnvironmentQuery
struct UFortMissionLibrary_StartAIEncounterWithEnvironmentQuery_Params
{
};

// Function FortniteGame.FortMissionLibrary.StartAIEncounter
struct UFortMissionLibrary_StartAIEncounter_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnPlacementMissionActor
struct UFortMissionLibrary_SpawnPlacementMissionActor_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnMissionItemPickupInWorld
struct UFortMissionLibrary_SpawnMissionItemPickupInWorld_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnMissionItemPickup
struct UFortMissionLibrary_SpawnMissionItemPickup_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnBuildingActorAtTransform
struct UFortMissionLibrary_SpawnBuildingActorAtTransform_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnAtPlacementActorsHelper
struct UFortMissionLibrary_SpawnAtPlacementActorsHelper_Params
{
};

// Function FortniteGame.FortMissionLibrary.SpawnAndCollectPlayerPickups
struct UFortMissionLibrary_SpawnAndCollectPlayerPickups_Params
{
};

// Function FortniteGame.FortMissionLibrary.ShouldUseAlternateAIDirectorBalance
struct UFortMissionLibrary_ShouldUseAlternateAIDirectorBalance_Params
{
};

// Function FortniteGame.FortMissionLibrary.SetWorldSavingEnabled
struct UFortMissionLibrary_SetWorldSavingEnabled_Params
{
};

// Function FortniteGame.FortMissionLibrary.SetOnlinePresenceDoNotDisturb
struct UFortMissionLibrary_SetOnlinePresenceDoNotDisturb_Params
{
};

// Function FortniteGame.FortMissionLibrary.RespawnOutlanderFragments
struct UFortMissionLibrary_RespawnOutlanderFragments_Params
{
};

// Function FortniteGame.FortMissionLibrary.RegisterMissionInfoUIActor
struct UFortMissionLibrary_RegisterMissionInfoUIActor_Params
{
};

// Function FortniteGame.FortMissionLibrary.RegisterForMissionEvents
struct UFortMissionLibrary_RegisterForMissionEvents_Params
{
};

// Function FortniteGame.FortMissionLibrary.PollActorsInVolume
struct UFortMissionLibrary_PollActorsInVolume_Params
{
};

// Function FortniteGame.FortMissionLibrary.PingMinimap
struct UFortMissionLibrary_PingMinimap_Params
{
};

// Function FortniteGame.FortMissionLibrary.NumBluGloFromPlayerState
struct UFortMissionLibrary_NumBluGloFromPlayerState_Params
{
	class AFortPlayerStateZone*                        PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortMissionLibrary.NumBluGloFromPlayerPawn
struct UFortMissionLibrary_NumBluGloFromPlayerPawn_Params
{
};

// Function FortniteGame.FortMissionLibrary.LoadMission
struct UFortMissionLibrary_LoadMission_Params
{
};

// Function FortniteGame.FortMissionLibrary.IsUsingNewMissionGeneration
struct UFortMissionLibrary_IsUsingNewMissionGeneration_Params
{
};

// Function FortniteGame.FortMissionLibrary.HasTags
struct UFortMissionLibrary_HasTags_Params
{
};

// Function FortniteGame.FortMissionLibrary.GiveMissionSchematicItemDirectlyToPlayer
struct UFortMissionLibrary_GiveMissionSchematicItemDirectlyToPlayer_Params
{
};

// Function FortniteGame.FortMissionLibrary.GiveMissionRewardsToPlayerAsPickups
struct UFortMissionLibrary_GiveMissionRewardsToPlayerAsPickups_Params
{
};

// Function FortniteGame.FortMissionLibrary.GiveMissionRewardsToPlayer
struct UFortMissionLibrary_GiveMissionRewardsToPlayer_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetTieredWaveSet
struct UFortMissionLibrary_GetTieredWaveSet_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetTieredWaveBaseWaveLength
struct UFortMissionLibrary_GetTieredWaveBaseWaveLength_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetTieredWaveBaseNumKills
struct UFortMissionLibrary_GetTieredWaveBaseNumKills_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetTieredWaveBaseNumKillPoints
struct UFortMissionLibrary_GetTieredWaveBaseNumKillPoints_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetMissionHUDTextLineHeightEstimate
struct UFortMissionLibrary_GetMissionHUDTextLineHeightEstimate_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetMissionFromGuid
struct UFortMissionLibrary_GetMissionFromGuid_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetMissionActorsInVectorDirection
struct UFortMissionLibrary_GetMissionActorsInVectorDirection_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetMissionActorsInEncounterDirection
struct UFortMissionLibrary_GetMissionActorsInEncounterDirection_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetBluGloManager
struct UFortMissionLibrary_GetBluGloManager_Params
{
};

// Function FortniteGame.FortMissionLibrary.GetAllLoadedMissions
struct UFortMissionLibrary_GetAllLoadedMissions_Params
{
};

// Function FortniteGame.FortMissionLibrary.FindOriginatingPlacementActor
struct UFortMissionLibrary_FindOriginatingPlacementActor_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortMissionLibrary.FindActorsWithTags
struct UFortMissionLibrary_FindActorsWithTags_Params
{
};

// Function FortniteGame.FortMissionLibrary.ExecuteMissionEventEx
struct UFortMissionLibrary_ExecuteMissionEventEx_Params
{
};

// Function FortniteGame.FortMissionLibrary.ExecuteMissionEvent
struct UFortMissionLibrary_ExecuteMissionEvent_Params
{
};

// Function FortniteGame.FortMissionLibrary.CreateMissionEvent
struct UFortMissionLibrary_CreateMissionEvent_Params
{
};

// Function FortniteGame.FortMissionLibrary.CreateDynamicBuildingDeconstructor
struct UFortMissionLibrary_CreateDynamicBuildingDeconstructor_Params
{
};

// Function FortniteGame.FortMissionLibrary.AdjustWaveBasedGameDifficulty
struct UFortMissionLibrary_AdjustWaveBasedGameDifficulty_Params
{
};

// Function FortniteGame.FortMissionLibrary.AddCompletionTagToMission
struct UFortMissionLibrary_AddCompletionTagToMission_Params
{
};

// Function FortniteGame.FortMissionLibrary.AddCompletionTagsToMission
struct UFortMissionLibrary_AddCompletionTagsToMission_Params
{
};

// Function FortniteGame.FortPvPMission_EnemyBaseDestruction.GetCornerstoneForTeam
struct AFortPvPMission_EnemyBaseDestruction_GetCornerstoneForTeam_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.StorageVaultWithdrawItem
struct UFortOutpostFunctionLibrary_StorageVaultWithdrawItem_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.StorageVaultStoreItem
struct UFortOutpostFunctionLibrary_StorageVaultStoreItem_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.SetOutpostGameDifficultyRow
struct UFortOutpostFunctionLibrary_SetOutpostGameDifficultyRow_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.SetOutpostDefenseActive
struct UFortOutpostFunctionLibrary_SetOutpostDefenseActive_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.SetCriticalMissionJoinability
struct UFortOutpostFunctionLibrary_SetCriticalMissionJoinability_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.IsCraftingTableActive
struct UFortOutpostFunctionLibrary_IsCraftingTableActive_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetStorageVaultStoredItems
struct UFortOutpostFunctionLibrary_GetStorageVaultStoredItems_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetStorageVaultPlayerItems
struct UFortOutpostFunctionLibrary_GetStorageVaultPlayerItems_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetStorageVaultNumItems
struct UFortOutpostFunctionLibrary_GetStorageVaultNumItems_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetStorageVaultCapacity
struct UFortOutpostFunctionLibrary_GetStorageVaultCapacity_Params
{
	class AFortPlayerControllerOutpost*                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetPlacementTagFromOutpostBuildingTag
struct UFortOutpostFunctionLibrary_GetPlacementTagFromOutpostBuildingTag_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetOutpostQuestMissionConfigData
struct UFortOutpostFunctionLibrary_GetOutpostQuestMissionConfigData_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetOutpostOwner
struct UFortOutpostFunctionLibrary_GetOutpostOwner_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetOutpostBuildingTagFromPlacementTag
struct UFortOutpostFunctionLibrary_GetOutpostBuildingTagFromPlacementTag_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetOutpostBuildingItemDefinition
struct UFortOutpostFunctionLibrary_GetOutpostBuildingItemDefinition_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetNumberOfCraftingTableItemsRemaining
struct UFortOutpostFunctionLibrary_GetNumberOfCraftingTableItemsRemaining_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetGooRequiredToFabricateItem
struct UFortOutpostFunctionLibrary_GetGooRequiredToFabricateItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetGooFromDisintegrationOfItem
struct UFortOutpostFunctionLibrary_GetGooFromDisintegrationOfItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorStoredGooAmount
struct UFortOutpostFunctionLibrary_GetFabricatorStoredGooAmount_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorRecipes
struct UFortOutpostFunctionLibrary_GetFabricatorRecipes_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorPlayerItems
struct UFortOutpostFunctionLibrary_GetFabricatorPlayerItems_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorMaxGooCapacity
struct UFortOutpostFunctionLibrary_GetFabricatorMaxGooCapacity_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorItemDisintegrationDurationInSeconds
struct UFortOutpostFunctionLibrary_GetFabricatorItemDisintegrationDurationInSeconds_Params
{
	class UFortWorldItem*                              Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorIncomingGooAmountProgress
struct UFortOutpostFunctionLibrary_GetFabricatorIncomingGooAmountProgress_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorIncomingGooAmount
struct UFortOutpostFunctionLibrary_GetFabricatorIncomingGooAmount_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorDisintegrationStartTime
struct UFortOutpostFunctionLibrary_GetFabricatorDisintegrationStartTime_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorDisintegrationSecondsRemaining
struct UFortOutpostFunctionLibrary_GetFabricatorDisintegrationSecondsRemaining_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorDisintegrationMinutesRemaining
struct UFortOutpostFunctionLibrary_GetFabricatorDisintegrationMinutesRemaining_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetFabricatorDisintegrationDurationInSeconds
struct UFortOutpostFunctionLibrary_GetFabricatorDisintegrationDurationInSeconds_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetCraftingTableActivationItemCount
struct UFortOutpostFunctionLibrary_GetCraftingTableActivationItemCount_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.GetCraftingTableActivationCost
struct UFortOutpostFunctionLibrary_GetCraftingTableActivationCost_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.FabricatorIsDisintegrating
struct UFortOutpostFunctionLibrary_FabricatorIsDisintegrating_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.FabricatorDisintegrateItem
struct UFortOutpostFunctionLibrary_FabricatorDisintegrateItem_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.FabricatorCanDisintegrateItem
struct UFortOutpostFunctionLibrary_FabricatorCanDisintegrateItem_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.FabricatorAbortDisintegration
struct UFortOutpostFunctionLibrary_FabricatorAbortDisintegration_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.FabricateItem
struct UFortOutpostFunctionLibrary_FabricateItem_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.DeployOutpostBuildingTagOnPlacementTag
struct UFortOutpostFunctionLibrary_DeployOutpostBuildingTagOnPlacementTag_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.DeactivateCraftingTable
struct UFortOutpostFunctionLibrary_DeactivateCraftingTable_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.CanActivateCraftingTable
struct UFortOutpostFunctionLibrary_CanActivateCraftingTable_Params
{
};

// Function FortniteGame.FortOutpostFunctionLibrary.ActivateCraftingTable
struct UFortOutpostFunctionLibrary_ActivateCraftingTable_Params
{
};

// Function FortniteGame.FortPermaniteStructureInterface.OnBoundariesChanged
struct UFortPermaniteStructureInterface_OnBoundariesChanged_Params
{
};

// Function FortniteGame.FortPlayerControllerFOB.ServerSaveFOB
struct AFortPlayerControllerFOB_ServerSaveFOB_Params
{
};

// Function FortniteGame.FortPlayerControllerFOB.ServerResetFOB
struct AFortPlayerControllerFOB_ServerResetFOB_Params
{
};

// Function FortniteGame.FortPlayerControllerFOB.ServerReloadFOB
struct AFortPlayerControllerFOB_ServerReloadFOB_Params
{
};

// Function FortniteGame.FortPlayerControllerFOB.ServerAttemptSelectFOBCore
struct AFortPlayerControllerFOB_ServerAttemptSelectFOBCore_Params
{
};

// Function FortniteGame.FortPlayerControllerManor.ServerOnUnlockPortalComplete
struct AFortPlayerControllerManor_ServerOnUnlockPortalComplete_Params
{
	class AManorPortal*                                ManorPortal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortPlayerControllerManor.ClientOpenManorPortalUnlockMenu
struct AFortPlayerControllerManor_ClientOpenManorPortalUnlockMenu_Params
{
	class AManorPortal*                                ManorPortal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortPvPFunctionLibrary.SetMatchLevel
struct UFortPvPFunctionLibrary_SetMatchLevel_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetTeamStrategicBuildingActor
struct UFortPvPFunctionLibrary_GetTeamStrategicBuildingActor_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetTeamCornerstone
struct UFortPvPFunctionLibrary_GetTeamCornerstone_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetRoundTimeAccumulated
struct UFortPvPFunctionLibrary_GetRoundTimeAccumulated_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetMatchLevel
struct UFortPvPFunctionLibrary_GetMatchLevel_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetDifficultyRowNamesFromPvPRating
struct UFortPvPFunctionLibrary_GetDifficultyRowNamesFromPvPRating_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetBaseDestructionTeamInfo
struct UFortPvPFunctionLibrary_GetBaseDestructionTeamInfo_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.GetBaseBuildingCost
struct UFortPvPFunctionLibrary_GetBaseBuildingCost_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortPvPFunctionLibrary.FirePvPVictoryMissionEvent
struct UFortPvPFunctionLibrary_FirePvPVictoryMissionEvent_Params
{
};

// Function FortniteGame.FortPvPFunctionLibrary.DestroyAllFortPickupsWithItem
struct UFortPvPFunctionLibrary_DestroyAllFortPickupsWithItem_Params
{
};

// Function FortniteGame.HoverDronePawn.IsMaintainingConstantAltitude
struct AHoverDronePawn_IsMaintainingConstantAltitude_Params
{
};

// Function FortniteGame.HoverDronePawn.GetAltitude
struct AHoverDronePawn_GetAltitude_Params
{
};

// Function FortniteGame.FortThreatParticleActor.OnWorldReady
struct AFortThreatParticleActor_OnWorldReady_Params
{
};

// Function FortniteGame.FortThreatParticleActor.OnThreatCloudsChanged
struct AFortThreatParticleActor_OnThreatCloudsChanged_Params
{
	TArray<struct FThreatLocationInfo>                 ThreatLocationInfo;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FortniteGame.FortThreatParticleActor.GetThreatClouds
struct AFortThreatParticleActor_GetThreatClouds_Params
{
};

// Function FortniteGame.FortAbilityKitTooltip.GetTokenizedDescriptionText
struct UFortAbilityKitTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortAbilityKitTooltip.GetTextForToken
struct UFortAbilityKitTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortAbilitySetTooltip.GetTokenizedDescriptionText
struct UFortAbilitySetTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortAbilitySetTooltip.GetTextForToken
struct UFortAbilitySetTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortItemDefinitionTooltip.GetTextForToken
struct UFortItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortQuestItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortQuestItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortQuestItemDefinitionTooltip.GetTextForToken
struct UFortQuestItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWorldItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortWorldItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWorldItemDefinitionTooltip.GetTextForToken
struct UFortWorldItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortConsumableItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortConsumableItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortConsumableItemDefinitionTooltip.GetTextForToken
struct UFortConsumableItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortGadgetItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortGadgetItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortGadgetItemDefinitionTooltip.GetTextForToken
struct UFortGadgetItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortGadgetItemDefinitionTooltip.GetNumericValue
struct UFortGadgetItemDefinitionTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortWeaponItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortWeaponItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWeaponItemDefinitionTooltip.GetTextForToken
struct UFortWeaponItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWeaponItemDefinitionTooltip.GetNumericValue
struct UFortWeaponItemDefinitionTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortTrapItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortTrapItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortTrapItemDefinitionTooltip.GetTextForToken
struct UFortTrapItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortTrapItemDefinitionTooltip.GetNumericValue
struct UFortTrapItemDefinitionTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortWeaponMeleeItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortWeaponMeleeItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWeaponMeleeItemDefinitionTooltip.GetTextForToken
struct UFortWeaponMeleeItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWeaponMeleeItemDefinitionTooltip.GetNumericValue
struct UFortWeaponMeleeItemDefinitionTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortWeaponRangedItemDefinitionTooltip.GetTokenizedDescriptionText
struct UFortWeaponRangedItemDefinitionTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWeaponRangedItemDefinitionTooltip.GetTextForToken
struct UFortWeaponRangedItemDefinitionTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWeaponRangedItemDefinitionTooltip.GetNumericValue
struct UFortWeaponRangedItemDefinitionTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortItemTooltip.GetTokenizedDescriptionText
struct UFortItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortItemTooltip.GetTextForToken
struct UFortItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortItemTooltip.GetNumericValue
struct UFortItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortAccountItemTooltip.GetTokenizedDescriptionText
struct UFortAccountItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortAccountItemTooltip.GetTextForToken
struct UFortAccountItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortAccountItemTooltip.GetNumericValue
struct UFortAccountItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortCharacterTooltip.GetValueData
struct UFortCharacterTooltip_GetValueData_Params
{
};

// Function FortniteGame.FortCharacterTooltip.GetTokenizedDescriptionText
struct UFortCharacterTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortCharacterTooltip.GetTextForToken
struct UFortCharacterTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortCharacterTooltip.GetNumericValue
struct UFortCharacterTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortHeroTooltip.GetTokenizedDescriptionText
struct UFortHeroTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortHeroTooltip.GetTextForToken
struct UFortHeroTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortHeroTooltip.GetNumericValue
struct UFortHeroTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortSchematicTooltip.GetTokenizedDescriptionText
struct UFortSchematicTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortSchematicTooltip.GetTextForToken
struct UFortSchematicTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortSchematicTooltip.GetNumericValue
struct UFortSchematicTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortHomebaseNodeItemTooltip.GetTokenizedDescriptionText
struct UFortHomebaseNodeItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortHomebaseNodeItemTooltip.GetTextForToken
struct UFortHomebaseNodeItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortHomebaseNodeItemTooltip.GetNumericValue
struct UFortHomebaseNodeItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortWorldItemTooltip.GetTokenizedDescriptionText
struct UFortWorldItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWorldItemTooltip.GetTextForToken
struct UFortWorldItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWorldItemTooltip.GetNumericValue
struct UFortWorldItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortConsumableItemTooltip.GetTokenizedDescriptionText
struct UFortConsumableItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortConsumableItemTooltip.GetTextForToken
struct UFortConsumableItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortConsumableItemTooltip.GetNumericValue
struct UFortConsumableItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortGadgetItemTooltip.GetTokenizedDescriptionText
struct UFortGadgetItemTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortGadgetItemTooltip.GetTextForToken
struct UFortGadgetItemTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortGadgetItemTooltip.GetNumericValue
struct UFortGadgetItemTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortTrapTooltip.GetTokenizedDescriptionText
struct UFortTrapTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortTrapTooltip.GetTextForToken
struct UFortTrapTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortTrapTooltip.GetNumericValue
struct UFortTrapTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortWeaponRangedTooltip.GetTokenizedDescriptionText
struct UFortWeaponRangedTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWeaponRangedTooltip.GetTextForToken
struct UFortWeaponRangedTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWeaponRangedTooltip.GetNumericValue
struct UFortWeaponRangedTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortQuestObjectiveTooltip.GetTokenizedDescriptionText
struct UFortQuestObjectiveTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortQuestObjectiveTooltip.GetTextForToken
struct UFortQuestObjectiveTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortQuestObjectiveTooltip.GetNumericValue
struct UFortQuestObjectiveTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortRegisteredPlayerInfoTooltip.GetValueData
struct UFortRegisteredPlayerInfoTooltip_GetValueData_Params
{
};

// Function FortniteGame.FortRegisteredPlayerInfoTooltip.GetTokenizedDescriptionText
struct UFortRegisteredPlayerInfoTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortRegisteredPlayerInfoTooltip.GetTextForToken
struct UFortRegisteredPlayerInfoTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortRegisteredPlayerInfoTooltip.GetNumericValue
struct UFortRegisteredPlayerInfoTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortTooltipLibrary.FormatAttributeBuffs
struct UFortTooltipLibrary_FormatAttributeBuffs_Params
{
	struct FFortAttributeInfo                          AttributeInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FortniteGame.FortWorkerTooltip.GetTokenizedDescriptionText
struct UFortWorkerTooltip_GetTokenizedDescriptionText_Params
{
};

// Function FortniteGame.FortWorkerTooltip.GetTextForToken
struct UFortWorkerTooltip_GetTextForToken_Params
{
};

// Function FortniteGame.FortWorkerTooltip.GetNumericValue
struct UFortWorkerTooltip_GetNumericValue_Params
{
};

// Function FortniteGame.FortUIManagerInterface.KillConfirmation
struct UFortUIManagerInterface_KillConfirmation_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseTrigger
struct AFortCustomizableAbilityDecoTool_ServerReleaseTrigger_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseSecondaryFire
struct AFortCustomizableAbilityDecoTool_ServerReleaseSecondaryFire_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.ServerPressTrigger
struct AFortCustomizableAbilityDecoTool_ServerPressTrigger_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.ServerPressSecondaryFire
struct AFortCustomizableAbilityDecoTool_ServerPressSecondaryFire_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPServerReleaseSecondaryFire
struct AFortCustomizableAbilityDecoTool_BPServerReleaseSecondaryFire_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPServerPressSecondaryFire
struct AFortCustomizableAbilityDecoTool_BPServerPressSecondaryFire_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseTrigger
struct AFortCustomizableAbilityDecoTool_BPReleaseTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseSecondaryFire
struct AFortCustomizableAbilityDecoTool_BPReleaseSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPPressTrigger
struct AFortCustomizableAbilityDecoTool_BPPressTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPPressSecondaryFire
struct AFortCustomizableAbilityDecoTool_BPPressSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPOnUnEquip
struct AFortCustomizableAbilityDecoTool_BPOnUnEquip_Params
{
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPOnSetDecoObjectPreview
struct AFortCustomizableAbilityDecoTool_BPOnSetDecoObjectPreview_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.FortCustomizableAbilityDecoTool.BPOnEquip
struct AFortCustomizableAbilityDecoTool_BPOnEquip_Params
{
};

// Function FortniteGame.LevelTestingActorBase.ExtractSkeletalMeshScale
struct ALevelTestingActorBase_ExtractSkeletalMeshScale_Params
{
};

// Function FortniteGame.LevelTestingActorBase.ExtractSkeletalMesh
struct ALevelTestingActorBase_ExtractSkeletalMesh_Params
{
};

// Function FortniteGame.ManorPortal.UnlockPortal
struct AManorPortal_UnlockPortal_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.OpenUnlockMenu
struct AManorPortal_OpenUnlockMenu_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.IsProfileValidToReadPortalAvailability
struct AManorPortal_IsProfileValidToReadPortalAvailability_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.IsPortalUnlocked
struct AManorPortal_IsPortalUnlocked_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.GetPlayerCurrencyAmount
struct AManorPortal_GetPlayerCurrencyAmount_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.GetCurrencyCost
struct AManorPortal_GetCurrencyCost_Params
{
	class AFortPlayerController*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortniteGame.ManorPortal.BlueprintOnUnlockPortalComplete
struct AManorPortal_BlueprintOnUnlockPortalComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

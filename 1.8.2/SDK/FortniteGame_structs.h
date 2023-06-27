#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum FortniteGame.EFortAIDirectorEvent
enum class EFortAIDirectorEvent : uint8_t
{

};


// Enum FortniteGame.EKeepDefenseState
enum class EKeepDefenseState : uint8_t
{

};


// Enum FortniteGame.EFortDayPhase
enum class EFortDayPhase : uint8_t
{

};


// Enum FortniteGame.EFortInventoryType
enum class EFortInventoryType : uint8_t
{

};


// Enum FortniteGame.EOfferPurchaseError
enum class EOfferPurchaseError : uint8_t
{

};


// Enum FortniteGame.EFortAlteration
enum class EFortAlteration : uint8_t
{

};


// Enum FortniteGame.EFortItemType
enum class EFortItemType : uint8_t
{

};


// Enum FortniteGame.EFortTeam
enum class EFortTeam : uint8_t
{

};


// Enum FortniteGame.EFortCustomPartType
enum class EFortCustomPartType : uint8_t
{

};


// Enum FortniteGame.EFortReportDayPhase
enum class EFortReportDayPhase : uint8_t
{

};


// Enum FortniteGame.EAthenaGamePhase
enum class EAthenaGamePhase : uint8_t
{

};


// Enum FortniteGame.EAthenaGamePhaseStep
enum class EAthenaGamePhaseStep : uint8_t
{

};


// Enum FortniteGame.ECaptureState
enum class ECaptureState : uint8_t
{

};


// Enum FortniteGame.EFOBIOStatus
enum class EFOBIOStatus : uint8_t
{

};


// Enum FortniteGame.ECollectionBookRewardType
enum class ECollectionBookRewardType : uint8_t
{

};


// Enum FortniteGame.EFortObjectiveStatus
enum class EFortObjectiveStatus : uint8_t
{

};


// Enum FortniteGame.EFortMissionVisibilityOverride
enum class EFortMissionVisibilityOverride : uint8_t
{

};


// Enum FortniteGame.EFortPrototypingStatus
enum class EFortPrototypingStatus : uint8_t
{

};


// Enum FortniteGame.EMatchmakingCompleteResult
enum class EMatchmakingCompleteResult : uint8_t
{

};


// Enum FortniteGame.EMatchmakingState
enum class EMatchmakingState : uint8_t
{

};


// Enum FortniteGame.EFortPartyRestriction
enum class EFortPartyRestriction : uint8_t
{

};


// Enum FortniteGame.EFortFriendRequestStatus
enum class EFortFriendRequestStatus : uint8_t
{

};


// Enum FortniteGame.EFortPartyMemberLocation
enum class EFortPartyMemberLocation : uint8_t
{

};


// Enum FortniteGame.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8_t
{

};


// Enum FortniteGame.EFortPartyState
enum class EFortPartyState : uint8_t
{

};


// Enum FortniteGame.EFortPartyMemberDisplayState
enum class EFortPartyMemberDisplayState : uint8_t
{

};


// Enum FortniteGame.EFortPartyTransition
enum class EFortPartyTransition : uint8_t
{

};


// Enum FortniteGame.EFortSocialItemHeaderType
enum class EFortSocialItemHeaderType : uint8_t
{

};


// Enum FortniteGame.EFortDialogFeedbackType
enum class EFortDialogFeedbackType : uint8_t
{

};


// Enum FortniteGame.EFortEncounterDirection
enum class EFortEncounterDirection : uint8_t
{

};


// Enum FortniteGame.EAIHotSpotSlot
enum class EAIHotSpotSlot : uint8_t
{

};


// Enum FortniteGame.EAIHotSpotAssignmentFilter
enum class EAIHotSpotAssignmentFilter : uint8_t
{

};


// Enum FortniteGame.EAIHotSpotSlotFilter
enum class EAIHotSpotSlotFilter : uint8_t
{

};


// Enum FortniteGame.EFortGliderType
enum class EFortGliderType : uint8_t
{

};


// Enum FortniteGame.EFortMissionAlertCategory
enum class EFortMissionAlertCategory : uint8_t
{

};


// Enum FortniteGame.EItemTileViewDisplayType
enum class EItemTileViewDisplayType : uint8_t
{

};


// Enum FortniteGame.EOutpostBuildings
enum class EOutpostBuildings : uint8_t
{

};


// Enum FortniteGame.EFortClientAnnouncementQueueType
enum class EFortClientAnnouncementQueueType : uint8_t
{

};


// Enum FortniteGame.EFortNotificationQueueType
enum class EFortNotificationQueueType : uint8_t
{

};


// Enum FortniteGame.EFortDialogResult
enum class EFortDialogResult : uint8_t
{

};


// Enum FortniteGame.EFortBangType
enum class EFortBangType : uint8_t
{
	EFortBangType__Invalid         = 0,
	EFortBangType__Custom          = 1,
	EFortBangType__PlayTab         = 2,
	EFortBangType__HeroesTab       = 3,
	EFortBangType__VaultTab        = 4,
	EFortBangType__StoreTab        = 5,
	EFortBangType__FriendsButton   = 6,
	EFortBangType__PartyInviteButton = 7,
	EFortBangType__DailyRewardsButton = 8,
	EFortBangType__QuestsButton    = 9,
	EFortBangType__VaultSchematics = 10,
	EFortBangType__VaultResources  = 11,
	EFortBangType__VaultMelee      = 12,
	EFortBangType__VaultRanged     = 13,
	EFortBangType__VaultConsumables = 14,
	EFortBangType__VaultIngredients = 15,
	EFortBangType__VaultTraps      = 16
};


// Enum FortniteGame.EFortEventNameType
enum class EFortEventNameType : uint8_t
{

};


// Enum FortniteGame.EFortCraftFailCause
enum class EFortCraftFailCause : uint8_t
{

};


// Enum FortniteGame.EKeepContainerType
enum class EKeepContainerType : uint8_t
{

};


// Enum FortniteGame.EFortIndicatorState
enum class EFortIndicatorState : uint8_t
{

};


// Enum FortniteGame.EReadyCheckState
enum class EReadyCheckState : uint8_t
{

};


// Enum FortniteGame.ERichPresenceStateChange
enum class ERichPresenceStateChange : uint8_t
{

};


// Enum FortniteGame.EFortTeamAffiliation
enum class EFortTeamAffiliation : uint8_t
{

};


// Enum FortniteGame.EFortAIUtility
enum class EFortAIUtility : uint8_t
{

};


// Enum FortniteGame.EFortTileEdgeType
enum class EFortTileEdgeType : uint8_t
{

};


// Enum FortniteGame.EFortRequestedGameplayAction
enum class EFortRequestedGameplayAction : uint8_t
{

};


// Enum FortniteGame.EFortGameplayState
enum class EFortGameplayState : uint8_t
{

};


// Enum FortniteGame.EFortMovementUrgency
enum class EFortMovementUrgency : uint8_t
{

};


// Enum FortniteGame.EFortMovementStyle
enum class EFortMovementStyle : uint8_t
{

};


// Enum FortniteGame.EFortWeaponTriggerType
enum class EFortWeaponTriggerType : uint8_t
{

};


// Enum FortniteGame.EFortJumpStaminaCost
enum class EFortJumpStaminaCost : uint8_t
{

};


// Enum FortniteGame.EFortDayPhasePrio
enum class EFortDayPhasePrio : uint8_t
{

};


// Enum FortniteGame.EFortCustomBodyType
enum class EFortCustomBodyType : uint8_t
{

};


// Enum FortniteGame.EFortDisplayGender
enum class EFortDisplayGender : uint8_t
{

};


// Enum FortniteGame.EFortCustomGender
enum class EFortCustomGender : uint8_t
{

};


// Enum FortniteGame.EFortCompletionResult
enum class EFortCompletionResult : uint8_t
{

};


// Enum FortniteGame.EFortPvPGameResult
enum class EFortPvPGameResult : uint8_t
{

};


// Enum FortniteGame.EFortItemTier
enum class EFortItemTier : uint8_t
{

};


// Enum FortniteGame.EFortQuality
enum class EFortQuality : uint8_t
{

};


// Enum FortniteGame.EFortRarity
enum class EFortRarity : uint8_t
{

};


// Enum FortniteGame.EFortTargetSelectionFilter
enum class EFortTargetSelectionFilter : uint8_t
{
	EFortTargetSelectionFilter__AIPawns = 0
};


// Enum FortniteGame.EFortTargetSelectionTestType
enum class EFortTargetSelectionTestType : uint8_t
{

};


// Enum FortniteGame.EFortTargetSelectionShape
enum class EFortTargetSelectionShape : uint8_t
{

};


// Enum FortniteGame.EInventoryContentSortType
enum class EInventoryContentSortType : uint8_t
{

};


// Enum FortniteGame.EFortFrontendInventoryFilter
enum class EFortFrontendInventoryFilter : uint8_t
{

};


// Enum FortniteGame.EFortInventoryFilter
enum class EFortInventoryFilter : uint8_t
{

};


// Enum FortniteGame.EFortItemCategoryOrdinal
enum class EFortItemCategoryOrdinal : uint8_t
{

};


// Enum FortniteGame.ESubGameMatchmakingStatus
enum class ESubGameMatchmakingStatus : uint8_t
{

};


// Enum FortniteGame.ESubGameAccessStatus
enum class ESubGameAccessStatus : uint8_t
{

};


// Enum FortniteGame.ENavigationObstacleOverride
enum class ENavigationObstacleOverride : uint8_t
{

};


// Enum FortniteGame.EFortPartialPathUsage
enum class EFortPartialPathUsage : uint8_t
{

};


// Enum FortniteGame.EFortBrushSize
enum class EFortBrushSize : uint8_t
{

};


// Enum FortniteGame.EHotspotTypeConfigMode
enum class EHotspotTypeConfigMode : uint8_t
{

};


// Enum FortniteGame.EFortHotSpotPreview
enum class EFortHotSpotPreview : uint8_t
{

};


// Enum FortniteGame.ESubGame
enum class ESubGame : uint8_t
{

};


// Enum FortniteGame.EFortHotSpotDirection
enum class EFortHotSpotDirection : uint8_t
{

};


// Enum FortniteGame.EFortHotSpotSlot
enum class EFortHotSpotSlot : uint8_t
{

};


// Enum FortniteGame.EBuildingFloorRailing
enum class EBuildingFloorRailing : uint8_t
{

};


// Enum FortniteGame.EBuildingStairsRailing
enum class EBuildingStairsRailing : uint8_t
{

};


// Enum FortniteGame.EBuildingWallArea
enum class EBuildingWallArea : uint8_t
{

};


// Enum FortniteGame.EAssignmentType
enum class EAssignmentType : uint8_t
{

};


// Enum FortniteGame.EFortAILODLevel
enum class EFortAILODLevel : uint8_t
{

};


// Enum FortniteGame.EFortBounceType
enum class EFortBounceType : uint8_t
{

};


// Enum FortniteGame.EFortItemEntryState
enum class EFortItemEntryState : uint8_t
{

};


// Enum FortniteGame.EFortConnectivityCubeFace
enum class EFortConnectivityCubeFace : uint8_t
{

};


// Enum FortniteGame.EFortStructuralGridQueryResults
enum class EFortStructuralGridQueryResults : uint8_t
{

};


// Enum FortniteGame.EFortCostInfoTypes
enum class EFortCostInfoTypes : uint8_t
{

};


// Enum FortniteGame.EFortBuildingInitializationReason
enum class EFortBuildingInitializationReason : uint8_t
{

};


// Enum FortniteGame.EFortBuildingPersistentState
enum class EFortBuildingPersistentState : uint8_t
{

};


// Enum FortniteGame.EFortBuildingState
enum class EFortBuildingState : uint8_t
{

};


// Enum FortniteGame.EFortDecoPlacementQueryResults
enum class EFortDecoPlacementQueryResults : uint8_t
{

};


// Enum FortniteGame.EFortResourceLevel
enum class EFortResourceLevel : uint8_t
{

};


// Enum FortniteGame.EFortResourceType
enum class EFortResourceType : uint8_t
{

};


// Enum FortniteGame.EFortTextureDataSlot
enum class EFortTextureDataSlot : uint8_t
{

};


// Enum FortniteGame.EFortTextureDataType
enum class EFortTextureDataType : uint8_t
{

};


// Enum FortniteGame.EBuildingAttachmentType
enum class EBuildingAttachmentType : uint8_t
{

};


// Enum FortniteGame.EFortBuildingType
enum class EFortBuildingType : uint8_t
{

};


// Enum FortniteGame.EFortMissionAudibility
enum class EFortMissionAudibility : uint8_t
{

};


// Enum FortniteGame.EFortMissionType
enum class EFortMissionType : uint8_t
{

};


// Enum FortniteGame.EFortMissionStatus
enum class EFortMissionStatus : uint8_t
{

};


// Enum FortniteGame.EMissionGenerationCategory
enum class EMissionGenerationCategory : uint8_t
{

};


// Enum FortniteGame.TInteractionType
enum class ETInteractionType : uint8_t
{

};


// Enum FortniteGame.EFortPIDValueGraphElements
enum class EFortPIDValueGraphElements : uint8_t
{

};


// Enum FortniteGame.EFortIntensityGraphElements
enum class EFortIntensityGraphElements : uint8_t
{

};


// Enum FortniteGame.EFortContributionGraphElements
enum class EFortContributionGraphElements : uint8_t
{

};


// Enum FortniteGame.EBuildingHighlightType
enum class EBuildingHighlightType : uint8_t
{

};


// Enum FortniteGame.EFortObjectiveRequirement
enum class EFortObjectiveRequirement : uint8_t
{

};


// Enum FortniteGame.EFortAIDirectorFactor
enum class EFortAIDirectorFactor : uint8_t
{

};


// Enum FortniteGame.EFortCombatFactors
enum class EFortCombatFactors : uint8_t
{

};


// Enum FortniteGame.EFortCombatEvents
enum class EFortCombatEvents : uint8_t
{

};


// Enum FortniteGame.EFortAIDirectorEventParticipant
enum class EFortAIDirectorEventParticipant : uint8_t
{

};


// Enum FortniteGame.EFortFactorContributionType
enum class EFortFactorContributionType : uint8_t
{

};


// Enum FortniteGame.EFortElementalDamageType
enum class EFortElementalDamageType : uint8_t
{

};


// Enum FortniteGame.EFortDamageZone
enum class EFortDamageZone : uint8_t
{

};


// Enum FortniteGame.EFortBaseWeaponDamage
enum class EFortBaseWeaponDamage : uint8_t
{

};


// Enum FortniteGame.EFortWeaponCoreAnimation
enum class EFortWeaponCoreAnimation : uint8_t
{

};


// Enum FortniteGame.EFortReloadFXState
enum class EFortReloadFXState : uint8_t
{

};


// Enum FortniteGame.EFortWeaponSoundState
enum class EFortWeaponSoundState : uint8_t
{

};


// Enum FortniteGame.EFortMontageInputType
enum class EFortMontageInputType : uint8_t
{

};


// Enum FortniteGame.EFortAbilityTargetingSource
enum class EFortAbilityTargetingSource : uint8_t
{

};


// Enum FortniteGame.EAbilitySystemComponentCreationPolicy
enum class EAbilitySystemComponentCreationPolicy : uint8_t
{

};


// Enum FortniteGame.EAttributeInitLevelSource
enum class EAttributeInitLevelSource : uint8_t
{

};


// Enum FortniteGame.EDynamicBuildingPlacementType
enum class EDynamicBuildingPlacementType : uint8_t
{

};


// Enum FortniteGame.ELootQuotaLevel
enum class ELootQuotaLevel : uint8_t
{

};


// Enum FortniteGame.EBuildingNavObstacleType
enum class EBuildingNavObstacleType : uint8_t
{

};


// Enum FortniteGame.EFortDamageVisualsState
enum class EFortDamageVisualsState : uint8_t
{

};


// Enum FortniteGame.EStructuralSupportCheck
enum class EStructuralSupportCheck : uint8_t
{

};


// Enum FortniteGame.EBuildingReplacementType
enum class EBuildingReplacementType : uint8_t
{

};


// Enum FortniteGame.EPlacementType
enum class EPlacementType : uint8_t
{

};


// Enum FortniteGame.EBuildingAttachmentSide
enum class EBuildingAttachmentSide : uint8_t
{

};


// Enum FortniteGame.EBuildingAttachmentSlot
enum class EBuildingAttachmentSlot : uint8_t
{

};


// Enum FortniteGame.EBuildingAnim
enum class EBuildingAnim : uint8_t
{

};


// Enum FortniteGame.EBoundingBoxSlotDirectionCalculation
enum class EBoundingBoxSlotDirectionCalculation : uint8_t
{
	EBoundingBoxSlotDirectionCalculation__FaceWall = 0,
	EBoundingBoxSlotDirectionCalculation__FaceCenter = 1
};


// Enum FortniteGame.EFortProximityBasedGEApplicationType
enum class EFortProximityBasedGEApplicationType : uint8_t
{
	EFortProximityBasedGEApplicationType__ApplyOnProximityPulse = 0,
	EFortProximityBasedGEApplicationType__ApplyOnProximityTouch = 1,
	EFortProximityBasedGEApplicationType__ApplyOnlyDuringProximityTouch = 2
};


// Enum FortniteGame.EFortDeliveryInfoBuildingActorSpecification
enum class EFortDeliveryInfoBuildingActorSpecification : uint8_t
{

};


// Enum FortniteGame.EUnlockRules
enum class EUnlockRules : uint8_t
{

};


// Enum FortniteGame.EContentionRules
enum class EContentionRules : uint8_t
{

};


// Enum FortniteGame.EFortIsFinalXpUpdate
enum class EFortIsFinalXpUpdate : uint8_t
{

};


// Enum FortniteGame.EFortAmmoType
enum class EFortAmmoType : uint8_t
{

};


// Enum FortniteGame.EFortCombatThresholds
enum class EFortCombatThresholds : uint8_t
{

};


// Enum FortniteGame.EFortRewardType
enum class EFortRewardType : uint8_t
{

};


// Enum FortniteGame.EStatCategory
enum class EStatCategory : uint8_t
{

};


// Enum FortniteGame.EFortReplicatedStat
enum class EFortReplicatedStat : uint8_t
{

};


// Enum FortniteGame.EFortRewardActivityType
enum class EFortRewardActivityType : uint8_t
{

};


// Enum FortniteGame.EFortReplenishmentType
enum class EFortReplenishmentType : uint8_t
{

};


// Enum FortniteGame.EFortTemplateAccess
enum class EFortTemplateAccess : uint8_t
{

};


// Enum FortniteGame.EItemUpgradeRestrictionReason
enum class EItemUpgradeRestrictionReason : uint8_t
{

};


// Enum FortniteGame.EFOBFileHeaderStatus
enum class EFOBFileHeaderStatus : uint8_t
{

};


// Enum FortniteGame.EFOBInitStatus
enum class EFOBInitStatus : uint8_t
{

};


// Enum FortniteGame.EFOBMode
enum class EFOBMode : uint8_t
{

};


// Enum FortniteGame.EFortItemCollectorBehavior
enum class EFortItemCollectorBehavior : uint8_t
{

};


// Enum FortniteGame.EFortItemCollectorState
enum class EFortItemCollectorState : uint8_t
{

};


// Enum FortniteGame.EDeployableBaseConstructionStatus
enum class EDeployableBaseConstructionStatus : uint8_t
{

};


// Enum FortniteGame.EDeployableBaseBuildingState
enum class EDeployableBaseBuildingState : uint8_t
{

};


// Enum FortniteGame.EFortQuickBars
enum class EFortQuickBars : uint8_t
{

};


// Enum FortniteGame.EDeployableBaseBoxType
enum class EDeployableBaseBoxType : uint8_t
{

};


// Enum FortniteGame.EFortMiniMapIconRotation
enum class EFortMiniMapIconRotation : uint8_t
{

};


// Enum FortniteGame.EFortMiniMapContext
enum class EFortMiniMapContext : uint8_t
{

};


// Enum FortniteGame.EFortAbilityTargetSelectionUsage
enum class EFortAbilityTargetSelectionUsage : uint8_t
{

};


// Enum FortniteGame.EFortAbilityCostSource
enum class EFortAbilityCostSource : uint8_t
{

};


// Enum FortniteGame.EFortGameplayAbilityActivation
enum class EFortGameplayAbilityActivation : uint8_t
{

};


// Enum FortniteGame.EFortAIWeaponUsage
enum class EFortAIWeaponUsage : uint8_t
{

};


// Enum FortniteGame.EFortGameplayAbilityMontageSectionToPlay
enum class EFortGameplayAbilityMontageSectionToPlay : uint8_t
{

};


// Enum FortniteGame.EItemEvolutionRestrictionReason
enum class EItemEvolutionRestrictionReason : uint8_t
{

};


// Enum FortniteGame.EFortRiftSlotStatus
enum class EFortRiftSlotStatus : uint8_t
{

};


// Enum FortniteGame.EFortDisplayTier
enum class EFortDisplayTier : uint8_t
{

};


// Enum FortniteGame.ETrackVerticality
enum class ETrackVerticality : uint8_t
{

};


// Enum FortniteGame.ETrackIncline
enum class ETrackIncline : uint8_t
{

};


// Enum FortniteGame.ETrackPieceType
enum class ETrackPieceType : uint8_t
{

};


// Enum FortniteGame.ETrackDirection
enum class ETrackDirection : uint8_t
{

};


// Enum FortniteGame.EFortAccountLinkingUIConfig
enum class EFortAccountLinkingUIConfig : uint8_t
{

};


// Enum FortniteGame.EFortStrategicBuildingLevelCriteriaDisplayRepresentation
enum class EFortStrategicBuildingLevelCriteriaDisplayRepresentation : uint8_t
{

};


// Enum FortniteGame.EFortMiniMapHeight
enum class EFortMiniMapHeight : uint8_t
{

};


// Enum FortniteGame.EMusicFadeStyles
enum class EMusicFadeStyles : uint8_t
{

};


// Enum FortniteGame.EBuildingFoundationType
enum class EBuildingFoundationType : uint8_t
{

};


// Enum FortniteGame.ELayoutRequirementStatus
enum class ELayoutRequirementStatus : uint8_t
{

};


// Enum FortniteGame.EFortDefenderInteractionError
enum class EFortDefenderInteractionError : uint8_t
{

};


// Enum FortniteGame.FDynamicBuildOrder
enum class EFDynamicBuildOrder : uint8_t
{

};


// Enum FortniteGame.EFortThreatDeactivationType
enum class EFortThreatDeactivationType : uint8_t
{

};


// Enum FortniteGame.EMusicChannel
enum class EMusicChannel : uint8_t
{

};


// Enum FortniteGame.EAuxIndicatorStates
enum class EAuxIndicatorStates : uint8_t
{

};


// Enum FortniteGame.EColorSwatchType
enum class EColorSwatchType : uint8_t
{

};


// Enum FortniteGame.ECharacterColorSwatchType
enum class ECharacterColorSwatchType : uint8_t
{

};


// Enum FortniteGame.ECustomHatType
enum class ECustomHatType : uint8_t
{

};


// Enum FortniteGame.EClothingColorName
enum class EClothingColorName : uint8_t
{

};


// Enum FortniteGame.EFortAttributeDisplay
enum class EFortAttributeDisplay : uint8_t
{

};


// Enum FortniteGame.EFortStatDisplayType
enum class EFortStatDisplayType : uint8_t
{

};


// Enum FortniteGame.EFortDirectedMovementSpace
enum class EFortDirectedMovementSpace : uint8_t
{

};


// Enum FortniteGame.EFortStrategicBuildingCategory
enum class EFortStrategicBuildingCategory : uint8_t
{

};


// Enum FortniteGame.EBinaryToggleValues
enum class EBinaryToggleValues : uint8_t
{

};


// Enum FortniteGame.EPathObstacleAction
enum class EPathObstacleAction : uint8_t
{

};


// Enum FortniteGame.EFortFeedbackBroadcastFilter
enum class EFortFeedbackBroadcastFilter : uint8_t
{

};


// Enum FortniteGame.EFortFeedbackSelectionMethod
enum class EFortFeedbackSelectionMethod : uint8_t
{

};


// Enum FortniteGame.EPathUndermineEvent
enum class EPathUndermineEvent : uint8_t
{

};


// Enum FortniteGame.EFortFeedbackContext
enum class EFortFeedbackContext : uint8_t
{

};


// Enum FortniteGame.EFortSentenceAudioPreference
enum class EFortSentenceAudioPreference : uint8_t
{

};


// Enum FortniteGame.EFortPickupTossState
enum class EFortPickupTossState : uint8_t
{

};


// Enum FortniteGame.EFortControlRecoveryBehavior
enum class EFortControlRecoveryBehavior : uint8_t
{

};


// Enum FortniteGame.EFortFeedbackAddressee
enum class EFortFeedbackAddressee : uint8_t
{

};


// Enum FortniteGame.EFortAIPawnGender
enum class EFortAIPawnGender : uint8_t
{

};


// Enum FortniteGame.EFortAILevelRatingDisplayType
enum class EFortAILevelRatingDisplayType : uint8_t
{

};


// Enum FortniteGame.EFortressAIType
enum class EFortressAIType : uint8_t
{

};


// Enum FortniteGame.EFortPawnPushSize
enum class EFortPawnPushSize : uint8_t
{

};


// Enum FortniteGame.EFortEncounterUtilitiesMode
enum class EFortEncounterUtilitiesMode : uint8_t
{

};


// Enum FortniteGame.EFortEncounterSpawnLocationPlacementMode
enum class EFortEncounterSpawnLocationPlacementMode : uint8_t
{

};


// Enum FortniteGame.EAccessoryColorName
enum class EAccessoryColorName : uint8_t
{

};


// Enum FortniteGame.EFortEncounterPacingMode
enum class EFortEncounterPacingMode : uint8_t
{

};


// Enum FortniteGame.EFortEncounterSpawnLimitType
enum class EFortEncounterSpawnLimitType : uint8_t
{

};


// Enum FortniteGame.EWardAffectType
enum class EWardAffectType : uint8_t
{

};


// Enum FortniteGame.EFortEncounterUtilityDesire
enum class EFortEncounterUtilityDesire : uint8_t
{

};


// Enum FortniteGame.EFortAIDirectorFactorContribution
enum class EFortAIDirectorFactorContribution : uint8_t
{

};


// Enum FortniteGame.EFortAIDirectorEventContribution
enum class EFortAIDirectorEventContribution : uint8_t
{

};


// Enum FortniteGame.ETagGoalScoringCategory
enum class ETagGoalScoringCategory : uint8_t
{

};


// Enum FortniteGame.EFortIntensityCurveSequenceType
enum class EFortIntensityCurveSequenceType : uint8_t
{

};


// Enum FortniteGame.EFortEncounterState
enum class EFortEncounterState : uint8_t
{

};


// Enum FortniteGame.EFortEncounterPacingState
enum class EFortEncounterPacingState : uint8_t
{

};


// Enum FortniteGame.EFortEncounterSequenceResult
enum class EFortEncounterSequenceResult : uint8_t
{

};


// Enum FortniteGame.EAssignmentCreationResult
enum class EAssignmentCreationResult : uint8_t
{

};


// Enum FortniteGame.ECorePerceptionTypes
enum class ECorePerceptionTypes : uint8_t
{

};


// Enum FortniteGame.EFortAIWaveProgressSection
enum class EFortAIWaveProgressSection : uint8_t
{

};


// Enum FortniteGame.EFortHuskAnimType
enum class EFortHuskAnimType : uint8_t
{

};


// Enum FortniteGame.ESpecializationType
enum class ESpecializationType : uint8_t
{

};


// Enum FortniteGame.EFortPawnStasisMode
enum class EFortPawnStasisMode : uint8_t
{

};


// Enum FortniteGame.EFortAnnouncementChannel
enum class EFortAnnouncementChannel : uint8_t
{

};


// Enum FortniteGame.EFortAnnouncementDelivery
enum class EFortAnnouncementDelivery : uint8_t
{

};


// Enum FortniteGame.EStatRecordingPeriod
enum class EStatRecordingPeriod : uint8_t
{

};


// Enum FortniteGame.EStatMod
enum class EStatMod : uint8_t
{

};


// Enum FortniteGame.EFortEventConditionType
enum class EFortEventConditionType : uint8_t
{

};


// Enum FortniteGame.EFortAnnouncementDisplayPreference
enum class EFortAnnouncementDisplayPreference : uint8_t
{

};


// Enum FortniteGame.EFortCompare
enum class EFortCompare : uint8_t
{

};


// Enum FortniteGame.EFortEventRepeat
enum class EFortEventRepeat : uint8_t
{

};


// Enum FortniteGame.EPrereqNodeType
enum class EPrereqNodeType : uint8_t
{

};


// Enum FortniteGame.EFortHomebaseNodeActionType
enum class EFortHomebaseNodeActionType : uint8_t
{

};


// Enum FortniteGame.EFortHomebaseNodeMagnitude
enum class EFortHomebaseNodeMagnitude : uint8_t
{

};


// Enum FortniteGame.EFortHomebaseNodeDisplayType
enum class EFortHomebaseNodeDisplayType : uint8_t
{

};


// Enum FortniteGame.EFortHomebaseSquadSlotType
enum class EFortHomebaseSquadSlotType : uint8_t
{

};


// Enum FortniteGame.EFortHomebaseSquadType
enum class EFortHomebaseSquadType : uint8_t
{

};


// Enum FortniteGame.EFortNotificationType
enum class EFortNotificationType : uint8_t
{

};


// Enum FortniteGame.EFortHexTileAdjacency
enum class EFortHexTileAdjacency : uint8_t
{

};


// Enum FortniteGame.EFortTheaterType
enum class EFortTheaterType : uint8_t
{

};


// Enum FortniteGame.EFortTheaterMapTileType
enum class EFortTheaterMapTileType : uint8_t
{

};


// Enum FortniteGame.EFortNotificationPriority
enum class EFortNotificationPriority : uint8_t
{

};


// Enum FortniteGame.EFortQuestState
enum class EFortQuestState : uint8_t
{

};


// Enum FortniteGame.EFortMissionQuestValidityResult
enum class EFortMissionQuestValidityResult : uint8_t
{

};


// Enum FortniteGame.EWaveRules
enum class EWaveRules : uint8_t
{

};


// Enum FortniteGame.EFriendFeedbackType
enum class EFriendFeedbackType : uint8_t
{

};


// Enum FortniteGame.EClampType
enum class EClampType : uint8_t
{

};


// Enum FortniteGame.EDeployableBaseUseType
enum class EDeployableBaseUseType : uint8_t
{

};


// Enum FortniteGame.EFortZoneType
enum class EFortZoneType : uint8_t
{

};


// Enum FortniteGame.EFortMtxPlatform
enum class EFortMtxPlatform : uint8_t
{

};


// Enum FortniteGame.EAthenaCustomizationCategory
enum class EAthenaCustomizationCategory : uint8_t
{

};


// Enum FortniteGame.EMontageInterrupt
enum class EMontageInterrupt : uint8_t
{

};


// Enum FortniteGame.ECameraOrigin
enum class ECameraOrigin : uint8_t
{

};


// Enum FortniteGame.EFortVisibilityBehavior
enum class EFortVisibilityBehavior : uint8_t
{

};


// Enum FortniteGame.EFortSafeZoneState
enum class EFortSafeZoneState : uint8_t
{

};


// Enum FortniteGame.ECollectionSelectionMethod
enum class ECollectionSelectionMethod : uint8_t
{

};


// Enum FortniteGame.ETargetDistanceComparisonType
enum class ETargetDistanceComparisonType : uint8_t
{

};


// Enum FortniteGame.EFortSocialItemPresenceStatus
enum class EFortSocialItemPresenceStatus : uint8_t
{

};


// Enum FortniteGame.EFortSocialItemType
enum class EFortSocialItemType : uint8_t
{

};


// Enum FortniteGame.EMcpLeaderboardTimeWindow
enum class EMcpLeaderboardTimeWindow : uint8_t
{

};


// Enum FortniteGame.EFortDamageNumberType
enum class EFortDamageNumberType : uint8_t
{

};


// Enum FortniteGame.EFortCollectionBookState
enum class EFortCollectionBookState : uint8_t
{

};


// Enum FortniteGame.ETimespanAsTextFormat
enum class ETimespanAsTextFormat : uint8_t
{

};


// Enum FortniteGame.EHordeTierStartStatus
enum class EHordeTierStartStatus : uint8_t
{

};


// Enum FortniteGame.EFortUserCloudRequestResult
enum class EFortUserCloudRequestResult : uint8_t
{

};


// Enum FortniteGame.ETeamChatRoomState
enum class ETeamChatRoomState : uint8_t
{

};


// Enum FortniteGame.EFortWorldManagerState
enum class EFortWorldManagerState : uint8_t
{

};


// Enum FortniteGame.EFortLevelStreamingState
enum class EFortLevelStreamingState : uint8_t
{

};


// Enum FortniteGame.EFortQueuedActionUserStatus
enum class EFortQueuedActionUserStatus : uint8_t
{

};


// Enum FortniteGame.EFortWorldRecordState
enum class EFortWorldRecordState : uint8_t
{

};


// Enum FortniteGame.EFortUserCloudRequestType
enum class EFortUserCloudRequestType : uint8_t
{

};


// Enum FortniteGame.EFortWorldRecordAction
enum class EFortWorldRecordAction : uint8_t
{

};


// Enum FortniteGame.EHordeWaveStingerType
enum class EHordeWaveStingerType : uint8_t
{

};


// Enum FortniteGame.EQueueActionType
enum class EQueueActionType : uint8_t
{

};


// Enum FortniteGame.EAthenaPIEStartupMode
enum class EAthenaPIEStartupMode : uint8_t
{

};


// Enum FortniteGame.EPvPGameEndReasons
enum class EPvPGameEndReasons : uint8_t
{

};


// Enum FortniteGame.EFortInputActionGroup
enum class EFortInputActionGroup : uint8_t
{

};


// Enum FortniteGame.EFortInputActionType
enum class EFortInputActionType : uint8_t
{

};


// Enum FortniteGame.EInventoryOverflowReason
enum class EInventoryOverflowReason : uint8_t
{

};


// Enum FortniteGame.EFortPickerToDisplay
enum class EFortPickerToDisplay : uint8_t
{

};


// Enum FortniteGame.EFortQuestObjectiveItemEvent
enum class EFortQuestObjectiveItemEvent : uint8_t
{

};


// Enum FortniteGame.EFortQuestObjectiveStatEvent
enum class EFortQuestObjectiveStatEvent : uint8_t
{

};


// Enum FortniteGame.EFortOptionGenerationResult
enum class EFortOptionGenerationResult : uint8_t
{

};


// Enum FortniteGame.EFortQuestType
enum class EFortQuestType : uint8_t
{

};


// Enum FortniteGame.ERewardSource
enum class ERewardSource : uint8_t
{

};


// Enum FortniteGame.EFortServerGameMode
enum class EFortServerGameMode : uint8_t
{

};


// Enum FortniteGame.EFortMatchKickAction
enum class EFortMatchKickAction : uint8_t
{

};


// Enum FortniteGame.EAthenaAerialPhase
enum class EAthenaAerialPhase : uint8_t
{

};


// Enum FortniteGame.EFortNamedNavmesh
enum class EFortNamedNavmesh : uint8_t
{

};


// Enum FortniteGame.EFortCharacterCosmetic
enum class EFortCharacterCosmetic : uint8_t
{

};


// Enum FortniteGame.EFortQuestRewardType
enum class EFortQuestRewardType : uint8_t
{

};


// Enum FortniteGame.ETwitchViewerStatusType
enum class ETwitchViewerStatusType : uint8_t
{

};


// Enum FortniteGame.ELobbyMissionGeneratorDetailsRequirement
enum class ELobbyMissionGeneratorDetailsRequirement : uint8_t
{

};


// Enum FortniteGame.EFortMatchmakingPool
enum class EFortMatchmakingPool : uint8_t
{

};


// Enum FortniteGame.ECodeTokenPlatform
enum class ECodeTokenPlatform : uint8_t
{

};


// Enum FortniteGame.EFortMatchmakingPrivacyConfiguration
enum class EFortMatchmakingPrivacyConfiguration : uint8_t
{

};


// Enum FortniteGame.EMatchmakingFlags
enum class EMatchmakingFlags : uint8_t
{

};


// Enum FortniteGame.EMatchmakingStartLocation
enum class EMatchmakingStartLocation : uint8_t
{

};


// Enum FortniteGame.EFortSupportBonusType
enum class EFortSupportBonusType : uint8_t
{

};


// Enum FortniteGame.EFortMatchmakingType
enum class EFortMatchmakingType : uint8_t
{

};


// Enum FortniteGame.EFortSessionHelperJoinState
enum class EFortSessionHelperJoinState : uint8_t
{

};


// Enum FortniteGame.EPollActorsInVolumeTypes
enum class EPollActorsInVolumeTypes : uint8_t
{

};


// Enum FortniteGame.EMissionReplyTypes
enum class EMissionReplyTypes : uint8_t
{

};


// Enum FortniteGame.ETimerOverrideSetting
enum class ETimerOverrideSetting : uint8_t
{

};


// Enum FortniteGame.EFortAreaFlag
enum class EFortAreaFlag : uint8_t
{

};


// Enum FortniteGame.EFortAnnouncerTeamVocalChords
enum class EFortAnnouncerTeamVocalChords : uint8_t
{

};


// Enum FortniteGame.ETrustedPlatformType
enum class ETrustedPlatformType : uint8_t
{

};


// Enum FortniteGame.EFrontEndCamera
enum class EFrontEndCamera : uint8_t
{

};


// Enum FortniteGame.EFortNavLinkPattern
enum class EFortNavLinkPattern : uint8_t
{

};


// Enum FortniteGame.ESpectatorCameraType
enum class ESpectatorCameraType : uint8_t
{

};


// Enum FortniteGame.EFocusMethod
enum class EFocusMethod : uint8_t
{

};


// Enum FortniteGame.EDeathCause
enum class EDeathCause : uint8_t
{

};


// Enum FortniteGame.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{

};


// Enum FortniteGame.EFortTestGoalActorDot
enum class EFortTestGoalActorDot : uint8_t
{

};


// Enum FortniteGame.ECountAIAssignedToType
enum class ECountAIAssignedToType : uint8_t
{

};


// Enum FortniteGame.ETwoPointSolverRotationA
enum class ETwoPointSolverRotationA : uint8_t
{

};


// Enum FortniteGame.ERegisteredPlayerUnregistrationStatus
enum class ERegisteredPlayerUnregistrationStatus : uint8_t
{

};


// Enum FortniteGame.EFortUIScoreType
enum class EFortUIScoreType : uint8_t
{

};


// Enum FortniteGame.EFortScriptedActionEnvironment
enum class EFortScriptedActionEnvironment : uint8_t
{

};


// Enum FortniteGame.EFortScriptedActionSource
enum class EFortScriptedActionSource : uint8_t
{

};


// Enum FortniteGame.EFortCheatMissionGenType
enum class EFortCheatMissionGenType : uint8_t
{

};


// Enum FortniteGame.EDistanceMode
enum class EDistanceMode : uint8_t
{

};


// Enum FortniteGame.EFortContextualReticleTypes
enum class EFortContextualReticleTypes : uint8_t
{

};


// Enum FortniteGame.EFortReloadMontageSection
enum class EFortReloadMontageSection : uint8_t
{

};


// Enum FortniteGame.EFortSessionHelperJoinResult
enum class EFortSessionHelperJoinResult : uint8_t
{

};


// Enum FortniteGame.ESpeedWarpingAxisMode
enum class ESpeedWarpingAxisMode : uint8_t
{

};


// Enum FortniteGame.EFortUIFriendNotificationType
enum class EFortUIFriendNotificationType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteGame.FortMultiSizeBrush
// 0x0360
struct FFortMultiSizeBrush
{
	unsigned char                                      UnknownData00[0x360];                                     // 0x0000(0x0360) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIHotSpotSlotConfig
// 0x001C
struct FAIHotSpotSlotConfig
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyFortCategoryData
// 0x0058
struct FMyFortCategoryData
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0018(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDialogExternalLatentActionHandle
// 0x0004
struct FFortDialogExternalLatentActionHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AttributeInfo
// 0x0010
struct FAttributeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPartyRepState
// 0x0068 (0x0078 - 0x0010)
struct FFortPartyRepState : public FPartyState
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0010(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInputActionKeyAlias
// 0x0028
struct FFortInputActionKeyAlias
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeathInfo
// 0x0010
struct FDeathInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatLocationInfo
// 0x0054 (0x0060 - 0x000C)
struct FThreatLocationInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x54];                                      // 0x000C(0x0054) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAttributeInfo
// 0x0078
struct FFortAttributeInfo
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.ProjectileEventData
// 0x0028
struct FProjectileEventData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorEvent
// 0x0020
struct FFortAIDirectorEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.MtxPackage
// 0x00A0
struct FMtxPackage
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPublicAccountInfo
// 0x0024
struct FFortPublicAccountInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0004(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPrivateAccountInfo
// 0x0004 (0x0028 - 0x0024)
struct FFortPrivateAccountInfo : public FFortPublicAccountInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaLevelInfo
// 0x0014
struct FAthenaLevelInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHomeBaseInfo
// 0x0040
struct FFortHomeBaseInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemInstanceQuantityPair
// 0x0010
struct FFortItemInstanceQuantityPair
{
	class UFortItem*                                   Item;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FriendCode
// 0x0020
struct FFriendCode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAthenaLoadout
// 0x0068
struct FFortAthenaLoadout
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FriendCodeLocString
// 0x0020
struct FFriendCodeLocString
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTeamMemberInfo
// 0x0190
struct FFortTeamMemberInfo
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookRewards
// 0x0070
struct FFortCollectionBookRewards
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRewardInfo
// 0x0030
struct FFortRewardInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHiddenRewardQuantityPair
// 0x0010
struct FFortHiddenRewardQuantityPair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSelectableRewardOption
// 0x0010
struct FFortSelectableRewardOption
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemQuantityPair
// 0x0028
struct FFortItemQuantityPair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDialogDescription
// 0x0170
struct FFortDialogDescription
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterSettings
// 0x0058
struct FFortEncounterSettings
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodePage
// 0x0058 (0x0060 - 0x0008)
struct FHomebaseNodePage : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNode
// 0x00B8 (0x00C0 - 0x0008)
struct FHomebaseNode : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0020(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseSquadSlotId
// 0x0010
struct FHomebaseSquadSlotId
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodeANDPrerequisites
// 0x0010
struct FHomebaseNodeANDPrerequisites
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodeInstancePrerequisites
// 0x0020
struct FHomebaseNodeInstancePrerequisites
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInputActionDetails
// 0x0020
struct FFortInputActionDetails
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameSummaryInfo
// 0x0018
struct FGameSummaryInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDialogDescription_NUI
// 0x0180
struct FFortDialogDescription_NUI
{
	unsigned char                                      UnknownData00[0x180];                                     // 0x0000(0x0180) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConfirmationDialogAction
// 0x00D0
struct FConfirmationDialogAction
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0018(0x00B8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTagUIData
// 0x0398
struct FFortTagUIData
{
	unsigned char                                      UnknownData00[0x398];                                     // 0x0000(0x0398) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerDeathReport
// 0x0050
struct FFortPlayerDeathReport
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.EndOfDayRecap
// 0x0020
struct FEndOfDayRecap
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerScoreReport
// 0x0288
struct FFortPlayerScoreReport
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0000(0x0288) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortExperienceDelta
// 0x0024
struct FFortExperienceDelta
{
	int                                                Level;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0004(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.ReplicatedStatValues
// 0x0008
struct FReplicatedStatValues
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData
// 0x0001
struct FFortClientAnnouncementData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Basic
// 0x00EF (0x00F0 - 0x0001)
struct FFortClientAnnouncementData_Basic : public FFortClientAnnouncementData
{
	unsigned char                                      UnknownData00[0xEF];                                      // 0x0001(0x00EF) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Tutorial
// 0x0050 (0x0140 - 0x00F0)
struct FFortClientAnnouncementData_Tutorial : public FFortClientAnnouncementData_Basic
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseSquad
// 0x0080 (0x0088 - 0x0008)
struct FHomebaseSquad : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0020(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseSquadSlot
// 0x0060
struct FHomebaseSquadSlot
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0018(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseSquadAttributeBonus
// 0x0030
struct FHomebaseSquadAttributeBonus
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIHotSpotSlotInfo
// 0x0010
struct FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DataTableRowHandleQuantityPair
// 0x0018
struct FDataTableRowHandleQuantityPair
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEffectDistanceQuality
// 0x0018
struct FFortEffectDistanceQuality
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.KeybindIcon
// 0x0378
struct FKeybindIcon
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0018(0x0360) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortParticleSystemParamBucket
// 0x0010
struct FFortParticleSystemParamBucket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientEvent
// 0x0020
struct FFortClientEvent
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEventName
// 0x0010
struct FFortEventName
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortClientEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.FortMissionEventName
// 0x0000 (0x0010 - 0x0010)
struct FFortMissionEventName : public FFortEventName
{

};

// ScriptStruct FortniteGame.FortCatalogMetaPreload
// 0x0030
struct FFortCatalogMetaPreload
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCatalogMeta
// 0x0018
struct FFortCatalogMeta
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnContext
// 0x0028
struct FFortSpawnContext
{
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestPackInfo
// 0x0030
struct FFortQuestPackInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLoginReward
// 0x0048 (0x0050 - 0x0008)
struct FFortLoginReward : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.TransmogSacrifice
// 0x0008 (0x0010 - 0x0008)
struct FTransmogSacrifice : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.Recipe
// 0x0048 (0x0050 - 0x0008)
struct FRecipe : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInfo
// 0x0028
struct FEncounterEnvironmentQueryInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDayPhaseCallbackHandle
// 0x0010
struct FFortDayPhaseCallbackHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ItemCategory
// 0x0398
struct FItemCategory
{
	struct FGameplayTagContainer                       TagContainer;                                             // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       CategoryName;                                             // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x360];                                     // 0x0038(0x0360) MISSED OFFSET
};

// ScriptStruct FortniteGame.OnTimeHitInfo
// 0x0030
struct FOnTimeHitInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.ChoiceData
// 0x0030
struct FChoiceData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.ChoiceDataEntry
// 0x0050
struct FChoiceDataEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMultiSizeMargin
// 0x0060
struct FFortMultiSizeMargin
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMultiSizeFont
// 0x0270
struct FFortMultiSizeFont
{
	unsigned char                                      UnknownData00[0x270];                                     // 0x0000(0x0270) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRequirementsInfo
// 0x0040
struct FFortRequirementsInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIHotSpotUseInfo
// 0x0008 (0x0018 - 0x0010)
struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortNavLinkPattern
// 0x0008
struct FFortNavLinkPattern
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingActorNavArea
// 0x0004
struct FBuildingActorNavArea
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingActorHotSpotDirection
// 0x0020
struct FBuildingActorHotSpotDirection
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIAssignmentIdentifier
// 0x0030
struct FFortAIAssignmentIdentifier
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.AutoAcquireSlot
// 0x0010 (0x0020 - 0x0010)
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemEntry
// 0x009C (0x00A8 - 0x000C)
struct FFortItemEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x9C];                                      // 0x000C(0x009C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemEntryStateValue
// 0x0018
struct FFortItemEntryStateValue
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGiftingInfo
// 0x0028
struct FFortGiftingInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGiftGiver
// 0x0008 (0x0030 - 0x0028)
struct FFortGiftGiver : public FFortGiftingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBounceData
// 0x0030
struct FFortBounceData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionInstancedConfigData
// 0x0010
struct FFortMissionInstancedConfigData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionInstancedConfigDataBucket
// 0x0010
struct FFortMissionInstancedConfigDataBucket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionConfigDataParams
// 0x0010
struct FFortMissionConfigDataParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionConfigDataBucket
// 0x0028
struct FFortMissionConfigDataBucket
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConnectivityComponentData
// 0x0018
struct FFortConnectivityComponentData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacementActorFinderEntry
// 0x00B0
struct FFortPlacementActorFinderEntry
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConnectionData
// 0x0030
struct FFortConnectionData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFinderProperty
// 0x0018
struct FFortFinderProperty
{
	class UProperty*                                   Property;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacementActorFinderInfo
// 0x0018
struct FFortPlacementActorFinderInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacementDistanceRequirements
// 0x0008
struct FFortPlacementDistanceRequirements
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionEvent
// 0x0098
struct FFortMissionEvent
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct FortniteGame.InteractionType
// 0x0028
struct FInteractionType
{
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAttributeInitializationKey
// 0x0010
struct FFortAttributeInitializationKey
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayAttributeData
// 0x0010 (0x0020 - 0x0010)
struct FFortGameplayAttributeData : public FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioStats
// 0x0060 (0x0068 - 0x0008)
struct FFortSurfaceDamageRatioStats : public FTableRowBase
{
	struct FName                                       Default;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Wood;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Stone;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Metal;                                                    // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSurfaceDamageRatioByAffiliationStats
// 0x0010 (0x0018 - 0x0008)
struct FFortSurfaceDamageRatioByAffiliationStats : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDamageSource
// 0x0010
struct FFortDamageSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCombatManagerEvent
// 0x0008
struct FFortCombatManagerEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActiveMontageDecisionWindow
// 0x0018
struct FFortActiveMontageDecisionWindow
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMontageInputAction
// 0x0018
struct FFortMontageInputAction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingClassData
// 0x0010
struct FBuildingClassData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCrackEffectData
// 0x0028
struct FFortCrackEffectData
{
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootQuotaData
// 0x0020 (0x0028 - 0x0008)
struct FFortLootQuotaData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.EditModeState
// 0x0010
struct FEditModeState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.EditorOnlyBuildingInstanceMaterialParameters
// 0x0030
struct FEditorOnlyBuildingInstanceMaterialParameters
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.RandomDayphaseFX
// 0x0040
struct FRandomDayphaseFX
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.ChosenQuotaInfo
// 0x0010
struct FChosenQuotaInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TierMeshSets
// 0x0018
struct FTierMeshSets
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.MeshSet
// 0x0070
struct FMeshSet
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWeakSpotPosition
// 0x001C
struct FFortWeakSpotPosition
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingValueRules
// 0x001C
struct FBuildingValueRules
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaLevelUpData
// 0x0020 (0x0028 - 0x0008)
struct FAthenaLevelUpData : public FTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameplayEffectApplicationInfo
// 0x0028
struct FGameplayEffectApplicationInfo
{
	TAssetPtr<class UClass>                            GameplayEffect;                                           // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	float                                              Level;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilitySetHandle
// 0x0028
struct FFortAbilitySetHandle
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayAbilityTargetData_SingleTargetHit
// 0x0008 (0x0098 - 0x0090)
struct FFortGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData_SingleTargetHit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifierHandle
// 0x0004
struct FActiveGameplayModifierHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.ProximityBasedGEDeliveryInfo
// 0x00B0
struct FProximityBasedGEDeliveryInfo
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDeliveryInfoRequirementsFilter
// 0x0098
struct FFortDeliveryInfoRequirementsFilter
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilitySetDeliveryInfo
// 0x00A8
struct FFortAbilitySetDeliveryInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConditionalIncludeTags
// 0x0040
struct FFortConditionalIncludeTags
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContext
// 0x0058 (0x00C0 - 0x0068)
struct FFortGameplayEffectContext : public FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectDeliveryInfo
// 0x00A8
struct FFortGameplayEffectDeliveryInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryInfo
// 0x0080
struct FBuildingGameplayActorAbilityDeliveryInfo
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingGameplayActorAbilityDeliveryBucket
// 0x0090
struct FBuildingGameplayActorAbilityDeliveryBucket
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.CarriedObjectAttachmentInfo
// 0x0028
struct FCarriedObjectAttachmentInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAlterationSlots
// 0x0002
struct FFortAlterationSlots
{
	TEnumAsByte<EFortAlteration>                       Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPresenceBasicInfo
// 0x0004
struct FFortPresenceBasicInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortZoneInstanceInfo
// 0x0060
struct FFortZoneInstanceInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortZoneInstanceDetails
// 0x00A8 (0x0108 - 0x0060)
struct FFortZoneInstanceDetails : public FFortZoneInstanceInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0060(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSavedModeLoadout
// 0x0020
struct FFortSavedModeLoadout
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatContainer
// 0x0010
struct FFortPersistentGameplayStatContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPersistentGameplayStatValue
// 0x0018
struct FFortPersistentGameplayStatValue
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortNamedCounterStat
// 0x0010
struct FFortNamedCounterStat
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRewardReport
// 0x0068
struct FFortRewardReport
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRewardActivity
// 0x0078
struct FFortRewardActivity
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUpdatedObjectiveStat
// 0x0018
struct FFortUpdatedObjectiveStat
{
	class UFortQuestItemDefinition*                    Quest;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipMapEntry
// 0x0018
struct FFortTooltipMapEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipValueData
// 0x0070
struct FFortTooltipValueData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipDisplayInfo
// 0x0038
struct FFortTooltipDisplayInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipDisplayStatsCategory
// 0x0028
struct FFortTooltipDisplayStatsCategory
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBar
// 0x0090
struct FQuickBar
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBarSlotData
// 0x0038
struct FQuickBarSlotData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBarData
// 0x0010
struct FQuickBarData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBarSlot
// 0x0018
struct FQuickBarSlot
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.QuickBarAndSlot
// 0x0008
struct FQuickBarAndSlot
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCloudSaveInfo
// 0x0018
struct FFortCloudSaveInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipDisplayStatInfo
// 0x0050
struct FFortTooltipDisplayStatInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCloudSaveRecordInfo
// 0x0018
struct FFortCloudSaveRecordInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.PinnedSchematicsRecord
// 0x0010
struct FPinnedSchematicsRecord
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerRecord
// 0x0200
struct FFortPlayerRecord
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0010(0x01F0) MISSED OFFSET
};

// ScriptStruct FortniteGame.StatManagerPeriodRecord
// 0x0010
struct FStatManagerPeriodRecord
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.StatRecord
// 0x0010
struct FStatRecord
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerStatsRecord
// 0x0088
struct FPlayerStatsRecord
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortZoneStats
// 0x0190
struct FFortZoneStats
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct FortniteGame.ContainerStatInfo
// 0x000C
struct FContainerStatInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.EnemyNpcStatInfo
// 0x0010
struct FEnemyNpcStatInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DefenderNPCStatInfo
// 0x000C
struct FDefenderNPCStatInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLevelRecord
// 0x0040
struct FFortLevelRecord
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActorRecord
// 0x0070
struct FFortActorRecord
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBuildingInstruction
// 0x0070
struct FFortBuildingInstruction
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.FOBCoreChoiceArray
// 0x0010 (0x00C0 - 0x00B0)
struct FFOBCoreChoiceArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FOBCoreChoice
// 0x002C (0x0038 - 0x000C)
struct FFOBCoreChoice : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortItemList
// 0x00C0 (0x0170 - 0x00B0)
struct FFortItemList : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00B0(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeferredActorData
// 0x0040
struct FDeferredActorData
{
	class ABuildingActor*                              BuildingActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamStrategicBuildingHandle
// 0x0004
struct FTeamStrategicBuildingHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityTargetSelectionList
// 0x0020
struct FFortAbilityTargetSelectionList
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityTargetSelection
// 0x0060
struct FFortAbilityTargetSelection
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTargetFilter
// 0x0020
struct FFortTargetFilter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.VisibilityTestPoint
// 0x0018
struct FVisibilityTestPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityCanHitParameters
// 0x0018
struct FFortAbilityCanHitParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityCost
// 0x0040
struct FFortAbilityCost
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayAbilityBehaviorDistanceData
// 0x0028
struct FFortGameplayAbilityBehaviorDistanceData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayAbilityMontageInfo
// 0x0060
struct FFortGameplayAbilityMontageInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCharacterPartMontageInfo
// 0x0010
struct FFortCharacterPartMontageInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContainerSpec
// 0x0080
struct FFortGameplayEffectContainerSpec
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingActiveConstructionInfo
// 0x0010
struct FStrategicBuildingActiveConstructionInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectContainer
// 0x0088
struct FFortGameplayEffectContainer
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelActiveCriteriaProgress
// 0x000C
struct FStrategicBuildingLevelActiveCriteriaProgress
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelInformation
// 0x0068
struct FStrategicBuildingLevelInformation
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelUnlocks
// 0x0030
struct FStrategicBuildingLevelUnlocks
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingUpgradePathInfo
// 0x00C8
struct FStrategicBuildingUpgradePathInfo
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct FortniteGame.StrategicBuildingLevelCriteria
// 0x0020
struct FStrategicBuildingLevelCriteria
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnSlotData
// 0x0020
struct FFortSpawnSlotData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSearchBounceData
// 0x0010
struct FFortSearchBounceData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepAmmoStash
// 0x0028 (0x0030 - 0x0008)
struct FFortKeepAmmoStash : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepItemGroup
// 0x0010 (0x0018 - 0x0008)
struct FFortKeepItemGroup : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortKeepResourceGroup
// 0x0040 (0x0048 - 0x0008)
struct FFortKeepResourceGroup : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConditionalCosmeticModification
// 0x0918
struct FFortConditionalCosmeticModification
{
	unsigned char                                      UnknownData00[0x918];                                     // 0x0000(0x0918) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCosmeticModification
// 0x08F8
struct FFortCosmeticModification
{
	unsigned char                                      UnknownData00[0x8F8];                                     // 0x0000(0x08F8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBaseWeaponStats
// 0x0118 (0x0120 - 0x0008)
struct FFortBaseWeaponStats : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0008(0x0118) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWeaponDurabilityByRarityStats
// 0x0028 (0x0030 - 0x0008)
struct FFortWeaponDurabilityByRarityStats : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.PatternBASEEffect
// 0x0010
struct FPatternBASEEffect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackConnectorMeshConfig
// 0x0010
struct FTrackConnectorMeshConfig
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.BASEGameplayEffect
// 0x0010
struct FBASEGameplayEffect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackConfiguration
// 0x0038
struct FTrackConfiguration
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackSwitchStateConfig
// 0x0024
struct FTrackSwitchStateConfig
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackSplineConfig
// 0x0003
struct FTrackSplineConfig
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackPieceConfig
// 0x001C
struct FTrackPieceConfig
{
	ETrackPieceType                                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0004(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.TimeOfDayEditorViewSettings
// 0x0001
struct FTimeOfDayEditorViewSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.SubGameAccess
// 0x0003
struct FSubGameAccess
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.PurchaseFailureLogSubmitOptions
// 0x0018
struct FPurchaseFailureLogSubmitOptions
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.LoginFailureLogSubmitOptions
// 0x0018
struct FLoginFailureLogSubmitOptions
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.PartyFailureLogSubmit
// 0x0018
struct FPartyFailureLogSubmit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseCylinderDelta
// 0x0090
struct FFortWindImpulseCylinderDelta
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.PartyFailureLogSubmitReason
// 0x0020
struct FPartyFailureLogSubmitReason
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseHandle
// 0x0004
struct FFortWindImpulseHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseRadius
// 0x004C
struct FFortWindImpulseRadius
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x000C(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseCylinderRadial
// 0x003C
struct FFortWindImpulseCylinderRadial
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x000C(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindImpulseCylinder
// 0x000C (0x0048 - 0x003C)
struct FFortWindImpulseCylinder : public FFortWindImpulseCylinderRadial
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.StormWindArray
// 0x0010 (0x00C0 - 0x00B0)
struct FStormWindArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.StormWind
// 0x0044 (0x0050 - 0x000C)
struct FStormWind : public FFastArraySerializerItem
{
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0018(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0024(0x002C) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatLocationArray
// 0x0010 (0x00C0 - 0x00B0)
struct FThreatLocationArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatGridIndex
// 0x0008
struct FThreatGridIndex
{
	int                                                X;                                                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteGame.DayPhaseInfo
// 0x0170
struct FDayPhaseInfo
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct FortniteGame.ExponentialHeightFogValues
// 0x0048
struct FExponentialHeightFogValues
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.DirectionalLightValues
// 0x000C
struct FDirectionalLightValues
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.ThreatCloudValues
// 0x00A0
struct FThreatCloudValues
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.CloudColorState
// 0x0050
struct FCloudColorState
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.SkyLightValues
// 0x0028
struct FSkyLightValues
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.CameraAltitudeAdjustments
// 0x0010
struct FCameraAltitudeAdjustments
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.QueuedMusic
// 0x0010
struct FQueuedMusic
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ClimbLinkData
// 0x002C
struct FClimbLinkData
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConnectivityCube
// 0x00C0
struct FConnectivityCube
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteGame.AuxiliaryEditTileMeshData
// 0x0020
struct FAuxiliaryEditTileMeshData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.ElementalCharValues
// 0x0014
struct FElementalCharValues
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMapData
// 0x0040
struct FFortMapData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.MOBATurretPrioritySetting
// 0x000C
struct FMOBATurretPrioritySetting
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.ColorSwatchPair
// 0x0018
struct FColorSwatchPair
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AbilityKitItem
// 0x0010
struct FAbilityKitItem
{
	class UFortItemDefinition*                         Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileCompInterpData
// 0x0018
struct FTileCompInterpData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.ReplicatedMontagePair
// 0x0028
struct FReplicatedMontagePair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.AttributeModifierInfo
// 0x0030
struct FAttributeModifierInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAttributeDetailsInfo
// 0x03B0
struct FFortAttributeDetailsInfo
{
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0000(0x03B0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectDescription
// 0x0050
struct FFortGameplayEffectDescription
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayEffectModifierDescription
// 0x0040
struct FFortGameplayEffectModifierDescription
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIGoalInfo
// 0x0018
struct FFortAIGoalInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIGoal
// 0x0010 (0x0028 - 0x0018)
struct FFortAIGoal : public FFortAIGoalInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.GoalSelectionQueryInfo
// 0x0028
struct FGoalSelectionQueryInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpokenLine
// 0x0030
struct FFortSpokenLine
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackEvent
// 0x0030
struct FFortFeedbackEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackHandle
// 0x0018
struct FFortFeedbackHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackEventData
// 0x0038
struct FFortFeedbackEventData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackAction
// 0x0030
struct FFortFeedbackAction
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackActionBankDefined
// 0x0008 (0x0038 - 0x0030)
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackLine
// 0x0080
struct FFortFeedbackLine
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFeedbackResponse
// 0x0020
struct FFortFeedbackResponse
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConversationSentence
// 0x00B0
struct FFortConversationSentence
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSentenceAudio
// 0x0038
struct FFortSentenceAudio
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineBase
// 0x0010
struct FFortSplineBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCatmullRomSpline
// 0x0010 (0x0020 - 0x0010)
struct FFortCatmullRomSpline : public FFortSplineBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPickupLocationData
// 0x0060
struct FFortPickupLocationData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearSpline
// 0x0001
struct FFortLinearSpline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPickupEntryData
// 0x0030
struct FFortPickupEntryData
{
	struct FInterpCurveFloat                           FloatCurve;                                               // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPawnStats
// 0x0070 (0x0078 - 0x0008)
struct FFortPawnStats : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPawnVocalChord
// 0x00D8
struct FFortPawnVocalChord
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0000(0x00D8) MISSED OFFSET
};

// ScriptStruct FortniteGame.CalloutEntry
// 0x0098
struct FCalloutEntry
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct FortniteGame.PawnDamageZones
// 0x0018
struct FPawnDamageZones
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AssetAttachment
// 0x0030
struct FAssetAttachment
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.DamagerInfo
// 0x0030
struct FDamagerInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.DamagerInfoAnalytics
// 0x0018
struct FDamagerInfoAnalytics
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIPawnStats
// 0x0058 (0x00D0 - 0x0078)
struct FFortAIPawnStats : public FFortPawnStats
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAISpawnGroupUpgradeUIData
// 0x00A8
struct FFortAISpawnGroupUpgradeUIData
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIAppearanceOverrideEntry
// 0x0050
struct FFortAIAppearanceOverrideEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.MinimapGoalByTagColorsData
// 0x0030
struct FMinimapGoalByTagColorsData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.RunVariationData
// 0x000C
struct FRunVariationData
{
	TWeakObjectPtr<class AFortAIPawn>                  FortAIPawn;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionManagerRecord
// 0x0038
struct FFortMissionManagerRecord
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionRecord
// 0x0128
struct FFortMissionRecord
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0000(0x0128) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortObjectiveRecord
// 0x0018
struct FFortObjectiveRecord
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedDifficultyOptions
// 0x0040
struct FFortGeneratedDifficultyOptions
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedEncounterProfile
// 0x0050
struct FFortGeneratedEncounterProfile
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterModeSettings
// 0x0004
struct FFortEncounterModeSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingNavObstacle
// 0x0020
struct FBuildingNavObstacle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedEncounterOption
// 0x0018
struct FFortGeneratedEncounterOption
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedMissionOption
// 0x0018
struct FFortGeneratedMissionOption
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGeneratedEncounterSequence
// 0x0030
struct FFortGeneratedEncounterSequence
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterTransitionSettings
// 0x0001
struct FFortEncounterTransitionSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionEntry
// 0x0088
struct FFortMissionEntry
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementItemLookupData
// 0x0078
struct FFortMissionPlacementItemLookupData
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (Transient)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionGenerationElementCostAndAvailabilityRow
// 0x0018 (0x0020 - 0x0008)
struct FFortMissionGenerationElementCostAndAvailabilityRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPendingStoppedEncounterData
// 0x0010
struct FFortPendingStoppedEncounterData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterPawnDifficultyLevelModifier
// 0x0058
struct FFortAIEncounterPawnDifficultyLevelModifier
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAISpawnGroupUpgrade
// 0x0130
struct FFortAISpawnGroupUpgrade
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIPawnUpgrade
// 0x0058
struct FFortAIPawnUpgrade
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIPawnUpgradeData
// 0x0038
struct FFortAIPawnUpgradeData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnPointsProfile
// 0x0040
struct FFortAIEncounterSpawnPointsProfile
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsProfile
// 0x0030
struct FFortAIEncounterSpawnGroupCapsProfile
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCapsCategory
// 0x0100
struct FFortAIEncounterSpawnGroupCapsCategory
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnGroupCap
// 0x0020
struct FFortAIEncounterSpawnGroupCap
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterPawnNumberCaps
// 0x0018
struct FFortEncounterPawnNumberCaps
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerPerformanceEstimateSettings
// 0x0040
struct FFortPlayerPerformanceEstimateSettings
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterPIDController
// 0x0068
struct FFortAIEncounterPIDController
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterPIDControllerSettings
// 0x0030
struct FFortAIEncounterPIDControllerSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.UtilityData
// 0x0040
struct FUtilityData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.UtilityContribution
// 0x000C
struct FUtilityContribution
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.UtilityTypeFloatPair
// 0x0008
struct FUtilityTypeFloatPair
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.IntensityData
// 0x0030
struct FIntensityData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.IntensityContribution
// 0x0048
struct FIntensityContribution
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.PendingSpawnInfo
// 0x0160
struct FPendingSpawnInfo
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorFactorData
// 0x0020
struct FFortAIDirectorFactorData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIDirectorFactorContribution
// 0x000C
struct FFortAIDirectorFactorContribution
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDirectorEventData
// 0x0030
struct FAIDirectorEventData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.PawnGoalSelectionTableEntry
// 0x0070
struct FPawnGoalSelectionTableEntry
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.PawnGoalSelectionCriteria
// 0x0050
struct FPawnGoalSelectionCriteria
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.GoalSelectionCriteria
// 0x0008
struct FGoalSelectionCriteria
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.EncounterGoalSelectionTableEntry
// 0x0028
struct FEncounterGoalSelectionTableEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGoalActorEncounterDataManagerPair
// 0x0010
struct FFortGoalActorEncounterDataManagerPair
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterWaveProgressEstimation
// 0x001C
struct FFortAIEncounterWaveProgressEstimation
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.EncounterEnvironmentQueryInstance
// 0x0048
struct FEncounterEnvironmentQueryInstance
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterAIDirectorFactor
// 0x000C
struct FFortEncounterAIDirectorFactor
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAISpawnerData
// 0x0060
struct FFortAISpawnerData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnAIRequest
// 0x0050
struct FFortSpawnAIRequest
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpawnGroupInstanceInfo
// 0x0130
struct FSpawnGroupInstanceInfo
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCurveSequenceInstanceInfo
// 0x0004
struct FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurveSequenceInstanceInfo
// 0x000C (0x0010 - 0x0004)
struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.CurrentIntensityAnalyticsBucket
// 0x0038
struct FCurrentIntensityAnalyticsBucket
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortIntensityCurve
// 0x0038 (0x0040 - 0x0008)
struct FFortIntensityCurve : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortIntensityCurveSequenceInstanceInfo
// 0x000C (0x0010 - 0x0004)
struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnPointsPercentageCurve
// 0x0018 (0x0020 - 0x0008)
struct FFortSpawnPointsPercentageCurve : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIEncounterSpawnGroupWeights
// 0x0018
struct FAIEncounterSpawnGroupWeights
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpawnGroupProgression
// 0x0008
struct FSpawnGroupProgression
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortVariantSpawnPoints
// 0x0008 (0x0010 - 0x0008)
struct FFortVariantSpawnPoints : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIPawnVariantDefinition
// 0x0068
struct FFortAIPawnVariantDefinition
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpawnGroupEnemy
// 0x0010
struct FSpawnGroupEnemy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpawnGroupEncounterTypeData
// 0x0040
struct FFortSpawnGroupEncounterTypeData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterQueryDirectionTracker
// 0x0048
struct FFortAIEncounterQueryDirectionTracker
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterSpawnArea
// 0x0048
struct FFortAIEncounterSpawnArea
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterRiftManagerInitializationData
// 0x00C0
struct FFortAIEncounterRiftManagerInitializationData
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAIEncounterRift
// 0x0018
struct FFortAIEncounterRift
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIAssignmentInfo
// 0x0080
struct FAIAssignmentInfo
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDiscouragedGoalTimer
// 0x0028
struct FAIDiscouragedGoalTimer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameplayTagAnimations
// 0x0010
struct FGameplayTagAnimations
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameplayTagAnimationData
// 0x0048
struct FGameplayTagAnimationData
{
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMoveConfig
// 0x0028
struct FFortMoveConfig
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSpecializationSlot
// 0x0078
struct FFortSpecializationSlot
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.HeroSpecializationAttributeRequirement
// 0x0028
struct FHeroSpecializationAttributeRequirement
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.HeroItem
// 0x0070
struct FHeroItem
{
	TAssetPtr<class UFortWorldItemDefinition>          Item;                                                     // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.HeroAbilityKit
// 0x0048
struct FHeroAbilityKit
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCharacterPartsRepMontageInfo
// 0x0020
struct FFortCharacterPartsRepMontageInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerPawnStats
// 0x0018 (0x0090 - 0x0078)
struct FFortPlayerPawnStats : public FFortPawnStats
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookPageCategoryTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortCollectionBookPageCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.CustomPartMaterialOverrideData
// 0x0028
struct FCustomPartMaterialOverrideData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.CustomPartVectorParameter
// 0x0020
struct FCustomPartVectorParameter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.CustomPartScalarParameter
// 0x0018
struct FCustomPartScalarParameter
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.CustomPartTextureParameter
// 0x0030
struct FCustomPartTextureParameter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortStatEventSequence
// 0x0050
struct FFortStatEventSequence
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEventConditional
// 0x0038
struct FFortEventConditional
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortStatEvent
// 0x0050
struct FFortStatEvent
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyRewardScheduleDefinition
// 0x00A0
struct FFortDailyRewardScheduleDefinition
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyRewardScheduleDisplayData
// 0x0060
struct FFortDailyRewardScheduleDisplayData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyLoginRewardStat
// 0x0060
struct FFortDailyLoginRewardStat
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyLoginRewardStat_ScheduleClaimed
// 0x0008
struct FFortDailyLoginRewardStat_ScheduleClaimed
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyRewardsNotification
// 0x0018
struct FFortDailyRewardsNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortOutpostFabricatorInfo
// 0x0018
struct FFortOutpostFabricatorInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortOutpostPOSTInfo
// 0x0010
struct FFortOutpostPOSTInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDepositedResources
// 0x0018
struct FFortDepositedResources
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortOutpostCoreInfo
// 0x0020
struct FFortOutpostCoreInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlacedBuilding
// 0x0020
struct FFortPlacedBuilding
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostBuildingData
// 0x0020
struct FOutpostBuildingData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostUpgradeAndPrestigeBuildingData
// 0x0068 (0x0088 - 0x0020)
struct FOutpostUpgradeAndPrestigeBuildingData : public FOutpostBuildingData
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0020(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostPOSTPerTheaterData
// 0x0018
struct FOutpostPOSTPerTheaterData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostPOSTBoost
// 0x0010
struct FOutpostPOSTBoost
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostPrestigeEffectsPerTheater
// 0x0018
struct FOutpostPrestigeEffectsPerTheater
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostPrestigeEffects
// 0x0010
struct FOutpostPrestigeEffects
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostUpgradesPerTheaterData
// 0x0010
struct FOutpostUpgradesPerTheaterData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.StorageVaultBuildingData
// 0x0010 (0x0030 - 0x0020)
struct FStorageVaultBuildingData : public FOutpostBuildingData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.HarvestingOptimizerBuildingData
// 0x0000 (0x0020 - 0x0020)
struct FHarvestingOptimizerBuildingData : public FOutpostBuildingData
{

};

// ScriptStruct FortniteGame.CraftingTableBuildingData
// 0x0010 (0x0030 - 0x0020)
struct FCraftingTableBuildingData : public FOutpostBuildingData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostFabricatorPerTheaterData
// 0x0008
struct FOutpostFabricatorPerTheaterData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostDisintegrationData
// 0x0028 (0x0030 - 0x0008)
struct FOutpostDisintegrationData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostItemUpgradeData
// 0x0048 (0x0050 - 0x0008)
struct FOutpostItemUpgradeData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerColorData
// 0x0010 (0x0018 - 0x0008)
struct FHomebaseBannerColorData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerIconData
// 0x0078 (0x0080 - 0x0008)
struct FHomebaseBannerIconData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.OutpostCraftingTableData
// 0x0018 (0x0020 - 0x0008)
struct FOutpostCraftingTableData : public FTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerColor
// 0x0020
struct FHomebaseBannerColor
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorkerSetBonusData
// 0x0038
struct FWorkerSetBonusData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.ManagerSynergyData
// 0x0018
struct FManagerSynergyData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorkerGenderData
// 0x0018
struct FWorkerGenderData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorkerPortraitData
// 0x0020
struct FWorkerPortraitData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseBannerCategoryData
// 0x0020 (0x0028 - 0x0008)
struct FHomebaseBannerCategoryData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorkerPersonalityData
// 0x0038
struct FWorkerPersonalityData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootTierData
// 0x00A8 (0x00B0 - 0x0008)
struct FFortLootTierData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0008(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.ExpeditionSlot
// 0x0018 (0x0020 - 0x0008)
struct FExpeditionSlot : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FabricatorBuildingData
// 0x0048 (0x0068 - 0x0020)
struct FFabricatorBuildingData : public FOutpostBuildingData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0020(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootPackageData
// 0x0080 (0x0088 - 0x0008)
struct FFortLootPackageData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterLockedUtility
// 0x0002
struct FFortEncounterLockedUtility
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDifficultyOptionBudget
// 0x0030
struct FFortDifficultyOptionBudget
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyTownWorkerSetBonusData
// 0x0050
struct FMyTownWorkerSetBonusData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyTownWorkerPersonalityData
// 0x0050
struct FMyTownWorkerPersonalityData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyTownWorkerGenderData
// 0x0018
struct FMyTownWorkerGenderData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.MyTownWorkerPortraitData
// 0x0028
struct FMyTownWorkerPortraitData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUIFeedback
// 0x0020
struct FFortUIFeedback
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUIFeedbackBlueprintOnly
// 0x0008 (0x0028 - 0x0020)
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSurvivorNameData
// 0x0018 (0x0020 - 0x0008)
struct FFortSurvivorNameData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, EditConst)
};

// ScriptStruct FortniteGame.FortHexMapCoord
// 0x000C
struct FFortHexMapCoord
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortZoneEvent
// 0x0020
struct FFortZoneEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertRequirementsInfo
// 0x0048
struct FFortMissionAlertRequirementsInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapMissionData
// 0x0030
struct FFortTheaterMapMissionData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterDifficultyWeight
// 0x0028
struct FFortTheaterDifficultyWeight
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMissionWeight
// 0x0028
struct FFortTheaterMissionWeight
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterTileEditorData
// 0x00B8
struct FFortTheaterTileEditorData
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEditorTheaterMapRegionColor
// 0x0018
struct FFortEditorTheaterMapRegionColor
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapData
// 0x0540
struct FFortTheaterMapData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x528];                                     // 0x0018(0x0528) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinkedQuest
// 0x0018
struct FFortLinkedQuest
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapRegionData
// 0x00E8
struct FFortTheaterMapRegionData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0018(0x00D0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapTileData
// 0x00C8
struct FFortTheaterMapTileData
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterRuntimeData
// 0x04B0
struct FFortTheaterRuntimeData
{
	unsigned char                                      UnknownData00[0x4B0];                                     // 0x0000(0x04B0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertRuntimeData
// 0x0003
struct FFortMissionAlertRuntimeData
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterColorInfo
// 0x0030
struct FFortTheaterColorInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTheaterMapMissionAlertData
// 0x0020
struct FFortTheaterMapMissionAlertData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertAvailableData
// 0x0008
struct FFortMissionAlertAvailableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTimeOfDayTheme
// 0x0040
struct FFortTimeOfDayTheme
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindResponder
// 0x0098
struct FFortWindResponder
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindResponderMaterialVariablePairData
// 0x0028
struct FFortWindResponderMaterialVariablePairData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindMaterialData
// 0x0048
struct FFortWindMaterialData
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindMaterialParameterPairID
// 0x0028
struct FFortWindMaterialParameterPairID
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMaterialParameterID
// 0x0010
struct FFortMaterialParameterID
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.WindVectorMaterialInterpolationData
// 0x0030
struct FWindVectorMaterialInterpolationData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.WindScalarMaterialInterpolationData
// 0x0018
struct FWindScalarMaterialInterpolationData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWindIntensityAndDirection
// 0x0008
struct FFortWindIntensityAndDirection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementItems
// 0x0040
struct FFortMissionPlacementItems
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementActorItem
// 0x0078
struct FFortMissionPlacementActorItem
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGlobalWindInfo
// 0x0018
struct FFortGlobalWindInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementFoundationItem
// 0x0070
struct FFortMissionPlacementFoundationItem
{
	struct FGameplayTagContainer                       ItemIdentifyingTags;                                      // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.MissionPerDifficultyProperties
// 0x0068
struct FMissionPerDifficultyProperties
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionTaggedRewards
// 0x0018
struct FFortMissionTaggedRewards
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPopupWidgetData
// 0x01E8
struct FFortMissionPopupWidgetData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0018(0x01D0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortObjectiveBlock
// 0x0010
struct FFortObjectiveBlock
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortObjectiveEntry
// 0x0050
struct FFortObjectiveEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortStartingMissionInfo
// 0x0018
struct FFortStartingMissionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterSequenceSettings
// 0x0038
struct FFortEncounterSequenceSettings
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEncounterProfile
// 0x0058
struct FFortEncounterProfile
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerSpawnPadPlacementData
// 0x0050
struct FFortPlayerSpawnPadPlacementData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.PerDifficultyMissionGenerationInfo
// 0x0020
struct FPerDifficultyMissionGenerationInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.MissionGenerationInfo
// 0x0050
struct FMissionGenerationInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.ZoneLoadingScreenConfig
// 0x0108
struct FZoneLoadingScreenConfig
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct FortniteGame.ZoneLoadingScreenHeadingConfig
// 0x0038
struct FZoneLoadingScreenHeadingConfig
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionInfoOption
// 0x0028
struct FFortMissionInfoOption
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPossibleMission
// 0x0030
struct FFortPossibleMission
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestEarnedBadgeData
// 0x0018
struct FFortQuestEarnedBadgeData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestManagerAttributes
// 0x0010
struct FFortQuestManagerAttributes
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestMissionCreationContext
// 0x0038
struct FFortQuestMissionCreationContext
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAvailableMissionAlerts
// 0x0028
struct FFortAvailableMissionAlerts
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAvailableMissionAlertData
// 0x0098
struct FFortAvailableMissionAlertData
{
	struct FString                                     CategoryName;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0010(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAvailableTheaterMissions
// 0x0028
struct FFortAvailableTheaterMissions
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAvailableMissionData
// 0x00A0
struct FFortAvailableMissionData
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFoundQuestMissions
// 0x0048
struct FFortFoundQuestMissions
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_ZoneModifiers
// 0x000F (0x0010 - 0x0001)
struct FFortClientAnnouncementData_ZoneModifiers : public FFortClientAnnouncementData
{
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConditionalFoundationQuota
// 0x0010
struct FConditionalFoundationQuota
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestObjectiveCompletion
// 0x0028
struct FFortQuestObjectiveCompletion
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.SubGameInfo
// 0x0010
struct FSubGameInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConditionalFoundationQuotaTier
// 0x0018
struct FConditionalFoundationQuotaTier
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveCollectionLootSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveCollectionLootSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveCollectionLootSetData
// 0x0020
struct FTieredWaveCollectionLootSetData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredModifierSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredModifierSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveSet
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveSetData
// 0x0120
struct FTieredWaveSetData
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0000(0x0120) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredModifierSetData
// 0x0010
struct FTieredModifierSetData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveSetCollection
// 0x0010 (0x0018 - 0x0008)
struct FTieredWaveSetCollection : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredWaveSetCollectionData
// 0x0088
struct FTieredWaveSetCollectionData
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.ScoreMultiplierRow
// 0x0080 (0x0088 - 0x0008)
struct FScoreMultiplierRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortReplicatedStatMapping
// 0x0020
struct FFortReplicatedStatMapping
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAbilityTagRelationship
// 0x0048
struct FFortAbilityTagRelationship
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorldItemAndMinMaxCount
// 0x0028
struct FWorldItemAndMinMaxCount
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.ItemAndCount
// 0x0010
struct FItemAndCount
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ItemDefinitionAndCount
// 0x0028
struct FItemDefinitionAndCount
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.SettingsHUDVisibilityAndText
// 0x0038
struct FSettingsHUDVisibilityAndText
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHighlightColorsContainer
// 0x0060
struct FFortHighlightColorsContainer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHighlightColors
// 0x0030
struct FFortHighlightColors
{
	struct FLinearColor                                OutlineColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLevelUpData
// 0x0028 (0x0030 - 0x0008)
struct FFortLevelUpData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.UISoundFeedback
// 0x0008
struct FUISoundFeedback
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.SoundPerResourceLevel
// 0x0030
struct FSoundPerResourceLevel
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.AccountIdAndScore
// 0x0018
struct FAccountIdAndScore
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerClampInfo
// 0x0010 (0x0018 - 0x0008)
struct FPlayerClampInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.AttributeClamp
// 0x0028
struct FAttributeClamp
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.GameDifficultyInfo
// 0x0078 (0x0080 - 0x0008)
struct FGameDifficultyInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTierProgression
// 0x0010
struct FFortTierProgression
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTierProgressionInfo
// 0x0018
struct FFortTierProgressionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedUnlockBase
// 0x0008
struct FFortTaggedUnlockBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedDeployableBaseLootUnlock
// 0x0008 (0x0010 - 0x0008)
struct FFortTaggedDeployableBaseLootUnlock : public FFortTaggedUnlockBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedDeployableBasePlotExpansionUnlock
// 0x0010 (0x0018 - 0x0008)
struct FFortTaggedDeployableBasePlotExpansionUnlock : public FFortTaggedUnlockBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeployableBaseSupportSettings
// 0x0080
struct FDeployableBaseSupportSettings
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.ZoneThemeDifficultyProperties
// 0x0068
struct FZoneThemeDifficultyProperties
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertData
// 0x0090 (0x0098 - 0x0008)
struct FFortMissionAlertData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertSpreadData
// 0x0018 (0x0020 - 0x0008)
struct FFortMissionAlertSpreadData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertCategoryData
// 0x0030 (0x0038 - 0x0008)
struct FFortMissionAlertCategoryData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEventFlagsNotification
// 0x0018
struct FFortEventFlagsNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FriendCodeIssuedNotification
// 0x0020
struct FFriendCodeIssuedNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertRecord
// 0x0080
struct FFortMissionAlertRecord
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertClaimData
// 0x0020
struct FFortMissionAlertClaimData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookClaimRewardNotification
// 0x0040
struct FFortCollectionBookClaimRewardNotification
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSlotItemNotification
// 0x0010
struct FFortCollectionBookSlotItemNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConversionResultNotification
// 0x0010
struct FFortConversionResultNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionAlertCompleteNotification
// 0x0020
struct FFortMissionAlertCompleteNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectedResourceNotification
// 0x0020
struct FFortCollectedResourceNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortEarnScoreNotification
// 0x0018
struct FFortEarnScoreNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortReceivedGiftedBoostXpNotification
// 0x0018
struct FFortReceivedGiftedBoostXpNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDailyQuestRerollNotification
// 0x0010
struct FFortDailyQuestRerollNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestRewardNotification
// 0x0030
struct FFortQuestRewardNotification
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortExpeditionResultNotification
// 0x0018
struct FFortExpeditionResultNotification
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGetMcpTimeForPlayerNotification
// 0x0008
struct FFortGetMcpTimeForPlayerNotification
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.CardPackResultNotification
// 0x0028
struct FCardPackResultNotification
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortNotificationLevelUp
// 0x0058
struct FFortNotificationLevelUp
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0004(0x0054) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootNotification
// 0x0040
struct FFortLootNotification
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionCompletionNotification
// 0x0038
struct FFortMissionCompletionNotification
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHomebaseView
// 0x0040
struct FFortHomebaseView
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestClientSettings
// 0x0010
struct FFortQuestClientSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAthenaConsumableRecord
// 0x0010
struct FFortAthenaConsumableRecord
{
	class UFortAccountItemDefinition*                  ItemType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTransmogResultNotification
// 0x0020
struct FFortTransmogResultNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaBatchedDamageGameplayCues
// 0x0058
struct FAthenaBatchedDamageGameplayCues
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodeState
// 0x0008
struct FHomebaseNodeState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorkerSetBonusState
// 0x0010
struct FWorkerSetBonusState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct FortniteGame.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.InterpOffset
// 0x0010
struct FInterpOffset
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.InterpOffsetData
// 0x001C
struct FInterpOffsetData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct FortniteGame.ReplicatedAthenaVehicleState
// 0x000C
struct FReplicatedAthenaVehicleState
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMiniMapData
// 0x0080
struct FFortMiniMapData
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSafeZoneVolumeDefinition
// 0x0030
struct FFortSafeZoneVolumeDefinition
{
	class AVolume*                                     Volume;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSafeZoneDefinition
// 0x0110
struct FFortSafeZoneDefinition
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaCarPlayerSlot
// 0x0020
struct FAthenaCarPlayerSlot
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTierCollectionLayoutOutput
// 0x0050
struct FFortTierCollectionLayoutOutput
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredCollectionProgressionDataBase
// 0x0001
struct FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteGame.CollectionLootSetData
// 0x0017 (0x0018 - 0x0001)
struct FCollectionLootSetData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.RewardBadgesCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FRewardBadgesCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.RewardBadgesProgression
// 0x0010
struct FRewardBadgesProgression
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DifficultyCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FDifficultyCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.DifficultyRowProgression
// 0x0030
struct FDifficultyRowProgression
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.TieredNamedCollectionProgressionData
// 0x0017 (0x0018 - 0x0001)
struct FTieredNamedCollectionProgressionData : public FTieredCollectionProgressionDataBase
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCriteriaRequirementData
// 0x0018 (0x0020 - 0x0008)
struct FFortCriteriaRequirementData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnalyticsEventAttribute
// 0x0020
struct FFortAnalyticsEventAttribute
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.DistanceToTargetComparison
// 0x0030
struct FDistanceToTargetComparison
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementData_Conversation
// 0x000F (0x0010 - 0x0001)
struct FFortClientAnnouncementData_Conversation : public FFortClientAnnouncementData
{
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientAnnouncementQueue
// 0x0010
struct FFortClientAnnouncementQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.GeneralChatRecommendations
// 0x0028
struct FGeneralChatRecommendations
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.GeneralChatRoom
// 0x0028
struct FGeneralChatRoom
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSocialItemBasicData
// 0x0004
struct FFortSocialItemBasicData
{
	int                                                Rating;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteGame.SpawnPickupEntry
// 0x0018
struct FSpawnPickupEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.McpLeaderboardResult
// 0x0030
struct FMcpLeaderboardResult
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.McpLeaderboardResultRow
// 0x0020
struct FMcpLeaderboardResultRow
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.McpPlayerStatsResult
// 0x0070
struct FMcpPlayerStatsResult
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.QueryXboxUserXUIDParams
// 0x0010
struct FQueryXboxUserXUIDParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.IssuedFriendCode
// 0x0028
struct FIssuedFriendCode
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.XboxDedicatedServerSessionCreationParams
// 0x0030
struct FXboxDedicatedServerSessionCreationParams
{
	struct FString                                     TitleId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.LiveDamageNumberComponent
// 0x0018
struct FLiveDamageNumberComponent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDamageNumberInfo
// 0x0068
struct FFortDamageNumberInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.PooledDamageNumberComponents
// 0x0010
struct FPooledDamageNumberComponents
{
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct FortniteGame.FortFXAnimationInfoBase
// 0x0018
struct FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFloatAnimationInfo
// 0x0008 (0x0020 - 0x0018)
struct FFortFloatAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLightAnimSet
// 0x0020
struct FFortLightAnimSet
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortParticleAnimSet
// 0x0020
struct FFortParticleAnimSet
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortFloatParamAnimationInfo
// 0x0008 (0x0028 - 0x0020)
struct FFortFloatParamAnimationInfo : public FFortFloatAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorCurveAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortLinearColorCurveAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorCurveParamAnimationInfo
// 0x0008 (0x0030 - 0x0028)
struct FFortLinearColorCurveParamAnimationInfo : public FFortLinearColorCurveAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorAnimationInfo
// 0x0020 (0x0038 - 0x0018)
struct FFortLinearColorAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLinearColorParamAnimationInfo
// 0x0008 (0x0040 - 0x0038)
struct FFortLinearColorParamAnimationInfo : public FFortLinearColorAnimationInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMIDAnimSet
// 0x0040
struct FFortMIDAnimSet
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshAnimSet
// 0x0030
struct FFortSplineMeshAnimSet
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshScaleAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortSplineMeshScaleAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSectionState
// 0x0018
struct FFortCollectionBookSectionState
{
	struct FString                                     Section;                                                  // 0x0000(0x0010) (ZeroConstructor)
	EFortCollectionBookState                           State;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSplineMeshSnapAnimationInfo
// 0x0010 (0x0028 - 0x0018)
struct FFortSplineMeshSnapAnimationInfo : public FFortFXAnimationInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPendingSlottedItemOperation
// 0x0018
struct FFortPendingSlottedItemOperation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookStat
// 0x0018
struct FFortCollectionBookStat
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.CombatThresholdData
// 0x0028
struct FCombatThresholdData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.CombatFactorData
// 0x0038
struct FCombatFactorData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.CombatEventData
// 0x0030
struct FCombatEventData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.CombatEventMultiplier
// 0x0008
struct FCombatEventMultiplier
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.DecoPlacementState
// 0x0080
struct FDecoPlacementState
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0018(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequestQueue
// 0x0028
struct FFortUserCloudRequestQueue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequest
// 0x0090
struct FFortUserCloudRequest
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequestPayload
// 0x0048
struct FFortUserCloudRequestPayload
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortUserCloudRequestHandle
// 0x0008
struct FFortUserCloudRequestHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.AppliedHomebaseData
// 0x0030
struct FAppliedHomebaseData
{
	class UAbilitySystemComponent*                     Source;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamChangeRequest
// 0x0010
struct FTeamChangeRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionWeightedReward
// 0x00A0
struct FFortMissionWeightedReward
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionFocusDisplayData
// 0x0020
struct FFortMissionFocusDisplayData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionPlacementActorPreferredTagInfo
// 0x0038
struct FFortMissionPlacementActorPreferredTagInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBadgeCountArray
// 0x0010 (0x00C0 - 0x00B0)
struct FFortBadgeCountArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBadgeCount
// 0x0014 (0x0020 - 0x000C)
struct FFortBadgeCount : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTileLootData
// 0x0318
struct FFortTileLootData
{
	unsigned char                                      UnknownData00[0x318];                                     // 0x0000(0x0318) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDeferredNewActorData
// 0x0010
struct FFortDeferredNewActorData
{
	class ABuildingActor*                              BuildingActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.WorldTileSubArray
// 0x0010
struct FWorldTileSubArray
{
	TArray<class AWorldTileFoundation*>                X;                                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteGame.FortLevelStreamingInfo
// 0x0010
struct FFortLevelStreamingInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.PendingDeployableManagerAction
// 0x0070
struct FPendingDeployableManagerAction
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct FortniteGame.AvailableTierLayout
// 0x0030
struct FAvailableTierLayout
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveTieredCollectionLayoutArray
// 0x0018 (0x00C8 - 0x00B0)
struct FActiveTieredCollectionLayoutArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveTieredCollectionLayout
// 0x0014 (0x0020 - 0x000C)
struct FActiveTieredCollectionLayout : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.EnvironmentBuildingRestorationRecord
// 0x0050
struct FEnvironmentBuildingRestorationRecord
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.PendingDeployableBaseUser
// 0x0030
struct FPendingDeployableBaseUser
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeployableBaseArray
// 0x0010 (0x00C0 - 0x00B0)
struct FDeployableBaseArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.DeployableBaseInstance
// 0x000C (0x0018 - 0x000C)
struct FDeployableBaseInstance : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.VisibiltyInfoArray
// 0x0010 (0x00C0 - 0x00B0)
struct FVisibiltyInfoArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.VisibilityInfo
// 0x001C (0x0028 - 0x000C)
struct FVisibilityInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamFOBRequiredTags
// 0x0028
struct FTeamFOBRequiredTags
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.BCActionInfo
// 0x0008
struct FBCActionInfo
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInputActionGroupContext
// 0x0010
struct FFortInputActionGroupContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActionKeyMapping
// 0x0058
struct FFortActionKeyMapping
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.CachedPlayerFOBInformation
// 0x0020
struct FCachedPlayerFOBInformation
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortClientEventsState
// 0x0020
struct FFortClientEventsState
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.AIDirectorDebugInfo
// 0x0028
struct FAIDirectorDebugInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.LastBuildableState
// 0x0010
struct FLastBuildableState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.CraftingQueueInfo
// 0x0008
struct FCraftingQueueInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestAchievementTableRow
// 0x0010 (0x0018 - 0x0008)
struct FFortQuestAchievementTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCategoryTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortCategoryTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMcpQuestObjectiveInfo
// 0x00F8
struct FFortMcpQuestObjectiveInfo
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMcpQuestRewardInfo
// 0x0010
struct FFortMcpQuestRewardInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaAwardGroup
// 0x0018
struct FAthenaAwardGroup
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaRewardResult
// 0x0018
struct FAthenaRewardResult
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.TurnTransitionData
// 0x0048
struct FTurnTransitionData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.TurnFloatRange
// 0x0008
struct FTurnFloatRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteGame.FortDisconnectedPlayerReservation
// 0x0028
struct FFortDisconnectedPlayerReservation
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHostSessionParams
// 0x0010
struct FFortHostSessionParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMatchKickNotification
// 0x0050
struct FFortMatchKickNotification
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.Voter
// 0x0020
struct FVoter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifierArray
// 0x0018 (0x00C8 - 0x00B0)
struct FActiveGameplayModifierArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveGameplayModifier
// 0x00CC (0x00D8 - 0x000C)
struct FActiveGameplayModifier : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xCC];                                      // 0x000C(0x00CC) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerBuildableClassFilter
// 0x0010
struct FPlayerBuildableClassFilter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.PlayerBuildableClassContainer
// 0x0010
struct FPlayerBuildableClassContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.HordeDifficultyTierInfo
// 0x0010
struct FHordeDifficultyTierInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.PermaniteBoundariesInfo
// 0x0014
struct FPermaniteBoundariesInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortHealthBarComponentData
// 0x0018
struct FFortHealthBarComponentData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.HomebaseNodeGameplayEffectDataTableRow
// 0x00D0 (0x00D8 - 0x0008)
struct FHomebaseNodeGameplayEffectDataTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0008(0x00D0) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamMapInfo
// 0x0048
struct FTeamMapInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInstensityCurveSequenceProgression
// 0x0018
struct FFortInstensityCurveSequenceProgression
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamMapExplorationEvent
// 0x0002
struct FTeamMapExplorationEvent
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteGame.SchematicRequirements
// 0x0010 (0x0018 - 0x0008)
struct FSchematicRequirements : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.SchematicRequirement
// 0x0010
struct FSchematicRequirement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ItemCategoryMappingData
// 0x0020
struct FItemCategoryMappingData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaCosmeticMaterialOverride
// 0x0030
struct FAthenaCosmeticMaterialOverride
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMeleeWeaponStats
// 0x0028 (0x0148 - 0x0120)
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCompendiumQuestInfo
// 0x0028
struct FFortCompendiumQuestInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCompendiumItemInfo
// 0x0028
struct FFortCompendiumItemInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConversionControlKeyCosts
// 0x0090 (0x0098 - 0x0008)
struct FFortConversionControlKeyCosts : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortConversionTierData
// 0x0008
struct FFortConversionTierData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBadgeScoringData
// 0x0010 (0x0018 - 0x0008)
struct FFortBadgeScoringData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.ConsumeEffectData
// 0x0048
struct FConsumeEffectData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTrapStats
// 0x0018 (0x0138 - 0x0120)
struct FFortTrapStats : public FFortBaseWeaponStats
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRangedWeaponStats
// 0x0120 (0x0240 - 0x0120)
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0120(0x0120) MISSED OFFSET
};

// ScriptStruct FortniteGame.KeepEventInfo
// 0x0028
struct FKeepEventInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.LeaderboardRowData
// 0x0038
struct FLeaderboardRowData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTwitchPendingQuestNotification
// 0x0010
struct FFortTwitchPendingQuestNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTwitchViewerCompletedQuestNotification
// 0x0010
struct FFortTwitchViewerCompletedQuestNotification
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTwitchViewerNameAndAccountId
// 0x0020
struct FFortTwitchViewerNameAndAccountId
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTwitchViewerGrantedQuestNotification
// 0x0020
struct FFortTwitchViewerGrantedQuestNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.MatchmakingParams
// 0x0098
struct FMatchmakingParams
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct FortniteGame.KeepEventWaveData
// 0x0040
struct FKeepEventWaveData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMatchmakingConfig
// 0x0010
struct FFortMatchmakingConfig
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.EmptyServerReservation
// 0x0048
struct FEmptyServerReservation
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortInviteSessionParams
// 0x0038
struct FFortInviteSessionParams
{
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBatchUpdatePlayer_DeployableBaseUpdate
// 0x0038
struct FFortBatchUpdatePlayer_DeployableBaseUpdate
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBatchUpdatePlayer_Update
// 0x00D0
struct FFortBatchUpdatePlayer_Update
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWorldPlayerLoadout
// 0x0140
struct FFortWorldPlayerLoadout
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCachedMatchmakingSearchParams
// 0x00A8
struct FFortCachedMatchmakingSearchParams
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortActiveTheaterInfo
// 0x0030
struct FFortActiveTheaterInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortWorldProfileUpdateRequest
// 0x00F0
struct FFortWorldProfileUpdateRequest
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct FortniteGame.NavAgentData
// 0x0018
struct FNavAgentData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.EarnedBadgeEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FEarnedBadgeEntryArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.EarnedBadgeEntry
// 0x0024 (0x0030 - 0x000C)
struct FEarnedBadgeEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct FortniteGame.EarnedBadgePlayerData
// 0x0020
struct FEarnedBadgePlayerData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMissionUIActorHandle
// 0x0030
struct FFortMissionUIActorHandle
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.MissionTimeDisplayData
// 0x002C
struct FMissionTimeDisplayData
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct FortniteGame.MissionTimerData
// 0x0028
struct FMissionTimerData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.AthenaJumpPenalty
// 0x0008
struct FAthenaJumpPenalty
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.AirControlParams
// 0x00C8
struct FAirControlParams
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPartyMemberRepState
// 0x0078 (0x0080 - 0x0008)
struct FFortPartyMemberRepState : public FPartyMemberRepState
{
	EFortPartyMemberLocation                           Location;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0009(0x0077) MISSED OFFSET
};

// ScriptStruct FortniteGame.BuildingHitTime
// 0x0018
struct FBuildingHitTime
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPlayerAttributeSets
// 0x0048
struct FFortPlayerAttributeSets
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCameraPrototype
// 0x0028
struct FFortCameraPrototype
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCameraModeOverride
// 0x0010
struct FFortCameraModeOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCameraInstanceEntry
// 0x0018
struct FFortCameraInstanceEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.ActiveFortCamera
// 0x0020
struct FActiveFortCamera
{
	class UFortCameraMode*                             Camera;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.CameraPair
// 0x0010
struct FCameraPair
{
	EFrontEndCamera                                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AFortCameraBase*                             Camera;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteGame.MorphValuePair
// 0x0010
struct FMorphValuePair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.AccumulatedItemEntry
// 0x0010
struct FAccumulatedItemEntry
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPointsOnCurve
// 0x0030
struct FFortPointsOnCurve
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortPointOnCurveRange
// 0x0008
struct FFortPointOnCurveRange
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGameplayTagQueryPerDifficulty
// 0x0060
struct FFortGameplayTagQueryPerDifficulty
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRarityItemData
// 0x0080
struct FFortRarityItemData
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0018(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.GoalDistanceData
// 0x0088
struct FGoalDistanceData
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortBuildingActorArray
// 0x0010
struct FFortBuildingActorArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortDestroyedActorRecord
// 0x0050
struct FFortDestroyedActorRecord
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortScoreStylingInfo
// 0x0388
struct FFortScoreStylingInfo
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x370];                                     // 0x0018(0x0370) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortScriptedActionParams
// 0x0030
struct FFortScriptedActionParams
{
	class AFortPlayerController*                       Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAvailableScriptedAction
// 0x0038
struct FFortAvailableScriptedAction
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSearchPassState
// 0x0018
struct FFortSearchPassState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortSearchPassParams
// 0x0028
struct FFortSearchPassParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.MMAttemptState
// 0x000C
struct FMMAttemptState
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTrackedPlayerBehavior
// 0x0078
struct FFortTrackedPlayerBehavior
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTrackedPlayerBehaviorInteraction
// 0x0080
struct FFortTrackedPlayerBehaviorInteraction
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortGlobalMission
// 0x0170
struct FFortGlobalMission
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestDrivenMission
// 0x0008 (0x0178 - 0x0170)
struct FFortQuestDrivenMission : public FFortGlobalMission
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTaggedActorOctreeFilter
// 0x0068
struct FFortTaggedActorOctreeFilter
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteGame.TransformableNavLinkClass
// 0x0020
struct FTransformableNavLinkClass
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamSpottedActorInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FTeamSpottedActorInfoArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamSpottedActorInfo
// 0x0014 (0x0020 - 0x000C)
struct FTeamSpottedActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntry
// 0x002C (0x0038 - 0x000C)
struct FTeamFOBCoreBuildingEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FTeamStrategicBuildingEntryArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamFOBCoreBuildingEntryArray
// 0x0010 (0x00C0 - 0x00B0)
struct FTeamFOBCoreBuildingEntryArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TeamStrategicBuildingEntry
// 0x000C (0x0018 - 0x000C)
struct FTeamStrategicBuildingEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteGame.TokenAttributePair
// 0x0028
struct FTokenAttributePair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTooltipTokenInfo
// 0x0018
struct FFortTooltipTokenInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortTokenContextInfo
// 0x0038
struct FFortTokenContextInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.TrackMovement
// 0x0010
struct FTrackMovement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.RepTrackMovement
// 0x0008 (0x0018 - 0x0010)
struct FRepTrackMovement : public FTrackMovement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileGroupSelection
// 0x0010
struct FTileGroupSelection
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileGroupInfo
// 0x0018
struct FTileGroupInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.TileGroupMapInfo
// 0x0030
struct FTileGroupMapInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteGame.AbilityToolSpawnParameters
// 0x0028
struct FAbilityToolSpawnParameters
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCalendarEventInventoryTransformData
// 0x0100 (0x0108 - 0x0008)
struct FFortCalendarEventInventoryTransformData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0008(0x0100) MISSED OFFSET
};

// ScriptStruct FortniteGame.RecipeQuantityPair
// 0x0010
struct FRecipeQuantityPair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookPageData
// 0x0070 (0x0078 - 0x0008)
struct FFortCollectionBookPageData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSlotXPWeightData
// 0x0010 (0x0018 - 0x0008)
struct FFortCollectionBookSlotXPWeightData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSlotData
// 0x0038 (0x0040 - 0x0008)
struct FFortCollectionBookSlotData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSlotSourceData
// 0x0018 (0x0020 - 0x0008)
struct FFortCollectionBookSlotSourceData : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteGame.FortCollectionBookXPData
// 0x0040 (0x0048 - 0x0008)
struct FFortCollectionBookXPData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortMigrationDataTableRow
// 0x0020 (0x0028 - 0x0008)
struct FFortMigrationDataTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortLootLevelData
// 0x0018 (0x0020 - 0x0008)
struct FFortLootLevelData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortQuestObjectiveStatTableRow
// 0x00D0 (0x00D8 - 0x0008)
struct FFortQuestObjectiveStatTableRow : public FTableRowBase
{
	EFortQuestObjectiveStatEvent                       Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xCF];                                      // 0x0009(0x00CF) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_ScaleHuskBones
// 0x0158 (0x0188 - 0x0030)
struct FFortAnimNode_ScaleHuskBones : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x158];                                     // 0x0030(0x0158) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortCollectionBookSectionData
// 0x0058 (0x0060 - 0x0008)
struct FFortCollectionBookSectionData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0020(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_SlopeWarping
// 0x0158 (0x01C8 - 0x0070)
struct FFortAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x158];                                     // 0x0070(0x0158) MISSED OFFSET
};

// ScriptStruct FortniteGame.SlopeWarpingFootData
// 0x00E0
struct FSlopeWarpingFootData
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct FortniteGame.SlopeWarpingFootDefinition
// 0x0040
struct FSlopeWarpingFootDefinition
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortAnimNode_SpeedWarping
// 0x00C0 (0x0130 - 0x0070)
struct FFortAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0070(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpeedWarpingFootData
// 0x0040
struct FSpeedWarpingFootData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.SpeedWarpingFootDefinition
// 0x0028
struct FSpeedWarpingFootDefinition
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteGame.FortRecordVersion
// 0x0040
struct FFortRecordVersion
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FortniteGame.ReflectedEngineVersion
// 0x0020
struct FReflectedEngineVersion
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

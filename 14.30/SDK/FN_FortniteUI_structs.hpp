#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8_t
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6
};


// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8_t
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	Creative                       = 7,
	EFortBuildingInteraction_MAX   = 8
};


// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8_t
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3
};


// Enum FortniteUI.EFortUISpecialEvents
enum class EFortUISpecialEvents : uint8_t
{
	NoEvent                        = 0,
	FritTemp                       = 1,
	EFortUISpecialEvents_MAX       = 2
};


// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8_t
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	InGame_Custom                  = 5,
	UNUSED                         = 6,
	InGame_STW                     = 7,
	Cinematic                      = 8,
	InGame_BR                      = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	InGame_STW_Custom              = 12,
	MAX                            = 13
};


// Enum FortniteUI.EFortUIFeatureStateReason
enum class EFortUIFeatureStateReason : uint8_t
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9
};


// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4
};


// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8_t
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowCommand                    = 2,
	ShowHeros                      = 3,
	ShowSquads                     = 4,
	ShowArmory                     = 5,
	ShowLocker                     = 6,
	ShowSkillTree                  = 7,
	ShowStore                      = 8,
	ShowQuests                     = 9,
	ShowMainStore                  = 10,
	ShowContextHelpMenu            = 11,
	ShowCampaign                   = 12,
	ShowActiveBoost                = 13,
	ShowJournal                    = 14,
	ShowPartyBar                   = 15,
	ShowChatWindow                 = 16,
	ShowFriendsMenu                = 17,
	ShowObjectives                 = 18,
	ShowRatingIconsInTopbar        = 19,
	ShowAntiAddictionMessage       = 20,
	ShowMinorShutdownMessage       = 21,
	ShowHealthWarningScreen        = 22,
	ShowSimplifiedHUD              = 23,
	LargeHeaderFooterButtons       = 24,
	ShowAthenaFavoriting           = 25,
	ShowAthenaItemRandomization    = 26,
	ShowAthenaChallenges           = 27,
	ShowBattlePass                 = 28,
	ShowNewBattlePass              = 29,
	ShowBattlePassFAQ              = 30,
	ShowReplays                    = 31,
	ShowProfileStatsUI             = 32,
	ShowAthenaItemShop             = 33,
	ShowNewAthenaItemShop          = 34,
	ShowAthenaCataba               = 35,
	ShowShowdown                   = 36,
	ShowSpecialEvent               = 37,
	ShowSpatialUI                  = 38,
	ShowAccountBoosts              = 39,
	ShowCustomerSupport            = 40,
	ShowGlobalChat                 = 41,
	ShowEULA                       = 42,
	ShowEndOfZoneCinematic         = 43,
	ShowOnboardingCinematics       = 44,
	ShowFounderBannerIcons         = 45,
	ShowCurrentRegionInLobby       = 46,
	ShowPrerollLlamas              = 47,
	EnableFoundersDailyRewards     = 48,
	EnableTwitchIntegration        = 49,
	EnableMatchmakingRegionSetting = 50,
	EnableLanguageSetting          = 51,
	EnableFriendCodeSetting        = 52,
	EnableEarlyAccessLoadingScreenBanner = 53,
	EnableAlterationModifications  = 54,
	EnableSchematicRarityUpgrade   = 55,
	EnableMissionActivationVote    = 56,
	EnableLtmRetrieveTheData       = 57,
	EnableUpgradesVideos           = 58,
	ShowPreviewTestTab             = 59,
	Max_None                       = 60,
	EFortUIFeature_MAX             = 61
};


// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8_t
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2
};


// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8_t
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7
};


// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8_t
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3
};


// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8_t
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4
};


// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8_t
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PurchaseOpen                   = 5,
	PackOpen                       = 6,
	CardEnter                      = 7,
	CardBackReveal                 = 8,
	CardFlip                       = 9,
	CardFrontReveal                = 10,
	CardExit                       = 11,
	SummaryAdd                     = 12,
	PackDestroy                    = 13,
	Summary                        = 14,
	PresentChoice                  = 15,
	ChoiceMade                     = 16,
	SummaryAddTransition           = 17,
	MAX_None                       = 18,
	EFortStoreState_MAX            = 19
};


// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8_t
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	AthenaWeaponFireCooldown       = 5,
	AbilitySetActivateByInputAbility = 6,
	EFortItemCooldownType_MAX      = 7
};


// Enum FortniteUI.EActivatePanelOption
enum class EActivatePanelOption : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	PlatformDefault                = 2,
	EActivatePanelOption_MAX       = 3
};


// Enum FortniteUI.EFortFrontEndFeatureStateReason
enum class EFortFrontEndFeatureStateReason : uint8_t
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7
};


// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4
};


// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8_t
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	STWArmory_Transform            = 9,
	STWArmory_CollectionBook       = 10,
	MAX_None                       = 11,
	EFortFrontEndFeature_MAX       = 12
};


// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason : uint8_t
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2
};


// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8_t
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	MulchingNotAllowed             = 5,
	IsSlottedAttributeWorker       = 6,
	EItemRecyclingRestrictionReason_MAX = 7
};


// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8_t
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	CanSlotInCollectionBook        = 2,
	EItemRecyclingWarning_MAX      = 3
};


// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8_t
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3
};


// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8_t
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4
};


// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8_t
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3
};


// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6
};


// Enum FortniteUI.EFortPlayerPowerRatingType
enum class EFortPlayerPowerRatingType : uint8_t
{
	Auto                           = 0,
	Campaign                       = 1,
	Phoenix                        = 2,
	Max_None                       = 3,
	EFortPlayerPowerRatingType_MAX = 4
};


// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8_t
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5
};


// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode : uint8_t
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	UpgradeRarity                  = 5,
	Promotion                      = 6,
	EFortItemInspectionMode_MAX    = 7
};


// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	Wide_S                         = 2,
	S                              = 3,
	M                              = 4,
	L                              = 5,
	XL                             = 6,
	XXL                            = 7,
	EFortItemCardSize_MAX          = 8
};


// Enum FortniteUI.EFortCollectionBookPopupButtonType
enum class EFortCollectionBookPopupButtonType : uint8_t
{
	Invalid                        = 0,
	SelectItem                     = 1,
	Preview                        = 2,
	Purchase                       = 3,
	Unslot                         = 4,
	Back                           = 5,
	EFortCollectionBookPopupButtonType_MAX = 6
};


// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8_t
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2
};


// Enum FortniteUI.EViewerNavigationDirection
enum class EViewerNavigationDirection : uint8_t
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2
};


// Enum FortniteUI.EHeroLoadoutSlotType
enum class EHeroLoadoutSlotType : uint8_t
{
	CommanderSlot                  = 0,
	TeamPerkSlot                   = 1,
	CrewSlot                       = 2,
	GadgetSlot                     = 3,
	EHeroLoadoutSlotType_MAX       = 4
};


// Enum FortniteUI.ESquadSlotSortType
enum class ESquadSlotSortType : uint8_t
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5
};


// Enum FortniteUI.EBattleMapTimelineWidgetState
enum class EBattleMapTimelineWidgetState : uint8_t
{
	None                           = 0,
	HasNext                        = 1,
	HasPrevious                    = 2,
	IsInReplay                     = 3,
	CanBeScrubbed                  = 4,
	IsStreaming                    = 5,
	Invalid                        = 6,
	EBattleMapTimelineWidgetState_MAX = 7
};


// Enum FortniteUI.ECountdownDisplay
enum class ECountdownDisplay : uint8_t
{
	EventEndTime                   = 0,
	ChallengeUnlockTime            = 1,
	ChallengeBundleUnlockTime      = 2,
	UnlockAlreadySet               = 3,
	MAX                            = 4
};


// Enum FortniteUI.EChallengeInfoPage
enum class EChallengeInfoPage : uint8_t
{
	PartyAssist                    = 0,
	Daily                          = 1,
	Suggested                      = 2,
	Contextual                     = 3,
	Selected                       = 4,
	EChallengeInfoPage_MAX         = 5
};


// Enum FortniteUI.EChallengeListSection
enum class EChallengeListSection : uint8_t
{
	SpecialOffers                  = 0,
	CompletionRewards              = 1,
	AllChallenges                  = 2,
	FreeChallenges                 = 3,
	PaidChallenges                 = 4,
	Objectives                     = 5,
	EChallengeListSection_MAX      = 6
};


// Enum FortniteUI.EAthenaChallengePageState
enum class EAthenaChallengePageState : uint8_t
{
	NotDisplayed                   = 0,
	Intro                          = 1,
	Displayed                      = 2,
	Outro                          = 3,
	EAthenaChallengePageState_MAX  = 4
};


// Enum FortniteUI.EAthenaConfirmationResult
enum class EAthenaConfirmationResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Canceled                       = 2,
	Max_NONE                       = 3,
	EAthenaConfirmationResult_MAX  = 4
};


// Enum FortniteUI.EEquippedWeaponDisplay
enum class EEquippedWeaponDisplay : uint8_t
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	Chargeable                     = 4,
	EEquippedWeaponDisplay_MAX     = 5
};


// Enum FortniteUI.EAthenaEventMatchInfoSortMethod
enum class EAthenaEventMatchInfoSortMethod : uint8_t
{
	Eliminations                   = 0,
	Place                          = 1,
	Count                          = 2,
	EAthenaEventMatchInfoSortMethod_MAX = 3
};


// Enum FortniteUI.EAthenaGameFeatureStatus
enum class EAthenaGameFeatureStatus : uint8_t
{
	InProgress                     = 0,
	ProgressPaused                 = 1,
	ErrorOccured                   = 2,
	EAthenaGameFeatureStatus_MAX   = 3
};


// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8_t
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	NewZebulonDrone                = 3,
	NewZebulonDroneYou             = 4,
	EAthenaPlayerActionAlert_MAX   = 5
};


// Enum FortniteUI.EAthenaInventoryDoubleClickAction
enum class EAthenaInventoryDoubleClickAction : uint8_t
{
	Nothing                        = 0,
	Equip                          = 1,
	DropStack                      = 2,
	EAthenaInventoryDoubleClickAction_MAX = 3
};


// Enum FortniteUI.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8_t
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3
};


// Enum FortniteUI.EAthenaLockerInfoRestrictionWarning
enum class EAthenaLockerInfoRestrictionWarning : uint8_t
{
	UnsatisfiedExclusiveItem       = 0,
	LockedEmote                    = 1,
	Unknown                        = 2,
	EAthenaLockerInfoRestrictionWarning_MAX = 3
};


// Enum FortniteUI.EMapChallengeCategoryType
enum class EMapChallengeCategoryType : uint8_t
{
	Daily                          = 0,
	Suggested                      = 1,
	All                            = 2,
	Custom                         = 3,
	Contextual                     = 4,
	Max_None                       = 5,
	EMapChallengeCategoryType_MAX  = 6
};


// Enum FortniteUI.EFortMarkerActions
enum class EFortMarkerActions : uint8_t
{
	None                           = 0,
	Cancel                         = 1,
	Confirm                        = 2,
	EFortMarkerActions_MAX         = 3
};


// Enum FortniteUI.EHealthBarType
enum class EHealthBarType : uint8_t
{
	Health                         = 0,
	Shield                         = 1,
	Stamina                        = 2,
	VehicleHealth                  = 3,
	SignalInStorm                  = 4,
	EHealthBarType_MAX             = 5
};


// Enum FortniteUI.EBPStatus
enum class EBPStatus : uint8_t
{
	UnpurchasedBP                  = 0,
	PurchasedBP                    = 1,
	EBPStatus_MAX                  = 2
};


// Enum FortniteUI.EPunchType
enum class EPunchType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EPunchType_MAX                 = 2
};


// Enum FortniteUI.EPunchCardLocation
enum class EPunchCardLocation : uint8_t
{
	NONE                           = 0,
	HUD                            = 1,
	Map                            = 2,
	EndGame                        = 3,
	Lobby                          = 4,
	EPunchCardLocation_MAX         = 5
};


// Enum FortniteUI.EAthenaSquadListUpdateType
enum class EAthenaSquadListUpdateType : uint8_t
{
	None                           = 0,
	CanResurrect                   = 1,
	FindResurrectChip              = 2,
	EAthenaSquadListUpdateType_MAX = 3
};


// Enum FortniteUI.ERespawnUIState
enum class ERespawnUIState : uint8_t
{
	Hidden                         = 0,
	ShowRespawnEnabled             = 1,
	ShowRespawnDisabled            = 2,
	ERespawnUIState_MAX            = 3
};


// Enum FortniteUI.ESpectatorBuildCountType
enum class ESpectatorBuildCountType : uint8_t
{
	BuildCount                     = 0,
	Wood                           = 1,
	Stone                          = 2,
	Metal                          = 3,
	ESpectatorBuildCountType_MAX   = 4
};


// Enum FortniteUI.ESpectatorMapPlayerListState
enum class ESpectatorMapPlayerListState : uint8_t
{
	Default                        = 0,
	Irrelevant                     = 1,
	Eliminated                     = 2,
	ESpectatorMapPlayerListState_MAX = 3
};


// Enum FortniteUI.EAthenaSpectatorNameplateDetailState
enum class EAthenaSpectatorNameplateDetailState : uint8_t
{
	High                           = 0,
	Low                            = 1,
	Arrow                          = 2,
	Off                            = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4
};


// Enum FortniteUI.EAthenaSpectatorNameplateDistanceState
enum class EAthenaSpectatorNameplateDistanceState : uint8_t
{
	Near                           = 0,
	MidDistance                    = 1,
	FurtherThanMaxDistance         = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3
};


// Enum FortniteUI.ESpectatorPlayerListSortMethod
enum class ESpectatorPlayerListSortMethod : uint8_t
{
	SquadId                        = 0,
	PlayerName                     = 1,
	Eliminations                   = 2,
	EventScore                     = 3,
	State                          = 4,
	Count                          = 5,
	ESpectatorPlayerListSortMethod_MAX = 6
};


// Enum FortniteUI.EStormSurgeThresholdType
enum class EStormSurgeThresholdType : uint8_t
{
	None                           = 0,
	Above                          = 1,
	Below                          = 2,
	Equal                          = 3,
	EStormSurgeThresholdType_MAX   = 4
};


// Enum FortniteUI.EFrontendVisibilityMode
enum class EFrontendVisibilityMode : uint8_t
{
	Normal                         = 0,
	HideTopTabsOnly                = 1,
	HideTopTabsOnlyWithoutBottomBar = 2,
	OnlyBottom                     = 3,
	OnlyTop                        = 4,
	Empty                          = 5,
	EFrontendVisibilityMode_MAX    = 6
};


// Enum FortniteUI.EComboSlotType
enum class EComboSlotType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Combo                          = 2,
	Creative                       = 3,
	COUNT                          = 4,
	EComboSlotType_MAX             = 5
};


// Enum FortniteUI.EBacchusSignalQuality
enum class EBacchusSignalQuality : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBacchusSignalQuality_MAX      = 4
};


// Enum FortniteUI.EBattleLabAlertType
enum class EBattleLabAlertType : uint8_t
{
	QuestComplete                  = 0,
	QuestGranted                   = 1,
	Reward                         = 2,
	EBattleLabAlertType_MAX        = 3
};


// Enum FortniteUI.EBattlePassView
enum class EBattlePassView : uint8_t
{
	None                           = 0,
	Track                          = 1,
	ItemDetails                    = 2,
	EBattlePassView_MAX            = 3
};


// Enum FortniteUI.EBattlePassPurchaseButtonLayout
enum class EBattlePassPurchaseButtonLayout : uint8_t
{
	Normal                         = 0,
	Bundle                         = 1,
	Normal_PaysForSelf             = 2,
	EBattlePassPurchaseButtonLayout_MAX = 3
};


// Enum FortniteUI.EAthenaNewsStyle
enum class EAthenaNewsStyle : uint8_t
{
	None                           = 0,
	SpecialEvent                   = 1,
	SpecialEvent2                  = 2,
	EAthenaNewsStyle_MAX           = 3
};


// Enum FortniteUI.EAthenaNewsEntryType
enum class EAthenaNewsEntryType : uint8_t
{
	Text                           = 0,
	Item                           = 1,
	RMTItem                        = 2,
	Website                        = 3,
	NavigateToTab                  = 4,
	SmallNews                      = 5,
	STWUpsell                      = 6,
	Challenge                      = 7,
	SpatialBattlePass              = 8,
	BattlePassPurchaseScreen       = 9,
	Setting                        = 10,
	Playlist                       = 11,
	NavigateToSpatialScreen        = 12,
	EAthenaNewsEntryType_MAX       = 13
};


// Enum FortniteUI.EFortTournamentAlertType
enum class EFortTournamentAlertType : uint8_t
{
	Warning                        = 0,
	Info                           = 1,
	EFortTournamentAlertType_MAX   = 2
};


// Enum FortniteUI.ESubGameFilter
enum class ESubGameFilter : uint8_t
{
	All                            = 0,
	SaveTheWorld                   = 1,
	BattleRoyale                   = 2,
	ESubGameFilter_MAX             = 3
};


// Enum FortniteUI.ECobaltStatusTeam
enum class ECobaltStatusTeam : uint8_t
{
	Ally                           = 0,
	Enemy                          = 1,
	MAX                            = 2
};


// Enum FortniteUI.EBracketNodeState
enum class EBracketNodeState : uint8_t
{
	LocalTeam                      = 0,
	EnemyTeam                      = 1,
	Neutral                        = 2,
	EBracketNodeState_MAX          = 3
};


// Enum FortniteUI.ESurvivalObjectiveIconState
enum class ESurvivalObjectiveIconState : uint8_t
{
	None                           = 0,
	Spawned                        = 1,
	Destroyed                      = 2,
	ESurvivalObjectiveIconState_MAX = 3
};


// Enum FortniteUI.EDiscoCaptureUIState
enum class EDiscoCaptureUIState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Dance                          = 2,
	Capturing                      = 3,
	Contested                      = 4,
	EDiscoCaptureUIState_MAX       = 5
};


// Enum FortniteUI.EDiscoScoreProgressTypes
enum class EDiscoScoreProgressTypes : uint8_t
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	EDiscoScoreProgressTypes_MAX   = 6
};


// Enum FortniteUI.EDiscoCaptureProgressState
enum class EDiscoCaptureProgressState : uint8_t
{
	None                           = 0,
	AllyProgress                   = 1,
	EnemyProgress                  = 2,
	EDiscoCaptureProgressState_MAX = 3
};


// Enum FortniteUI.EDiscoCaptureIconState
enum class EDiscoCaptureIconState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Neutral                        = 2,
	AllyCaptured                   = 3,
	EnemyCaptured                  = 4,
	EDiscoCaptureIconState_MAX     = 5
};


// Enum FortniteUI.EFortDonutIdleGameObject
enum class EFortDonutIdleGameObject : uint8_t
{
	UnsetObject                    = 0,
	Tree                           = 1,
	Mound                          = 2,
	SmallMound                     = 3,
	JumpPad                        = 4,
	Torch                          = 5,
	PeelMonster                    = 6,
	Chimichanga                    = 7,
	Arm                            = 8,
	EFortDonutIdleGameObject_MAX   = 9
};


// Enum FortniteUI.UFortActivatableVideoPanelEvents
enum class EUFortActivatableVideoPanelEvents : uint8_t
{
	Finished                       = 0,
	Skipped                        = 1,
	UFortActivatableVideoPanelEvents_MAX = 2
};


// Enum FortniteUI.EFortAlterationOptionType
enum class EFortAlterationOptionType : uint8_t
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3
};


// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3
};


// Enum FortniteUI.EFillDisableReason
enum class EFillDisableReason : uint8_t
{
	Enabled                        = 0,
	FillDisabledOnPlaylist         = 1,
	NotPartyLeader                 = 2,
	AlreadyMatchmaking             = 3,
	PartyTooSmall                  = 4,
	PartyTooBig                    = 5,
	InactiveTournament             = 6,
	NoSplitscreen                  = 7,
	EFillDisableReason_MAX         = 8
};


// Enum FortniteUI.EServerAccessSetting
enum class EServerAccessSetting : uint8_t
{
	Invalid                        = 0,
	FriendsOfCurrentPlayers        = 1,
	LeaderInviteOnly               = 2,
	EServerAccessSetting_MAX       = 3
};


// Enum FortniteUI.ESpectatorQueueType
enum class ESpectatorQueueType : uint8_t
{
	Invalid                        = 0,
	Player                         = 1,
	BroadcastSpectator             = 2,
	ESpectatorQueueType_MAX        = 3
};


// Enum FortniteUI.ESquadFillSetting
enum class ESquadFillSetting : uint8_t
{
	Invalid                        = 0,
	Fill                           = 1,
	NoFill                         = 2,
	ESquadFillSetting_MAX          = 3
};


// Enum FortniteUI.EPlayButtonJoinInProgressState
enum class EPlayButtonJoinInProgressState : uint8_t
{
	None                           = 0,
	JoinAsPlayer                   = 1,
	SpectateAPartyMember           = 2,
	EPlayButtonJoinInProgressState_MAX = 3
};


// Enum FortniteUI.ETutorialButtonInteractionType
enum class ETutorialButtonInteractionType : uint8_t
{
	Click                          = 0,
	Press                          = 1,
	ETutorialButtonInteractionType_MAX = 2
};


// Enum FortniteUI.EHighlightType
enum class EHighlightType : uint8_t
{
	ESquareHighlight               = 0,
	ECircleHighlight_Big           = 1,
	ECircleHighlight_Small         = 2,
	EHighlightType_MAX             = 3
};


// Enum FortniteUI.EFortAthenaTutorialScreenExtraWidget
enum class EFortAthenaTutorialScreenExtraWidget : uint8_t
{
	None                           = 0,
	DragToTurn                     = 1,
	Completed                      = 2,
	Count                          = 3,
	EFortAthenaTutorialScreenExtraWidget_MAX = 4
};


// Enum FortniteUI.EFortAthenaTutorialSubstep
enum class EFortAthenaTutorialSubstep : uint8_t
{
	ScreenSwipeToLook              = 0,
	ScreenFindMarker               = 1,
	ScreenUseLeftStick             = 2,
	ScreenMoveToBuilding           = 3,
	ScreenJump                     = 4,
	ScreenCrouch                   = 5,
	ScreenReachMarker              = 6,
	ScreenUsePickaxe               = 7,
	ScreenReachPickUp              = 8,
	ScreenPickUpItems              = 9,
	ScreenEquipItem                = 10,
	ScreenShootTargets             = 11,
	ScreenReload                   = 12,
	ScreenReachLocation            = 13,
	ScreenDefendYourself           = 14,
	ScreenHealthAlert              = 15,
	ScreenDestroyEnemies           = 16,
	ScreenCollectLoot              = 17,
	ScreenUseMedkit                = 18,
	ScreenUseShield                = 19,
	ScreenShieldInfo               = 20,
	ScreenLookForChest             = 21,
	ScreenChestFound               = 22,
	ScreenSelectBuildMode          = 23,
	ScreenShowMaterials            = 24,
	ScreenShowBuildPieces          = 25,
	ScreenSelectStairs             = 26,
	ScreenPlaceStairs              = 27,
	ScreenReachChest               = 28,
	ScreenExitBuildMode            = 29,
	ScreenLootChest                = 30,
	ScreenCollectLootChest         = 31,
	ScreenEquipRifle               = 32,
	ScreenUseScope                 = 33,
	ScreenShootTargetsScoping      = 34,
	ScreenCompleted                = 35,
	HealingInterrupted             = 36,
	Count                          = 37,
	EFortAthenaTutorialSubstep_MAX = 38
};


// Enum FortniteUI.EFortAthenaTutorialStep
enum class EFortAthenaTutorialStep : uint8_t
{
	Look                           = 0,
	Move                           = 1,
	Harvest                        = 2,
	Pickup                         = 3,
	Shoot                          = 4,
	Ambush                         = 5,
	Heal                           = 6,
	Build                          = 7,
	Chest                          = 8,
	Scoping                        = 9,
	Completed                      = 10,
	Count                          = 11,
	EFortAthenaTutorialStep_MAX    = 12
};


// Enum FortniteUI.EFuelTankState
enum class EFuelTankState : uint8_t
{
	Empty                          = 0,
	LowFuel                        = 1,
	RegularFuel                    = 2,
	EFuelTankState_MAX             = 3
};


// Enum FortniteUI.EFortMemberConnectionState
enum class EFortMemberConnectionState : uint8_t
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Invalid                        = 3,
	EFortMemberConnectionState_MAX = 4
};


// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8_t
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3
};


// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8_t
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2
};


// Enum FortniteUI.EColorPickerColorRepresentation
enum class EColorPickerColorRepresentation : uint8_t
{
	HSV                            = 0,
	RGB                            = 1,
	Max_NONE                       = 2,
	EColorPickerColorRepresentation_MAX = 3
};


// Enum FortniteUI.EColorPickerType
enum class EColorPickerType : uint8_t
{
	Swatches                       = 0,
	CustomColor                    = 1,
	Both                           = 2,
	EColorPickerType_MAX           = 3
};


// Enum FortniteUI.ELeaderboardDisplayType
enum class ELeaderboardDisplayType : uint8_t
{
	Default                        = 0,
	Floating                       = 1,
	ELeaderboardDisplayType_MAX    = 2
};


// Enum FortniteUI.EFortLoadoutCardType
enum class EFortLoadoutCardType : uint8_t
{
	Items                          = 0,
	RandomTile                     = 1,
	AddTile                        = 2,
	AddPreviewItems                = 3,
	Blank                          = 4,
	EFortLoadoutCardType_MAX       = 5
};


// Enum FortniteUI.EFortCosmeticLoadoutScreenMode
enum class EFortCosmeticLoadoutScreenMode : uint8_t
{
	Browse                         = 0,
	Save                           = 1,
	EFortCosmeticLoadoutScreenMode_MAX = 2
};


// Enum FortniteUI.EFortCreativeItemType
enum class EFortCreativeItemType : uint8_t
{
	Chest                          = 0,
	Item                           = 1,
	Collection                     = 2,
	SubItems                       = 3,
	EFortCreativeItemType_MAX      = 4
};


// Enum FortniteUI.EFortCreativeIslandLinkCategory
enum class EFortCreativeIslandLinkCategory : uint8_t
{
	Default                        = 0,
	Favorite                       = 1,
	Published                      = 2,
	Recent                         = 3,
	EFortCreativeIslandLinkCategory_MAX = 4
};


// Enum FortniteUI.EFortCreativeIslandLinkValidationResult
enum class EFortCreativeIslandLinkValidationResult : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	IslandNotFound                 = 2,
	InvalidKeyTooShort             = 3,
	InvalidKeyTooLong              = 4,
	InvalidKeyCharacters           = 5,
	EFortCreativeIslandLinkValidationResult_MAX = 6
};


// Enum FortniteUI.EFortContentBrowserQuickbarState
enum class EFortContentBrowserQuickbarState : uint8_t
{
	Disabled                       = 0,
	Creative                       = 1,
	Primary                        = 2,
	Trap                           = 3,
	EFortContentBrowserQuickbarState_MAX = 4
};


// Enum FortniteUI.EFortCreativeServerPrivacySetting
enum class EFortCreativeServerPrivacySetting : uint8_t
{
	Unknown                        = 0,
	Private                        = 1,
	Public                         = 2,
	EFortCreativeServerPrivacySetting_MAX = 3
};


// Enum FortniteUI.EFortDefenderSlotType
enum class EFortDefenderSlotType : uint8_t
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3
};


// Enum FortniteUI.EDynamicEntryPatternDirection
enum class EDynamicEntryPatternDirection : uint8_t
{
	FirstToLast                    = 0,
	LastToFirst                    = 1,
	EDynamicEntryPatternDirection_MAX = 2
};


// Enum FortniteUI.DateFormat
enum class EDateFormat : uint8_t
{
	CountdownTextual               = 0,
	CountdownNumeric               = 1,
	CountdownNumUnder12Hours       = 2,
	Date                           = 3,
	DateFormat_MAX                 = 4
};


// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8_t
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3
};


// Enum FortniteUI.EShareButtonType
enum class EShareButtonType : uint8_t
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EShareButtonType_MAX           = 3
};


// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8_t
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	PhoenixLevelUp                 = 9,
	EFrontEndRewardType_MAX        = 10
};


// Enum FortniteUI.ESelectionState
enum class ESelectionState : uint8_t
{
	Unselected                     = 0,
	Selected                       = 1,
	CannotGift                     = 2,
	ESelectionState_MAX            = 3
};


// Enum FortniteUI.EFortHeroPerkDisplayType
enum class EFortHeroPerkDisplayType : uint8_t
{
	CommanderPerk                  = 0,
	TeamPerk                       = 1,
	ClassPerk                      = 2,
	StandardPerk                   = 3,
	Max_None                       = 4,
	EFortHeroPerkDisplayType_MAX   = 5
};


// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3
};


// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8_t
{
	NotVisible                     = 0,
	WaitingForOutpostOwner         = 1,
	ECenterPopupMessageStateEnum_MAX = 2
};


// Enum FortniteUI.EBuildingFocusType
enum class EBuildingFocusType : uint8_t
{
	Contextual                     = 0,
	Interactable                   = 1,
	Normal                         = 2,
	Count                          = 3,
	EBuildingFocusType_MAX         = 4
};


// Enum FortniteUI.EContextPositionPlatform
enum class EContextPositionPlatform : uint8_t
{
	NonMobile                      = 0,
	Mobile                         = 1,
	EContextPositionPlatform_MAX   = 2
};


// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8_t
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3
};


// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8_t
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3
};


// Enum FortniteUI.ESceneTransitionType
enum class ESceneTransitionType : uint8_t
{
	NoTransition                   = 0,
	Clockwise                      = 1,
	CounterClockwise               = 2,
	ESceneTransitionType_MAX       = 3
};


// Enum FortniteUI.EViolatorIntensity
enum class EViolatorIntensity : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EViolatorIntensity_MAX         = 3
};


// Enum FortniteUI.EItemShopTileSize
enum class EItemShopTileSize : uint8_t
{
	Mini                           = 0,
	Small                          = 1,
	Normal                         = 2,
	DoubleWide                     = 3,
	Max                            = 4
};


// Enum FortniteUI.EItemShopCurrency
enum class EItemShopCurrency : uint8_t
{
	VBucks                         = 0,
	RealMOney                      = 1,
	EItemShopCurrency_MAX          = 2
};


// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8_t
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3
};


// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	MAX                            = 2
};


// Enum FortniteUI.ELocalUserOnlineStatus
enum class ELocalUserOnlineStatus : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	ELocalUserOnlineStatus_MAX     = 6
};


// Enum FortniteUI.EFortLoginInteraction
enum class EFortLoginInteraction : uint8_t
{
	Begin                          = 0,
	PlayedBefore                   = 1,
	CredentialSelect               = 2,
	NamePassword                   = 3,
	RedirectEpicAccount            = 4,
	AccountNotFound                = 5,
	CreateDisplayName              = 6,
	MultiFactorAuth                = 7,
	EULA                           = 8,
	AccountLink                    = 9,
	AccountPinLink                 = 10,
	WebLogin                       = 11,
	WebAccountCreation             = 12,
	AgeGate                        = 13,
	EFortLoginInteraction_MAX      = 14
};


// Enum FortniteUI.EFortModifiedStatus
enum class EFortModifiedStatus : uint8_t
{
	IsDefault                      = 0,
	IsModified                     = 1,
	Unsupported                    = 2,
	EFortModifiedStatus_MAX        = 3
};


// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8_t
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8_t
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5
};


// Enum FortniteUI.EFortMissionActivationWidgetState
enum class EFortMissionActivationWidgetState : uint8_t
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetState_MAX = 4
};


// Enum FortniteUI.EActionBindingComparisonType
enum class EActionBindingComparisonType : uint8_t
{
	NoneBound                      = 0,
	AnyBound                       = 1,
	AllBound                       = 2,
	EActionBindingComparisonType_MAX = 3
};


// Enum FortniteUI.ETagComparisonType
enum class ETagComparisonType : uint8_t
{
	HasAny                         = 0,
	HasAll                         = 1,
	HasNone                        = 2,
	ETagComparisonType_MAX         = 3
};


// Enum FortniteUI.EFortFortMobileShareButtonOS
enum class EFortFortMobileShareButtonOS : uint8_t
{
	Android                        = 0,
	iOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2
};


// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8_t
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4
};


// Enum FortniteUI.EFortMtxOfferDisplaySize
enum class EFortMtxOfferDisplaySize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EFortMtxOfferDisplaySize_MAX   = 3
};


// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8_t
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Unknown                        = 2,
	Max_None                       = 3,
	EFortMtxStoreOfferType_MAX     = 4
};


// Enum FortniteUI.ESettingTab
enum class ESettingTab : uint8_t
{
	None                           = 0,
	Video                          = 1,
	Game                           = 2,
	GameUI                         = 3,
	Brightness                     = 4,
	Audio                          = 5,
	Accessibility                  = 6,
	Input                          = 7,
	MouseAndKeyboard               = 8,
	Controller                     = 9,
	ControllerSensitivity          = 10,
	TouchAndMotion                 = 11,
	Account                        = 12,
	CreativeWorld                  = 13,
	CreativePlayer                 = 14,
	ESettingTab_MAX                = 15
};


// Enum FortniteUI.ESettingValueType
enum class ESettingValueType : uint8_t
{
	None                           = 0,
	Rotator                        = 1,
	Slider                         = 2,
	ESettingValueType_MAX          = 3
};


// Enum FortniteUI.ESettingType
enum class ESettingType : uint8_t
{
	None                           = 0,
	Header                         = 1,
	WindowMode                     = 2,
	DisplayResolution              = 3,
	FrameRateLimit                 = 4,
	VideoQuality                   = 5,
	ThreeDResolution               = 6,
	ViewDistance                   = 7,
	Shadows                        = 8,
	AntiAliasing                   = 9,
	Textures                       = 10,
	Effects                        = 11,
	PostProcessing                 = 12,
	VSync                          = 13,
	MotionBlur                     = 14,
	ShowGrass                      = 15,
	MobileFPSType                  = 16,
	ShowFPS                        = 17,
	AllowLowPower                  = 18,
	AllowVideoPlayback             = 19,
	AllowDynamicResolution         = 20,
	AllowMultithreadedRendering    = 21,
	RenderingAPI                   = 22,
	UseGPUCrashDebugging           = 23,
	RegionHeader                   = 24,
	Language                       = 25,
	Region                         = 26,
	MouseSensitivityYaw            = 27,
	MouseSensitivityPitch          = 28,
	MouseSensitivityMultiplierForAircraft = 29,
	TouchDragSensitivity           = 30,
	ControllerLookSensitivityYaw   = 31,
	ControllerLookSensitivityPitch = 32,
	MouseTargetingMultiplier       = 33,
	MouseScopedMultiplier          = 34,
	GamepadTargetingMultiplier     = 35,
	GamepadScopedMultiplier        = 36,
	GamepadBuildingMultiplier      = 37,
	GamepadEditModeMultiplier      = 38,
	TouchLookAccelerationMultiplier = 39,
	TouchDragTargetingSensitivity  = 40,
	TouchDragScopedSensitivity     = 41,
	TouchBuildingMultiplier        = 42,
	TouchEditModeMultiplier        = 43,
	TouchVerticalSensitivity       = 44,
	InvertPitch                    = 45,
	InvertYaw                      = 46,
	InvertPitchForMotion           = 47,
	InvertPitchForAircraftPrimary  = 48,
	InvertPitchForAircraftSecondary = 49,
	InvertYawForMotion             = 50,
	GyroEnabled                    = 51,
	GyroYawAxis                    = 52,
	GyroSensitivity                = 53,
	GyroTargetingSensitivity       = 54,
	GyroScopedSensitivity          = 55,
	GyroHarvestingToolSensitivity  = 56,
	SafeZone                       = 57,
	AnonymousMode                  = 58,
	AnonymousCharacterMode         = 59,
	HideOtherPlayerNames           = 60,
	HiddenMatchmakingDelay         = 61,
	AutoJoinGameVoiceChannel       = 62,
	ShowVoiceIndicators            = 63,
	HUDScale                       = 64,
	ShowViewerCount                = 65,
	FirstPersonCamera              = 66,
	PeripheralLighting             = 67,
	PingPlaceDangerMarkerWhenTargeting = 68,
	ShowGlobalChat                 = 69,
	ConsoleUnlockedFPS             = 70,
	ToggleSprint                   = 71,
	SprintByDefault                = 72,
	SprintCancelsReload            = 73,
	TapInteract                    = 74,
	InWorldInteract                = 75,
	ToggleTargeting                = 76,
	HoldToSwapPickup               = 77,
	AutoEquipBetterItems           = 78,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 79,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 80,
	AimAssist                      = 81,
	EditModeAimAssist              = 82,
	TouchEdit                      = 83,
	EditConfirmOnRelease           = 84,
	QuickEdit                      = 85,
	TurboBuild                     = 86,
	CreativeTurboDelete            = 87,
	AutoChangeMaterial             = 88,
	GamepadAutoRun                 = 89,
	CrossplayPreference            = 90,
	AutoOpenDoors                  = 91,
	AutoPickupWeapons              = 92,
	AutoPickupWeaponsConsolePC     = 93,
	AutoSortConsumablesToRight     = 94,
	EnableTryBuildOnFocus          = 95,
	EditButtonHoldTime             = 96,
	AccessoriesHeader              = 97,
	ForceFeedback                  = 98,
	ContextTutorial                = 99,
	ReplayRecording                = 100,
	ReplayRecordingLargeTeams      = 101,
	ReplayRecordingCreativeMode    = 102,
	UsePowerSavingMode             = 103,
	ShadowPlayHighlights           = 104,
	ShowTemperature                = 105,
	BuildingPossession             = 106,
	GammaValue                     = 107,
	MusicVolume                    = 108,
	SoundFXVolume                  = 109,
	DialogVolume                   = 110,
	VoiceChatVolume                = 111,
	CinematicsVolume               = 112,
	Subtitles                      = 113,
	Quality                        = 114,
	VoiceChat                      = 115,
	PushToTalk                     = 116,
	ProximityVoiceChat             = 117,
	VoiceChatInputDevice           = 118,
	VoiceChatOutputDevice          = 119,
	AllowBackgroundAudio           = 120,
	ColorBlindMode                 = 121,
	ColorBlindStrength             = 122,
	IgnoreGamepadInput             = 123,
	LockPrimaryInputMethodToMouse  = 124,
	EnableRudderControl            = 125,
	RudderDeadZone                 = 126,
	RudderMaxThrottle              = 127,
	VisualizeSoundEffects          = 128,
	VisualizeSoundEffectsHeader    = 129,
	MoveStickDeadZone              = 130,
	LookStickDeadZone              = 131,
	LookSensitivityPreset          = 132,
	LookSensitivityPresetAds       = 133,
	LookBuildModeMultiplier        = 134,
	LookEditModeMultiplier         = 135,
	UseAdvancedOptions             = 136,
	LookHorizontalSpeed            = 137,
	LookVerticalSpeed              = 138,
	LookHorizontalSpeedAds         = 139,
	LookVerticalSpeedAds           = 140,
	LookHorizontalBoostSpeed       = 141,
	LookVerticalBoostSpeed         = 142,
	LookBoostAccelerationTime      = 143,
	LookHorizontalBoostSpeedAds    = 144,
	LookVerticalBoostSpeedAds      = 145,
	LookBoostAccelerationTimeAds   = 146,
	InstantBoostWhenBuilding       = 147,
	LookEaseTime                   = 148,
	LookInputCurve                 = 149,
	AimAssistStrength              = 150,
	UseLegacyControls              = 151,
	PlayerSurveysAllowed           = 152,
	NotifyWhenPlaying              = 153,
	LocalNotifications             = 154,
	FireMode                       = 155,
	COUNT                          = 156,
	ESettingType_MAX               = 157
};


// Enum FortniteUI.EParentalControlsViewState
enum class EParentalControlsViewState : uint8_t
{
	Invalid                        = 0,
	EnterPin                       = 1,
	AskToEnableControls            = 2,
	VerifyEmail                    = 3,
	SetupEmail                     = 4,
	SetupPin                       = 5,
	DisplaySettings                = 6,
	DisableParentalControls        = 7,
	AskToReEnable                  = 8,
	ReEnabling                     = 9,
	EParentalControlsViewState_MAX = 10
};


// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3
};


// Enum FortniteUI.ESaveProfileForBanners
enum class ESaveProfileForBanners : uint8_t
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2
};


// Enum FortniteUI.EFortPlayerSurveyAggregateOp
enum class EFortPlayerSurveyAggregateOp : uint8_t
{
	Sum                            = 0,
	Max                            = 1
};


// Enum FortniteUI.EFortPlayerSurveyAthenaSeasonStat
enum class EFortPlayerSurveyAthenaSeasonStat : uint8_t
{
	XP                             = 0,
	Level                          = 1,
	BookXP                         = 2,
	BookLevel                      = 3,
	EFortPlayerSurveyAthenaSeasonStat_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType
enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType : uint8_t
{
	Unknown                        = 0,
	ChoiceButton                   = 1,
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataAggregateOp
enum class EFortPlayerSurveyCMSDataAggregateOp : uint8_t
{
	s                              = 0,
	mx                             = 1,
	EFortPlayerSurveyCMSDataAggregateOp_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataAthenaSeasonStat
enum class EFortPlayerSurveyCMSDataAthenaSeasonStat : uint8_t
{
	sx                             = 0,
	sl                             = 1,
	bx                             = 2,
	bl                             = 3,
	EFortPlayerSurveyCMSDataAthenaSeasonStat_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataBinaryComparisonOp
enum class EFortPlayerSurveyCMSDataBinaryComparisonOp : uint8_t
{
	e                              = 0,
	n                              = 1,
	l                              = 2,
	g                              = 3,
	le                             = 4,
	ge                             = 5,
	EFortPlayerSurveyCMSDataBinaryComparisonOp_MAX = 6
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataGameMode
enum class EFortPlayerSurveyCMSDataGameMode : uint8_t
{
	c                              = 0,
	a                              = 1,
	pc                             = 2,
	EFortPlayerSurveyCMSDataGameMode_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataGameplayTagQueryExprType
enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8_t
{
	n                              = 0,
	s                              = 1,
	a                              = 2,
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataPlaylistCategory
enum class EFortPlayerSurveyCMSDataPlaylistCategory : uint8_t
{
	a                              = 0,
	s                              = 1,
	d                              = 2,
	q                              = 3,
	lt                             = 4,
	c                              = 5,
	pl                             = 6,
	EFortPlayerSurveyCMSDataPlaylistCategory_MAX = 7
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataPresentationStyle
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8_t
{
	standard                       = 0,
	rating                         = 1,
	EFortPlayerSurveyCMSDataPresentationStyle_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataQuestState
enum class EFortPlayerSurveyCMSDataQuestState : uint8_t
{
	i                              = 0,
	a                              = 1,
	co                             = 2,
	cl                             = 3,
	EFortPlayerSurveyCMSDataQuestState_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataRelativeSurveyKeyType
enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType : uint8_t
{
	s                              = 0,
	a                              = 1,
	o                              = 2,
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataTrigger
enum class EFortPlayerSurveyCMSDataTrigger : uint8_t
{
	rm                             = 0,
	EFortPlayerSurveyCMSDataTrigger_MAX = 1
};


// Enum FortniteUI.EFortPlayerSurveyPlaylistCategory
enum class EFortPlayerSurveyPlaylistCategory : uint8_t
{
	All                            = 0,
	Solo                           = 1,
	Duo                            = 2,
	Squad                          = 3,
	LTM                            = 4,
	Creative                       = 5,
	Playground                     = 6,
	EFortPlayerSurveyPlaylistCategory_MAX = 7
};


// Enum FortniteUI.EFortPlayerSurveyTrigger
enum class EFortPlayerSurveyTrigger : uint8_t
{
	Invalid                        = 0,
	Any                            = 1,
	ReturnToMainMenu               = 2,
	EFortPlayerSurveyTrigger_MAX   = 3
};


// Enum FortniteUI.EPostGameClickCatcherMode
enum class EPostGameClickCatcherMode : uint8_t
{
	Catch_None                     = 0,
	Catch_MobileOnly               = 1,
	Catch_MouseOnly                = 2,
	Catch_All                      = 3,
	Catch_MAX                      = 4
};


// Enum FortniteUI.EPostGameHUDMode
enum class EPostGameHUDMode : uint8_t
{
	None                           = 0,
	AllHidden                      = 1,
	Spectating                     = 2,
	AllHiddenExceptXP              = 3,
	EPostGameHUDMode_MAX           = 4
};


// Enum FortniteUI.EPostGameScreenContinueBehavior
enum class EPostGameScreenContinueBehavior : uint8_t
{
	Next                           = 0,
	Previous                       = 1,
	EPostGameScreenContinueBehavior_MAX = 2
};


// Enum FortniteUI.EPurchaseReturnStep
enum class EPurchaseReturnStep : uint8_t
{
	ItemSelection                  = 0,
	ReasonSelection                = 1,
	FinalSubmission                = 2,
	EPurchaseReturnStep_MAX        = 3
};


// Enum FortniteUI.ECalloutNavigationDirection
enum class ECalloutNavigationDirection : uint8_t
{
	Previous                       = 0,
	Next                           = 1,
	ECalloutNavigationDirection_MAX = 2
};


// Enum FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8_t
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5
};


// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8_t
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4
};


// Enum FortniteUI.EFortServerBrowserAction
enum class EFortServerBrowserAction : uint8_t
{
	BattleLabServerCreate          = 0,
	PlaygroundServerCreate         = 1,
	CreativeServerCreate           = 2,
	Play                           = 3,
	EFortServerBrowserAction_MAX   = 4
};


// Enum FortniteUI.EFortServerItemIneligibleReason
enum class EFortServerItemIneligibleReason : uint8_t
{
	None                           = 0,
	PartyTooBig                    = 1,
	PartyTooSmall                  = 2,
	NotPartyLeader                 = 3,
	MatchmakingAlready             = 4,
	NotSupportedByLeto             = 5,
	InvalidData                    = 6,
	EFortServerItemIneligibleReason_MAX = 7
};


// Enum FortniteUI.EFortSettingGameVisibility
enum class EFortSettingGameVisibility : uint8_t
{
	None                           = 0,
	Campaign                       = 1,
	Athena                         = 2,
	EFortSettingGameVisibility_MAX = 3
};


// Enum FortniteUI.EFortShowdownPinState
enum class EFortShowdownPinState : uint8_t
{
	None                           = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	EFortShowdownPinState_MAX      = 3
};


// Enum FortniteUI.EFortEventWindowEligibility
enum class EFortEventWindowEligibility : uint8_t
{
	Unknown                        = 0,
	Public                         = 1,
	Private                        = 2,
	Locked                         = 3,
	EFortEventWindowEligibility_MAX = 4
};


// Enum FortniteUI.EFortShowdownEventState
enum class EFortShowdownEventState : uint8_t
{
	Unknown                        = 0,
	FutureTBD                      = 1,
	FutureScheduled                = 2,
	FutureNext                     = 3,
	Live                           = 4,
	LiveParticipating              = 5,
	LiveNotParticipating           = 6,
	Completed                      = 7,
	CompletedParticipated          = 8,
	CompletedNotPartipated         = 9,
	Cancelled                      = 10,
	EFortShowdownEventState_MAX    = 11
};


// Enum FortniteUI.EFortShowdownMatchType
enum class EFortShowdownMatchType : uint8_t
{
	Unknown                        = 0,
	Solo                           = 1,
	Duos                           = 2,
	Squads                         = 3,
	EFortShowdownMatchType_MAX     = 4
};


// Enum FortniteUI.EFortDateTimeStyle
enum class EFortDateTimeStyle : uint8_t
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EFortDateTimeStyle_MAX         = 5
};


// Enum FortniteUI.ERadialOrderingMode
enum class ERadialOrderingMode : uint8_t
{
	CounterClockwise               = 0,
	Clockwise                      = 1,
	Cardinal                       = 2,
	Custom                         = 3,
	ERadialOrderingMode_MAX        = 4
};


// Enum FortniteUI.ECardinalPoint
enum class ECardinalPoint : uint8_t
{
	E                              = 0,
	NE                             = 1,
	N                              = 2,
	NW                             = 3,
	W                              = 4,
	SW                             = 5,
	S                              = 6,
	SE                             = 7,
	None                           = 8,
	ECardinalPoint_MAX             = 9
};


// Enum FortniteUI.ESocialImportPanelType
enum class ESocialImportPanelType : uint8_t
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2
};


// Enum FortniteUI.EFriendLinkShareButtonType
enum class EFriendLinkShareButtonType : uint8_t
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EFriendLinkShareButtonType_MAX = 3
};


// Enum FortniteUI.EListHeaderType
enum class EListHeaderType : uint8_t
{
	TeamMember                     = 0,
	PartyMember                    = 1,
	JoinableParty                  = 2,
	PlatformOnlineFriend           = 3,
	McpOnlineFriend                = 4,
	OfflineFriend                  = 5,
	Blocked                        = 6,
	VoiceChatMember                = 7,
	FriendInvite                   = 8,
	SuggestedFriend                = 9,
	RecentPlayer                   = 10,
	SearchResults                  = 11,
	Invalid                        = 12,
	EListHeaderType_MAX            = 13
};


// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8_t
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	HeroAlreadyEquippedInLoadout   = 4,
	EFortSquadSlottingRestrictionReason_MAX = 5
};


// Enum FortniteUI.EPauseType
enum class EPauseType : uint8_t
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4
};


// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8_t
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5
};


// Enum FortniteUI.EFortStoreTransition
enum class EFortStoreTransition : uint8_t
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1
};


// Enum FortniteUI.ESubgameTileType
enum class ESubgameTileType : uint8_t
{
	Campaign                       = 0,
	Athena                         = 1,
	Creative                       = 2,
	ESubgameTileType_MAX           = 3
};


// Enum FortniteUI.ESubgameLoadFromCMS
enum class ESubgameLoadFromCMS : uint8_t
{
	DoNotLoadFromCMS               = 0,
	LoadImageFromCMS               = 1,
	ESubgameLoadFromCMS_MAX        = 2
};


// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8_t
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4
};


// Enum FortniteUI.ETouchState
enum class ETouchState : uint8_t
{
	None                           = 0,
	WaitingForStart                = 1,
	Started                        = 2,
	Active                         = 3,
	COUNT                          = 4,
	ETouchState_MAX                = 5
};


// Enum FortniteUI.EFortControlType
enum class EFortControlType : uint8_t
{
	None                           = 0,
	CameraAndMovement              = 1,
	Picking                        = 2,
	COUNT                          = 3,
	EFortControlType_MAX           = 4
};


// Enum FortniteUI.EFortTouchControlRegion
enum class EFortTouchControlRegion : uint8_t
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4
};


// Enum FortniteUI.ETournmentPosterViolatorState
enum class ETournmentPosterViolatorState : uint8_t
{
	Hidden                         = 0,
	Live                           = 1,
	Countdown                      = 2,
	Info                           = 3,
	ETournmentPosterViolatorState_MAX = 4
};


// Enum FortniteUI.EFortNamedBundle
enum class EFortNamedBundle : uint8_t
{
	Menu                           = 0,
	MenuCampaign                   = 1,
	MenuAthena                     = 2,
	Zone                           = 3,
	ZoneCampaign                   = 4,
	ZoneAthena                     = 5,
	Client                         = 6,
	ClientCampaign                 = 7,
	ClientAthena                   = 8,
	EFortNamedBundle_MAX           = 9
};


// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior : uint8_t
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5
};


// Enum FortniteUI.ELetoDisplayMode
enum class ELetoDisplayMode : uint8_t
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELetoDisplayMode_MAX           = 3
};


// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8_t
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9
};


// Enum FortniteUI.EFortLoginStage
enum class EFortLoginStage : uint8_t
{
	Begin                          = 0,
	SplashScreen                   = 1,
	UpdateCheck                    = 2,
	SignIn                         = 3,
	PostSignin                     = 4,
	SafeZoneEditor                 = 5,
	Benchmark                      = 6,
	RejoinCheck                    = 7,
	LoadingAthenaProfile           = 8,
	HealthWarning                  = 9,
	WaitingForCMS                  = 10,
	Complete                       = 11,
	EFortLoginStage_MAX            = 12
};


// Enum FortniteUI.EFortLoginDisplay
enum class EFortLoginDisplay : uint8_t
{
	LoginStatus                    = 0,
	SplashScreen                   = 1,
	SignIn                         = 2,
	SafeZoneEditor                 = 3,
	HealthWarning                  = 4,
	EFortLoginDisplay_MAX          = 5
};


// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType : uint8_t
{
	None                           = 0,
	EpicAccount                    = 1,
	Facebook                       = 2,
	Google                         = 3,
	PSN                            = 4,
	XBLive                         = 5,
	Erebus                         = 6,
	EFortLoginAccountType_MAX      = 7
};


// Enum FortniteUI.EPlayerReportReasons
enum class EPlayerReportReasons : uint8_t
{
	None                           = 0,
	Communication                  = 1,
	Offensive                      = 2,
	AFK                            = 3,
	IgnoringObjective              = 4,
	Harassment                     = 5,
	Exploiting                     = 6,
	TradeScam                      = 7,
	CommunicationsAbuse            = 8,
	OffensiveName                  = 9,
	TeamingUpWithEnemies           = 10,
	InappropriateContent           = 11,
	ExploitingOrHacking            = 12,
	Harassment_Threatening         = 13,
	Harassment_Annoying            = 14,
	Harassment_Selling             = 15,
	Harassment_Verbal              = 16,
	Harassment_GameBehavior        = 17,
	EPlayerReportReasons_MAX       = 18
};


// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8_t
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4
};


// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8_t
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3
};


// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8_t
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3
};


// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8_t
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6
};


// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed : uint8_t
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3
};


// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8_t
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3
};


// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8_t
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2
};


// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8_t
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4
};


// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8_t
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2
};


// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3
};


// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8_t
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4
};


// Enum FortniteUI.EFortToastType
enum class EFortToastType : uint8_t
{
	Default                        = 0,
	Subdued                        = 1,
	Impactful                      = 2,
	EFortToastType_MAX             = 3
};


// Enum FortniteUI.EUpgradeInfoImageSize
enum class EUpgradeInfoImageSize : uint8_t
{
	Small                          = 0,
	Large                          = 1,
	EUpgradeInfoImageSize_MAX      = 2
};


// Enum FortniteUI.EChannelSpeakerStyle
enum class EChannelSpeakerStyle : uint8_t
{
	InGame                         = 0,
	InLobby                        = 1,
	OutOfClient                    = 2,
	Max                            = 3
};


// Enum FortniteUI.EWinterQuestViewState
enum class EWinterQuestViewState : uint8_t
{
	Intro                          = 0,
	Lobby                          = 1,
	Preview                        = 2,
	PurchaseConfirmation           = 3,
	Scenic                         = 4,
	Fireplace                      = 5,
	Stocking                       = 6,
	Tree                           = 7,
	PresentBundle                  = 8,
	IndividualPresent              = 9,
	Transitioning                  = 10,
	Invalid                        = 11,
	EWinterQuestViewState_MAX      = 12
};


// Enum FortniteUI.EHeistExitCraftIconState
enum class EHeistExitCraftIconState : uint8_t
{
	None                           = 0,
	Incoming                       = 1,
	Spawned                        = 2,
	Exited                         = 3,
	EHeistExitCraftIconState_MAX   = 4
};


// Enum FortniteUI.EHeistBlingIconState
enum class EHeistBlingIconState : uint8_t
{
	None                           = 0,
	SupplyDrop                     = 1,
	PickupItem                     = 2,
	CarriedEnemy                   = 3,
	CarriedAlly                    = 4,
	EHeistBlingIconState_MAX       = 5
};


// Enum FortniteUI.EHeistExitCraftUIState
enum class EHeistExitCraftUIState : uint8_t
{
	None                           = 0,
	OnTheWay                       = 1,
	Incoming                       = 2,
	Arrived                        = 3,
	EHeistExitCraftUIState_MAX     = 4
};


// Enum FortniteUI.EHUDLayoutToolPopupType
enum class EHUDLayoutToolPopupType : uint8_t
{
	Warning                        = 0,
	Generic                        = 1,
	EHUDLayoutToolPopupType_MAX    = 2
};


// Enum FortniteUI.EHUDLayoutToolTextInputPopupType
enum class EHUDLayoutToolTextInputPopupType : uint8_t
{
	Rename                         = 0,
	ImportLayoutID                 = 1,
	EHUDLayoutToolTextInputPopupType_MAX = 2
};


// Enum FortniteUI.EHUDLayoutToolToasterType
enum class EHUDLayoutToolToasterType : uint8_t
{
	Success                        = 0,
	Failure                        = 1,
	LocalFailure                   = 2,
	CloudFailure                   = 3,
	EHUDLayoutToolToasterType_MAX  = 4
};


// Enum FortniteUI.ELiveStreamStandaloneBlocked
enum class ELiveStreamStandaloneBlocked : uint8_t
{
	StreamInWorldActive            = 0,
	ELiveStreamStandaloneBlocked_MAX = 1
};


// Enum FortniteUI.EMatchmakingInputSource
enum class EMatchmakingInputSource : uint8_t
{
	Local                          = 0,
	Remote                         = 1,
	Pool                           = 2,
	EMatchmakingInputSource_MAX    = 3
};


// Enum FortniteUI.ESpectatorLeaderboardEntryType
enum class ESpectatorLeaderboardEntryType : uint8_t
{
	ScoreWithEndScore              = 0,
	NoEndScore                     = 1,
	Time                           = 2,
	Invalid                        = 3,
	ESpectatorLeaderboardEntryType_MAX = 4
};


// Enum FortniteUI.EMinigameCaptureObjectiveIconState
enum class EMinigameCaptureObjectiveIconState : uint8_t
{
	NotCaptured                    = 0,
	Captured                       = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2
};


// Enum FortniteUI.EFortPlayerFeedbackFlags
enum class EFortPlayerFeedbackFlags : uint8_t
{
	SubscreenFlow_ForceDisplayFreeText = 0,
	SubscreenFlow_IncludeScreenshotSubscreen = 1,
	DoNotDisplay_SaveTheWorld      = 2,
	DoNotDisplay_Athena            = 3,
	DoNotDisplay_Creative          = 4,
	Submit_TryDisplayBlockUser     = 5,
	Submit_TryDisplayCommunityRulesURL = 6,
	EFortPlayerFeedbackFlags_MAX   = 7
};


// Enum FortniteUI.EPlayerFeedback_EpicQAState
enum class EPlayerFeedback_EpicQAState : uint8_t
{
	SignInPage                     = 0,
	SigningInFailed                = 1,
	SigningIn                      = 2,
	SelectBugComponent             = 3,
	EPlayerFeedback_MAX            = 4
};


// Enum FortniteUI.EPlayerFeedbackSubmitState
enum class EPlayerFeedbackSubmitState : uint8_t
{
	Start                          = 0,
	Submitting                     = 1,
	SubmitFailed                   = 2,
	SubmitSucceeded                = 3,
	EPlayerFeedbackSubmitState_MAX = 4
};


// Enum FortniteUI.EFortPrioritizedWidgetInterruptedBehavior
enum class EFortPrioritizedWidgetInterruptedBehavior : uint8_t
{
	RemainInQueue                  = 0,
	Drop                           = 1,
	EFortPrioritizedWidgetInterruptedBehavior_MAX = 2
};


// Enum FortniteUI.EFortPrioritizedWidgetContestedBehavior
enum class EFortPrioritizedWidgetContestedBehavior : uint8_t
{
	QueueBehind                    = 0,
	StompOther                     = 1,
	EFortPrioritizedWidgetContestedBehavior_MAX = 2
};


// Enum FortniteUI.EFortPrioritizedWidgetPriority
enum class EFortPrioritizedWidgetPriority : uint8_t
{
	Priority                       = 0,
	Priority01                     = 1,
	Priority02                     = 2,
	Priority03                     = 3,
	Priority04                     = 4,
	Priority05                     = 5,
	NumberOfPrios                  = 6
};


// Enum FortniteUI.ECooldownTrackingType
enum class ECooldownTrackingType : uint8_t
{
	Cue                            = 0,
	AbilityCooldownTags            = 1,
	COUNT                          = 2,
	ECooldownTrackingType_MAX      = 3
};


// Enum FortniteUI.ESpatialCustomizationRoomState
enum class ESpatialCustomizationRoomState : uint8_t
{
	None                           = 0,
	CategorySelection              = 1,
	CustomizationSelection         = 2,
	ESpatialCustomizationRoomState_MAX = 3
};


// Enum FortniteUI.ESpatialCustomizationCategoryState
enum class ESpatialCustomizationCategoryState : uint8_t
{
	LockedByBattlePass             = 0,
	LockedByChallenge              = 1,
	LockedByChallengeCompletion    = 2,
	UnlockAvailable                = 3,
	UnlockUsed                     = 4,
	Max_NONE                       = 5,
	ESpatialCustomizationCategoryState_MAX = 6
};


// Enum FortniteUI.ESpatialStyleCharacterUnlockPrerequisite
enum class ESpatialStyleCharacterUnlockPrerequisite : uint8_t
{
	BattlepassPurchase             = 0,
	BattlepassLevel                = 1,
	ESpatialStyleCharacterUnlockPrerequisite_MAX = 2
};


// Enum FortniteUI.ETDMScoreProgressTypes
enum class ETDMScoreProgressTypes : uint8_t
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	ETDMScoreProgressTypes_MAX     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteUI.FortHUDState
// 0x0004
struct FFortHUDState
{
	unsigned char                                      bInBuildMode : 1;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInCombatMode : 1;                                        // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInEditMode : 1;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInCreativeMode : 1;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInBattleLabMode : 1;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsParachuteOpen : 1;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsFreeFalling : 1;                                       // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInLockedBus : 1;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInUnlockedBus : 1;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnTargeting : 1;                                         // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnUsingScopeTargeting : 1;                               // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnCanTarget : 1;                                         // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnCanUseScopeTargeting : 1;                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnCanUseSecondaryAbility : 1;                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCanOpenChute : 1;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCrouching : 1;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDBNO : 1;                                                // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsControllingRCPawn : 1;                                 // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsInVehicle : 1;                                         // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsDrivingVehicle : 1;                                    // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCanSwapSeats : 1;                                        // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsCarryingDBNO : 1;                                      // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsCarryingHeldObject : 1;                                // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsZiplining : 1;                                         // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsCreativeFlying : 1;                                    // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortPrioritizedWidgetData
// 0x0002
struct FFortPrioritizedWidgetData
{
	EFortPrioritizedWidgetPriority                     Priority;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortPrioritizedWidgetContestedBehavior            WhenContesting;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PrimaryContentSetup
// 0x0001
struct FPrimaryContentSetup
{
	bool                                               ShowBottomBar;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.MutatorAddedWidgets
// 0x0010
struct FMutatorAddedWidgets
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.TimerDisplayData
// 0x0038
struct FTimerDisplayData
{
	struct FLinearColor                                BrushColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       TimeRemainingDisplayText;                                 // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                TextColor;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.DetailClassEntry
// 0x0010
struct FDetailClassEntry
{
	struct FGameplayTag                                IdentifierTag;                                            // 0x0000(0x0008) (Edit)
	class UAthenaChallengeSetBaseDetails*              DetailsWidgetClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
// 0x000C
struct FAthenaChallengeListVisualOptions
{
	bool                                               bHideHeaders;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCompletionRewards;                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideQuestRewards;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCompactActionInfo;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLockedQuests;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCompletedQuests;                                     // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyCurentBundleLevelChallenges;                     // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSortCompletedToEnd;                                      // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreviewBundleLevel;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// 0x00A0
struct FFortTabButtonLabelInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0018(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// 0x0028 (0x00C8 - 0x00A0)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAllowEmptySlotItem;                                      // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FText                                       EmptyFilterDisplay;                                       // 0x00B0(0x0018) (Edit)
};

// ScriptStruct FortniteUI.AthenaCustomizationParams
// 0x0048
struct FAthenaCustomizationParams
{
	EAthenaCustomizationCategory                       Category;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CategorySubslotIndex;                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CategoryDisplayName;                                      // 0x0008(0x0018) (BlueprintVisible)
	struct FText                                       ItemDisplayTypeName;                                      // 0x0020(0x0018) (BlueprintVisible)
	bool                                               bAllowUnownedItems;                                       // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOneItemPerSlot;                                          // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	class UMaterialInstance*                           OverrideSlotImage;                                        // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaWinnerInfo
// 0x0020
struct FAthenaWinnerInfo
{
	struct FString                                     BigNameWinnerName;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             WinnerNames;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaItemShopSectionDisplayData
// 0x0068
struct FAthenaItemShopSectionDisplayData
{
	TArray<struct FName>                               StorefrontNames;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FText                                       SectionDisplayName;                                       // 0x0010(0x0018) (Edit)
	bool                                               bSortOffersByOwnership;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowIneligibleOffers;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowIneligibleOffersIfGiftable;                          // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSplitByPrice;                                            // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTimerIcon;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableToastNotification;                                 // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	struct FGameplayTag                                SectionTag;                                               // 0x0030(0x0008) (Edit)
	EFortBangType                                      BangType;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0039(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaItemShopSectionDisplayData.SectionWidgetClass
};

// ScriptStruct FortniteUI.AthenaCatabaConfiguration
// 0x0060
struct FAthenaCatabaConfiguration
{
	TArray<struct FName>                               LimitedTimeStorefrontNames;                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaCatabaConfiguration.SectionWidgetClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaCatabaConfiguration.CarouselWidgetClass
};

// ScriptStruct FortniteUI.AthenaItemShopReloadMtxInfo
// 0x00B8
struct FAthenaItemShopReloadMtxInfo
{
	TArray<struct FName>                               StaticStorefrontNames;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               DynamicStorefrontNames;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       IncrementalStorefrontName;                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DynamicOtherOptionOfferId;                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                MaxMtxQuantityToShowDynamicReloadMtx;                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x003C(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaItemShopReloadMtxInfo.StaticReloadMtxScreenClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaItemShopReloadMtxInfo.DynamicReloadMtxScreenClass
	unsigned char                                      UnknownData03[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaItemShopReloadMtxInfo.ReloadMtxIntroModalPopupClass
};

// ScriptStruct FortniteUI.ItemShopCurrencyDislayData
// 0x0010
struct FItemShopCurrencyDislayData
{
	TEnumAsByte<EStoreCurrencyType>                    CurrencyType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UFortStoreFrontOfferWidgetBase*              OfferTileClass;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlaylistFilter
// 0x0018
struct FPlaylistFilter
{
	class UDataTable*                                  PlaylistsData;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.LeaderboardFilter
// 0x0008 (0x0020 - 0x0018)
struct FLeaderboardFilter : public FPlaylistFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
// 0x0068
struct FAthenaPlaylistLeaderboardData
{
	struct FName                                       StatId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatDisplayName;                                          // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TabDisplayName;                                           // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RowDisplayName;                                           // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     BaseGameplayTag;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsGlobal;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.LevelEffectsData
// 0x0050
struct FLevelEffectsData
{
	int                                                MinPlayerLevel;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ContentColor;                                             // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // 0x0014(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0024(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.LevelEffectsData.FlameDisplayObject
};

// ScriptStruct FortniteUI.AthenaMapScreenContainerTabInfo
// 0x0068
struct FAthenaMapScreenContainerTabInfo
{
	struct FText                                       TabTitle;                                                 // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaMapScreenContainerTabInfo.TabIcon
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.AthenaMapScreenContainerTabInfo.TabClass
};

// ScriptStruct FortniteUI.FortPostGameScreenConfig
// 0x0004
struct FFortPostGameScreenConfig
{
	EPostGameClickCatcherMode                          ClickCatcherState;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPostGameHUDMode                                   PostGameHUDMode;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSohwCinematicBars;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPlacementOverlay;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortResurrectionUIData
// 0x0003
struct FFortResurrectionUIData
{
	bool                                               bResurrectionChipAvailable;                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bResurrectionChipPickedUp;                                // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bResurrectionChipRebooting;                               // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIStatStyle
// 0x00C0
struct FFortUIStatStyle
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HighestText;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Icon;                                                     // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	ECommonNumericType                                 NumericType;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              MinimalNotableValue;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.StatGroupData
// 0x00B0
struct FStatGroupData
{
	struct FText                                       GroupName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Group;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChartValue;                                               // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChartOrigionalValue;                                      // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
// 0x0088
struct FAthenaTeamDisplayInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaTeamDisplayInfo.Icon
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaTeamDisplayInfo.Ribbon
	struct FText                                       Name;                                                     // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                TextColor;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PedestalColor;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.MarkerLargeIndicatorType
// 0x0010
struct FMarkerLargeIndicatorType
{
	class UMaterialInterface*                          MarkerMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImageSize;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaTeamCountSlotData
// 0x0038
struct FAthenaTeamCountSlotData
{
	struct FText                                       TeamNameText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TeamCountText;                                            // 0x0018(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsMyTeam;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
// 0x00E8
struct FFortTopBarTabButtonInfo
{
	struct FName                                       TabId;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     CalendarEventName;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit)
	struct FSlateBrush                                 IconBrush;                                                // 0x0030(0x0088) (Edit)
	EFortUIFeature                                     LinkedUIFeature;                                          // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFortBangType                                      BangType;                                                 // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceImage;                                              // 0x00BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPrimaryPlayerOnly;                                       // 0x00BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractAnalytic;                                        // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x00BD(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortTopBarTabButtonInfo.OverrideTabWidget
};

// ScriptStruct FortniteUI.VideoConfig_Mono
// 0x0060
struct FVideoConfig_Mono
{
	class UFortStreamMediaSource*                      StreamingMediaSource;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       VideoString;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StreamingVideoID;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallbackVideoID;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ProdLinkID;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GamedevLinkID;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsAutoPlay;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAutoPlay;                                           // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStreamingEnabled;                                        // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FString                                     VideoUID;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShouldBeModal;                                           // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSkipBoundaries;                                       // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKairosPlayer;                                            // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldToSkip;                                              // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo
// 0x0068
struct FAthenaVariantFilterTabInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaVariantFilterTabInfo.Icon
	struct FText                                       Label;                                                    // 0x0028(0x0018) (Edit)
	struct FGameplayTagContainer                       IncludedVariantChannels;                                  // 0x0040(0x0020) (Edit)
	float                                              ZoomLevel;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableScrollBox;                                        // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo_Primary
// 0x0078
struct FAthenaVariantFilterTabInfo_Primary
{
	struct FAthenaVariantFilterTabInfo                 PrimaryTab;                                               // 0x0000(0x0068) (Edit)
	TArray<struct FAthenaVariantFilterTabInfo>         SubTabs;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaVariantFilterSet
// 0x0010
struct FAthenaVariantFilterSet
{
	TArray<struct FAthenaVariantFilterTabInfo_Primary> PrimaryTabs;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.BackgroundColors
// 0x0030
struct FBackgroundColors
{
	struct FLinearColor                                Color_1;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color_2;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GridColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.BarrierObjectState
// 0x0010
struct FBarrierObjectState
{
	class AAthenaBarrierObjective*                     ObjectiveActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamNum;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	EBarrierFoodTeam                                   FoodTeam;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	EBarrierObjectiveDamageState                       DamageState;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.BattleLabDisplayData
// 0x0068
struct FBattleLabDisplayData
{
	struct FText                                       TitleText;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DescriptionText;                                          // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	EBattleLabAlertType                                AlertType;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                RewardCount;                                              // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardCountTotal;                                         // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x003C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.BattleLabDisplayData.MainIconTexture
};

// ScriptStruct FortniteUI.TrackCategoryUI
// 0x0050
struct FTrackCategoryUI
{
	struct FTrackCategory                              TrackData;                                                // 0x0000(0x0048)
	int                                                LastSelectedIndex;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.BattlePassPageData
// 0x0008
struct FBattlePassPageData
{
	int                                                StartingIndex;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                EndingIndex;                                              // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteUI.BattlePassCharacterPreviewDisplayData
// 0x0010
struct FBattlePassCharacterPreviewDisplayData
{
	class UAthenaCharacterItemDefinition*              CharacterItemDef;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PreviewMaterial;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PreviewRewardData
// 0x0088
struct FPreviewRewardData
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct FortniteUI.PreviewUnlockRewardData
// 0x0030
struct FPreviewUnlockRewardData
{
	int                                                Currency;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumAdditionalRewards;                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalRewards;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumCharacters;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPreviewRewardData>                  Characters;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPreviewRewardData>                  AdditionalRewards;                                        // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.PreviewUnlockData
// 0x00B0
struct FPreviewUnlockData
{
	struct FPreviewUnlockRewardData                    InstantRewards;                                           // 0x0000(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FPreviewUnlockRewardData                    EarnedRewards;                                            // 0x0030(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ChapterNumberText;                                        // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       SeasonNumberText;                                         // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       SummaryText;                                              // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bPaysForSelf;                                             // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ContentPushState
// 0x0003
struct FContentPushState
{
	bool                                               bHideHeader;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaBossHealthData
// 0x0030
struct FAthenaBossHealthData
{
	bool                                               bVisible;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowShields;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Health;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealthMax;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Shields;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShieldsMax;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaNewsData
// 0x0070
struct FAthenaNewsData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Image;                                                    // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     _type;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       AdSpace;                                                  // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               SpotLight;                                                // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // 0x0069(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	ESubGameFilter                                     SubGameFilter;                                            // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct FortniteUI.AthenaNewsPlatformData
// 0x0090
struct FAthenaNewsPlatformData
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAthenaNewsData                             Message;                                                  // 0x0010(0x0070) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     _type;                                                    // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaNewsMessages
// 0x0030
struct FAthenaNewsMessages
{
	TArray<struct FAthenaNewsData>                     Messages;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAthenaNewsPlatformData>             platform_messages;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     _type;                                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaNewsSource
// 0x0050
struct FAthenaNewsSource
{
	struct FString                                     Header;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAthenaNewsMessages                         news;                                                     // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     _locale;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.ShowdownTournamentData
// 0x01F8
struct FShowdownTournamentData
{
	struct FString                                     Tournament_Display_Id;                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Title_Line_2;                                             // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Title_Line_3;                                             // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Schedule_Info;                                            // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Poster_Front_Image;                                       // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Poster_Back_Image;                                        // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Flavor_Description;                                       // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Details_Description;                                      // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Short_Format_Title;                                       // 0x00A8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Long_Format_Title;                                        // 0x00C0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Background_Title;                                         // 0x00D8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Pin_Score_Requirement;                                    // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FText                                       Pin_Earned_Text;                                          // 0x00F8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Base_Color;                                               // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Primary_Color;                                            // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Secondary_Color;                                          // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Highlight_Color;                                          // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Title_Color;                                              // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Shadow_Color;                                             // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Background_Left_Color;                                    // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Background_Right_Color;                                   // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Background_Text_Color;                                    // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Poster_Fade_Color;                                        // 0x01A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Playlist_Tile_Image;                                      // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Loading_Screen_Image;                                     // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Style_Info_Id;                                            // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Alert_Text;                                               // 0x01E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortTournamentAlertType                           AlertType;                                                // 0x01F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
// 0x0010
struct FShowdownTournamentJsonObject
{
	TArray<struct FShowdownTournamentData>             Tournaments;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.ShowdownTournamentSource
// 0x0030
struct FShowdownTournamentSource
{
	struct FShowdownTournamentJsonObject               Tournament_Info;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     _title;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     _locale;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.KoreanCafeData
// 0x0038
struct FKoreanCafeData
{
	struct FGameplayTag                                Korean_Cafe;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Korean_Cafe_Header;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Korean_Cafe_Description;                                  // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.KoreanCafeJsonObject
// 0x0010
struct FKoreanCafeJsonObject
{
	TArray<struct FKoreanCafeData>                     Cafes;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.KoreanCafeSource
// 0x0030
struct FKoreanCafeSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FKoreanCafeJsonObject                       Cafe_Info;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.SubgameDisplayData
// 0x0098
struct FSubgameDisplayData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       SpecialMessage;                                           // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       StandardMessageLine1;                                     // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       StandardMessageLine2;                                     // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Image;                                                    // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.SubgameScreenSource
// 0x01E8
struct FSubgameScreenSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSubgameDisplayData                         Creative;                                                 // 0x0020(0x0098) (BlueprintVisible, BlueprintReadOnly)
	struct FSubgameDisplayData                         SaveTheWorld;                                             // 0x00B8(0x0098) (BlueprintVisible, BlueprintReadOnly)
	struct FSubgameDisplayData                         BattleRoyale;                                             // 0x0150(0x0098) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.CreativeAdData
// 0x0068
struct FCreativeAdData
{
	struct FString                                     Header;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Sub_Header;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Creator_Name;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Island_Code;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortCreativeAdType                                Ad_Type;                                                  // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortCreativeAdColorPreset                         Ad_Color_Preset;                                          // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FString                                     Image;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.CreativeAdJsonObject
// 0x0010
struct FCreativeAdJsonObject
{
	TArray<struct FCreativeAdData>                     Ads;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.CreativeAdSource
// 0x0030
struct FCreativeAdSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCreativeAdJsonObject                       Ad_Info;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.CmsJsonMessages
// 0x02E8
struct FCmsJsonMessages
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     _locale;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAthenaNewsSource                           BattleRoyaleNews;                                         // 0x0020(0x0050) (BlueprintVisible, BlueprintReadOnly)
	struct FShowdownTournamentSource                   TournamentInformation;                                    // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FKoreanCafeSource                           KoreanCafe;                                               // 0x00A0(0x0030) (BlueprintVisible, BlueprintReadOnly)
	struct FSubgameScreenSource                        SubGameInfo;                                              // 0x00D0(0x01E8) (BlueprintVisible, BlueprintReadOnly)
	struct FCreativeAdSource                           CreativeAds;                                              // 0x02B8(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.AthenaNews
// 0x0028
struct FAthenaNews
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaNewsEntry
// 0x01F0
struct FAthenaNewsEntry
{
	EAthenaNewsEntryType                               EntryType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TabTitleOverride;                                         // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Title;                                                    // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Body;                                                     // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Image;                                                    // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TileImage;                                                // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ButtonTextOverride;                                       // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AdSpace;                                                  // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               SpotLight;                                                // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	ESubGameFilter                                     SubGameFilter;                                            // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x008A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FString                                     PlaylistId;                                               // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bHasCustomColor;                                          // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FColor                                      CustomDarkColor;                                          // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FColor                                      CustomLightColor;                                         // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	int64_t                                            SortingPriority;                                          // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExperimentPercent;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExperimentId;                                             // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferId;                                                  // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EItemShopNavigationAction                          OfferAction;                                              // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FString                                     OfferButtonText;                                          // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ChallengeCategoryTag;                                     // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     WebsiteURL;                                               // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     WebsiteButtonText;                                        // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortUIFeature                                     NavigateToTabValue;                                       // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FString                                     NavigateToTabButtonText;                                  // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     STWUpsellButtonText;                                      // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0140(0x0030) MISSED OFFSET
	struct FString                                     VideoButtonText;                                          // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VideoVideoString;                                         // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VideoStreamingVideoID;                                    // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VideoFallbackVideoID;                                     // 0x01A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VideoProdLinkID;                                          // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VideoGamedevLinkID;                                       // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               VideoAutoplay;                                            // 0x01D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VideoForceAutoplay;                                       // 0x01D1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VideoLoop;                                                // 0x01D2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VideoMute;                                                // 0x01D3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VideoFullscreen;                                          // 0x01D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VideoStreamingEnabled;                                    // 0x01D5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x01D6(0x0002) MISSED OFFSET
	struct FString                                     VideoUID;                                                 // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData09[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.DynamicBackground
// 0x0048
struct FDynamicBackground
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDynamicBackgroudKey                               Key;                                                      // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     BackgroundImage;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Stage;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.DynamicBackgrounds
// 0x0010
struct FDynamicBackgrounds
{
	TArray<struct FDynamicBackground>                  Backgrounds;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.DynamicBackgroundsSource
// 0x0040
struct FDynamicBackgroundsSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastModified;                                             // 0x0020(0x0010) (ZeroConstructor)
	struct FDynamicBackgrounds                         Backgrounds;                                              // 0x0030(0x0010)
};

// ScriptStruct FortniteUI.CobaltPlayerPortraitIndexInfo
// 0x0010
struct FCobaltPlayerPortraitIndexInfo
{
	TArray<int>                                        PortraitIndexArray;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.SurvivalObjectiveText
// 0x0010
struct FSurvivalObjectiveText
{
	TArray<struct FString>                             SafezoneStateText;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FortniteUI.SurvivalObjectiveIconData
// 0x0010
struct FSurvivalObjectiveIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurvivalObjectiveIconState                        IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESurvivalObjectiveIconState                        PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FName                                       SpecialActorID;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteUI.DiscoCaptureUIData
// 0x0040
struct FDiscoCaptureUIData
{
	EDiscoCaptureUIState                               CurrDisplayState;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawnAthena*                       CurrPawn;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CurrMID;                                                  // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FillAmount;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.DiscoCaptureIconData
// 0x0010
struct FDiscoCaptureIconData
{
	EDiscoCaptureIconState                             CurrIconState;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDiscoCaptureProgressState                         CurrProgressState;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CurrCapturePercent;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.DiscoTeamScoreData
// 0x0020
struct FDiscoTeamScoreData
{
	struct FText                                       CurrScoreText;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrScorePercent;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrScore;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteUI.QuestRecapData
// 0x0014
struct FQuestRecapData
{
	TWeakObjectPtr<class UFortQuestItem>               QuestItem;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LastKnownMcpValue;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AchivedCount;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RequiredCount;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortTournamentDisplayInfo
// 0x01A0 (0x01A8 - 0x0008)
struct FFortTournamentDisplayInfo : public FTableRowBase
{
	struct FText                                       TitleLine1;                                               // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TitleLine2;                                               // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleInfo;                                             // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       FlavorDescription;                                        // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DetailsDescription;                                       // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortFormatTitle;                                         // 0x0080(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LongFormatTitle;                                          // 0x0098(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       BackgroundTitle;                                          // 0x00B0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                PinScoreRequirement;                                      // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FText                                       PinEarnedText;                                            // 0x00D0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                BaseColor;                                                // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TitleColor;                                               // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundLeftColor;                                      // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundRightColor;                                     // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundTextColor;                                      // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PosterFadeColor;                                          // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       AlertText;                                                // 0x0188(0x0018) (BlueprintVisible, BlueprintReadOnly)
	EFortTournamentAlertType                           AlertType;                                                // 0x01A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ShowdownTournamentEntry
// 0x01B0
struct FShowdownTournamentEntry
{
	struct FString                                     TournamentDisplayId;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleLine1;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleLine2;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ScheduleInfo;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterFrontImage;                                         // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterBackImage;                                          // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FlavorDescription;                                        // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailsDescription;                                       // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShortFormatTitle;                                         // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LongFormatTitle;                                          // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundTitle;                                          // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PinScoreRequirement;                                      // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     PinEarnedText;                                            // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BaseColor;                                                // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PrimaryColor;                                             // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SecondaryColor;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HighlightColor;                                           // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleColor;                                               // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShadowColor;                                              // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundLeftColor;                                      // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundRightColor;                                     // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundTextColor;                                      // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterFadeColor;                                          // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlaylistTileImage;                                        // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadingScreenImage;                                       // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StyleInfoId;                                              // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AlertText;                                                // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortTournamentAlertType                           AlertType;                                                // 0x01A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
// 0x0018
struct FFortShowdownEventBestResultsSummary
{
	int                                                TotalScore;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MatchesPlayed;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumVictoryRoyales;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlacementPoints;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EliminationPoints;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EntryFeePoints;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaPlaylistEntry
// 0x0078
struct FAthenaPlaylistEntry
{
	struct FString                                     PlaylistName;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplaySubName;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Violator;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Image;                                                    // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             ExtraImages;                                              // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CropOffset;                                               // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortMatchmakingTileStyle                          SpecialBorderId;                                          // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRevealAnimation;                                     // 0x0075(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCMSDataHidden;                                         // 0x0076(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0077(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortAthenaTutorialHighlightInfo
// 0x0050
struct FFortAthenaTutorialHighlightInfo
{
	struct FGameplayTag                                WidgetToHighlight;                                        // 0x0000(0x0008) (Edit)
	struct FGameplayTag                                ItemHighlightTag;                                         // 0x0008(0x0008) (Edit)
	struct FMargin                                     HighlightMargin;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortAthenaTutorialHighlightInfo.HighlightWidgetOverride
	bool                                               bIsLegacyHighlight;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortAthenaTutorialScreenInfo
// 0x00D0
struct FFortAthenaTutorialScreenInfo
{
	EFortAthenaTutorialSubstep                         Substep;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   TextPromptPosition;                                       // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextPromptPosition_AthenaHUD;                             // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    TextPromptAnchors;                                        // 0x0014(0x0010) (Edit)
	struct FAnchors                                    TextPromptAnchors_AthenaHUD;                              // 0x0024(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       TextPromptText_Touch;                                     // 0x0038(0x0018) (Edit)
	struct FText                                       TextPromptText_Gamepad;                                   // 0x0050(0x0018) (Edit)
	struct FText                                       TextPromptText_TouchLegacy;                               // 0x0068(0x0018) (Edit)
	struct FDataTableRowHandle                         ActionWidget_DataTableRow;                                // 0x0080(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               KeybindWidget_NameArray;                                  // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               KeybindWidget_GamepadNameArray;                           // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ForceSingleInputKeybind;                                  // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FFortAthenaTutorialHighlightInfo>    HighlightInfo;                                            // 0x00B8(0x0010) (Edit, ZeroConstructor)
	bool                                               DisplayNextButton;                                        // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayTextPromptTarget;                                  // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFortAthenaTutorialScreenExtraWidget               ExtraWidget;                                              // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortAthenaTutorialStepInfo
// 0x0018
struct FFortAthenaTutorialStepInfo
{
	EFortAthenaTutorialStep                            TutorialStep;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortAthenaTutorialScreenInfo>       StepScreenInfo;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAthenaTutorialStandaloneStepInfo
// 0x00D8
struct FFortAthenaTutorialStandaloneStepInfo
{
	EFortAthenaTutorial_StandaloneStep                 StandaloneStep;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFortAthenaTutorialScreenInfo               StepScreenInfo;                                           // 0x0008(0x00D0) (Edit)
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// 0x0088
struct FFortDisplayAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0038) (BlueprintVisible)
	struct FText                                       Label;                                                    // 0x0038(0x0018) (BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0050(0x0018) (BlueprintVisible)
	struct FText                                       HoverText;                                                // 0x0068(0x0018) (BlueprintVisible)
	float                                              NumericValue;                                             // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x0084(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x0085(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortClampState                                    ClampState;                                               // 0x0086(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortComparisonType                                ComparisonType;                                           // 0x0087(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortStateStyle
// 0x0350
struct FFortStateStyle
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0000(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                PrimaryColor;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
// 0x0020
struct FFortBattlePassVideoAnnotation
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EntryAngle;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryMagnitude;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         RewardItemDefinition;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// 0x0070
struct FFortSwipeDetector
{
	struct FVector2D                                   SwipeThreshold;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteUI.BundledItemInfo
// 0x0018
struct FBundledItemInfo
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortConfirmationButtonInfo
// 0x0010
struct FFortConfirmationButtonInfo
{
	class UCommonButton*                               Button;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.CachedIslandsGroup
// 0x0028
struct FCachedIslandsGroup
{
	TArray<class UFortCreativeIslandLink*>             IslandLinks;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemListCategoryArray
// 0x0028
struct FItemListCategoryArray
{
	TArray<struct FFortItemEntry>                      ItemList;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       CategoryTitle;                                            // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemListOptionBucket
// 0x0020
struct FFortItemListOptionBucket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                ItemIndex;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UFortItemListOptionProxy*>            ItemOptionData;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FortniteUI.RarityArray
// 0x0010
struct FRarityArray
{
	TArray<class UFortItemDefinition*>                 Items;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortDailyRewardsItemData
// 0x0010
struct FFortDailyRewardsItemData
{
	class UFortItem*                                   RewardItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardDay;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentReward;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsClaimed;                                                // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
// 0x0098
struct FFortDailyRewardsScheduleData
{
	struct FText                                       ScheduleTitle;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleDescription;                                      // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleItemDescription;                                  // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleEpicItemDescription;                              // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                WeekOffset;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardsGiven;                                             // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardsAllowed;                                           // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FFortDailyRewardsItemData>           CalendarItems;                                            // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFortDailyRewardsItemData>           HighValueItems;                                           // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ClaimedToday;                                             // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// 0x0018
struct FFortDailyRewardsData
{
	int                                                CurrentLoginDays;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanClaim;                                                // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FFortDailyRewardsScheduleData>       Schedules;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPickerSubCategoryIdentifier
// 0x0020
struct FFortPickerSubCategoryIdentifier
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit)
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit)
};

// ScriptStruct FortniteUI.FortLeaderboardRequestIds
// 0x0020
struct FFortLeaderboardRequestIds
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteUI.ExpeditionTabInfo
// 0x00A8
struct FExpeditionTabInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0008(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0018
struct FFortFrontEndFeatureStruct
{
	EFortFrontEndFeatureState                          CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureState                          ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureStateReason                    ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0003(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortFrontEndFeatureStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
// 0x0028
struct FUnlockableVariantPreviewInfo
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SetNumber;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SetCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       UnlockCondition;                                          // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x00B0
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UFortItem*                                   Item;                                                     // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMissionAlertReward;                                    // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0170
struct FFortMissionDetails
{
	EFortTheaterMapTileType                            TileType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionDescription;                                       // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsGroupContent;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UFortMissionGenerator*                       MissionDefinition;                                        // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ZoneName;                                                 // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ZoneDescription;                                          // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RegionThemeName;                                          // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortMissionDetails.RegionThemeIcon
	struct FText                                       DifficultyName;                                           // 0x00D0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTimespan                                   AvailableTime;                                            // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ERatingsEnforcementType                            RatingsEnforcement;                                       // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                RequiredBaseRating;                                       // 0x0104(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RecommendedBaseRating;                                    // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxBaseRating;                                            // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ContentDifficultyLevel;                                   // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnboarding;                                            // 0x0114(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	int                                                LootLevel;                                                // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideConningText;                                     // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FText                                       ConningOverrideText;                                      // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UFortCloudSaveItemDefinition*                AssociatedCloudSaveItemDefinition;                        // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FText>                               Objectives;                                               // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.NotificationWidgetClass
// 0x0020
struct FNotificationWidgetClass
{
	class UFortNotificationEntry*                      NotificationWidgetClass;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InitialPoolSize;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanIncreasePoolSizeAtRunTime;                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<class UFortNotificationEntry*>              WidgetPool;                                               // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct FortniteUI.FortActionBeingUnbound
// 0x000C
struct FFortActionBeingUnbound
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InputIndex;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.GiftingErrorText
// 0x0038
struct FGiftingErrorText
{
	EOfferPurchaseError                                GiftingError;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ErrorTitle;                                               // 0x0008(0x0018) (Edit)
	struct FText                                       ErrorDesc;                                                // 0x0020(0x0018) (Edit)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0018
struct FFortUIFeatureStruct
{
	EFortUIFeatureState                                CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0003(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortUIFeatureStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0098
struct FFortBackendVersion
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     App;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ModuleName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Branch;                                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BuildDate;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ServerDate;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Build;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Changelist;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OverridePropertiesVersion;                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortLastMissionInfo
// 0x0048
struct FFortLastMissionInfo
{
	struct FText                                       TheaterName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortInGamePerkDisplayData
// 0x0010
struct FFortInGamePerkDisplayData
{
	EFortHeroPerkDisplayType                           PerkDisplayType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// 0x00C0
struct FFortAttributeModifierDisplayData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayModOp>                        ModifierType;                                             // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0040(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0080(0x0040) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0038
struct FFortFocusedBuildingInfo
{
	bool                                               bIsInteractable;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBePlayerEdited;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     IndicatorRelativeLocation;                                // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortBuildingHealthDisplayRule                     HealthDisplayRule;                                        // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAnyTrapAttached;                                       // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTrapAttachedFacingPlayer;                              // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreviewTrapAttached;                                   // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              AttachedTrapMaxDurability;                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortBuildingInteraction                           InteractionType;                                          // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                InteractionCost;                                          // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       QuickEditClass;                                           // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayerBuilt;                                           // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemDelta
// 0x0010
struct FFortItemDelta
{
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BaseAmount;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaAmount;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// 0x0390
struct FFortBasicMissionInfo
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FFortMultiSizeBrush                         MissionIcons;                                             // 0x0018(0x0330) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TheaterName;                                              // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DifficultyName;                                           // 0x0360(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UMediaSource*                                EndOfMissionMediaSource;                                  // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                EndOfMissionMediaSourceStreamed;                          // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEndOfMissionVideo;                                   // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroupContent;                                          // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.ContextPosition
// 0x0010
struct FContextPosition
{
	EContextPositionPlatform                           Platform;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   position;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0018
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFortInventoryFilter                               FilterType;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInStorageVault;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeVaultOverflow;                                    // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIPerk
// 0x0098
struct FFortUIPerk
{
	struct FFortSpecializationSlot                     SpecializationSlot;                                       // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly)
	class UFortHero*                                   Hero;                                                     // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortItemTier                                      Tier;                                                     // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortSupportBonusType                              SupportBonusType;                                         // 0x0091(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTierPerk;                                              // 0x0092(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0093(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolutionBranch;                                       // 0x0095(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// 0x0050
struct FFortItemSorterDefinition
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// 0x0060
struct FFortItemFilterDefinition
{
	TArray<EFortItemType>                              ItemTypeFilters;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
	bool                                               bRequiresItemDetails;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemListViewConfig
// 0x00C0
struct FFortItemListViewConfig
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00A8 - 0x00A0)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortReceivedItemLootInfo
// 0x00C8
struct FFortReceivedItemLootInfo
{
	struct FFortItemHeaderInformation                  HeaderInformation;                                        // 0x0000(0x0098) (BlueprintVisible, BlueprintReadOnly)
	class UFortItem*                                   GeneratedItemInstance;                                    // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         ItemDef;                                                  // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     TemplateId;                                               // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Quantity;                                                 // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00BC(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteUI.SceneTransitionOptions
// 0x0001
struct FSceneTransitionOptions
{
	ESceneTransitionType                               TRANSITION;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// 0x0008
struct FFortItemEntryPreviewData
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortItemInspectionMode                            InspectMode;                                              // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.MeasuredText
// 0x0028
struct FMeasuredText
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.OfferGroup
// 0x0018
struct FOfferGroup
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxNumberToShow;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// 0x003C
struct FFortMaterialProgressBarSectionStyle
{
	bool                                               bGradientBar;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BarParamName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BarColorOneParamName;                                     // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BarColorTwoParamName;                                     // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BarColorOne;                                              // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BarColorTwo;                                              // 0x002C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// 0x0040
struct FFortMaterialProgressBarSectionInfo
{
	struct FFortMaterialProgressBarSectionStyle        SectionStyle;                                             // 0x0000(0x003C) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Percent;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.IconPicker
// 0x0028
struct FIconPicker
{
	struct FGameplayTagContainer                       Tags;                                                     // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	class UPaperSprite*                                Sprite;                                                   // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.TagVisibility
// 0x0028
struct FTagVisibility
{
	struct FGameplayTagContainer                       Tags;                                                     // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	ETagComparisonType                                 ComparisonType;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.ActionBindingIconPicker
// 0x0018
struct FActionBindingIconPicker
{
	TArray<struct FName>                               ActionNames;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UPaperSprite*                                Sprite;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.ActionBindingVisibility
// 0x0018
struct FActionBindingVisibility
{
	TArray<struct FName>                               ActionNames;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EActionBindingComparisonType                       ComparisonType;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMobileHUDContextLayout
// 0x0020
struct FFortMobileHUDContextLayout
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UFortMobileHUDContextModel*                  HUDContextModel;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMobileHUDLayoutProfile
// 0x0030
struct FFortMobileHUDLayoutProfile
{
	struct FText                                       ProfileName;                                              // 0x0000(0x0018) (Transient)
	TArray<struct FFortMobileHUDContextLayout>         ContextLayouts;                                           // 0x0018(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMobileContextFilter
// 0x0040
struct FFortMobileContextFilter
{
	struct FGameplayTagContainer                       ShownInContexts;                                          // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       HiddenInContexts;                                         // 0x0020(0x0020) (Edit)
};

// ScriptStruct FortniteUI.FortMobileHUDContextModelExtension
// 0x0028
struct FFortMobileHUDContextModelExtension
{
	struct FGameplayTag                                ContextLayoutTag;                                         // 0x0000(0x0008) (Edit)
	struct FGameplayTagContainer                       UseableHUDWidgetTags;                                     // 0x0008(0x0020) (Edit)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_PopupContent
// 0x0068
struct FHUDLayoutToolV2_PopupContent
{
	EHUDLayoutToolPopupType                            PopupType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x0008(0x0018) (Edit)
	struct FText                                       DescriptionText;                                          // 0x0020(0x0018) (Edit)
	struct FText                                       ButtonConfirmText;                                        // 0x0038(0x0018) (Edit)
	struct FText                                       ButtonCancelText;                                         // 0x0050(0x0018) (Edit)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ToastNotificationContent
// 0x0038
struct FHUDLayoutToolV2_ToastNotificationContent
{
	EHUDLayoutToolToasterType                          ToasterType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x0008(0x0018) (Edit)
	struct FText                                       DescriptionText;                                          // 0x0020(0x0018) (Edit)
};

// ScriptStruct FortniteUI.HUDWidgetBehaviorRegistryEntry
// 0x0018
struct FHUDWidgetBehaviorRegistryEntry
{
	struct FGameplayTag                                HUDWidgetBehaviorTag;                                     // 0x0000(0x0008) (Edit)
	struct FGameplayTag                                HUDWidgetOverrideTag;                                     // 0x0008(0x0008) (Edit)
	class UHUDWidgetBehavior*                          HUDWidgetBehaviorClass;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.HUDWidgetRegistryEntry
// 0x0040
struct FHUDWidgetRegistryEntry
{
	struct FGameplayTag                                HUDWidgetTag;                                             // 0x0000(0x0008) (Edit)
	bool                                               bIsMandatory;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MandatoryOnScreenPercent;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumAmountOfInstances;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UFortMobileHUDElement*                       HUDWidgetClass;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFortMobileHUDElementProxy*                  HUDWidgetProxyClass;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHUDLayoutToolV2_WidgetPreview*              HUDWidgetPreviewClass;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels;                                     // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// 0x001C
struct FFortModalContainerSizeEntry
{
	float                                              AbsoluteWidth;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TopPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MiddlePercent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BottomPercent;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalPadding;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalPadding;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ContentPadding;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// 0x0030
struct FFortMtxDetailsAttribute
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortMtxGradient
// 0x0020
struct FFortMtxGradient
{
	struct FLinearColor                                Start;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Stop;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// 0x0018
struct FFortUIPerkTier
{
	class UFortHeroSpecialization*                     HeroSpecialization;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortHero*                                   CurrentHero;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortItemTier                                      Tier;                                                     // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPhoenixLevelProgressionRewards
// 0x0030
struct FFortPhoenixLevelProgressionRewards
{
	int                                                NextRewardLevel;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemQuantityPair                       NextReward;                                               // 0x0004(0x0014) (BlueprintVisible, BlueprintReadOnly)
	int                                                NextMajorRewardLevel;                                     // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemQuantityPair                       NextMajorReward;                                          // 0x001C(0x0014) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.RadialOptionData
// 0x00C8
struct FRadialOptionData
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Brush;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.RadialOptionData.SoftIcon
};

// ScriptStruct FortniteUI.ItemDefOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FItemDefOptionData : public FRadialOptionData
{
	class UObject*                                     ItemDef;                                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.SquadQuickChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadQuickChatOptionData : public FRadialOptionData
{
	struct FAthenaQuickChatActiveEntry                 ChatEntry;                                                // 0x00C8(0x0014) (Edit, DisableEditOnInstance)
	bool                                               bEnabled;                                                 // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.TrackedTrapTimeAndCount
// 0x0008
struct FTrackedTrapTimeAndCount
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
// 0x0020
struct FFortPickerTemporaryWheelItem
{
	struct FText                                       LabelOverride;                                            // 0x0000(0x0018)
	class UFortItemDefinition*                         Item;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheel
// 0x0030
struct FFortPickerTemporaryWheel
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<struct FFortPickerTemporaryWheelItem>       Items;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FBuildingCategoryOptionData : public FRadialOptionData
{
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FBuildingOptionData : public FRadialOptionData
{
	struct FString                                     ClassSuffix;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               ClassMirrored;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FItemCategoryOptionData : public FRadialOptionData
{
	struct FString                                     TemplatePrefix;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EBuildingAttachmentType>               BuildingAttachmentType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FMapNoteOptionData : public FRadialOptionData
{
	struct FText                                       MapNoteText;                                              // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.EmoteOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FEmoteOptionData : public FRadialOptionData
{
	struct FName                                       EmoteCommand;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyAnswerWidgetDataTableEntry
// 0x0058
struct FFortPlayerSurveyAnswerWidgetDataTableEntry
{
	TMap<EFortPlayerSurveyQuestionPresentationStyle, class UFortPlayerSurveyAnswerWidgetBase*> WidgetClassMap;                                           // 0x0000(0x0050) (Edit)
	class UFortPlayerSurveyAnswerWidgetBase*           FallbackWidgetClass;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
// 0x0018
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
{
	class UCommonButton*                               ButtonWidget;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
// 0x0008
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
{
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType FocusType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyConditionsContextLegacy
// 0x0028
struct FFortPlayerSurveyConditionsContextLegacy
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UPlayer*                                     Player;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	class UFortPlayerSurveyContext*                    Context;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlatformSupportDesc
// 0x0020
struct FPlatformSupportDesc
{
	struct FText                                       DisableDesc;                                              // 0x0000(0x0018) (Edit)
	EFortLoginAccountType                              AccountType;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSettingsFilterState
// 0x03B8
struct FFortSettingsFilterState
{
	bool                                               bIncludeDisabled;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeHidden;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeResetable;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeNestedPages;                                      // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x394];                                     // 0x0004(0x0394) MISSED OFFSET
	TArray<class UFortSetting*>                        SettingRootList;                                          // 0x0398(0x0010) (ZeroConstructor)
	TArray<class UFortSetting*>                        SettingWhiteList;                                         // 0x03A8(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortSettingClassExtensions
// 0x0010
struct FFortSettingClassExtensions
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortSettingClassExtensions.Extensions
};

// ScriptStruct FortniteUI.FortSettingNameExtensions
// 0x0018
struct FFortSettingNameExtensions
{
	bool                                               bIncludeClassDefaultExtensions;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0001(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortSettingNameExtensions.Extensions
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
// 0x0070
struct FFortSimpleWidgetAnimation
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                Translation;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                Scale;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Alpha;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetOnFinish;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAnimateTranslation;                                // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAnimateScale;                                      // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAnimateAlpha;                                      // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0024(0x0014) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
// 0x0038
struct FFortSimpleWidgetAnimations
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FFortSimpleWidgetAnimation>          Targets;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortSimpleWidgetAnimations.OnAnimationsFinished
	unsigned char                                      UnknownData02[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.PlatformPrefixIcon
// 0x0018
struct FPlatformPrefixIcon
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  PrefixIcon;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlatformPrefixIconList
// 0x0010
struct FPlatformPrefixIconList
{
	TArray<struct FPlatformPrefixIcon>                 PlatformPrefixIcons;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.FortUserListHeaderInfo
// 0x0018
struct FFortUserListHeaderInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.PotentialSpectatorTarget
// 0x0010
struct FPotentialSpectatorTarget
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AFortPlayerStateAthena>       PlayerState;                                              // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentViewTarget;                                       // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
// 0x0030
struct FFortLandingPageDefenderSummaryInfo
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
// 0x0048
struct FFortAttributeModifierAccumulation
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0038) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.SquadSlotSortTypes
// 0x0010
struct FSquadSlotSortTypes
{
	TArray<ESquadSlotSortType>                         SortTypes;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.CardPackOffer
// 0x0078
struct FCardPackOffer
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                MtxPrice;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FText                                       SaleText;                                                 // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Price;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RegularPrice;                                             // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortAccountItemDefinition*                  CurrencyType;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QuantityRemaining;                                        // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTimedOffer;                                              // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0065(0x0013) MISSED OFFSET
};

// ScriptStruct FortniteUI.Card
// 0x0018
struct FCard
{
	int                                                QuantityReceived;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItem*                                   Item;                                                     // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPauseType                                         PauseType;                                                // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0010
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DisplayLevel;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
// 0x00B0
struct FFortSurvivorSquadSlottingFeedbackData
{
	bool                                               HadLeaderMatch;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasLeaderMatch;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<struct FGameplayTag, int>                     PreviousSetBonusCounts;                                   // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly)
	TMap<struct FGameplayTag, int>                     CurrentSetBonusCounts;                                    // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly)
	int                                                PreviousPersonalityMatchCount;                            // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPersonalityMatchCount;                             // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
// 0x00A0
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          FortAttribute;                                            // 0x0008(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              FortAttributeValue;                                       // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FGameplayAttribute                          FortTeamAttribute;                                        // 0x0048(0x0038) (BlueprintVisible, BlueprintReadOnly)
	float                                              TeamFortAttributeValue;                                   // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SquadPowerValue;                                          // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       FortAttributeName;                                        // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// 0x0340
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
	int                                                NumPersonalityMatches;                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalNonLeaderSquadMembers;                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HavePersonalityIcons;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         PersonalityIcons;                                         // 0x0010(0x0330) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
// 0x0370
struct FFortUISurvivorSquadStatMatch
{
	struct FFortMultiSizeBrush                         Icons;                                                    // 0x0000(0x0330) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MagnitudeText;                                            // 0x0330(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       AttributeDisplayName;                                     // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                NumMembersMeetingCriteria;                                // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumMembersRequired;                                       // 0x0364(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortUISurvivorSquadMatchType                      MatchType;                                                // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     PreviewEffect;                                            // 0x0369(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// 0x00C8
struct FFortTabListRegistrationInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedInZone;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0010(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UCommonButton*                               TabButtonType;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCommonUserWidget*                           TabContentType;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct FortniteUI.CachedComponentMaterials
// 0x0018
struct FCachedComponentMaterials
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.ButtonInteractionPair
// 0x0010
struct FButtonInteractionPair
{
	class AActor*                                      TrackedInteraction;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFortTouchInteractionButton*                 TrackedButton;                                            // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUITutorialData
// 0x0050 (0x0058 - 0x0008)
struct FFortUITutorialData : public FTableRowBase
{
	struct FName                                       TutorialWidgetName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     DevComment;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FText>                               Descriptions;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortUITutorialData.PreviewImages
};

// ScriptStruct FortniteUI.StateWidgetEntry
// 0x0030
struct FStateWidgetEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.StateWidgetEntry.Class
	EFortNamedBundle                                   Bundle;                                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// 0x00F8
struct FFortItemCard_PowerRatingBlock_Configuration
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FSlateBrush                                 MoonbeamBorderBrush;                                      // 0x0008(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     MoonbeamBorderExteriorPadding;                            // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MoonbeamBorderPadding;                                    // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     CustomRatingInternalPadding;                              // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CustomRatingIconSize;                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_Configuration.CustomRatingTextStyle
	struct FVector2D                                   ComparisonIndicatorSize;                                  // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
// 0x0160 (0x0258 - 0x00F8)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PersonnelPowerRatingIconBrush;                            // 0x00F8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0180(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.PersonnelPowerRatingTextStyle
	struct FSlateBrush                                 SchematicPowerRatingIconBrush;                            // 0x01A8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0230(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.SchematicPowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// 0x0098
struct FFortItemCard_NameplateBorder_Configuration
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// 0x0008
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
	struct FVector2D                                   IconConstraints;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// 0x0014
struct FFortItemCard_DetailAreaBorder_Configuration
{
	float                                              MinimumHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// 0x000C
struct FFortItemCard_TierMeter_Configuration
{
	struct FVector2D                                   PipSize;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterPipPadding;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// 0x03F8
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x0258) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0270(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0308(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ItemNameTextStyle
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x0344(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x034C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0354(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              RarityNameTextLeftPadding;                                // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x036C(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.RarityNameTextStyle
	float                                              ClassIconImageLeftPadding;                                // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ClassIconSize;                                            // 0x039C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenClassIconAndName;                           // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ClassNameTextStyle
	float                                              TierMeterLeftPadding;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x03D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     IconSlotOverNameplatePadding;                             // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IconSlotOverNameplateSize;                                // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
// 0x00B0 (0x01A8 - 0x00F8)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PowerRatingIconBrush;                                     // 0x00F8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0180(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration.PowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// 0x0030
struct FFortItemCard_StackCountBlock_Configuration
{
	bool                                               bShowShorthandStackCount;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_StackCountBlock_Configuration.TextStyle
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// 0x0014
struct FFortItemCard_DurabilityMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// 0x0258
struct FFortItemCard_XL_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x01A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x01D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x021C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0224(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0234(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0240(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XL_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// 0x0014
struct FFortItemCard_LevelMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// 0x0370
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x0258) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0270(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x0324(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x032C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0334(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0348(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0360(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// 0x0258
struct FFortItemCard_L_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x01A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x01D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x021C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0224(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0234(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0240(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
// 0x0048
struct FFortItemCard_L_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// 0x0370
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x0258) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0270(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x0324(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x032C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0334(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0348(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0360(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// 0x0258
struct FFortItemCard_M_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x01A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x01D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x021C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0224(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0234(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0240(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
// 0x0048
struct FFortItemCard_M_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// 0x0370
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x0258) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x0270(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x0324(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x032C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0334(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x0348(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0360(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// 0x0248
struct FFortItemCard_S_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x01A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x01D0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0228(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0234(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
// 0x0048
struct FFortItemCard_S_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// 0x0034
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   AvailableUpgradeIconSize;                                 // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// 0x0230
struct FFortItemCard_XS_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x01A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TraitBoxPadding;                                          // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x01E8(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0218(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XS_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
// 0x0030
struct FFortItemCard_XXS_ItemInstance_Configuration
{
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
// 0x0014
struct FFortUIPickerTrapSortScores
{
	float                                              UniqueTrapBonus;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlottedBonus;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FavoriteBonus;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTrackedTrapBonusTime;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TrackedTrapBonusMultiplier;                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortRootViewportLayoutInfo
// 0x0018
struct FFortRootViewportLayoutInfo
{
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUserWidget*                                 RootLayout;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.UINavigationData
// 0x0030
struct FUINavigationData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UObject*                                     ObjectData;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       IdData;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IntData;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.UINavigationEntry
// 0x0050
struct FUINavigationEntry
{
	struct FUINavigationData                           Data;                                                     // 0x0000(0x0030)
	struct FScriptDelegate                             NavigateToDelegate;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             NavigateFromDelegate;                                     // 0x0040(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// 0x0030
struct FFortUINavigationOperation
{
	EFortUINavigationOp                                Operation;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SquadId;                                                  // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PageId;                                                   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeId;                                                   // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortUIFeature                                     Feature;                                                  // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortFrontendInventoryFilter                       ItemManagementFilter;                                     // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// 0x0010
struct FFortUINavigationRequest
{
	TArray<struct FFortUINavigationOperation>          Operations;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// 0x002C
struct FFortUIXpInfo
{
	int                                                InitialLevel;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InitialDisplayXp;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortExperienceDelta                        ChangeInXp;                                               // 0x0008(0x0024) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUIStyleWindowButtons
// 0x09E0
struct FFortUIStyleWindowButtons
{
	struct FButtonStyle                                Close;                                                    // 0x0000(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                Minimize;                                                 // 0x0278(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                Maximize;                                                 // 0x04F0(0x0278) (Edit, BlueprintVisible)
	struct FButtonStyle                                Restore;                                                  // 0x0768(0x0278) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.FortUIStyleDefinition
// 0x09E0
struct FFortUIStyleDefinition
{
	struct FFortUIStyleWindowButtons                   WindowButtons;                                            // 0x0000(0x09E0) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.FortVariantFilterContext
// 0x0020
struct FFortVariantFilterContext
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortVideoInfo
// 0x0038
struct FFortVideoInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PreviewImage;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                VideoSource;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULocalizedOverlays*                          SubtitleOverlays;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestObjectiveName;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetId                             RequiredActiveQuest;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
// 0x0050
struct FFortWeaponBoardDisplaySlot
{
	struct FGameplayTag                                RequiredTag;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  MeshRelativeTransform;                                    // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LocalOffsetMultiplier;                                    // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
// 0x0060
struct FFortWeaponBoardDisplaySlotItem
{
	struct FFortWeaponBoardDisplaySlot                 DisplaySlot;                                              // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.CameraToWinterQuestViewState
// 0x0028
struct FCameraToWinterQuestViewState
{
	EWinterQuestViewState                              UIViewState;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       CameraTagsToSetFrom;                                      // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.GGCenterDisplayEntry
// 0x0017 (0x0018 - 0x0001)
struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UFortWeaponItemDefinition*                   WeaponAt;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayersAtWeapon;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFinal;                                                 // 0x0015(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.HeistExitCraftIconData
// 0x0010
struct FHeistExitCraftIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistExitCraftIconState                           IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistExitCraftIconState                           PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                SecondsUntilIncoming;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamHasBling;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.HeistBlingIconData
// 0x0008
struct FHeistBlingIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistBlingIconState                               IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistBlingIconState                               PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.HUDLayoutToolPreset
// 0x0050
struct FHUDLayoutToolPreset
{
	struct FText                                       PresetName;                                               // 0x0000(0x0018) (Edit)
	struct FText                                       PresetDescription;                                        // 0x0018(0x0018) (Edit)
	struct FString                                     HUDLayoutSave;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  PresetPreviewImage;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRecommended;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.HudLayoutToolProxyPropertyData
// 0x0030
struct FHudLayoutToolProxyPropertyData
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELayoutPropertyType                                Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ButtonStateColor
// 0x0050
struct FHUDLayoutToolV2_ButtonStateColor
{
	struct FSlateColor                                 TextColor;                                                // 0x0000(0x0028) (Edit)
	struct FLinearColor                                IconColor;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IconAngle;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_TextInputPopupContent
// 0x0068
struct FHUDLayoutToolV2_TextInputPopupContent
{
	EHUDLayoutToolTextInputPopupType                   PopupType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x0008(0x0018) (Edit)
	struct FText                                       DescriptionText;                                          // 0x0020(0x0018) (Edit)
	struct FText                                       ButtonConfirmText;                                        // 0x0038(0x0018) (Edit)
	struct FText                                       ButtonCancelText;                                         // 0x0050(0x0018) (Edit)
};

// ScriptStruct FortniteUI.QuickbarProxySlotIconContainer
// 0x0010
struct FQuickbarProxySlotIconContainer
{
	TArray<class UPaperSprite*>                        SlotIcons;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.PerkPipData
// 0x0010
struct FPerkPipData
{
	class UFortAccoladeItemDefinition*                 AccoladeItemDef;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumOfPips;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.InterpolatedTransitionCamera
// 0x0040
struct FInterpolatedTransitionCamera
{
	struct FTransform                                  CameraTransform;                                          // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCountdownSounds
// 0x0020
struct FFortCountdownSounds
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StopTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayed;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UAudioComponent*                             PlayInstance;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FortniteUI.PickupStreamEntry
// 0x0018
struct FPickupStreamEntry
{
	class UUserWidget*                                 PickupWidget;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Add
// 0x0010
struct FFortFeedbackDropdownCategoryHotfix_Add
{
	struct FName                                       ParentInternalName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       InternalName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Modify
// 0x000C
struct FFortFeedbackDropdownCategoryHotfix_Modify
{
	struct FName                                       InternalName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAddFlag;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortPlayerFeedbackFlags                           Flag;                                                     // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.SoundThreshold
// 0x0010
struct FSoundThreshold
{
	class USoundCue*                                   SoundCue;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaSpatialCustomizationCategoryGroup
// 0x0010
struct FAthenaSpatialCustomizationCategoryGroup
{
	TArray<class UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct FortniteUI.SpatialCustomizationCategoryStateData
// 0x0030
struct FSpatialCustomizationCategoryStateData
{
	ESpatialCustomizationCategoryState                 State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       CategorySelectionHeaderText;                              // 0x0018(0x0018) (Edit)
};

// ScriptStruct FortniteUI.SelectedChallengesData
// 0x0020
struct FSelectedChallengesData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	bool                                               bIsCompleted;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasIconOverride;                                         // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	float                                              Progress;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumObjectivesCompleted;                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumObjectives;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaStyleMissionData
// 0x0028
struct FAthenaStyleMissionData
{
	class UFortVariantTokenType*                       StyleDefinition;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UFortVariantTokenType*>               OptionalAdditionalStyleDefinitions;                       // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UFortQuestItemDefinition*                    Mission;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             OverrideIdleAnimation;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaSpatialStyleCharacterData
// 0x0030
struct FAthenaSpatialStyleCharacterData
{
	class UAthenaCharacterItemDefinition*              Character;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaStyleMissionData>             Styles;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<ESpatialStyleCharacterUnlockPrerequisite>   CharacterPrerequisites;                                   // 0x0018(0x0010) (Edit, ZeroConstructor)
	class UAnimationAsset*                             CharacterIdleAnimation;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortToastDisplayInfo
// 0x0060
struct FFortToastDisplayInfo
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortToastDisplayInfo.Image
	EFortToastType                                     Type;                                                     // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.StoreCallout
// 0x0090
struct FStoreCallout
{
	struct FFortToastDisplayInfo                       ToastDisplayInfo;                                         // 0x0000(0x0060) (BlueprintVisible)
	struct FText                                       ItemName;                                                 // 0x0060(0x0018)
	struct FText                                       ItemSet;                                                  // 0x0078(0x0018)
};

// ScriptStruct FortniteUI.TDMTeamScoreData
// 0x0020
struct FTDMTeamScoreData
{
	struct FText                                       CurrScoreText;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrScorePercent;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrScore;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteUI.WaxPlacementData
// 0x0020
struct FWaxPlacementData
{
	int                                                Placement;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CoinCount;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.GridSortKey
// 0x0018
struct FGridSortKey
{
	float                                              Number;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     String;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaRewardTracker
// 0x0014
struct FAthenaRewardTracker
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCatabaSectionData
// 0x0038
struct FFortCatabaSectionData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
// 0x0018
struct FGlyphAllUpdateTransitions
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.GlyphUpdateTransition
// 0x000C
struct FGlyphUpdateTransition
{
	int                                                Count;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeOffset;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeOffset;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaLeaderboardData
// 0x0038 (0x0040 - 0x0008)
struct FAthenaLeaderboardData : public FTableRowBase
{
	EFortAthenaPlaylist                                Playlist;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       PlaylistName;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECommonInputType                                   InputType;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FAthenaPlaylistLeaderboardData>      Stats;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bExcludePlaylistNames;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FString>                             PlaylistNames;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
// 0x0040
struct FAthenaReplayBrowserRowData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FDateTime                                   Date;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor)
	float                                              Length;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Eliminations;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.HUDMessageOverlaySlotPlacementData
// 0x0014
struct FHUDMessageOverlaySlotPlacementData
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.HUDMessageCanvasSlotPlacementData
// 0x0020
struct FHUDMessageCanvasSlotPlacementData
{
	struct FAnchors                                    Anchors;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   position;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPhoenixSeasonDisplayInfoMapRow
// 0x0018 (0x0020 - 0x0008)
struct FFortPhoenixSeasonDisplayInfoMapRow : public FTableRowBase
{
	struct FString                                     EventFlagName;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UFortPhoenixSeasonDisplayInfo*               DisplayInfo;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaShopSection
// 0x0078
struct FAthenaShopSection
{
	struct FName                                       SectionId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       SectionDisplayName;                                       // 0x0008(0x0018)
	bool                                               bSortOffersByOwnership;                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowIneligibleOffers;                                    // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowIneligibleOffersIfGiftable;                          // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowTimer;                                               // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableToastNotification;                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                LandingPriority;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FDynamicBackground                          SectionBackground;                                        // 0x0030(0x0048)
};

// ScriptStruct FortniteUI.AthenaShopCarouselItem
// 0x0068
struct FAthenaShopCarouselItem
{
	struct FText                                       PreviewTitle;                                             // 0x0000(0x0018)
	struct FText                                       FullTitle;                                                // 0x0018(0x0018)
	struct FString                                     TileImage;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     VideoString;                                              // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     OfferId;                                                  // 0x0050(0x0010) (ZeroConstructor)
	int                                                LandingPriority;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	EItemShopNavigationAction                          Action;                                                   // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.LeaderboardEntry
// 0x0028
struct FLeaderboardEntry
{
	struct FString                                     LeaderboardId;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LeaderboardName;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowDetailsPanel;                                         // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.LatestLeaderboardData
// 0x0020
struct FLatestLeaderboardData
{
	struct FString                                     LastModified;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLeaderboardEntry>                   Entries;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.ShowdownLatestTournamentData
// 0x0060
struct FShowdownLatestTournamentData
{
	struct FString                                     LastModified;                                             // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FShowdownTournamentEntry> Entries;                                                  // 0x0010(0x0050)
};

// ScriptStruct FortniteUI.FortAthenaStandaloneTutorialStepInfo
// 0x0010
struct FFortAthenaStandaloneTutorialStepInfo
{
	TArray<struct FFortAthenaTutorialScreenInfo>       StepScreenInfo;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct FortniteUI.VaultVariantOverrideOption
// 0x0020
struct FVaultVariantOverrideOption
{
	struct FGameplayTag                                VariantChannelOverride;                                   // 0x0000(0x0008)
	struct FGameplayTag                                VariantTagOverride;                                       // 0x0008(0x0008)
	struct FString                                     CustomDataPayload;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.ItemPreviewSettings
// 0x0050
struct FItemPreviewSettings
{
	class UFortAccountItemDefinition*                  ItemToView;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubslotIndex;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       PreviewExcludedTags;                                      // 0x0010(0x0020)
	int                                                ItemVariantPreviewIndex;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasEtherealBackground;                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
	TArray<struct FVaultVariantOverrideOption>         VariantOverrides;                                         // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
// 0x0008 (0x0010 - 0x0008)
struct FFortCreativeItemListCategoryData : public FTableRowBase
{
	ECreativeItemCategory                              Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  CardSize;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollapseCardBorderPad;                                   // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortWeightedObject
// 0x0010
struct FFortWeightedObject
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.OptionsReleaseInfo
// 0x0008
struct FOptionsReleaseInfo
{
	ESettingType                                       SettingType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ReleaseVersion;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.BulkSanitizationTaskData
// 0x0078
struct FBulkSanitizationTaskData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
// 0x0038 (0x0040 - 0x0008)
struct FFortCreativeServerDisplayOption : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortCreativeServerDisplayOption.Image
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPickerCategory
// 0x0028
struct FFortPickerCategory
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// 0x0018
struct FConsumedCriteriaData
{
	float                                              PowerMod;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               CriteriaNames;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FortniteUI.ViewVaultItemsParams
// 0x0018
struct FViewVaultItemsParams
{
	TArray<class UFortItemDefinition*>                 ItemsToView;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0020
struct FAttributeRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Level;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRequirementsMet;                                         // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingRequirements
// 0x0028
struct FBuildingRequirements
{
	int                                                RequiredAccountLevel;                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAccountLevel;                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeRequirement>               AttributeRequirements;                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RequiredPower;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPower;                                             // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredManufacturing;                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentManufacturing;                                     // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortHeroLoadoutHeroPickerTabConfiguration
// 0x00B0
struct FFortHeroLoadoutHeroPickerTabConfiguration
{
	struct FFortItemFilterDefinition                   Filter;                                                   // 0x0000(0x0060)
	struct FFortItemSorterDefinition                   Sorter;                                                   // 0x0060(0x0050)
};

// ScriptStruct FortniteUI.FortHeroNamesData
// 0x0030 (0x0038 - 0x0008)
struct FFortHeroNamesData : public FTableRowBase
{
	struct FString                                     FirstName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     NickName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// 0x0010
struct FItemDefinitionChangedStruct
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.ItemDefinitionChangedStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.FortRefundDescriptionsData
// 0x0038 (0x0040 - 0x0008)
struct FFortRefundDescriptionsData : public FTableRowBase
{
	struct FString                                     SearchString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TargetReleaseVersion;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       RefundDescriptionText;                                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.UserAction
// 0x0018
struct FUserAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FString                                     ActionName;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.UserSelectProfileAction
// 0x0080 (0x0098 - 0x0018)
struct FUserSelectProfileAction : public FUserAction
{
	struct FFortMobileHUDProfileBase                   PreviousProfile;                                          // 0x0018(0x0040)
	struct FFortMobileHUDProfileBase                   NewProfile;                                               // 0x0058(0x0040)
};

// ScriptStruct FortniteUI.UserRenameAction
// 0x0020 (0x0038 - 0x0018)
struct FUserRenameAction : public FUserAction
{
	struct FString                                     PreviousName;                                             // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     NewName;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.UserGenericAction
// 0x0040 (0x0058 - 0x0018)
struct FUserGenericAction : public FUserAction
{
	struct FFortMobileHUDProfileBase                   ActiveProfile;                                            // 0x0018(0x0040)
};

// ScriptStruct FortniteUI.FortMobileHUDWidgetLayout
// 0x0040
struct FFortMobileHUDWidgetLayout
{
	struct FAnchorData                                 LayoutData;                                               // 0x0000(0x0028) (Transient)
	int                                                ZOrder;                                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
};

// ScriptStruct FortniteUI.HUDWidgetSchemaInitializer
// 0x0010
struct FHUDWidgetSchemaInitializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.SquadChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataCondition
// 0x0010
struct FFortPlayerSurveyCMSDataCondition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionBase
// 0x0008
struct FFortPlayerSurveyCMSDataConditionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupBase
// 0x0010 (0x0018 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionGroupBase : public FFortPlayerSurveyCMSDataConditionBase
{
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAnd
// 0x0000 (0x0018 - 0x0018)
struct FFortPlayerSurveyCMSDataConditionAnd : public FFortPlayerSurveyCMSDataConditionGroupBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase : public FFortPlayerSurveyCMSDataConditionBase
{
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                T;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat
// 0x0088 (0x0098 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionAthenaMatchStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
	TArray<EFortPlayerSurveyCMSDataPlaylistCategory>   pt;                                                       // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat.P
	TArray<struct FString>                             I;                                                        // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     S;                                                        // 0x0080(0x0010) (ZeroConstructor)
	EFortPlayerSurveyCMSDataAggregateOp                ag;                                                       // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataGameplayTagQuery
// 0x0018
struct FFortPlayerSurveyCMSDataGameplayTagQuery
{
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType   T;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               N;                                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaPoi
// 0x0018 (0x0020 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionAthenaPoi : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataGameplayTagQuery    Q;                                                        // 0x0008(0x0018)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonBookState
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState : public FFortPlayerSurveyCMSDataConditionBase
{
	bool                                               T;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonStat
// 0x0008 (0x0018 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
	EFortPlayerSurveyCMSDataAthenaSeasonStat           S;                                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroup
// 0x0018
struct FFortPlayerSurveyCMSDataConditionGroup
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupReference
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionGroupReference : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRelativeSurveyKey
// 0x0018
struct FFortPlayerSurveyCMSDataRelativeSurveyKey
{
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType      T;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionMostRecentlyCompleted
// 0x0028 (0x0030 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey   S;                                                        // 0x0008(0x0018)
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	double                                             T;                                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionOr
// 0x0000 (0x0018 - 0x0018)
struct FFortPlayerSurveyCMSDataConditionOr : public FFortPlayerSurveyCMSDataConditionGroupBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionPlatform
// 0x0050 (0x0058 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionPlatform : public FFortPlayerSurveyCMSDataConditionBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty FortniteUI.FortPlayerSurveyCMSDataConditionPlatform.P
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionQuestState
// 0x0028 (0x0030 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionQuestState : public FFortPlayerSurveyCMSDataConditionBase
{
	EFortPlayerSurveyCMSDataGameMode                   sg;                                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Q;                                                        // 0x0010(0x0010) (ZeroConstructor)
	TArray<EFortPlayerSurveyCMSDataQuestState>         st;                                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionRandom
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionRandom : public FFortPlayerSurveyCMSDataConditionBase
{
	float                                              P;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSeasonNumber
// 0x0000 (0x0010 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionSeasonNumber : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionTimesCompleted
// 0x0020 (0x0028 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionTimesCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey   S;                                                        // 0x0008(0x0018)
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                T;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestion
// 0x0010
struct FFortPlayerSurveyCMSDataQuestion
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionBase
// 0x0008
struct FFortPlayerSurveyCMSDataQuestionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionStandardBase
// 0x0020 (0x0028 - 0x0008)
struct FFortPlayerSurveyCMSDataQuestionStandardBase : public FFortPlayerSurveyCMSDataQuestionBase
{
	EFortPlayerSurveyCMSDataPresentationStyle          S;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       T;                                                        // 0x0010(0x0018)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionFreeFormText
// 0x0020 (0x0048 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionFreeFormText : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	struct FText                                       ht;                                                       // 0x0028(0x0018)
	bool                                               R;                                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                L;                                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionChoice
// 0x0018
struct FFortPlayerSurveyCMSDataQuestionChoice
{
	struct FText                                       T;                                                        // 0x0000(0x0018)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleChoice
// 0x0010 (0x0038 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionMultipleChoice : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                        // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleSelection
// 0x0018 (0x0040 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionMultipleSelection : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                        // 0x0028(0x0010) (ZeroConstructor)
	int                                                mn;                                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mx;                                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurveyDescriptionMessage
// 0x0030
struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage
{
	struct FText                                       T;                                                        // 0x0000(0x0018)
	struct FText                                       M;                                                        // 0x0018(0x0018)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurvey
// 0x0098
struct FFortPlayerSurveyCMSDataSurvey
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       T;                                                        // 0x0010(0x0018)
	bool                                               rt;                                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0030(0x0010) (ZeroConstructor)
	struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage cm;                                                       // 0x0040(0x0030)
	EFortPlayerSurveyCMSDataTrigger                    R;                                                        // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<EFortPlayerSurveyCMSDataGameMode>           sg;                                                       // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FJsonObjectWrapper>                  Q;                                                        // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRoot
// 0x0028
struct FFortPlayerSurveyCMSDataRoot
{
	bool                                               E;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortPlayerSurveyCMSDataConditionGroup> cg;                                                       // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FFortPlayerSurveyCMSDataSurvey>      S;                                                        // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortPlayerSurveyQuestionBase
// 0x0048
struct FFortPlayerSurveyQuestionBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyQuestionYesNo
// 0x0000 (0x0048 - 0x0048)
struct FFortPlayerSurveyQuestionYesNo : public FFortPlayerSurveyQuestionBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyQuestionRating
// 0x0050 (0x0098 - 0x0048)
struct FFortPlayerSurveyQuestionRating : public FFortPlayerSurveyQuestionBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyQuestionStandard
// 0x0000 (0x0048 - 0x0048)
struct FFortPlayerSurveyQuestionStandard : public FFortPlayerSurveyQuestionBase
{

};

// ScriptStruct FortniteUI.FortQuestMapEventQuestSideBarData
// 0x0020 (0x0028 - 0x0008)
struct FFortQuestMapEventQuestSideBarData : public FTableRowBase
{
	class UFortQuestItemDefinition*                    QuestItemDefinition;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             EventFlags;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShowAlways;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              CycleTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// 0x0270 (0x0278 - 0x0008)
struct FFortRichTextStyleData : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0268) (Edit)
	bool                                               bHyperlinkStyle;                                          // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.SanitizationTaskData
// 0x0078
struct FSanitizationTaskData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortEventStyleInfo
// 0x00A0 (0x00A8 - 0x0008)
struct FFortEventStyleInfo : public FTableRowBase
{
	struct FLinearColor                                BaseColor;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TitleColor;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundLeftColor;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundRightColor;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundTextColor;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PosterFadeColor;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
// 0x0040 (0x0048 - 0x0008)
struct FFortShowdownScoringRuleDisplayInfo : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortShowdownScoringRuleDisplayInfo.Icon
};

// ScriptStruct FortniteUI.OfferPopUpData
// 0x0018 (0x0020 - 0x0008)
struct FOfferPopUpData : public FTableRowBase
{
	struct FText                                       FormatedText;                                             // 0x0008(0x0018) (Edit)
};

// ScriptStruct FortniteUI.TouchMove
// 0x000C
struct FTouchMove
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteUI.TouchInteractionIconOverride
// 0x0030
struct FTouchInteractionIconOverride
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.TouchInteractionIconOverride.IconOverride
	float                                              IconScale;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// 0x00C0
struct FFortItemTransformFilterTabLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabButtonLabelInfo;                                       // 0x0008(0x00A0) (Edit, BlueprintVisible)
	TArray<EFortInventoryFilter>                       ItemFilters;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFortItemType                                      ItemType;                                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.UIStateTag
// 0x0000 (0x0008 - 0x0008)
struct FUIStateTag : public FUITag
{

};

// ScriptStruct FortniteUI.AthenaUIStateTag
// 0x0000 (0x0008 - 0x0008)
struct FAthenaUIStateTag : public FUIStateTag
{

};

// ScriptStruct FortniteUI.FortStartupUIStateTag
// 0x0000 (0x0008 - 0x0008)
struct FFortStartupUIStateTag : public FUIStateTag
{

};

// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
// 0x0050 (0x0058 - 0x0008)
struct FFortUIPickerTrapSortModifier : public FTableRowBase
{
	struct FGameplayTagQuery                           ItemTagQuery;                                             // 0x0008(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              ScoreBonus;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortHealthyGamingData
// 0x0088 (0x0090 - 0x0008)
struct FFortHealthyGamingData : public FTableRowBase
{
	float                                              HealthWarningToastInterval;                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       HealthWarningToastDescriptionFormat;                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HealthWarningScreenText;                                  // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       GameplayRestrictionText;                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              GameplayRestrictionWarningTimeOffset;                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       AntiAddictionTotalDescriptionFormat;                      // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUsePlayerTimeLimitSystem;                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0079(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortHealthyGamingData.RatingIcons
};

// ScriptStruct FortniteUI.FortSquadIconData
// 0x0330 (0x0338 - 0x0008)
struct FFortSquadIconData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0008(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// 0x0038
struct FFortDisplayModifier
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (BlueprintVisible)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortErrorInfo
// 0x0070
struct FFortErrorInfo
{
	struct FText                                       Operation;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ErrorMessage;                                             // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     ErrorCode;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortErrorSeverity                                 ErrorSeverity;                                            // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FText                                       ContinueButtonText;                                       // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.HomebaseNodeDisplayData
// 0x0088 (0x0090 - 0x0008)
struct FHomebaseNodeDisplayData : public FTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.LargePreviewImage
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.SmallPreviewImage
	class UMediaSource*                                PreviewVideoMediaSource;                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PanZoomFingerState
// 0x0010
struct FPanZoomFingerState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.ActiveSidekickInstance
// 0x0028
struct FActiveSidekickInstance
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class USidekickDisplayWidget*                      Widget;                                                   // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FortniteUI.FortItemWidget_NUI
// 0x0028 (0x0140 - 0x0118)
class UFortItemWidget_NUI : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortMultiSizeItemCard
// 0x0038 (0x0178 - 0x0140)
class UFortMultiSizeItemCard : public UFortItemWidget_NUI
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0140(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMultiSizeItemCard");
		return ptr;
	}

};


// Class FortniteUI.AthenaCustomizationSlotBase
// 0x00F8 (0x0210 - 0x0118)
class UAthenaCustomizationSlotBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0118(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCustomizationSlotBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemCardBase
// 0x0000 (0x0140 - 0x0140)
class UFortItemCardBase : public UFortItemWidget_NUI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCardBase");
		return ptr;
	}


	void STATIC_PortBrushSize();
};


// Class FortniteUI.FortItemTileButton
// 0x0030 (0x08D0 - 0x08A0)
class UFortItemTileButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x08A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortItemPickerButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortItemPickerButton : public UFortItemTileButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemPickerButton");
		return ptr;
	}

};


// Class FortniteUI.FortItemPickerBase
// 0x0068 (0x02A0 - 0x0238)
class UFortItemPickerBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0238(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemPickerBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaCustomizationPicker
// 0x0048 (0x02E8 - 0x02A0)
class UAthenaCustomizationPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCustomizationPicker");
		return ptr;
	}

};


// Class FortniteUI.AthenaCustomizationSlotSelectorButton
// 0x0018 (0x08B8 - 0x08A0)
class UAthenaCustomizationSlotSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCustomizationSlotSelectorButton");
		return ptr;
	}

};


// Class FortniteUI.AthenaHUDContext
// 0x0138 (0x0160 - 0x0028)
class UAthenaHUDContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDContext");
		return ptr;
	}

};


// Class FortniteUI.FortHUDElementWidget
// 0x0028 (0x0260 - 0x0238)
class UFortHUDElementWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDElementWidget");
		return ptr;
	}

};


// Class FortniteUI.AthenaHUDTeamIndicatorBase
// 0x0010 (0x0128 - 0x0118)
class UAthenaHUDTeamIndicatorBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDTeamIndicatorBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaMatchReadyDesktopPopup
// 0x0070 (0x02A0 - 0x0230)
class UAthenaMatchReadyDesktopPopup : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0230(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaMatchReadyDesktopPopup");
		return ptr;
	}


	void UserDismissedDialog();
};


// Class FortniteUI.AthenaSeasonStatusWidget
// 0x0000 (0x0238 - 0x0238)
class UAthenaSeasonStatusWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaSeasonStatusWidget");
		return ptr;
	}

};


// Class FortniteUI.CMSContext
// 0x0028 (0x0050 - 0x0028)
class UCMSContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.CMSContext");
		return ptr;
	}

};


// Class FortniteUI.FortAbilitySystemContext
// 0x0050 (0x0078 - 0x0028)
class UFortAbilitySystemContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAbilitySystemContext");
		return ptr;
	}


	void RemoveDelegatesFromWidget(class UWidget* Widget);
	void RegisterForAttributeChanged(class UWidget* Widget);
};


// Class FortniteUI.FortAccountStatsContext
// 0x0000 (0x0028 - 0x0028)
class UFortAccountStatsContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountStatsContext");
		return ptr;
	}


	void CanShowAccountStats();
};


// Class FortniteUI.FortAccountWidgetBase
// 0x0028 (0x0260 - 0x0238)
class UFortAccountWidgetBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountWidgetBase");
		return ptr;
	}


	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);
	void HandleCurrentlyViewedAccountInfoChanged();
	void GetNextSeasonReward();
	void GetNextSeasonChaseReward();
};


// Class FortniteUI.FortActivatablePanel
// 0x0030 (0x0410 - 0x03E0)
class UFortActivatablePanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.AthenaCompendiumScreenBase
// 0x0000 (0x0410 - 0x0410)
class UAthenaCompendiumScreenBase : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCompendiumScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContextInterface
// 0x0000 (0x0028 - 0x0028)
class UFortItemViewContextInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContextInterface");
		return ptr;
	}

};


// Class FortniteUI.FortItemTileView
// 0x0120 (0x0450 - 0x0330)
class UFortItemTileView : public UCommonTileView
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0330(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTileView");
		return ptr;
	}

};


// Class FortniteUI.FortTabButtonInterface
// 0x0000 (0x0028 - 0x0028)
class UFortTabButtonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTabButtonInterface");
		return ptr;
	}


	void SetTabLabelInfo();
};


// Class FortniteUI.FortTabListWidgetBase
// 0x0070 (0x0370 - 0x0300)
class UFortTabListWidgetBase : public UCommonTabListWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0300(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTabListWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaInventoryPanelBase
// 0x0060 (0x0470 - 0x0410)
class UAthenaInventoryPanelBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0410(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaInventoryPanelBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaLeaderboardScreenBase
// 0x00F0 (0x0500 - 0x0410)
class UAthenaLeaderboardScreenBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0410(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLeaderboardScreenBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaLobbyBase
// 0x0050 (0x0460 - 0x0410)
class UAthenaLobbyBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0410(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLobbyBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaLootStoreScreenBase
// 0x0000 (0x0410 - 0x0410)
class UAthenaLootStoreScreenBase : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLootStoreScreenBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaStatsScreenBase
// 0x0090 (0x04A0 - 0x0410)
class UAthenaStatsScreenBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0410(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaStatsScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortAccountLinkingWindow
// 0x0030 (0x0440 - 0x0410)
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountLinkingWindow");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_CheckHasRedeemForAccess
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_CheckHasRedeemForAccess : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_CheckHasRedeemForAccess");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_ShowPlatformStoreForPurchase : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPlatformStoreForPurchase");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowPlatformRedeemCode
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_ShowPlatformRedeemCode : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPlatformRedeemCode");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink
// 0x0040 (0x0068 - 0x0028)
class UFortAsyncAction_WebCreateEpicAccountAndLink : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_WebCreateEpicAccountAndLink");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_CreateHeadlessAccount
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_CreateHeadlessAccount : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_CreateHeadlessAccount");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget
// 0x0010 (0x0248 - 0x0238)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget
// 0x0060 (0x0470 - 0x0410)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0410(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookWidget
// 0x0030 (0x0440 - 0x0410)
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookWidget");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewardsItem
// 0x0010 (0x0248 - 0x0238)
class UFortDailyRewardsItem : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewardsItem");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewardsSchedule
// 0x0098 (0x02D0 - 0x0238)
class UFortDailyRewardsSchedule : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0238(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewardsSchedule");
		return ptr;
	}

};


// Class FortniteUI.FortDailyRewards
// 0x0000 (0x0410 - 0x0410)
class UFortDailyRewards : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDailyRewards");
		return ptr;
	}


	void TryGetDailyRewardsData();
	void SetupDailyRewards();
	void FinishedClaiming();
	void ClaimResultReceived();
};


// Class FortniteUI.FortMtxOfferData
// 0x0160 (0x0188 - 0x0028)
class UFortMtxOfferData : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxOfferData");
		return ptr;
	}

};


// Class FortniteUI.FortDirectAcquisitionOfferInfo
// 0x0020 (0x0048 - 0x0028)
class UFortDirectAcquisitionOfferInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDirectAcquisitionOfferInfo");
		return ptr;
	}

};


// Class FortniteUI.FortDirectAcquisitionOfferWidgetBase
// 0x0008 (0x08A8 - 0x08A0)
class UFortDirectAcquisitionOfferWidgetBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDirectAcquisitionOfferWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase
// 0x0000 (0x0410 - 0x0410)
class UFortDirectAcquisitionOfferDetailsWidgetBase : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortErrorWindow
// 0x0010 (0x0420 - 0x0410)
class UFortErrorWindow : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortErrorWindow");
		return ptr;
	}

};


// Class FortniteUI.FortGameFeedbackBase
// 0x0090 (0x04A0 - 0x0410)
class UFortGameFeedbackBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0410(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGameFeedbackBase");
		return ptr;
	}

};


// Class FortniteUI.FortInfoWindow
// 0x0000 (0x0410 - 0x0410)
class UFortInfoWindow : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInfoWindow");
		return ptr;
	}

};


// Class FortniteUI.FortDirectAcquisitionWidgetBase
// 0x0040 (0x0450 - 0x0410)
class UFortDirectAcquisitionWidgetBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0410(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDirectAcquisitionWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortOptionsMenu
// 0x0000 (0x0410 - 0x0410)
class UFortOptionsMenu : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsMenu");
		return ptr;
	}


	void UpdateEula();
	void ShowVideoOptions();
	void ShowInputOptions();
	void ShowGameOptions();
	void ShowControllerOptions();
	void ResetClientHUDSettings();
	void OnVideoAccept();
	void OnResetToDefaults();
	void OnReset();
	void OnApply();
	void NeedsVideoChangeConfirmation();
	void NeedsLanguageChangeConfirmation();
	void HandleSettingsErrorMessageClosed();
	void HandleBenchmarkComplete();
};


// Class FortniteUI.FortPlayerProfileModalWidget
// 0x0000 (0x0410 - 0x0410)
class UFortPlayerProfileModalWidget : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPrivacyBase
// 0x0080 (0x0490 - 0x0410)
class UFortPrivacyBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0410(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPrivacyBase");
		return ptr;
	}

};


// Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary");
		return ptr;
	}


	void STATIC_ToText();
};


// Class FortniteUI.FortItemManagementScreen
// 0x0330 (0x0710 - 0x03E0)
class UFortItemManagementScreen : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x03E0(0x02A0) MISSED OFFSET
	EFortItemManagementMode                            Mode;                                                     // 0x0680(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8F];                                      // 0x0681(0x008F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementScreen");
		return ptr;
	}

};


// Class FortniteUI.FortSquadManagementItemViewContextBase
// 0x00D0 (0x00F8 - 0x0028)
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadManagementItemViewContextBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_SquadSlotsView
// 0x0008 (0x0100 - 0x00F8)
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_SquadSlotsView");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_SquadSlotItemPicker
// 0x0010 (0x0108 - 0x00F8)
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_SquadSlotItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView
// 0x0008 (0x0108 - 0x0100)
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView");
		return ptr;
	}

};


// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
// 0x0008 (0x0110 - 0x0108)
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortSquadManagementScreenBase
// 0x00C0 (0x04D0 - 0x0410)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0410(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadManagementScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortHeroSquadManagementScreen
// 0x0010 (0x04E0 - 0x04D0)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSquadManagementScreen");
		return ptr;
	}

};


// Class FortniteUI.FortMtxOfferDetailsBase
// 0x00A0 (0x04B0 - 0x0410)
class UFortMtxOfferDetailsBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0410(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxOfferDetailsBase");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSelectorButton
// 0x0020 (0x08C0 - 0x08A0)
class UFortSquadSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSelectorButton");
		return ptr;
	}

};


// Class FortniteUI.FortSquadTypeLandingPageBase
// 0x0040 (0x0450 - 0x0410)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0410(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadTypeLandingPageBase");
		return ptr;
	}

};


// Class FortniteUI.FortTopBarPanel
// 0x0000 (0x0410 - 0x0410)
class UFortTopBarPanel : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTopBarPanel");
		return ptr;
	}

};


// Class FortniteUI.FortTwitchLoginModalWidget
// 0x0000 (0x0410 - 0x0410)
class UFortTwitchLoginModalWidget : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTwitchLoginModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortActorCanvas
// 0x0050 (0x0180 - 0x0130)
class UFortActorCanvas : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0130(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorCanvas");
		return ptr;
	}

};


// Class FortniteUI.FortActorCanvasSlot
// 0x0010 (0x0048 - 0x0038)
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorCanvasSlot");
		return ptr;
	}

};


// Class FortniteUI.FortAlterationsWidget_NUI
// 0x0028 (0x0260 - 0x0238)
class UFortAlterationsWidget_NUI : public UCommonUserWidget
{
public:
	class UFortItem*                                   Item;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortAlterationWidgetState                         State;                                                    // 0x0240(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0241(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationsWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAlterationWidget_NUI
// 0x0018 (0x0250 - 0x0238)
class UFortAlterationWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAnnouncementWidget
// 0x0008 (0x0240 - 0x0238)
class UFortAnnouncementWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAnnouncementWidget");
		return ptr;
	}

};


// Class FortniteUI.FortArmoryScreen
// 0x0000 (0x03E0 - 0x03E0)
class UFortArmoryScreen : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortArmoryScreen");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_SetUIState
// 0x0020 (0x0048 - 0x0028)
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_SetUIState");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI
// 0x0198 (0x01C0 - 0x0028)
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowConfirmation
// 0x01A8 (0x01D0 - 0x0028)
class UFortAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0028(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowConfirmation");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI
// 0x0198 (0x01C0 - 0x0028)
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAsyncAction_ShowPartyDialog
// 0x0328 (0x0350 - 0x0028)
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x328];                                     // 0x0028(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAsyncAction_ShowPartyDialog");
		return ptr;
	}

};


// Class FortniteUI.FortAthenaMatchmakingWidget
// 0x0098 (0x02D0 - 0x0238)
class UFortAthenaMatchmakingWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0238(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaMatchmakingWidget");
		return ptr;
	}

};


// Class FortniteUI.FortAthenaNewsWidget
// 0x0000 (0x0238 - 0x0238)
class UFortAthenaNewsWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaNewsWidget");
		return ptr;
	}


	void GetText();
};


// Class FortniteUI.FortUserWidget
// 0x0010 (0x0240 - 0x0230)
class UFortUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUserWidget");
		return ptr;
	}

};


// Class FortniteUI.FortNodeCanvasEntityInterface
// 0x0000 (0x0028 - 0x0028)
class UFortNodeCanvasEntityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasEntityInterface");
		return ptr;
	}

};


// Class FortniteUI.FortNodeCanvasInterface
// 0x0000 (0x0028 - 0x0028)
class UFortNodeCanvasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasInterface");
		return ptr;
	}

};


// Class FortniteUI.FortBaseCanvasEntity
// 0x0040 (0x0280 - 0x0240)
class UFortBaseCanvasEntity : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0240(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseCanvasEntity");
		return ptr;
	}

};


// Class FortniteUI.AthenaCustomizationScreenBase
// 0x0000 (0x0410 - 0x0410)
class UAthenaCustomizationScreenBase : public UFortActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCustomizationScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortNodeCanvas
// 0x0100 (0x0240 - 0x0140)
class UFortNodeCanvas : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0140(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvas");
		return ptr;
	}

};


// Class FortniteUI.FortBangWrapper
// 0x0040 (0x0170 - 0x0130)
class UFortBangWrapper : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	EFortBangSize                                      Size;                                                     // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x013C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x0144(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBangWrapper");
		return ptr;
	}

};


// Class FortniteUI.FortSurvivorSquadManagementScreen
// 0x0000 (0x04D0 - 0x04D0)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadManagementScreen");
		return ptr;
	}

};


// Class FortniteUI.FortAthenaTabsScreenBase
// 0x0060 (0x0440 - 0x03E0)
class UFortAthenaTabsScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAthenaTabsScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortAttributeListItem_NUI
// 0x00F8 (0x0330 - 0x0238)
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0238(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeListItem_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAttributeList_NUI
// 0x0030 (0x0268 - 0x0238)
class UFortAttributeList_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeList_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortAttributeListItem
// 0x00E8 (0x0318 - 0x0230)
class UFortAttributeListItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0230(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeListItem");
		return ptr;
	}

};


// Class FortniteUI.FortBangWrapper_NUI
// 0x0018 (0x0250 - 0x0238)
class UFortBangWrapper_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBangWrapper_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortBannerSelectorBase
// 0x0040 (0x0420 - 0x03E0)
class UFortBannerSelectorBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBannerSelectorBase");
		return ptr;
	}

};


// Class FortniteUI.FortBorderStyleList
// 0x0008 (0x0240 - 0x0238)
class UFortBorderStyleList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBorderStyleList");
		return ptr;
	}

};


// Class FortniteUI.FortButtonInternalWidget
// 0x0018 (0x0480 - 0x0468)
class UFortButtonInternalWidget : public UButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortButtonInternalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortButtonStyle
// 0x1BE0 (0x1C08 - 0x0028)
class UFortButtonStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BE0];                                    // 0x0028(0x1BE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortButtonStyle");
		return ptr;
	}

};


// Class FortniteUI.FortBaseButton
// 0x0628 (0x0868 - 0x0240)
class UFortBaseButton : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x628];                                     // 0x0240(0x0628) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseButton");
		return ptr;
	}

};


// Class FortniteUI.FortChatWidget
// 0x0048 (0x0170 - 0x0128)
class UFortChatWidget : public UNativeWidgetHost
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0128(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortChatWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCheatMenuFactory
// 0x0000 (0x0028 - 0x0028)
class UFortCheatMenuFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCheatMenuFactory");
		return ptr;
	}


	void STATIC_AddStoreCheatMenu(class UCommonUserWidget* Widget);
	void STATIC_AddGrantCheatMenu(class UCommonUserWidget* Widget);
};


// Class FortniteUI.FortCollectionBookGenericRewardWidget
// 0x0018 (0x0250 - 0x0238)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookGenericRewardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookPageCompletionRewardWidget
// 0x0000 (0x0250 - 0x0250)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageCompletionRewardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressionRewardWidget
// 0x0010 (0x0260 - 0x0250)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortRewardInfoButton
// 0x0020 (0x08C0 - 0x08A0)
class UFortRewardInfoButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardInfoButton");
		return ptr;
	}

};


// Class FortniteUI.FortRewardInfoWidget
// 0x0088 (0x02C0 - 0x0238)
class UFortRewardInfoWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0238(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardInfoWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookRewardModalWidget
// 0x0050 (0x0430 - 0x03E0)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRewardModalWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget
// 0x0050 (0x02A0 - 0x0250)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0250(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookOverviewWidget
// 0x0040 (0x0278 - 0x0238)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnCollectionBookPageSelected;                             // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollectionBookPageClicked;                              // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0258(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookOverviewWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookPageDetailsWidget
// 0x0068 (0x02A0 - 0x0238)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0238(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookPageListWidget
// 0x0030 (0x08D0 - 0x08A0)
class UFortCollectionBookPageListWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x08A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPageListWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookPrimaryPanel
// 0x00C0 (0x04A0 - 0x03E0)
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03E0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPrimaryPanel");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget
// 0x0010 (0x0248 - 0x0238)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookProgressWidget
// 0x0058 (0x0290 - 0x0238)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0238(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookProgressWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget
// 0x0018 (0x0250 - 0x0238)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookRewardCardWidget
// 0x0080 (0x02B8 - 0x0238)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0238(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookRewardCardWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSectionPanel
// 0x0150 (0x0530 - 0x03E0)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x03E0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionPanel");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSlotWidget
// 0x0128 (0x0360 - 0x0238)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0238(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSectionTileWidget
// 0x0070 (0x0910 - 0x08A0)
class UFortCollectionBookSectionTileWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x08A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSectionTileWidget");
		return ptr;
	}

};


// Class FortniteUI.FortGlobalUIContext
// 0x0338 (0x0360 - 0x0028)
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0028(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGlobalUIContext");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSlotButton
// 0x0008 (0x08A8 - 0x08A0)
class UFortCollectionBookSlotButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotButton");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSlotDetailsWidget
// 0x0000 (0x0238 - 0x0238)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookSlotView
// 0x0138 (0x0370 - 0x0238)
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0238(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookSlotView");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderConfigPanel
// 0x0030 (0x0410 - 0x03E0)
class UFortDefenderConfigPanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderConfigPanel");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderSlotButton
// 0x0000 (0x08A0 - 0x08A0)
class UFortDefenderSlotButton : public UCommonButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSlotButton");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderSlotView
// 0x0000 (0x0238 - 0x0238)
class UFortDefenderSlotView : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSlotView");
		return ptr;
	}

};


// Class FortniteUI.FortCommittableButtonGroup
// 0x0010 (0x00A8 - 0x0098)
class UFortCommittableButtonGroup : public UCommonButtonGroup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCommittableButtonGroup");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionBuildSquadWidget
// 0x0060 (0x0440 - 0x03E0)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x03E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionBuildSquadWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionDetailsWidget
// 0x0040 (0x0278 - 0x0238)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0240(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderSlotWidget
// 0x0000 (0x0238 - 0x0238)
class UFortDefenderSlotWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSlotWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionExpiresWidget
// 0x0010 (0x0248 - 0x0238)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionExpiresWidget");
		return ptr;
	}


	void SetData();
	void OnExpeditionExpirationUpdated();
};


// Class FortniteUI.FortExpeditionListItemWidget
// 0x0018 (0x08B8 - 0x08A0)
class UFortExpeditionListItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x08A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionListItemWidget");
		return ptr;
	}


	void OnItemChanged();
};


// Class FortniteUI.FortExpeditionListViewWidget
// 0x0038 (0x0270 - 0x0238)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionListViewWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionMasterWidget
// 0x0080 (0x0460 - 0x03E0)
class UFortExpeditionMasterWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionMasterWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionOverviewWidget
// 0x0028 (0x0260 - 0x0238)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionOverviewWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionPickVehicleWidget
// 0x0010 (0x03F0 - 0x03E0)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionPickVehicleWidget");
		return ptr;
	}


	void SetData();
};


// Class FortniteUI.FortExpeditionReturnsWidget
// 0x0010 (0x0248 - 0x0238)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>          Item;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionReturnsWidget");
		return ptr;
	}


	void SetData();
	void OnExpeditionInProgressUpdated();
};


// Class FortniteUI.FortExpeditionRewardsWidget
// 0x0028 (0x0260 - 0x0238)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionRewardsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionSummaryWidget
// 0x0040 (0x0278 - 0x0238)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0238(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionSummaryWidget");
		return ptr;
	}

};


// Class FortniteUI.FortExpeditionUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionUtilities");
		return ptr;
	}


	void STATIC_TotalUnseenExpeditionsForTab(class UWidget* Widget);
	void STATIC_IsSquadOnExpedition(class UWidget* Widget);
	void STATIC_GetVehicleTagRequiredForExpedition();
	void STATIC_GetVehicleTagFromSquadId();
	void STATIC_GetTotalExpeditionVehiclesAvailable(class UWidget* Widget);
	void STATIC_GetMatchedCriteriaTags();
	void STATIC_GetExpeditionSquadsThatMatchRequirements();
	void STATIC_GetExpeditionSquadPower();
	void STATIC_GetAllExpeditionSquadIds();
	void STATIC_CalculateTotalPower();
	void STATIC_CalculateGlobalAndItemRatingModValuesBP();
	void STATIC_CalculateExpeditionPercentageChanceForSuccess();
	void STATIC_AreExpeditionsUnlocked();
	void STATIC_AreAnyExpeditionsComplete(class UWidget* Widget);
};


// Class FortniteUI.FortExpeditionVehicleTileItemWidget
// 0x0010 (0x08B0 - 0x08A0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortExpeditionVehicleTileItemWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasEntityInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSkillTreeCanvasEntityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasEntityInterface");
		return ptr;
	}


	void PlayOutroTransitionBP();
	void PlayIntroTransitionBP();
};


// Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry
// 0x0070 (0x0098 - 0x0028)
class UFortSkillTreeNodeDisplayDataRegistry : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry");
		return ptr;
	}

};


// Class FortniteUI.FortBaseCanvasNode
// 0x0028 (0x02A8 - 0x0280)
class UFortBaseCanvasNode : public UFortBaseCanvasEntity
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0280(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBaseCanvasNode");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasNode
// 0x0028 (0x08C8 - 0x08A0)
class UFortSkillTreeCanvasNode : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x08A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasNode");
		return ptr;
	}

};


// Class FortniteUI.FortKeybindWidget
// 0x0058 (0x0290 - 0x0238)
class UFortKeybindWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0238(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortKeybindWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemInspectionScreen
// 0x0010 (0x03F0 - 0x03E0)
class UFortItemInspectionScreen : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemInspectionScreen");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeViewer
// 0x00D0 (0x04B0 - 0x03E0)
class UFortSkillTreeViewer : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x03E0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeViewer");
		return ptr;
	}

};


// Class FortniteUI.FortUIDataConfiguration
// 0x2AC0 (0x2AE8 - 0x0028)
class UFortUIDataConfiguration : public UPrimaryDataAsset
{
public:
	struct FString                                     DefaultUIDataConfigurationPath;                           // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     MobileUIDataConfigurationPath;                            // 0x0038(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x2AA0];                                    // 0x0048(0x2AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIDataConfiguration");
		return ptr;
	}

};


// Class FortniteUI.FortFrontEndContext
// 0x0240 (0x0268 - 0x0028)
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0028(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFrontEndContext");
		return ptr;
	}

};


// Class FortniteUI.FortGridPickerTile
// 0x0010 (0x0250 - 0x0240)
class UFortGridPickerTile : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerTile");
		return ptr;
	}

};


// Class FortniteUI.FortGridWidgetBase
// 0x0150 (0x0280 - 0x0130)
class UFortGridWidgetBase : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0130(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortGridPickerButton
// 0x0048 (0x02C8 - 0x0280)
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0280(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerButton");
		return ptr;
	}

};


// Class FortniteUI.FortGridWidget
// 0x0010 (0x0290 - 0x0280)
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHeroManagementContext
// 0x00B0 (0x00D8 - 0x0028)
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroManagementContext");
		return ptr;
	}

};


// Class FortniteUI.FortHeroNotificationHandler
// 0x0010 (0x01F0 - 0x01E0)
class UFortHeroNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortHero*                                   Hero;                                                     // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroNotificationHandler");
		return ptr;
	}


	void OnFortItemUpdated();
};


// Class FortniteUI.FortHeroSupportPerkWidget
// 0x0388 (0x05B8 - 0x0230)
class UFortHeroSupportPerkWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0230(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSupportPerkWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHomebaseNodeItemUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomebaseNodeItemUtilities");
		return ptr;
	}


	void STATIC_TryGetHomebaseNodeState(class UWidget* Widget);
	void STATIC_IsSquadSlotUnseen();
	void STATIC_IsHomebaseNodeItemUnseenForTagContainer();
	void STATIC_GetHomebaseNodePageNames();
	void STATIC_GetHomebaseNodeItems();
	void STATIC_GetHomebaseNodeItemNameForTagContainer();
	void STATIC_GetHomebaseNodeItemForTagContainer();
	void STATIC_GetHomebaseNodeItemForSquadSlot();
	void STATIC_GetHomebaseNodeItem();
	void STATIC_AreAnyHomebaseNodeItemsUnseenForSquadType();
	void STATIC_AreAnyHomebaseNodeItemsUnseenForSquadId();
};


// Class FortniteUI.FortHomebaseUIContext
// 0x0068 (0x0090 - 0x0028)
class UFortHomebaseUIContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomebaseUIContext");
		return ptr;
	}

};


// Class FortniteUI.FortHomeCMSScreenBase
// 0x0000 (0x0460 - 0x0460)
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHomeCMSScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortHUDCenterPopupMessageWidget
// 0x0030 (0x0268 - 0x0238)
class UFortHUDCenterPopupMessageWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDCenterPopupMessageWidget");
		return ptr;
	}

};


// Class FortniteUI.AthenaHUDGamePhaseChangingBase
// 0x0000 (0x0260 - 0x0260)
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDGamePhaseChangingBase");
		return ptr;
	}


	void UpdateMessaging();
	void HandleGamePhaseStepChanged();
	void GamePhaseStepChanged();
};


// Class FortniteUI.FortHUDContext
// 0x0548 (0x0570 - 0x0028)
class UFortHUDContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x548];                                     // 0x0028(0x0548) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDContext");
		return ptr;
	}

};


// Class FortniteUI.AthenaHUDPlayerActionAlertBase
// 0x0020 (0x0280 - 0x0260)
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0260(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDPlayerActionAlertBase");
		return ptr;
	}

};


// Class FortniteUI.FortActorIndicatorWidget
// 0x0038 (0x0298 - 0x0260)
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0260(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActorIndicatorWidget");
		return ptr;
	}

};


// Class FortniteUI.AthenaPlayersLeftBase
// 0x0008 (0x0268 - 0x0260)
class UAthenaPlayersLeftBase : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaPlayersLeftBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaLevelBarBase
// 0x0000 (0x0298 - 0x0298)
class UAthenaLevelBarBase : public UFortActorIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaLevelBarBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaPostMatchScreenBase
// 0x0000 (0x0298 - 0x0298)
class UAthenaPostMatchScreenBase : public UFortActorIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaPostMatchScreenBase");
		return ptr;
	}

};


// Class FortniteUI.AthenaTeamMemberIndicatorBase
// 0x0000 (0x0298 - 0x0298)
class UAthenaTeamMemberIndicatorBase : public UFortActorIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaTeamMemberIndicatorBase");
		return ptr;
	}

};


// Class FortniteUI.FortCraftingBarWidget
// 0x0028 (0x0288 - 0x0260)
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCraftingBarWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHUDEquipProgressBase
// 0x0000 (0x0260 - 0x0260)
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDEquipProgressBase");
		return ptr;
	}

};


// Class FortniteUI.FortMissionTrackerList
// 0x0090 (0x02C8 - 0x0238)
class UFortMissionTrackerList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0238(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerList");
		return ptr;
	}

};


// Class FortniteUI.FortQuestTrackerList
// 0x0038 (0x0270 - 0x0238)
class UFortQuestTrackerList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerList");
		return ptr;
	}

};


// Class FortniteUI.FortMissionTracker
// 0x0030 (0x0290 - 0x0260)
class UFortMissionTracker : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0260(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTracker");
		return ptr;
	}

};


// Class FortniteUI.FortReticle
// 0x0028 (0x0288 - 0x0260)
class UFortReticle : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortReticle");
		return ptr;
	}


	void OnWeaponEquipped();
	void OnReticleColorChanged();
	void OnPawnSet();
	void OnContextualReticleChanged();
};


// Class FortniteUI.FortHUDTargetUnderReticleWidget
// 0x0020 (0x0258 - 0x0238)
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0238(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDTargetUnderReticleWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHUDVisibilityData
// 0x0040 (0x0068 - 0x0028)
class UFortHUDVisibilityData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDVisibilityData");
		return ptr;
	}

};


// Class FortniteUI.FortIconWithLabel
// 0x0020 (0x0138 - 0x0118)
class UFortIconWithLabel : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortIconWithLabel");
		return ptr;
	}

};


// Class FortniteUI.FortHUDObjectiveSizeInterface
// 0x0000 (0x0028 - 0x0028)
class UFortHUDObjectiveSizeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHUDObjectiveSizeInterface");
		return ptr;
	}


	void GetHeightEstimate();
};


// Class FortniteUI.FortHeroSupportPerkIndicator
// 0x0010 (0x0148 - 0x0138)
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSupportPerkIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortItemCategoryIndicator
// 0x0010 (0x0148 - 0x0138)
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCategoryIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortInventoryContext
// 0x0180 (0x01A8 - 0x0028)
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0028(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInventoryContext");
		return ptr;
	}

};


// Class FortniteUI.FortItemCardMaterialPooler
// 0x00F8 (0x0120 - 0x0028)
class UFortItemCardMaterialPooler : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCardMaterialPooler");
		return ptr;
	}

};


// Class FortniteUI.FortItemCardUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortItemCardUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCardUtilities");
		return ptr;
	}


	void STATIC_GetCardDimensions(EFortItemType ItemType);
};


// Class FortniteUI.FortItemCountTextBlock
// 0x0018 (0x0338 - 0x0320)
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0320(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCountTextBlock");
		return ptr;
	}

};


// Class FortniteUI.FortItemDetailElementWidget
// 0x0040 (0x0278 - 0x0238)
class UFortItemDetailElementWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0238(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailElementWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemDetailsHostPanel
// 0x0068 (0x02A0 - 0x0238)
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0238(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsHostPanel");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotItemDetailElementWidget
// 0x0028 (0x02A0 - 0x0278)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0278(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemDetailElementWidget");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP();
	void IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	void GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP();
};


// Class FortniteUI.FortSquadSlotItemDetailsHostPanel
// 0x0028 (0x02C8 - 0x02A0)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemDetailsHostPanel");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP();
	void IsSquadSlotLockedBP();
	void GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP();
};


// Class FortniteUI.FortItemCooldownWidget
// 0x0090 (0x02C8 - 0x0238)
class UFortItemCooldownWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0238(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCooldownWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemDetailsActivatablePanel
// 0x0040 (0x0420 - 0x03E0)
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemDetailsModeActivatablePanel
// 0x0010 (0x0430 - 0x0420)
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsModeActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemCompareModeActivatablePanel
// 0x0010 (0x0430 - 0x0420)
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCompareModeActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemMulchModeActivatablePanel
// 0x0010 (0x0430 - 0x0420)
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemMulchModeActivatablePanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemManagementItemDetailsPanel
// 0x0018 (0x02B8 - 0x02A0)
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementItemDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemManagementMulchDetailsPanel
// 0x0018 (0x0250 - 0x0238)
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementMulchDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortItemManagementModeDetailsPanel
// 0x0030 (0x0268 - 0x0238)
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementModeDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// 0x0028 (0x02C8 - 0x02A0)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemDisplayNameText
// 0x0030 (0x02C8 - 0x0298)
class UFortItemDisplayNameText : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0298(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDisplayNameText");
		return ptr;
	}

};


// Class FortniteUI.FortItemIcon
// 0x00F0 (0x0208 - 0x0118)
class UFortItemIcon : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0118(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemIcon");
		return ptr;
	}

};


// Class FortniteUI.FortItemManagementInventoryPanel
// 0x00D8 (0x0310 - 0x0238)
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0238(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementInventoryPanel");
		return ptr;
	}

};


// Class FortniteUI.FortCollectionBookPicker
// 0x0020 (0x02C0 - 0x02A0)
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCollectionBookPicker");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderSlotItemPicker
// 0x0008 (0x02A8 - 0x02A0)
class UFortDefenderSlotItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSlotItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotItemPicker
// 0x00E0 (0x0380 - 0x02A0)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x02A0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemPicker");
		return ptr;
	}


	void SetIdOfSquadSlotToManageBP();
	void GetIdOfSquadSlotToManageBP();
};


// Class FortniteUI.FortTransformKeyPicker
// 0x0060 (0x0300 - 0x02A0)
class UFortTransformKeyPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformKeyPicker");
		return ptr;
	}


	void RebuildTransformKeys();
};


// Class FortniteUI.FortTransformSlotItemPicker
// 0x0008 (0x02A8 - 0x02A0)
class UFortTransformSlotItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformSlotItemPicker");
		return ptr;
	}


	void RebuildSlottableItems();
};


// Class FortniteUI.FortTrapDefenderItemPicker
// 0x0070 (0x0310 - 0x02A0)
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTrapDefenderItemPicker");
		return ptr;
	}

};


// Class FortniteUI.FortOutpostStorageItemPicker
// 0x0060 (0x0300 - 0x02A0)
class UFortOutpostStorageItemPicker : public UFortItemPickerBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOutpostStorageItemPicker");
		return ptr;
	}


	void UseFilters();
	void UseFilter(EFortItemType ItemType);
};


// Class FortniteUI.FortItemQuantityListEntryBase
// 0x0028 (0x0260 - 0x0238)
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemQuantityListEntryBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemQuantityListBase
// 0x0080 (0x02B8 - 0x0238)
class UFortItemQuantityListBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0238(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemQuantityListBase");
		return ptr;
	}

};


// Class FortniteUI.FortItemRatingIndicator
// 0x0398 (0x05D0 - 0x0238)
class UFortItemRatingIndicator : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x398];                                     // 0x0238(0x0398) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemRatingIndicator");
		return ptr;
	}

};


// Class FortniteUI.AthenaInventoryFortItemTileButtonBase
// 0x0000 (0x08D0 - 0x08D0)
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaInventoryFortItemTileButtonBase");
		return ptr;
	}


	void HandleEquipSlotChanged();
};


// Class FortniteUI.FortItemManagementItemTileButton
// 0x0040 (0x0910 - 0x08D0)
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x08D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemManagementItemTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderItemTileButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortDefenderItemTileButton : public UFortItemPickerButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderItemTileButton");
		return ptr;
	}


	void HandleEquipSlotChanged();
};


// Class FortniteUI.FortSquadSlotItemPickerTileButton
// 0x0018 (0x08E8 - 0x08D0)
class UFortSquadSlotItemPickerTileButton : public UFortItemPickerButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotItemPickerTileButton");
		return ptr;
	}


	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad();
	void GetSlottingRestrictionReasons();
};


// Class FortniteUI.FortTransformKeyPickerTileButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortTransformKeyPickerTileButton : public UFortItemPickerButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformKeyPickerTileButton");
		return ptr;
	}

};


// Class FortniteUI.AthenaCustomizationPickerTileButton
// 0x0008 (0x08D8 - 0x08D0)
class UAthenaCustomizationPickerTileButton : public UFortItemPickerButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaCustomizationPickerTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortTransformSlotItemPickerTileButton
// 0x0000 (0x08D0 - 0x08D0)
class UFortTransformSlotItemPickerTileButton : public UFortItemPickerButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTransformSlotItemPickerTileButton");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderItemTileView
// 0x0000 (0x0450 - 0x0450)
class UFortDefenderItemTileView : public UFortItemTileView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderItemTileView");
		return ptr;
	}

};


// Class FortniteUI.FortItemTransform
// 0x0000 (0x03E0 - 0x03E0)
class UFortItemTransform : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemTransform");
		return ptr;
	}


	void ProcessPendingSeenTransformKeys();
};


// Class FortniteUI.FortItemView
// 0x00E8 (0x0320 - 0x0238)
class UFortItemView : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0238(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemView");
		return ptr;
	}

};


// Class FortniteUI.FortJournalQuestDetails
// 0x0008 (0x0240 - 0x0238)
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortJournalQuestDetails");
		return ptr;
	}

};


// Class FortniteUI.FortJournalQuestProgressBar
// 0x0010 (0x0248 - 0x0238)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortQuestObjectiveInfo>      QuestObjectiveInfo;                                       // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortJournalQuestProgressBar");
		return ptr;
	}


	void HandleNewQuestObjectiveBP();
	void GetProgressDetails();
};


// Class FortniteUI.FortLeaderboardContext
// 0x0000 (0x0028 - 0x0028)
class UFortLeaderboardContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLeaderboardContext");
		return ptr;
	}


	void CanShowStats();
	void CanShowLeaderboards();
};


// Class FortniteUI.FortLeaderboardEntryWidget
// 0x0010 (0x08B0 - 0x08A0)
class UFortLeaderboardEntryWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLeaderboardEntryWidget");
		return ptr;
	}

};


// Class FortniteUI.FortLegacySlateBridgeWidget
// 0x0018 (0x0140 - 0x0128)
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLegacySlateBridgeWidget");
		return ptr;
	}

};


// Class FortniteUI.FortListView
// 0x0068 (0x0180 - 0x0118)
class UFortListView : public UTableViewBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0118(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortListView");
		return ptr;
	}

};


// Class FortniteUI.FortLiveStreamGrantWindowExpires
// 0x0000 (0x0238 - 0x0238)
class UFortLiveStreamGrantWindowExpires : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLiveStreamGrantWindowExpires");
		return ptr;
	}

};


// Class FortniteUI.FortLobby
// 0x0050 (0x0430 - 0x03E0)
class UFortLobby : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLobby");
		return ptr;
	}

};


// Class FortniteUI.FortLoginAccountSelect
// 0x0010 (0x03F0 - 0x03E0)
class UFortLoginAccountSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLoginAccountSelect");
		return ptr;
	}

};


// Class FortniteUI.FortMainTabsScreenBase
// 0x0070 (0x0450 - 0x03E0)
class UFortMainTabsScreenBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMainTabsScreenBase");
		return ptr;
	}

};


// Class FortniteUI.FortMaterialProgressBarStyle
// 0x0118 (0x0140 - 0x0028)
class UFortMaterialProgressBarStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMaterialProgressBarStyle");
		return ptr;
	}

};


// Class FortniteUI.FortMaterialProgressBar
// 0x0158 (0x0390 - 0x0238)
class UFortMaterialProgressBar : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0238(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMaterialProgressBar");
		return ptr;
	}

};


// Class FortniteUI.FortMicIndicatorWidget
// 0x0028 (0x0260 - 0x0238)
class UFortMicIndicatorWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMicIndicatorWidget");
		return ptr;
	}


	void SetPlayerUniqueId();
	void OnPlayerTalkingChanged();
	void OnPlayerMuted();
	void OnPlayerMicAvailable();
};


// Class FortniteUI.FortMissionSelect
// 0x0060 (0x0440 - 0x03E0)
class UFortMissionSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionSelect");
		return ptr;
	}

};


// Class FortniteUI.FortMissionTrackerEntry
// 0x00A8 (0x02E0 - 0x0238)
class UFortMissionTrackerEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0238(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerEntry");
		return ptr;
	}

};


// Class FortniteUI.FortMissionTrackerSubEntry
// 0x0038 (0x0270 - 0x0238)
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMissionTrackerSubEntry");
		return ptr;
	}

};


// Class FortniteUI.FortModalContainerData
// 0x0010 (0x0038 - 0x0028)
class UFortModalContainerData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortModalContainerData");
		return ptr;
	}

};


// Class FortniteUI.FortModalContainerWidget
// 0x0058 (0x0170 - 0x0118)
class UFortModalContainerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortModalContainerWidget");
		return ptr;
	}

};


// Class FortniteUI.FortMtxStoreOfferBase
// 0x00A8 (0x0948 - 0x08A0)
class UFortMtxStoreOfferBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x08A0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxStoreOfferBase");
		return ptr;
	}

};


// Class FortniteUI.FortMtxStoreRootBase
// 0x0050 (0x0430 - 0x03E0)
class UFortMtxStoreRootBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMtxStoreRootBase");
		return ptr;
	}

};


// Class FortniteUI.FortLevelIndicator
// 0x0078 (0x0190 - 0x0118)
class UFortLevelIndicator : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0118(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortLevelIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortMultiSizeImage
// 0x0388 (0x04A0 - 0x0118)
class UFortMultiSizeImage : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0118(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMultiSizeImage");
		return ptr;
	}

};


// Class FortniteUI.FortComparisonResultIndicator
// 0x0008 (0x04A8 - 0x04A0)
class UFortComparisonResultIndicator : public UFortMultiSizeImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortComparisonResultIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortSimpleItemConditionIconIndicator
// 0x0008 (0x04A8 - 0x04A0)
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSimpleItemConditionIconIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortItemDetailsPanel
// 0x0028 (0x0260 - 0x0238)
class UFortItemDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortEvolveIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortEvolveIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortEvolveIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortFavoriteIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortFavoriteIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortFavoriteIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortInventoryOverflowIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInventoryOverflowIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortTrackedIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortTrackedIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTrackedIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortUpgradeIndicator
// 0x0000 (0x04A8 - 0x04A8)
class UFortUpgradeIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUpgradeIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortNumericTextBlock
// 0x0050 (0x0298 - 0x0248)
class UFortNumericTextBlock : public UTextBlock
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0248(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNumericTextBlock");
		return ptr;
	}

};


// Class FortniteUI.FortOptionsMenuInputData
// 0x0058 (0x0080 - 0x0028)
class UFortOptionsMenuInputData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsMenuInputData");
		return ptr;
	}

};


// Class FortniteUI.FortOptionsTab
// 0x0010 (0x0248 - 0x0238)
class UFortOptionsTab : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortOptionsTab");
		return ptr;
	}

};


// Class FortniteUI.FortAccountOptions
// 0x0000 (0x0248 - 0x0248)
class UFortAccountOptions : public UFortOptionsTab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAccountOptions");
		return ptr;
	}

};


// Class FortniteUI.FortAudioOptions
// 0x0000 (0x0248 - 0x0248)
class UFortAudioOptions : public UFortOptionsTab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAudioOptions");
		return ptr;
	}


	void SoundFXVolumeChanged();
	void ShowQuality();
	void ShowChatVolume();
	void SetVoiceChatPTTEnabled();
	void SetVoiceChatEnabled();
	void SetSubtitlesEnabled();
	void SetQuality();
	void MusicVolumeChanged();
	void GetVoiceChatPTTEnabled();
	void GetVoiceChatEnabled();
	void GetSubtitlesEnabled();
	void GetSoundFXVolumeValue();
	void GetQuality();
	void GetMusicVolumeValue();
	void GetDialogVolumeValue();
	void GetChatVolumeValue();
	void DialogVolumeChanged();
	void ChatVolumeChanged();
};


// Class FortniteUI.FortInputOptions
// 0x0038 (0x0280 - 0x0248)
class UFortInputOptions : public UFortOptionsTab
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0248(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortInputOptions");
		return ptr;
	}

};


// Class FortniteUI.FortGameOptions
// 0x0040 (0x0288 - 0x0248)
class UFortGameOptions : public UFortOptionsTab
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0248(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGameOptions");
		return ptr;
	}

};


// Class FortniteUI.FortVideoOptions
// 0x0060 (0x02A8 - 0x0248)
class UFortVideoOptions : public UFortOptionsTab
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0248(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortVideoOptions");
		return ptr;
	}


	void WindowModeChanged();
	void ViewDistanceQualityChanged();
	void UseVsyncChanged(bool IsChecked);
	void TextureQualityChanged();
	void ShowGrassChanged(bool IsChecked);
	void ShowFPSChanged(bool IsChecked);
	void ShadowQualityChanged();
	void ResolutionChanged();
	void PostProcessQualityChanged();
	void OnQualitySelectorChanged();
	void MotionBlurChanged(bool IsChecked);
	void IsWindowedFullscreen();
	void InitializeValues();
	void GetViewDistanceQuality();
	void GetUseVsync();
	void GetTextureQuality();
	void GetShowGrass();
	void GetShowFPS();
	void GetShadowQuality();
	void GetPostProcessQuality();
	void GetPossibleWindowModes();
	void GetPossibleFPS();
	void GetPossibleDisplayResolutions();
	void GetMotionBlur();
	void GetEffectsQuality();
	void GetDiscreteResolutionQuality();
	void GetCurrentWindowMode();
	void GetCurrentFPS();
	void GetCurrentDisplayResolution();
	void GetAntiAliasingQuality();
	void FrameRateLimitChanged(int FrameRateLimit);
	void EffectsQualityChanged();
	void DiscreteResolutionQualityChanged();
	void AntiAliasingQualityChanged();
};


// Class FortniteUI.FortPartyTreeItemBase
// 0x0018 (0x08B8 - 0x08A0)
class UFortPartyTreeItemBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPartyTreeItemBase");
		return ptr;
	}

};


// Class FortniteUI.FortPerkWidget_NUI
// 0x0098 (0x02D0 - 0x0238)
class UFortPerkWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0238(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortPerkTierWidget_NUI
// 0x0050 (0x0288 - 0x0238)
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0238(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkTierWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortPerksWidget_NUI
// 0x0078 (0x02B0 - 0x0238)
class UFortPerksWidget_NUI : public UCommonUserWidget
{
public:
	class UFortHero*                                   Hero;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortPerksWidgetState                              State;                                                    // 0x0240(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6F];                                      // 0x0241(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerksWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortPickerContext
// 0x0100 (0x0128 - 0x0028)
class UFortPickerContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPickerContext");
		return ptr;
	}

};


// Class FortniteUI.FortPlayerProfileBannerEditor
// 0x0048 (0x0280 - 0x0238)
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0238(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileBannerEditor");
		return ptr;
	}

};


// Class FortniteUI.FortPlayerProfileBannerEditorTile
// 0x0010 (0x08B0 - 0x08A0)
class UFortPlayerProfileBannerEditorTile : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A0(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UFortItem>                    Item;                                                     // 0x08A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerProfileBannerEditorTile");
		return ptr;
	}

};


// Class FortniteUI.FortPlayerTrackerBase
// 0x0028 (0x0260 - 0x0238)
class UFortPlayerTrackerBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPlayerTrackerBase");
		return ptr;
	}

};


// Class FortniteUI.FortPickerData
// 0x00B0 (0x00D8 - 0x0028)
class UFortPickerData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPickerData");
		return ptr;
	}

};


// Class FortniteUI.FortQuestNotificationHandler
// 0x0010 (0x01F0 - 0x01E0)
class UFortQuestNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestNotificationHandler");
		return ptr;
	}

};


// Class FortniteUI.FortQuestScreen
// 0x0000 (0x03E0 - 0x03E0)
class UFortQuestScreen : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestScreen");
		return ptr;
	}


	void ProcessPendingSeenQuestItems();
};


// Class FortniteUI.FortQuestTrackerEntry
// 0x0060 (0x0298 - 0x0238)
class UFortQuestTrackerEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0238(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerEntry");
		return ptr;
	}

};


// Class FortniteUI.FortQuestExpiresWidget
// 0x0010 (0x0248 - 0x0238)
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>               Item;                                                     // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestExpiresWidget");
		return ptr;
	}


	void SetData();
	void OnQuestExpirationUpdated();
};


// Class FortniteUI.FortQuestTreeItemWidget
// 0x0010 (0x08B0 - 0x08A0)
class UFortQuestTreeItemWidget : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTreeItemWidget");
		return ptr;
	}

};


// Class FortniteUI.FortRejoinWindowBase
// 0x0010 (0x03F0 - 0x03E0)
class UFortRejoinWindowBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRejoinWindowBase");
		return ptr;
	}

};


// Class FortniteUI.FortResultsSummaryScreenWidget
// 0x0000 (0x0238 - 0x0238)
class UFortResultsSummaryScreenWidget : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsSummaryScreenWidget");
		return ptr;
	}


	void GetTotalScoreSortedScoreIndices();
};


// Class FortniteUI.FortResultsTeleportScreenWidget
// 0x0068 (0x02A0 - 0x0238)
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0238(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsTeleportScreenWidget");
		return ptr;
	}

};


// Class FortniteUI.FortQuestTrackerSubEntry
// 0x0040 (0x0278 - 0x0238)
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0238(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestTrackerSubEntry");
		return ptr;
	}

};


// Class FortniteUI.FortRewardNotificationData
// 0x0008 (0x0030 - 0x0028)
class UFortRewardNotificationData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardCollectionBookData
// 0x0070 (0x00A0 - 0x0030)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardCollectionBookData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardEpicQuestData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardEpicQuestData");
		return ptr;
	}


	void GetIconBrush();
};


// Class FortniteUI.FortRewardExpeditionData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardExpeditionData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardMissionAlertData
// 0x0000 (0x0030 - 0x0030)
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardMissionAlertData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardMissionData
// 0x0000 (0x0030 - 0x0030)
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardMissionData");
		return ptr;
	}

};


// Class FortniteUI.FortRewardQuestData
// 0x0008 (0x0038 - 0x0030)
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                              Quest;                                                    // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardQuestData");
		return ptr;
	}


	void GetIconBrush();
};


// Class FortniteUI.FortRewardNotificationWidget
// 0x01B0 (0x0590 - 0x03E0)
class UFortRewardNotificationWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x03E0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationWidget");
		return ptr;
	}

};


// Class FortniteUI.FortResultsWidget
// 0x00C0 (0x04A0 - 0x03E0)
class UFortResultsWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03E0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortResultsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortRewardNotificationSubWidget
// 0x0028 (0x0260 - 0x0238)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNotificationSubWidget");
		return ptr;
	}

};


// Class FortniteUI.FortRewardConversationWidget
// 0x0000 (0x0260 - 0x0260)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardConversationWidget");
		return ptr;
	}


	void IsValidConversation();
	void GetDataFromSentence();
};


// Class FortniteUI.FortRewardExpeditionWidget
// 0x0068 (0x02C8 - 0x0260)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0260(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardExpeditionWidget");
		return ptr;
	}

};


// Class FortniteUI.FortRewardNewQuestWidget
// 0x0000 (0x0260 - 0x0260)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRewardNewQuestWidget");
		return ptr;
	}


	void IsValidConversation();
	void GetDataFromSentence();
};


// Class FortniteUI.FortRichTextBlock
// 0x0A28 (0x0B40 - 0x0118)
class UFortRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xA28];                                     // 0x0118(0x0A28) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortRichTextBlock");
		return ptr;
	}

};


// Class FortniteUI.FortSignInWidget
// 0x0030 (0x0410 - 0x03E0)
class UFortSignInWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSignInWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasEditorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSkillTreeCanvasEditorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasEditorInterface");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvasSlot
// 0x0018 (0x0050 - 0x0038)
class UFortSkillTreeCanvasSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvasSlot");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeCanvas
// 0x01A0 (0x02D0 - 0x0130)
class UFortSkillTreeCanvas : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0130(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeCanvas");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeLandingPage
// 0x0020 (0x0400 - 0x03E0)
class UFortSkillTreeLandingPage : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeLandingPage");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreeNodeDetailsPanel
// 0x0010 (0x0248 - 0x0238)
class UFortSkillTreeNodeDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreeNodeDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreePageWidgetRegistry
// 0x0070 (0x0098 - 0x0028)
class UFortSkillTreePageWidgetRegistry : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageWidgetRegistry");
		return ptr;
	}

};


// Class FortniteUI.FortSocialListView
// 0x07C8 (0x08E0 - 0x0118)
class UFortSocialListView : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x7C8];                                     // 0x0118(0x07C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialListView");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreePageSelectorButton
// 0x0018 (0x08B8 - 0x08A0)
class UFortSkillTreePageSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x08A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageSelectorButton");
		return ptr;
	}

};


// Class FortniteUI.FortSplashScreenWidget
// 0x0020 (0x0400 - 0x03E0)
class UFortSplashScreenWidget : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSplashScreenWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSquadIcon
// 0x0018 (0x0250 - 0x0238)
class UFortSquadIcon : public UCommonUserWidget
{
public:
	struct FName                                       Name;                                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadIcon");
		return ptr;
	}

};


// Class FortniteUI.FortSquadLandingPageDefenderSummary
// 0x0008 (0x0240 - 0x0238)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSummary");
		return ptr;
	}


	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP();
	void HandleAddDefenderSquadDetailsBP();
};


// Class FortniteUI.FortSquadLandingPageDefenderSquadDetails
// 0x0010 (0x0248 - 0x0238)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSquadDetails");
		return ptr;
	}

};


// Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked
// 0x0008 (0x0240 - 0x0238)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked");
		return ptr;
	}

};


// Class FortniteUI.FortSquadLandingPageSurvivorSummary
// 0x0088 (0x02C0 - 0x0238)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0238(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadLandingPageSurvivorSummary");
		return ptr;
	}

};


// Class FortniteUI.FortSkillTreePageWidget
// 0x00F8 (0x0330 - 0x0238)
class UFortSkillTreePageWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0238(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSkillTreePageWidget");
		return ptr;
	}

};


// Class FortniteUI.FortDefenderSquadSelectorButton
// 0x0000 (0x08C0 - 0x08C0)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortDefenderSquadSelectorButton");
		return ptr;
	}


	void TryGetTheaterUniqueId();
	void TryGetPowerLevel();
};


// Class FortniteUI.FortSurvivorSquadSelectorButton
// 0x0020 (0x08E0 - 0x08C0)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadSelectorButton");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotDetailsPanel
// 0x0060 (0x0298 - 0x0238)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0238(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotDetailsPanel");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotsView
// 0x0088 (0x02C0 - 0x0238)
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0238(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotsView");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotWidget
// 0x00F8 (0x0210 - 0x0118)
class UFortSquadSlotWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0118(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSquadStatDetailsWidget
// 0x0030 (0x0268 - 0x0238)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatDetailsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPerkWidget
// 0x0088 (0x02C8 - 0x0240)
class UFortPerkWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0240(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkWidget");
		return ptr;
	}

};


// Class FortniteUI.FortHeroSquadBonusPerksWidgetBase
// 0x0010 (0x0278 - 0x0268)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortHeroSquadBonusPerksWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortSurvivorSquadStatMatchBase
// 0x03A8 (0x05E0 - 0x0238)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3A8];                                     // 0x0238(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadStatMatchBase");
		return ptr;
	}

};


// Class FortniteUI.FortSurvivorSquadStatMatchesBase
// 0x0030 (0x0298 - 0x0268)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0268(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadStatMatchesBase");
		return ptr;
	}

};


// Class FortniteUI.FortSquadSlotSelectorButton
// 0x0058 (0x08F8 - 0x08A0)
class UFortSquadSlotSelectorButton : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x08A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadSlotSelectorButton");
		return ptr;
	}

};


// Class FortniteUI.FortSquadStatValueWithIcon
// 0x0058 (0x0290 - 0x0238)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0238(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatValueWithIcon");
		return ptr;
	}

};


// Class FortniteUI.FortStatIcon
// 0x0030 (0x0268 - 0x0238)
class UFortStatIcon : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStatIcon");
		return ptr;
	}

};


// Class FortniteUI.FortStoreContext
// 0x00A8 (0x00D0 - 0x0028)
class UFortStoreContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreContext");
		return ptr;
	}

};


// Class FortniteUI.FortStoreRootBase
// 0x0010 (0x03F0 - 0x03E0)
class UFortStoreRootBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreRootBase");
		return ptr;
	}

};


// Class FortniteUI.StoreCardObject
// 0x0018 (0x0040 - 0x0028)
class UStoreCardObject : public UObject
{
public:
	struct FCard                                       Card;                                                     // 0x0028(0x0018) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.StoreCardObject");
		return ptr;
	}

};


// Class FortniteUI.FortStoreSummary
// 0x0020 (0x0400 - 0x03E0)
class UFortStoreSummary : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStoreSummary");
		return ptr;
	}

};


// Class FortniteUI.FortSquadStatsWidgetBase
// 0x0038 (0x0270 - 0x0238)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadStatsWidgetBase");
		return ptr;
	}

};


// Class FortniteUI.FortSubGameSelectButtonBase
// 0x0000 (0x0238 - 0x0238)
class UFortSubGameSelectButtonBase : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSubGameSelectButtonBase");
		return ptr;
	}


	void UpdateButtonState();
};


// Class FortniteUI.FortSubGameSelectBase
// 0x0000 (0x03E0 - 0x03E0)
class UFortSubGameSelectBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSubGameSelectBase");
		return ptr;
	}


	void GetShortDescription();
	void GetFullDescription();
};


// Class FortniteUI.FortSurvivorSquadSummaryStatItem
// 0x0020 (0x0258 - 0x0238)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0238(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSurvivorSquadSummaryStatItem");
		return ptr;
	}

};


// Class FortniteUI.FortSZAwareImage
// 0x0008 (0x0208 - 0x0200)
class UFortSZAwareImage : public UImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSZAwareImage");
		return ptr;
	}

};


// Class FortniteUI.FortTextStyleList
// 0x0008 (0x0240 - 0x0238)
class UFortTextStyleList : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTextStyleList");
		return ptr;
	}

};


// Class FortniteUI.FortTheaterSelect
// 0x0050 (0x0430 - 0x03E0)
class UFortTheaterSelect : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTheaterSelect");
		return ptr;
	}

};


// Class FortniteUI.FortTierIndicator
// 0x0020 (0x0138 - 0x0118)
class UFortTierIndicator : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTierIndicator");
		return ptr;
	}

};


// Class FortniteUI.FortTooltipUIContext
// 0x0000 (0x0028 - 0x0028)
class UFortTooltipUIContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTooltipUIContext");
		return ptr;
	}


	void GetUpgradeStats(class UObject* Object);
	void GetUIDataForTag();
	void GetTooltipStats(class UObject* Object);
	void GetTooltipStat(class UObject* Object);
	void GetTooltipAttributes(class UObject* Object);
	void GetDisplayNameAndMultiBrushForTag();
	void GetDescription(class UObject* Object);
	void GetComparisonStats(class UObject* Object);
	void GetCombinedDescription(class UObject* Object);
};


// Class FortniteUI.FortTwitchLogin
// 0x0058 (0x0290 - 0x0238)
class UFortTwitchLogin : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0238(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTwitchLogin");
		return ptr;
	}

};


// Class FortniteUI.FortUIBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_GetMetaStringOnOffer();
	void STATIC_GetMetaIntOnOffer();
	void STATIC_GetMetaBoolOnOffer();
	void STATIC_GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item);
	void STATIC_GetItemSmallPreviewImageBrush(class UFortItem* Item);
	void STATIC_GetItemDefinitionSmallPreviewImageMultiSizeBrush();
	void STATIC_GetItemDefinitionSmallPreviewImageBrush();
};


// Class FortniteUI.FortUIDataConfigurationContext
// 0x0000 (0x0028 - 0x0028)
class UFortUIDataConfigurationContext : public UBlueprintContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIDataConfigurationContext");
		return ptr;
	}


	void UseSpecificPinataWeapon();
	void IsLimitedToES2Features();
	void IsChatEnabled();
	void GetFrontEndFFSettings();
	void AreSocialFeaturesEnabled();
	void ArePartyFeaturesEnabled();
};


// Class FortniteUI.FortUIManagerWidget_NUI
// 0x01C8 (0x0400 - 0x0238)
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0238(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIManagerWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.FortTutorialContext
// 0x00C0 (0x00E8 - 0x0028)
class UFortTutorialContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortTutorialContext");
		return ptr;
	}

};


// Class FortniteUI.FortUIMessageManager
// 0x0080 (0x00A8 - 0x0028)
class UFortUIMessageManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMessageAvailable;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessageManager");
		return ptr;
	}

};


// Class FortniteUI.FortUIMessagesPageBase
// 0x0030 (0x0410 - 0x03E0)
class UFortUIMessagesPageBase : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessagesPageBase");
		return ptr;
	}

};


// Class FortniteUI.FortUINotificationQueue
// 0x0028 (0x0050 - 0x0028)
class UFortUINotificationQueue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUINotificationQueue");
		return ptr;
	}

};


// Class FortniteUI.FortUIRewardReport
// 0x0010 (0x0038 - 0x0028)
class UFortUIRewardReport : public UObject
{
public:
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIRewardReport");
		return ptr;
	}

};


// Class FortniteUI.FortUIScoreReport
// 0x0008 (0x0030 - 0x0028)
class UFortUIScoreReport : public UObject
{
public:
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIScoreReport");
		return ptr;
	}


	void IsLocalPlayer();
	void GetXpToCompleteLevel(int Level);
	void GetXpInfo();
	void GetTeamScore();
	void GetScoreReportIndicesByPlayerID();
	void GetScoreReportIndex();
	void GetPlayerScore();
	void GetPlayerName();
	void GetPlayerIDFromScoreReportIndex();
	void GetPlayerCount();
	void GetLevelProgress(int Level);
	void GetDifficultBonusScore();
	void GetDifficultBonusMultiplier();
	void GetCurrentPlayerPawn();
	void GetBadgeScore();
};


// Class FortniteUI.FortUIStateTrigger
// 0x0008 (0x0030 - 0x0028)
class UFortUIStateTrigger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateTrigger_Athena
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_Athena : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_Athena");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateTrigger_InGame
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_InGame");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateTrigger_Login
// 0x0000 (0x0030 - 0x0030)
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateTrigger_Login");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateWidget_NUI
// 0x0020 (0x0400 - 0x03E0)
class UFortUIStateWidget_NUI : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_NUI");
		return ptr;
	}

};


// Class FortniteUI.AthenaHUDBase
// 0x0000 (0x0400 - 0x0400)
class UAthenaHUDBase : public UFortUIStateWidget_NUI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.AthenaHUDBase");
		return ptr;
	}


	void TeamMembersChanged();
};


// Class FortniteUI.FortUIStateWidget_Frontend
// 0x0000 (0x0400 - 0x0400)
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_Frontend");
		return ptr;
	}

};


// Class FortniteUI.FortUIStateWidget_Login
// 0x0030 (0x0430 - 0x0400)
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0400(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget_Login");
		return ptr;
	}


	void StartUpdateCheck();
	void StartManualLogin();
	void StartAutoLogin();
	void ShowPostLoginLogoutError();
	void SendEulaResponse();
	void OnShowLoginMessage();
	void OnPostLoginLogoutComplete();
	void OnPatchingComplete();
	void OnNeedsPurchaseOrAccountLinking();
	void OnLogoutComplete();
	void OnLoginSuceeded();
	void OnLoginFailed();
	void OnEulaAvailable();
	void OnDisplayErrorComplete();
	void IsLoggingOut();
	void IsLoggedIn();
	void GetPlatformDisplayName();
	void GetEULAText();
	void CheckShowLoginMessage();
	void CheckNetworkError();
};


// Class FortniteUI.FortActionHandlerPanel
// 0x0028 (0x0268 - 0x0240)
class UFortActionHandlerPanel : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortActionHandlerPanel");
		return ptr;
	}

};


// Class FortniteUI.FortConfirmationWindow
// 0x0178 (0x03E0 - 0x0268)
class UFortConfirmationWindow : public UFortActionHandlerPanel
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0268(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortConfirmationWindow");
		return ptr;
	}

};


// Class FortniteUI.FortErrorDialog
// 0x0010 (0x0278 - 0x0268)
class UFortErrorDialog : public UFortActionHandlerPanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortErrorDialog");
		return ptr;
	}

};


// Class FortniteUI.FortQuestRewardChoiceWidget
// 0x0000 (0x0268 - 0x0268)
class UFortQuestRewardChoiceWidget : public UFortActionHandlerPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortQuestRewardChoiceWidget");
		return ptr;
	}


	void SetQuest(class UFortQuestItem* Quest);
};


// Class FortniteUI.FortUIStateWidget
// 0x0000 (0x0268 - 0x0268)
class UFortUIStateWidget : public UFortActionHandlerPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIStateWidget");
		return ptr;
	}


	void OnExitState();
	void OnEnterState();
};


// Class FortniteUI.FortVaultWidget
// 0x00C8 (0x0330 - 0x0268)
class UFortVaultWidget : public UFortActionHandlerPanel
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0268(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortVaultWidget");
		return ptr;
	}

};


// Class FortniteUI.FortAlterationsWidget
// 0x0018 (0x0258 - 0x0240)
class UFortAlterationsWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationsWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSocialStyle
// 0x6DE8 (0x6E10 - 0x0028)
class UFortSocialStyle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x6DE8];                                    // 0x0028(0x6DE8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialStyle");
		return ptr;
	}

};


// Class FortniteUI.FortAlterationWidget
// 0x0018 (0x0258 - 0x0240)
class UFortAlterationWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAlterationWidget");
		return ptr;
	}

};


// Class FortniteUI.FortAttributeList
// 0x0018 (0x0258 - 0x0240)
class UFortAttributeList : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortAttributeList");
		return ptr;
	}

};


// Class FortniteUI.FortItemWidget
// 0x0038 (0x08A0 - 0x0868)
class UFortItemWidget : public UFortBaseButton
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0868(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemWidget");
		return ptr;
	}

};


// Class FortniteUI.FortBluGloCounter
// 0x0008 (0x0248 - 0x0240)
class UFortBluGloCounter : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortBluGloCounter");
		return ptr;
	}


	void OnBluGloQuantityChanged();
};


// Class FortniteUI.FortCapturePointWidget
// 0x0010 (0x0250 - 0x0240)
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortCapturePointWidget");
		return ptr;
	}


	void OnCapturePointDataChanged();
};


// Class FortniteUI.FortChatContainer
// 0x0018 (0x0258 - 0x0240)
class UFortChatContainer : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortChatContainer");
		return ptr;
	}

};


// Class FortniteUI.FortGridPickerGrid
// 0x0000 (0x0240 - 0x0240)
class UFortGridPickerGrid : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortGridPickerGrid");
		return ptr;
	}

};


// Class FortniteUI.FortItemCollectorWidget
// 0x0010 (0x0250 - 0x0240)
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemCollectorWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemGroupSlotPicker
// 0x0030 (0x0270 - 0x0240)
class UFortItemGroupSlotPicker : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0240(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupSlotPicker");
		return ptr;
	}

};


// Class FortniteUI.FortItemGroupSlotWidget
// 0x00D8 (0x0318 - 0x0240)
class UFortItemGroupSlotWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0240(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupSlotWidget");
		return ptr;
	}

};


// Class FortniteUI.FortItemGroupWidget
// 0x0028 (0x0268 - 0x0240)
class UFortItemGroupWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortItemGroupWidget");
		return ptr;
	}

};


// Class FortniteUI.FortListItem
// 0x0000 (0x0240 - 0x0240)
class UFortListItem : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortListItem");
		return ptr;
	}


	void ToggleExpansion();
	void SetSelected();
	void SetIndexInList();
	void SetData();
	void Private_OnExpanderArrowShiftClicked();
	void IsItemExpanded();
	void GetSelectionMode();
	void GetIndentLevel();
	void DoesItemHaveChildren();
};


// Class FortniteUI.FortMovieWidget
// 0x0018 (0x0258 - 0x0240)
class UFortMovieWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortMovieWidget");
		return ptr;
	}

};


// Class FortniteUI.FortNodeCanvasHost
// 0x0008 (0x0248 - 0x0240)
class UFortNodeCanvasHost : public UFortUserWidget
{
public:
	class UFortNodeCanvas*                             Canvas;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeCanvasHost");
		return ptr;
	}

};


// Class FortniteUI.FortNodeGraphHost
// 0x0138 (0x0378 - 0x0240)
class UFortNodeGraphHost : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0240(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodeGraphHost");
		return ptr;
	}

};


// Class FortniteUI.FortNodePrerequisitesWidget
// 0x0010 (0x0250 - 0x0240)
class UFortNodePrerequisitesWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortNodePrerequisitesWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPerksWidget
// 0x0018 (0x0258 - 0x0240)
class UFortPerksWidget : public UFortUserWidget
{
public:
	class UFortHero*                                   Hero;                                                     // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerksWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPerkTierWidget
// 0x0020 (0x0260 - 0x0240)
class UFortPerkTierWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPerkTierWidget");
		return ptr;
	}

};


// Class FortniteUI.FortPvPMinimapWidget
// 0x0020 (0x0260 - 0x0240)
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortPvPMinimapWidget");
		return ptr;
	}

};


// Class FortniteUI.FortSocialItemWidget
// 0x0000 (0x0240 - 0x0240)
class UFortSocialItemWidget : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSocialItemWidget");
		return ptr;
	}


	void SetSocialItem();
};


// Class FortniteUI.FortSquadPanelWidget
// 0x0028 (0x0268 - 0x0240)
class UFortSquadPanelWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0240(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortSquadPanelWidget");
		return ptr;
	}

};


// Class FortniteUI.FortStorefront
// 0x0000 (0x0240 - 0x0240)
class UFortStorefront : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortStorefront");
		return ptr;
	}

};


// Class FortniteUI.FortUIManagerWidget
// 0x0250 (0x0490 - 0x0240)
class UFortUIManagerWidget : public UFortUserWidget
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0240(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIManagerWidget");
		return ptr;
	}

};


// Class FortniteUI.FortUserChoiceWidget
// 0x0000 (0x0240 - 0x0240)
class UFortUserChoiceWidget : public UFortUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUserChoiceWidget");
		return ptr;
	}


	void SetChoices();
};


// Class FortniteUI.FortWorkerSetBonusIcon
// 0x0018 (0x0250 - 0x0238)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                                GameplayTag;                                              // 0x0238(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortWorkerSetBonusIcon");
		return ptr;
	}

};


// Class FortniteUI.FriendCodeEntryBase
// 0x0000 (0x08A0 - 0x08A0)
class UFriendCodeEntryBase : public UCommonButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FriendCodeEntryBase");
		return ptr;
	}

};


// Class FortniteUI.FriendCodeListBase
// 0x0000 (0x03E0 - 0x03E0)
class UFriendCodeListBase : public UCommonActivatablePanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FriendCodeListBase");
		return ptr;
	}

};


// Class FortniteUI.FortUIMessageItemWidget
// 0x0048 (0x0280 - 0x0238)
class UFortUIMessageItemWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0238(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUIMessageItemWidget");
		return ptr;
	}

};


// Class FortniteUI.UINavigationManager
// 0x0020 (0x0048 - 0x0028)
class UUINavigationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.UINavigationManager");
		return ptr;
	}

};


// Class FortniteUI.FortUINavigationManager
// 0x0100 (0x0148 - 0x0048)
class UFortUINavigationManager : public UUINavigationManager
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0048(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteUI.FortUINavigationManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

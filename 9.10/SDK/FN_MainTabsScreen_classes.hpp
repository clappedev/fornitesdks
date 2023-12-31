#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MainTabsScreen.MainTabsScreen_C
// 0x0028 (0x03B0 - 0x0388)
class UMainTabsScreen_C : public UFortMainTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                       TopTabContentWidgetSwitcher;                              // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       LastActiveTabId;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnclaimedResearchBangThreshold;                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                UnclaimedResearchPointsHandle;                            // 0x03A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainTabsScreen.MainTabsScreen_C");
		return ptr;
	}


	void Determine_If_Any_non_MTX_offers_are_purchasable(bool* ShowBang);
	void CheckDisplayCriteria(TEnumAsByte<EStoreOfferCosts> InCustomStoreOfferCost, struct FCardPackOffer InCardPackOffer, bool* bPassedDisplayCriteria);
	void GetCustomStoreOfferCost(struct FCardPackOffer InCardPackOffer, TEnumAsByte<EStoreOfferCosts>* OutCustomStoreOfferCost);
	void CheckHighestPriorityOffer(TArray<struct FCardPackOffer>* inOfferArray, struct FCardPackOffer* outPriorityOffer, bool* FoundOffer);
	void Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers);
	bool Is_Transform_Feature_Unlocked();
	void HandleCardPackStore(struct FName TabId);
	void HandleMtxStore(struct FName Tab_Id);
	void Handle_Unclaimed_Resources_Updated();
	void Toggle_Unclaimed_Research_Timer(bool Enable);
	void Determine_Unclaimed_Resources_at_Threshold(bool* Result);
	void Update_Store_Tab_Button_Bang(struct FName Tab);
	void Are_Any_Inventory_Items_Unseen(bool* Unseen);
	void Are_Any_Transform_Keys_Unseen(bool* Unseen);
	void Get_FortPC(class AFortPlayerController** FortPC);
	void Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem);
	void Update_Quest_Tab_Button_Bang(struct FName Tab);
	void Update_Tab_Button_Bangs(struct FName InTab);
	void Update_Hero_Tab_Button_Bang(struct FName Tab);
	void Update_Squad_Tab_Button_Bang(struct FName Tab);
	void HandleTabSelected(struct FName TabName);
	void HandleTabCreated(struct FName TabId, class UCommonButton* TabButton);
	void OnActivated();
	void CustomEvent(struct FName TabId, class UCommonButton* TabButton);
	void OnHomebaseInventoryUpdated();
	void Destruct();
	void Construct();
	void OnQuestSeen_Event_1(class UFortQuestItem* Quest);
	void SquadSlotMarkedAsSeen_Event_1();
	void HandleMainTabSelected(struct FName TabNameID);
	void HandleMainTabCreated(struct FName TabNameID, class UCommonButton* TabButton);
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MainTabsScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

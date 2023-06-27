#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C
// 0x0022 (0x025A - 0x0238)
class UQuickbarBase_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	EFortQuickBars                                     MyQuickbarIndex;                                          // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	int                                                FocusedSlot;                                              // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UQuickbarSlot_C*>                     QuickbarSlots;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMaximized;                                              // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortQuickBars                                     FocusedQuickbarIndex;                                     // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickbarBase.QuickbarBase_C");
		return ptr;
	}


	void UpdateCurrentFocusedQuickbar(EFortQuickBars* PreviousFocusedQuickbar, EFortQuickBars* CurrentFocusedQuickbar);
	void ShouldRefreshQuickbarItem(int RequestedSlot, int CurrentSlot, bool* Result);
	void RefreshQuickbar();
	void HandleKeybindsChanged();
	void Minimize();
	void Maximize();
	void Is_Valid_Slot(int Slot, bool* Is_Valid, int* Array_Index);
	void Construct();
	void OnWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved);
	void OnQuickbarSlotFocusChanged(EFortQuickBars QuickbarIndex, int Slot);
	void OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex);
	void OnQuickbarForceFullUpdate(EFortQuickBars QuickbarIndex);
	void OnQuickbarSecondarySlotFocusChanged_Event_1(EFortQuickBars QuickbarIndex, int Slot);
	void OnLocalPlayerDied(const struct FFortPlayerDeathReport& DeathReport);
	void OnLocalPlayerRevived();
	void OnLocalPlayerSpawned();
	void Destruct();
	void ExecuteUbergraph_QuickbarBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

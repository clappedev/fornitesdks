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

// WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C
// 0x0048 (0x07E8 - 0x07A0)
class URewardInfoButtonWidget_C : public UFortRewardInfoButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              ItemDetails;                                              // 0x07A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            ItemInfo;                                                 // 0x07B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayNameText;                                          // 0x07B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DisplayQuantity;                                          // 0x07D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C");
		return ptr;
	}


	void GetDisplayName(struct FText* DisplayName);
	void SetShowDescriptionBP(bool* bInShowDescription);
	void HandleDifferentItemOrQuantitySetBP();
	void ExecuteUbergraph_RewardInfoButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

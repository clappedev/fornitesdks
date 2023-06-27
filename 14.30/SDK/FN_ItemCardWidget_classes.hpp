#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
// 0x00FC (0x0C9C - 0x0BA0)
class UItemCardWidget_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                     // 0x0BA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      FortMultiSizeItemCard_1;                                  // 0x0BB0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BB8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ItemCardWidget.ItemCardWidget_C.OnHoveredEvent
	struct FFortReceivedItemLootInfo                   ItemReceivedInfo_BP;                                      // 0x0BC8(0x00C8) (Edit, BlueprintVisible)
	class USoundBase*                                  SoundOnItemCardShow;                                      // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                cscs;                                                     // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C");
		
		return ptr;
	}


	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnCentered();
	void PlayShow(int idx);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void Construct();
	void ExecuteUbergraph_ItemCardWidget(int EntryPoint);
	void OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

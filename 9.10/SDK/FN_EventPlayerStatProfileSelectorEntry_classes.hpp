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

// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// 0x0040 (0x0BA0 - 0x0B60)
class UEventPlayerStatProfileSelectorEntry_C : public UFortEventPlayerStatProfileSelectorEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Selected;                                                 // 0x0B68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_SelectedBG;                                         // 0x0B70(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UEventPlayerStatProfileSelector_C*           ProfileStatSelector;                                      // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B80(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B90(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C");
		return ptr;
	}


	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int EntryPoint);
	void Unhovered__DelegateSignature();
	void Hovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

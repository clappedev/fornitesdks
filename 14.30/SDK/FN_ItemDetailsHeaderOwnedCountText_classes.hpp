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

// WidgetBlueprintGeneratedClass ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C
// 0x0010 (0x02F0 - 0x02E0)
class UItemDetailsHeaderOwnedCountText_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            OwnedCountText;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDetailsHeaderOwnedCountText.ItemDetailsHeaderOwnedCountText_C");
		
		return ptr;
	}


	void SetOwnedText();
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemDetailsHeaderOwnedCountText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

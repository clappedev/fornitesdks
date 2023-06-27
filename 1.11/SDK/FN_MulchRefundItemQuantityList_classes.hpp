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

// WidgetBlueprintGeneratedClass MulchRefundItemQuantityList.MulchRefundItemQuantityList_C
// 0x0010 (0x02A0 - 0x0290)
class UMulchRefundItemQuantityList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                ContainerBox;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MulchRefundItemQuantityList.MulchRefundItemQuantityList_C");
		return ptr;
	}


	void AddListEntry(class UFortItemQuantityListEntryBase** ListEntry);
	void ExecuteUbergraph_MulchRefundItemQuantityList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass AthenaStatsRow.AthenaStatsRow_C
// 0x0038 (0x0278 - 0x0240)
class UAthenaStatsRow_C : public UFortProfileStatsRow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            Name;                                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       StatName;                                                 // 0x0250(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BaseGameplayTag;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaStatsRow.AthenaStatsRow_C");
		return ptr;
	}


	void SetStatValueAsText(struct FText StatValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaStatsRow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

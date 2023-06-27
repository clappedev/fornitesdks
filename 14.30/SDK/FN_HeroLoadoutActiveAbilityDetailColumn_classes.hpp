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

// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C
// 0x0038 (0x02C0 - 0x0288)
class UHeroLoadoutActiveAbilityDetailColumn_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ImageLockPerk;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ImagePerkIcon;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    PerkIconSizeBox;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EFortBrushSize>                        Icon_Size;                                                // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UFortHero*                                   Host_Hero;                                                // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortAbilityKit*                             AbilityKit;                                               // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C");
		
		return ptr;
	}


	void SetAbilityKit(class UFortAbilityKit* AbilityKit);
	bool IsAbilityUnlocked();
	class UFortAbilityKit* GetAbilityKit();
	void SetHero(class UFortHero* Hero);
	void UpdateFromState();
	void UpdateFromStyle();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

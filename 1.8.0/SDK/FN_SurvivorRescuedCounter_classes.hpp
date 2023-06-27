#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SurvivorRescuedCounter.SurvivorRescuedCounter_C
// 0x0010 (0x0248 - 0x0238)
class USurvivorRescuedCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                     NumberSurvivors;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivorRescuedCounter.SurvivorRescuedCounter_C");
		return ptr;
	}


	void UpdateSurvivorsRescued(int SurvivorsRescued);
	void Construct();
	void ExecuteUbergraph_SurvivorRescuedCounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x11 (0x269 - 0x258)
// WidgetBlueprintGeneratedClass ItemPerksListDetailWidget.ItemPerksListDetailWidget_C
class UItemPerksListDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UPerksList_C*                          PerksList;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowActiveAbilitiesOnly;                           // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPerksListDetailWidget_C");
		return Clss;
	}

	void SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption);
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemPerksListDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

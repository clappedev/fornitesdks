#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass TopWeaponStatRowEntry.TopWeaponStatRowEntry_C
class UTopWeaponStatRowEntry_C : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               StatValue;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                WeaponCard;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopWeaponStatRowEntry_C");
		return Clss;
	}

	void Update(class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue, class UAthenaWeaponStatView* K2Node_DynamicCast_AsAthena_Weapon_Stat_View, bool K2Node_DynamicCast_bSuccess, class UFortWeaponItemDefinition* CallFunc_GetWeaponDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void OnStatChanged();
	void ExecuteUbergraph_TopWeaponStatRowEntry(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

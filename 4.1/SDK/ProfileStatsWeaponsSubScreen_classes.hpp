#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x3F0 - 0x3C0)
// WidgetBlueprintGeneratedClass ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C
class UProfileStatsWeaponsSubScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UPieChartStatWidget_C*                 PieChartStatWidget;                                // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       WeaponList;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProfileStatsWeaponsSubScreen_C");
		return Clss;
	}

	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	void ExecuteUbergraph_ProfileStatsWeaponsSubScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthenaBaseStatView* K2Node_CustomEvent_StatView, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, TArray<class UAthenaWeaponStatView*>& CallFunc_GetWeaponViews_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

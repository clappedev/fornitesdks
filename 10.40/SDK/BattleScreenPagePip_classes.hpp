#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass BattleScreenPagePip.BattleScreenPagePip_C
class UBattleScreenPagePip_C : public UBattlePassScreenPagePip
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Active;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Normal;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattleScreenPagePip_C");
		return Clss;
	}

	void OnSetPipActive(bool bActive);
	void ExecuteUbergraph_BattleScreenPagePip(int32 EntryPoint, bool K2Node_Event_bActive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

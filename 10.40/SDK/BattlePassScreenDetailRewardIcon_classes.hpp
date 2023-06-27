#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C
class UBattlePassScreenDetailRewardIcon_C : public UBattlePassScreenTierListAdditionalStylesEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                Card;                                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockImage;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassScreenDetailRewardIcon_C");
		return Clss;
	}

	void BPSetup(class UFortItem* InReward);
	void ExecuteUbergraph_BattlePassScreenDetailRewardIcon(int32 EntryPoint, class UFortItem* K2Node_Event_InReward);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x220 - 0x218)
// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
class UMatchStatsGrid_C : public UUserWidget
{
public:
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchStatsGrid_C");
		return Clss;
	}

	void SetStats(class UAthenaMatchStatView* AthenaMatchStats);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x228 - 0x210)
// WidgetBlueprintGeneratedClass ObjectivesPanelContent.ObjectivesPanelContent_C
class UObjectivesPanelContent_C : public UCommonUserWidget
{
public:
	class UMissionTrackerList_C*                 MissionTrackerList;                                // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTrackerMainQuestList_C*          QuestTrackerMainQuestList;                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestTrackerTrackedQuestsList_C*      QuestTrackerTrackedQuestsList;                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectivesPanelContent_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

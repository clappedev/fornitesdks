#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass TeamScorePanelContent.TeamScorePanelContent_C
class UTeamScorePanelContent_C : public UCommonUserWidget
{
public:
	class UTeamScoreDetailsContent_C*            TeamScoreDetailsContent;                           // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamScorePanelContent_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

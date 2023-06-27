#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x248 - 0x218)
// WidgetBlueprintGeneratedClass AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C
class UAthenaSpectatorMatchStatus_C : public UAthenaMatchStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UAthenaGamePhaseWidget_C*              AthenaGamePhaseWidget;                             // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayersLeftWidget_C*            AthenaPlayersLeftWidget;                           // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StormPhaseText;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TimeElapsedText;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorMatchStatus_C");
		return Clss;
	}

	void Construct();
	void UpdateMatchTimeText(class FText& MatchTimeText);
	void UpdateStormPhaseText(class FText& SafeZonePhaseTxt);
	void ExecuteUbergraph_AthenaSpectatorMatchStatus(int32 EntryPoint, class FText K2Node_Event_MatchTimeText, class FText K2Node_Event_SafeZonePhaseTxt);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C (0x2AC - 0x290)
// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
class UAthenaTeamMemberIndicator_C : public UAthenaPlayerIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*          DBNOIndicator;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Team_Member_Index;                                 // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTeamMemberIndicator_C");
		return Clss;
	}

	void DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO);
	void TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking);
	void BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving);
	void PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName);
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, class AFortPlayerStateAthena* K2Node_Event_PS, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS3, bool K2Node_Event_bDBNO, class AFortPlayerStateAthena* K2Node_Event_PS2, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS1, bool K2Node_Event_bReviving);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0x280 - 0x238)
// WidgetBlueprintGeneratedClass AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C
class UAthenaSpectatorPlayerStatus_C : public UAthenaPlayerStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UAthenaKillsWidget_C*                  AthenaKillsWidget;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerNameText;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PlayerTeamBGBorder;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerTeamText;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorTeamStatus_C*          Squadmate1;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorTeamStatus_C*          Squadmate2;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorTeamStatus_C*          Squadmate3;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            TextStyleSet;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorPlayerStatus_C");
		return Clss;
	}

	void Update_Squad_Member_Data(class UAthenaRemotePlayerViewData* PlayerData, class UAthenaSpectatorTeamStatus_C* TeamStatusWidget, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue1);
	void Update_Squad_Datas(class UAthenaRemotePlayerViewData* Squad_1, class UAthenaRemotePlayerViewData* Squad_2, class UAthenaRemotePlayerViewData* Squad_3, const TArray<class AFortPlayerStateAthena*>& SquadMembers);
	void Construct();
	void UpdatePlayerNameText(class FText& PlayerNameText);
	void UpdatePlayerTeam(int32 TeamNumber, struct FLinearColor& TeamColor);
	void FollowedPlayerChanged(class AFortPlayerStateAthena* NewFollowedPlayer);
	void SquadDatasChanged(class UAthenaRemotePlayerViewData* SquadMember1, class UAthenaRemotePlayerViewData* SquadMember2, class UAthenaRemotePlayerViewData* SquadMember3);
	void ExecuteUbergraph_AthenaSpectatorPlayerStatus(int32 EntryPoint, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember1, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember2, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember3, class FText K2Node_Event_PlayerNameText, int32 K2Node_Event_TeamNumber, const struct FLinearColor& K2Node_Event_TeamColor, class FText CallFunc_Conv_IntToText_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_NewFollowedPlayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

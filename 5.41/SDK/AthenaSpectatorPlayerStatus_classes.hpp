#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C
class UAthenaSpectatorPlayerStatus_C : public UAthenaPlayerStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UAthenaKillsWidget_C*                  AthenaKillsWidget;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocationText;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MapImage;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerNameText;                                    // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PlayerTeamBGBorder;                                // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerTeamText;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            TextStyleSet;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorPlayerStatus_C");
		return Clss;
	}

	void SetLocationVisibility(bool IsVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void UpdatePlayerNameText(class FText& PlayerNameText);
	void UpdatePlayerLocationText(class FText& PlayerNameText);
	void UpdatePlayerTeam(int32 TeamNumber, struct FLinearColor& TeamColor);
	void FollowedPlayerChanged(class AFortPlayerState* NewFollowedPlayer);
	void ExecuteUbergraph_AthenaSpectatorPlayerStatus(int32 EntryPoint, class FText K2Node_Event_PlayerNameText1, class FText K2Node_Event_PlayerNameText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_TeamNumber, const struct FLinearColor& K2Node_Event_TeamColor, class FText CallFunc_Conv_IntToText_ReturnValue, class AFortPlayerState* K2Node_Event_NewFollowedPlayer, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

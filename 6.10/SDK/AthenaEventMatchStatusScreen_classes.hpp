#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xF8 (0x358 - 0x260)
// WidgetBlueprintGeneratedClass AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C
class UAthenaEventMatchStatusScreen_C : public UAthenaEventMatchStatusScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ChestsLooted;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CircleRadius;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageHealed;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageHealedPlayer;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageHealedTitleText;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageInflicted;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageInflictedPlayer;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageTaken;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageTakenPlayer;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      DamageTakenTitleText;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchStatusTextPlayer_C*        FastestEliminationPlayer;                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         FastestEliminationTime;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GamePhaseTime;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GamePhaseTitleText;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         LongestElimination;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchStatusTextPlayer_C*        LongestEliminationPlayer;                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LongestEliminationTitleText;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchTime;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         MostEliminations;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMatchStatusTextPlayer_C*        MostEliminationsPlayer;                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PiecesBuilt;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PiecesDestroyed;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         Playersremaining;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShotsFired;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         StormPhase;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SupplyDropsLooted;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEventMatchStatusText_C*         TimeSinceLastKill;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                     NewTopPlayerFontMaterial;                          // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAthenaEventMatchStatusText_C*> TopPlayerWidgets;                                  // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventMatchStatusScreen_C");
		return Clss;
	}

	void NewStatUpdate1Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText, bool SkipTextUpdate);
	void NewStatUpdate3Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText, bool SkipTextUpdate);
	void NewTopScore(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText);
	void NewTopPlayer(class UAthenaMatchStatusTextPlayer_C* TargetWidget, class FText InText);
	void UpdateMatchTimeText(class FText& MatchTimeText);
	void UpdateCircleRadiusText(class FText& CircleRadiusText);
	void UpdateMostKillsText(class FText& MostKillsText);
	void UpdateFastestKillText(class FText& FastestKillText, class FText& FastestKillTime);
	void Construct();
	void UpdateSupplyDropsLootedText(class FText& SupplyDropsLootedText);
	void UpdateShotsFiredText(class FText& ShotsFiredText);
	void UpdatePiecesDestroyedText(class FText& PiecesDestroyedText);
	void UpdatePiecesBuiltText(class FText& PiecesBuiltText);
	void UpdateLongestEliminationText(class FText& LongestEliminationText);
	void UpdateDamageTakenText(class FText& DamageTakenText);
	void UpdateDamageHealedText(class FText& DamageHealedText);
	void UpdateDamageInflictedText(class FText& DamageInflictedText);
	void UpdateChestsLootedText(class FText& ChestsLootedText);
	void UpdateMostKillsScore(class FText& MostKillsScore);
	void UpdateLongestEliminationScore(class FText& LongestEliminationScore);
	void UpdateGamePhaseTimeText(class FText& GamePhaseTimeText);
	void UpdateGamePhaseTimeTitleText(class FText& GamePhaseTimeTitleText);
	void UpdatePlayersRemainingText(class FText& PlayersRemainingText);
	void UpdateTimeSinceLastKillText(class FText& TimeSinceLastKillText);
	void UpdateGamePhaseText(class FText& GamePhaseText);
	void OnPlayerDeadStateChanged_BP(class UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead);
	void ExecuteUbergraph_AthenaEventMatchStatusScreen(int32 EntryPoint, class FText K2Node_Event_LongestEliminationText, class FText K2Node_Event_DamageTakenText, class FText K2Node_Event_PiecesBuiltText, class FText K2Node_Event_DamageHealedText, class FText K2Node_Event_PiecesDestroyedText, class FText K2Node_Event_DamageInflictedText, class FText K2Node_Event_ChestsLootedText, class FText K2Node_Event_ShotsFiredText, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_Event_SupplyDropsLootedText, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Event_FastestKillText, class FText K2Node_Event_FastestKillTime, class FText K2Node_Event_MostKillsText, class FText K2Node_Event_MostKillsScore, class FText K2Node_Event_CircleRadiusText, class FText K2Node_Event_MatchTimeText, class FText K2Node_Event_LongestEliminationScore, int32 Temp_int_Loop_Counter_Variable1, class FText K2Node_Event_GamePhaseTimeText, int32 CallFunc_Add_IntInt_ReturnValue1, class FText K2Node_Event_GamePhaseTimeTitleText, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 Temp_int_Array_Index_Variable, class FText K2Node_Event_PlayersRemainingText, class FText K2Node_Event_TimeSinceLastKillText, class FText K2Node_Event_GamePhaseText, TArray<class UAthenaEventMatchStatusText_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaEventMatchStatusText_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable2, TArray<class UAthenaMatchStatusTextPlayer_C*>& K2Node_MakeArray_Array1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, bool K2Node_Event_bInIsDead, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class UAthenaMatchStatusTextPlayer_C*>& K2Node_MakeArray_Array2, class UAthenaMatchStatusTextPlayer_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 Temp_int_Array_Index_Variable2, class UAthenaMatchStatusTextPlayer_C* CallFunc_Array_Get_Item2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

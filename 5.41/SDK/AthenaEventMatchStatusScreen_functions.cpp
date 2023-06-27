#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate1Pulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C*TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               SkipTextUpdate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusScreen_C::NewStatUpdate1Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText, bool SkipTextUpdate)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "NewStatUpdate1Pulse");

	Params::UAthenaEventMatchStatusScreen_C_NewStatUpdate1Pulse_Params Parms;
	Parms.TargetWidget = TargetWidget;
	Parms.InText = InText;
	Parms.SkipTextUpdate = SkipTextUpdate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate3Pulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C*TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               SkipTextUpdate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusScreen_C::NewStatUpdate3Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText, bool SkipTextUpdate)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "NewStatUpdate3Pulse");

	Params::UAthenaEventMatchStatusScreen_C_NewStatUpdate3Pulse_Params Parms;
	Parms.TargetWidget = TargetWidget;
	Parms.InText = InText;
	Parms.SkipTextUpdate = SkipTextUpdate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C*TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusScreen_C::NewTopScore(class UAthenaEventMatchStatusText_C* TargetWidget, class FText InText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "NewTopScore");

	Params::UAthenaEventMatchStatusScreen_C_NewTopScore_Params Parms;
	Parms.TargetWidget = TargetWidget;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatusTextPlayer_C*TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusScreen_C::NewTopPlayer(class UAthenaMatchStatusTextPlayer_C* TargetWidget, class FText InText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "NewTopPlayer");

	Params::UAthenaEventMatchStatusScreen_C_NewTopPlayer_Params Parms;
	Parms.TargetWidget = TargetWidget;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateSupplyDropsLootedText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SupplyDropsLootedText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateSupplyDropsLootedText(class FText& SupplyDropsLootedText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateSupplyDropsLootedText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateSupplyDropsLootedText_Params Parms;
	Parms.SupplyDropsLootedText = SupplyDropsLootedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaEventMatchStatusScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "Construct");

	Params::UAthenaEventMatchStatusScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateFastestKillText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FastestKillText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        FastestKillTime                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateFastestKillText(class FText& FastestKillText, class FText& FastestKillTime)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateFastestKillText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateFastestKillText_Params Parms;
	Parms.FastestKillText = FastestKillText;
	Parms.FastestKillTime = FastestKillTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateShotsFiredText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShotsFiredText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateShotsFiredText(class FText& ShotsFiredText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateShotsFiredText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateShotsFiredText_Params Parms;
	Parms.ShotsFiredText = ShotsFiredText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MostKillsText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMostKillsText(class FText& MostKillsText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateMostKillsText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateMostKillsText_Params Parms;
	Parms.MostKillsText = MostKillsText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesDestroyedText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PiecesDestroyedText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePiecesDestroyedText(class FText& PiecesDestroyedText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdatePiecesDestroyedText");

	Params::UAthenaEventMatchStatusScreen_C_UpdatePiecesDestroyedText_Params Parms;
	Parms.PiecesDestroyedText = PiecesDestroyedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateCircleRadiusText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CircleRadiusText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateCircleRadiusText(class FText& CircleRadiusText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateCircleRadiusText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateCircleRadiusText_Params Parms;
	Parms.CircleRadiusText = CircleRadiusText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesBuiltText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PiecesBuiltText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePiecesBuiltText(class FText& PiecesBuiltText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdatePiecesBuiltText");

	Params::UAthenaEventMatchStatusScreen_C_UpdatePiecesBuiltText_Params Parms;
	Parms.PiecesBuiltText = PiecesBuiltText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMatchTimeText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MatchTimeText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMatchTimeText(class FText& MatchTimeText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateMatchTimeText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateMatchTimeText_Params Parms;
	Parms.MatchTimeText = MatchTimeText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LongestEliminationText                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateLongestEliminationText(class FText& LongestEliminationText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateLongestEliminationText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationText_Params Parms;
	Parms.LongestEliminationText = LongestEliminationText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageTakenText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DamageTakenText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageTakenText(class FText& DamageTakenText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateDamageTakenText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateDamageTakenText_Params Parms;
	Parms.DamageTakenText = DamageTakenText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageHealedText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DamageHealedText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageHealedText(class FText& DamageHealedText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateDamageHealedText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateDamageHealedText_Params Parms;
	Parms.DamageHealedText = DamageHealedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageInflictedText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DamageInflictedText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageInflictedText(class FText& DamageInflictedText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateDamageInflictedText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateDamageInflictedText_Params Parms;
	Parms.DamageInflictedText = DamageInflictedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateChestsLootedText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ChestsLootedText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateChestsLootedText(class FText& ChestsLootedText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateChestsLootedText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateChestsLootedText_Params Parms;
	Parms.ChestsLootedText = ChestsLootedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsScore
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        MostKillsScore                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMostKillsScore(class FText& MostKillsScore)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateMostKillsScore");

	Params::UAthenaEventMatchStatusScreen_C_UpdateMostKillsScore_Params Parms;
	Parms.MostKillsScore = MostKillsScore;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationScore
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LongestEliminationScore                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateLongestEliminationScore(class FText& LongestEliminationScore)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateLongestEliminationScore");

	Params::UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationScore_Params Parms;
	Parms.LongestEliminationScore = LongestEliminationScore;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GamePhaseTimeText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseTimeText(class FText& GamePhaseTimeText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateGamePhaseTimeText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeText_Params Parms;
	Parms.GamePhaseTimeText = GamePhaseTimeText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeTitleText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GamePhaseTimeTitleText                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseTimeTitleText(class FText& GamePhaseTimeTitleText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateGamePhaseTimeTitleText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeTitleText_Params Parms;
	Parms.GamePhaseTimeTitleText = GamePhaseTimeTitleText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePlayersRemainingText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayersRemainingText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePlayersRemainingText(class FText& PlayersRemainingText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdatePlayersRemainingText");

	Params::UAthenaEventMatchStatusScreen_C_UpdatePlayersRemainingText_Params Parms;
	Parms.PlayersRemainingText = PlayersRemainingText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateTimeSinceLastKillText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TimeSinceLastKillText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateTimeSinceLastKillText(class FText& TimeSinceLastKillText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateTimeSinceLastKillText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateTimeSinceLastKillText_Params Parms;
	Parms.TimeSinceLastKillText = TimeSinceLastKillText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        GamePhaseText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseText(class FText& GamePhaseText)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "UpdateGamePhaseText");

	Params::UAthenaEventMatchStatusScreen_C_UpdateGamePhaseText_Params Parms;
	Parms.GamePhaseText = GamePhaseText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.OnPlayerDeadStateChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* InPlayerData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInIsDead                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusScreen_C::OnPlayerDeadStateChanged_BP(class UAthenaRemotePlayerViewData* InPlayerData, bool bInIsDead)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "OnPlayerDeadStateChanged_BP");

	Params::UAthenaEventMatchStatusScreen_C_OnPlayerDeadStateChanged_BP_Params Parms;
	Parms.InPlayerData = InPlayerData;
	Parms.bInIsDead = bInIsDead;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.ExecuteUbergraph_AthenaEventMatchStatusScreen
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        K2Node_Event_DamageHealedText                                    (ConstParm)
// class FText                        K2Node_Event_DamageInflictedText                                 (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ChestsLootedText                                    (ConstParm)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_DamageTakenText                                     (ConstParm)
// class FText                        K2Node_Event_LongestEliminationText                              (ConstParm)
// class FText                        K2Node_Event_MatchTimeText                                       (ConstParm)
// class FText                        K2Node_Event_MostKillsScore                                      (ConstParm)
// class FText                        K2Node_Event_PiecesBuiltText                                     (ConstParm)
// class FText                        K2Node_Event_LongestEliminationScore                             (ConstParm)
// class FText                        K2Node_Event_GamePhaseTimeText                                   (ConstParm)
// class FText                        K2Node_Event_CircleRadiusText                                    (ConstParm)
// class FText                        K2Node_Event_GamePhaseTimeTitleText                              (ConstParm)
// class FText                        K2Node_Event_PiecesDestroyedText                                 (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        K2Node_Event_MostKillsText                                       (ConstParm)
// class FText                        K2Node_Event_PlayersRemainingText                                (ConstParm)
// class FText                        K2Node_Event_TimeSinceLastKillText                               (ConstParm)
// class FText                        K2Node_Event_GamePhaseText                                       (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaMatchStatusTextPlayer_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        K2Node_Event_ShotsFiredText                                      (ConstParm)
// class UAthenaMatchStatusTextPlayer_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInIsDead                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class FText                        K2Node_Event_FastestKillText                                     (ConstParm)
// class FText                        K2Node_Event_FastestKillTime                                     (ConstParm)
// TArray<class UAthenaMatchStatusTextPlayer_C*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UAthenaMatchStatusTextPlayer_C*CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_SupplyDropsLootedText                               (ConstParm)
// TArray<class UAthenaEventMatchStatusText_C*>K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchStatusText_C*CallFunc_Array_Get_Item2                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusScreen_C::ExecuteUbergraph_AthenaEventMatchStatusScreen(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Event_DamageHealedText, class FText K2Node_Event_DamageInflictedText, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText K2Node_Event_ChestsLootedText, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class FText K2Node_Event_DamageTakenText, class FText K2Node_Event_LongestEliminationText, class FText K2Node_Event_MatchTimeText, class FText K2Node_Event_MostKillsScore, class FText K2Node_Event_PiecesBuiltText, class FText K2Node_Event_LongestEliminationScore, class FText K2Node_Event_GamePhaseTimeText, class FText K2Node_Event_CircleRadiusText, class FText K2Node_Event_GamePhaseTimeTitleText, class FText K2Node_Event_PiecesDestroyedText, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText K2Node_Event_MostKillsText, class FText K2Node_Event_PlayersRemainingText, class FText K2Node_Event_TimeSinceLastKillText, class FText K2Node_Event_GamePhaseText, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, TArray<class UAthenaMatchStatusTextPlayer_C*>& K2Node_MakeArray_Array, class FText K2Node_Event_ShotsFiredText, class UAthenaMatchStatusTextPlayer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable2, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, bool K2Node_Event_bInIsDead, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Event_FastestKillText, class FText K2Node_Event_FastestKillTime, TArray<class UAthenaMatchStatusTextPlayer_C*>& K2Node_MakeArray_Array1, class UAthenaMatchStatusTextPlayer_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Event_SupplyDropsLootedText, TArray<class UAthenaEventMatchStatusText_C*>& K2Node_MakeArray_Array2, int32 CallFunc_Array_Length_ReturnValue2, class UAthenaEventMatchStatusText_C* CallFunc_Array_Get_Item2, bool CallFunc_Less_IntInt_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusScreen_C", "ExecuteUbergraph_AthenaEventMatchStatusScreen");

	Params::UAthenaEventMatchStatusScreen_C_ExecuteUbergraph_AthenaEventMatchStatusScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Event_DamageHealedText = K2Node_Event_DamageHealedText;
	Parms.K2Node_Event_DamageInflictedText = K2Node_Event_DamageInflictedText;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_ChestsLootedText = K2Node_Event_ChestsLootedText;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_Event_DamageTakenText = K2Node_Event_DamageTakenText;
	Parms.K2Node_Event_LongestEliminationText = K2Node_Event_LongestEliminationText;
	Parms.K2Node_Event_MatchTimeText = K2Node_Event_MatchTimeText;
	Parms.K2Node_Event_MostKillsScore = K2Node_Event_MostKillsScore;
	Parms.K2Node_Event_PiecesBuiltText = K2Node_Event_PiecesBuiltText;
	Parms.K2Node_Event_LongestEliminationScore = K2Node_Event_LongestEliminationScore;
	Parms.K2Node_Event_GamePhaseTimeText = K2Node_Event_GamePhaseTimeText;
	Parms.K2Node_Event_CircleRadiusText = K2Node_Event_CircleRadiusText;
	Parms.K2Node_Event_GamePhaseTimeTitleText = K2Node_Event_GamePhaseTimeTitleText;
	Parms.K2Node_Event_PiecesDestroyedText = K2Node_Event_PiecesDestroyedText;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.K2Node_Event_MostKillsText = K2Node_Event_MostKillsText;
	Parms.K2Node_Event_PlayersRemainingText = K2Node_Event_PlayersRemainingText;
	Parms.K2Node_Event_TimeSinceLastKillText = K2Node_Event_TimeSinceLastKillText;
	Parms.K2Node_Event_GamePhaseText = K2Node_Event_GamePhaseText;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_ShotsFiredText = K2Node_Event_ShotsFiredText;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_InPlayerData = K2Node_Event_InPlayerData;
	Parms.K2Node_Event_bInIsDead = K2Node_Event_bInIsDead;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_FastestKillText = K2Node_Event_FastestKillText;
	Parms.K2Node_Event_FastestKillTime = K2Node_Event_FastestKillTime;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Event_SupplyDropsLootedText = K2Node_Event_SupplyDropsLootedText;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

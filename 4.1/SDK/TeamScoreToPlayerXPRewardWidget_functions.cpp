#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIXpInfo               XPInfo                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FString                      Player_Name                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::Initialize(const struct FFortUIXpInfo& XPInfo, const class FString& Player_Name, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Initialize");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Initialize_Params Parms;
	Parms.XPInfo = XPInfo;
	Parms.Player_Name = Player_Name;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LERP_Factor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              XPEarned                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentPlayerXPCount                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IntermediateXPCount                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProgressToNextLevel                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelDuringTween                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLevelProgress_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::Update_XP_LERP(float LERP_Factor, int32 XPEarned, int32 CurrentPlayerXPCount, int32 IntermediateXPCount, float ProgressToNextLevel, int32 LevelDuringTween, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1234, float CallFunc_GetLevelProgress_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Lerp_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue123)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Update XP LERP");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP_Params Parms;
	Parms.LERP_Factor = LERP_Factor;
	Parms.XPEarned = XPEarned;
	Parms.CurrentPlayerXPCount = CurrentPlayerXPCount;
	Parms.IntermediateXPCount = IntermediateXPCount;
	Parms.ProgressToNextLevel = ProgressToNextLevel;
	Parms.LevelDuringTween = LevelDuringTween;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1234 = CallFunc_Add_IntInt_ReturnValue1234;
	Parms.CallFunc_GetLevelProgress_ReturnValue = CallFunc_GetLevelProgress_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_FTrunc_ReturnValue1 = CallFunc_FTrunc_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue123 = CallFunc_Conv_IntToFloat_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamScoreToPlayerXPRewardWidget_C::OnLevelChanged()
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "OnLevelChanged");

	Params::UTeamScoreToPlayerXPRewardWidget_C_OnLevelChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTeamScoreToPlayerXPRewardWidget_C::Construct()
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "Construct");

	Params::UTeamScoreToPlayerXPRewardWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreToPlayerXPRewardWidget_C::ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget(int32 EntryPoint, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamScoreToPlayerXPRewardWidget_C", "ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget");

	Params::UTeamScoreToPlayerXPRewardWidget_C_ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearSquadMembers
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::ClearSquadMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.ClearSquadMembers");

	UAthenaTeamInfo_C_ClearSquadMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMutedChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamMuted                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadMutedChanged(TArray<bool>* TeamMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMutedChanged");

	UAthenaTeamInfo_C_HandleSquadMutedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMuted != nullptr)
		*TeamMuted = params.TeamMuted;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadTalkingChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamTalking                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadTalkingChanged(TArray<bool>* TeamTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadTalkingChanged");

	UAthenaTeamInfo_C_HandleSquadTalkingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamTalking != nullptr)
		*TeamTalking = params.TeamTalking;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleSquadMemberRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberRemoved");

	UAthenaTeamInfo_C_HandleSquadMemberRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadRevivingChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamReviving                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadRevivingChanged(TArray<bool>* TeamReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadRevivingChanged");

	UAthenaTeamInfo_C_HandleSquadRevivingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamReviving != nullptr)
		*TeamReviving = params.TeamReviving;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberPlayerNamesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleSquadMemberPlayerNamesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberPlayerNamesChanged");

	UAthenaTeamInfo_C_HandleSquadMemberPlayerNamesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDeadChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDead                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadDeadChanged(TArray<bool>* TeamDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDeadChanged");

	UAthenaTeamInfo_C_HandleSquadDeadChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDead != nullptr)
		*TeamDead = params.TeamDead;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDBNOChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   TeamDBNO                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadDBNOChanged(TArray<bool>* TeamDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDBNOChanged");

	UAthenaTeamInfo_C_HandleSquadDBNOChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamDBNO != nullptr)
		*TeamDBNO = params.TeamDBNO;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandleSquadMemberAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberAdded");

	UAthenaTeamInfo_C_HandleSquadMemberAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadHitInfoChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  HealthFractions                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  ShieldFractions                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamInfo_C::HandleSquadHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadHitInfoChanged");

	UAthenaTeamInfo_C_HandleSquadHitInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthFractions != nullptr)
		*HealthFractions = params.HealthFractions;
	if (ShieldFractions != nullptr)
		*ShieldFractions = params.ShieldFractions;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::ClearContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents");

	UAthenaTeamInfo_C_ClearContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendSquadMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::AppendSquadMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.AppendSquadMember");

	UAthenaTeamInfo_C_AppendSquadMember_Params params;
	params.PlayerState = PlayerState;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.Construct");

	UAthenaTeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft");

	UAthenaTeamInfo_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct");

	UAthenaTeamInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.RolloutAddFriend
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamInfo_C::RolloutAddFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.RolloutAddFriend");

	UAthenaTeamInfo_C_RolloutAddFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamInfo_C::ExecuteUbergraph_AthenaTeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo");

	UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

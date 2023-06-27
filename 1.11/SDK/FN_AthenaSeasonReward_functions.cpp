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

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.SetState");

	UAthenaSeasonReward_C_SetState_Params params;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToRepresent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.Setup");

	UAthenaSeasonReward_C_Setup_Params params;
	params.ItemToRepresent = ItemToRepresent;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonReward_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.OnHovered");

	UAthenaSeasonReward_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonReward_C::ExecuteUbergraph_AthenaSeasonReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward");

	UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              RewardText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDailyQuestRewardInfo_C* RewardInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HasReward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortItemQuantityPair   RewardItem                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            LevelRewarded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEmblemAndXp_C::SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UDailyQuestRewardInfo_C* RewardInfoWidget, bool HasReward, struct FFortItemQuantityPair RewardItem, int LevelRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.SetupReward");

	UPlayerEmblemAndXp_C_SetupReward_Params params;
	params.Container = Container;
	params.RewardText = RewardText;
	params.RewardInfoWidget = RewardInfoWidget;
	params.HasReward = HasReward;
	params.RewardItem = RewardItem;
	params.LevelRewarded = LevelRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  FortPublicAccountInfo          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerEmblemAndXp_C::Refresh(struct FFortPublicAccountInfo* FortPublicAccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Refresh");

	UPlayerEmblemAndXp_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPublicAccountInfo != nullptr)
		*FortPublicAccountInfo = params.FortPublicAccountInfo;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerEmblemAndXp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.Construct");

	UPlayerEmblemAndXp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerEmblemAndXp_C::OnAccountInfoChanged(struct FFortPublicAccountInfo Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.OnAccountInfoChanged");

	UPlayerEmblemAndXp_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEmblemAndXp_C::ExecuteUbergraph_PlayerEmblemAndXp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEmblemAndXp.PlayerEmblemAndXp_C.ExecuteUbergraph_PlayerEmblemAndXp");

	UPlayerEmblemAndXp_C_ExecuteUbergraph_PlayerEmblemAndXp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DailyRewards.DailyRewards_C.Handle Collect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::Handle_Collect(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Handle Collect");

	UDailyRewards_C_Handle_Collect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function DailyRewards.DailyRewards_C.Handle Close
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::Handle_Close(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Handle Close");

	UDailyRewards_C_Handle_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function DailyRewards.DailyRewards_C.Set Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::Set_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Set Input Action Handlers");

	UDailyRewards_C_Set_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::PopPanelWhileInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.PopPanelWhileInGame");

	UDailyRewards_C_PopPanelWhileInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::Setup_Daily_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Setup Daily Rewards");

	UDailyRewards_C_Setup_Daily_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Construct");

	UDailyRewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnActivated");

	UDailyRewards_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.PreConstruct");

	UDailyRewards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.ClaimResultReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>* Loot                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyRewards_C::ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>* Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.ClaimResultReceived");

	UDailyRewards_C_ClaimResultReceived_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnDeactivated");

	UDailyRewards_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewards_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.Destruct");

	UDailyRewards_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDailyRewards_C::ExecuteUbergraph_DailyRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards");

	UDailyRewards_C_ExecuteUbergraph_DailyRewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::OnDailyRewardsComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature");

	UDailyRewards_C_OnDailyRewardsComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

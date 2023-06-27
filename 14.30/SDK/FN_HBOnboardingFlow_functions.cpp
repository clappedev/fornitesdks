// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestManager*       QuestManager                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::GetCampaignQuestManager(class UFortQuestManager** QuestManager)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager");

	AHBOnboardingFlow_C_GetCampaignQuestManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestManager != nullptr)
		*QuestManager = params.QuestManager;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WaitingToCheckAgain            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie");

	AHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingToCheckAgain != nullptr)
		*WaitingToCheckAgain = params.WaitingToCheckAgain;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHBOnboardingFlow_C::NeedsToPlayEventMovie()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie");

	AHBOnboardingFlow_C_NeedsToPlayEventMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B301E90D33()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33");

	AHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33");

	AHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnFailure_50CD26324B96B121A5B49DA66113AE5D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnIgnored_50CD26324B96B121A5B49DA66113AE5D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::OnSuccess_50CD26324B96B121A5B49DA66113AE5D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D");

	AHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::HandlePlayEventCine()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine");

	AHBOnboardingFlow_C_HandlePlayEventCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHBOnboardingFlow_C::HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie");

	AHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
// (BlueprintCallable, BlueprintEvent)

void AHBOnboardingFlow_C::StartFlow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow");

	AHBOnboardingFlow_C_StartFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow");

	AHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

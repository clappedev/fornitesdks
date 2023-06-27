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

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnRep_CombinationCorrect
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocketManager_C::OnRep_CombinationCorrect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnRep_CombinationCorrect");

	AB_HeldObjectSocketManager_C_OnRep_CombinationCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.CheckTagMatches
// (Public, BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocketManager_C::CheckTagMatches()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.CheckTagMatches");

	AB_HeldObjectSocketManager_C_CheckTagMatches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.VerifyHeldObjectTags
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTagContainer> CorrectTags                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayTagContainer> CurrentTags                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           OrderMatters                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValidMatch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_HeldObjectSocketManager_C::VerifyHeldObjectTags(bool OrderMatters, TArray<struct FGameplayTagContainer>* CorrectTags, TArray<struct FGameplayTagContainer>* CurrentTags, bool* IsValidMatch)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.VerifyHeldObjectTags");

	AB_HeldObjectSocketManager_C_VerifyHeldObjectTags_Params params;
	params.OrderMatters = OrderMatters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CorrectTags != nullptr)
		*CorrectTags = params.CorrectTags;
	if (CurrentTags != nullptr)
		*CurrentTags = params.CurrentTags;
	if (IsValidMatch != nullptr)
		*IsValidMatch = params.IsValidMatch;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.UpdateHeldObjectTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_HeldObjectSocket_C*   ChangedSocket                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeldObjectSocketManager_C::UpdateHeldObjectTags(class AB_HeldObjectSocket_C* ChangedSocket)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.UpdateHeldObjectTags");

	AB_HeldObjectSocketManager_C_UpdateHeldObjectTags_Params params;
	params.ChangedSocket = ChangedSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HeldObjectSocketManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ReceiveBeginPlay");

	AB_HeldObjectSocketManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnCombinationCorrect
// (BlueprintCallable, BlueprintEvent)

void AB_HeldObjectSocketManager_C::OnCombinationCorrect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnCombinationCorrect");

	AB_HeldObjectSocketManager_C_OnCombinationCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ExecuteUbergraph_B_HeldObjectSocketManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeldObjectSocketManager_C::ExecuteUbergraph_B_HeldObjectSocketManager(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ExecuteUbergraph_B_HeldObjectSocketManager");

	AB_HeldObjectSocketManager_C_ExecuteUbergraph_B_HeldObjectSocketManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

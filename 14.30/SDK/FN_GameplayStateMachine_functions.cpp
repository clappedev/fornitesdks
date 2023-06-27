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

// Function GameplayStateMachine.GameplayState.UpdateState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayState::UpdateState(float DeltaTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayState.UpdateState");

	UGameplayState_UpdateState_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayStateMachine.GameplayState.GetStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayState::GetStateId()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayState.GetStateId");

	UGameplayState_GetStateId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayStateMachine.GameplayState.EndState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            NextStateId                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayState::EndState(const struct FGameplayTag& NextStateId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayState.EndState");

	UGameplayState_EndState_Params params;
	params.NextStateId = NextStateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayStateMachine.GameplayState.BeginState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag            PrevStateId                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayState::BeginState(const struct FGameplayTag& PrevStateId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayState.BeginState");

	UGameplayState_BeginState_Params params;
	params.PrevStateId = PrevStateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayStateMachine.GameplayStateMachine.SetState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            InStateId                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayStateMachine::SetState(const struct FGameplayTag& InStateId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.SetState");

	UGameplayStateMachine_SetState_Params params;
	params.InStateId = InStateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
// (Final, Native, Private)

void UGameplayStateMachine::OnRep_ActiveGameplayStateData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData");

	UGameplayStateMachine_OnRep_ActiveGameplayStateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayStateMachine::GetStateMachineId()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId");

	UGameplayStateMachine_GetStateMachineId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayState* UGameplayStateMachine::GetActiveStateObject()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject");

	UGameplayStateMachine_GetActiveStateObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayStateMachine::GetActiveStateId()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId");

	UGameplayStateMachine_GetActiveStateId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
// (Native, Event, Protected, BlueprintEvent)

void UGameplayStateMachine::EvaluateStateTransition()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition");

	UGameplayStateMachine_EvaluateStateTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_Keycard_Lock_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintGetInteractionString");

	ABGA_Athena_Keycard_Lock_Parent_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_Keycard_Lock_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintCanInteract");

	ABGA_Athena_Keycard_Lock_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.LockCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckPassed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Keycard_Lock_Parent_C::LockCheck(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, bool* CheckPassed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.LockCheck");

	ABGA_Athena_Keycard_Lock_Parent_C_LockCheck_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckPassed != nullptr)
		*CheckPassed = params.CheckPassed;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ApplyFailCheckEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ApplyFailCheckEffect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ApplyFailCheckEffect");

	ABGA_Athena_Keycard_Lock_Parent_C_ApplyFailCheckEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.CallOpenVault
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::CallOpenVault()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.CallOpenVault");

	ABGA_Athena_Keycard_Lock_Parent_C_CallOpenVault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Keycard_Lock_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintOnInteract");

	ABGA_Athena_Keycard_Lock_Parent_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ReceiveBeginPlay");

	ABGA_Athena_Keycard_Lock_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowSuccessScreen
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ShowSuccessScreen()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowSuccessScreen");

	ABGA_Athena_Keycard_Lock_Parent_C_ShowSuccessScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowFailScreen
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ShowFailScreen()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowFailScreen");

	ABGA_Athena_Keycard_Lock_Parent_C_ShowFailScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::HideAndKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.HideAndKill");

	ABGA_Athena_Keycard_Lock_Parent_C_HideAndKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.SetLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Athena_Lock>  LockState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Keycard_Lock_Parent_C::SetLock(TEnumAsByte<Enum_Athena_Lock> LockState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.SetLock");

	ABGA_Athena_Keycard_Lock_Parent_C_SetLock_Params params;
	params.LockState = LockState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Keycard_Lock_Parent_C::ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent");

	ABGA_Athena_Keycard_Lock_Parent_C_ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

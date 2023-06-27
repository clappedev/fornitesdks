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

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys");

	UCommonInputSubsystem_ShouldShowInputKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonGamepadType             InGamepadInputType             (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputSubsystem::SetGamepadInputType(ECommonGamepadType InGamepadInputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetGamepadInputType");

	UCommonInputSubsystem_SetGamepadInputType_Params params;
	params.InGamepadInputType = InGamepadInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonInputType               NewInputType                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetCurrentInputType");

	UCommonInputSubsystem_SetCurrentInputType_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsUsingPointerInput");

	UCommonInputSubsystem_IsUsingPointerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               InputMethod                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputSubsystem::IsInputMethodActive(ECommonInputType InputMethod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsInputMethodActive");

	UCommonInputSubsystem_IsInputMethodActive_Params params;
	params.InputMethod = InputMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetDefaultInputType");

	UCommonInputSubsystem_GetDefaultInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentInputType");

	UCommonInputSubsystem_GetCurrentInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonGamepadType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECommonGamepadType UCommonInputSubsystem::GetCurrentGamepadType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType");

	UCommonInputSubsystem_GetCurrentGamepadType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

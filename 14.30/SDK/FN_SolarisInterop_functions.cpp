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

// Function SolarisInterop.VerseCoroutineLib.GetState
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVerseCoroutineLib::STATIC_GetState(class UObject* Context)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SolarisInterop.VerseCoroutineLib.GetState");

	UVerseCoroutineLib_GetState_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SolarisInterop.VerseCoroutineLib.Deallocate
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)

void UVerseCoroutineLib::STATIC_Deallocate(class UObject* Context)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SolarisInterop.VerseCoroutineLib.Deallocate");

	UVerseCoroutineLib_Deallocate_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SolarisInterop.VerseCoroutineLib.Allocate
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Caller                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CallerResumeState              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UVerseCoroutineLib::STATIC_Allocate(class UObject* Type, class UObject* Caller, int CallerResumeState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SolarisInterop.VerseCoroutineLib.Allocate");

	UVerseCoroutineLib_Allocate_Params params;
	params.Type = Type;
	params.Caller = Caller;
	params.CallerResumeState = CallerResumeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SolarisInterop.VerseCoroutineLib.Abort
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbortCallers                  (Parm, ZeroConstructor, IsPlainOldData)

void UVerseCoroutineLib::STATIC_Abort(class UObject* Context, bool bAbortCallers)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SolarisInterop.VerseCoroutineLib.Abort");

	UVerseCoroutineLib_Abort_Params params;
	params.Context = Context;
	params.bAbortCallers = bAbortCallers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

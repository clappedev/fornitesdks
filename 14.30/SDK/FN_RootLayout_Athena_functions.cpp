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

// Function RootLayout_Athena.RootLayout_Athena_C.IsConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URootLayout_Athena_C::IsConsole()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.IsConsole");

	URootLayout_Athena_C_IsConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URootLayout_Athena_C::DialogResult_0099D78247C40A9775C753A2024EA419(EFortDialogResult Result, const struct FName& ResultName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419");

	URootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootLayout_Athena.RootLayout_Athena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URootLayout_Athena_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.Construct");

	URootLayout_Athena_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked
// (BlueprintCallable, BlueprintEvent)

void URootLayout_Athena_C::OnGameWindowCloseButtonClicked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked");

	URootLayout_Athena_C_OnGameWindowCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_2
// (BlueprintCallable, BlueprintEvent)

void URootLayout_Athena_C::OnModalQueueEmptied_2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_2");

	URootLayout_Athena_C_OnModalQueueEmptied_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URootLayout_Athena_C::ExecuteUbergraph_RootLayout_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena");

	URootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

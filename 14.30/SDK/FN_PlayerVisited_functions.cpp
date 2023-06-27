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

// Function PlayerVisited.PlayerVisited_C.EndOfShow
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerVisited_C::EndOfShow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.EndOfShow");

	UPlayerVisited_C_EndOfShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.OnNewVisited
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   LocalizedLocationName          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsNamedLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerVisited_C::OnNewVisited(const struct FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.OnNewVisited");

	UPlayerVisited_C_OnNewVisited_Params params;
	params.LocalizedLocationName = LocalizedLocationName;
	params.bIsNamedLocation = bIsNamedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerVisited_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.Construct");

	UPlayerVisited_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.Brief Show Finished
// (BlueprintCallable, BlueprintEvent)

void UPlayerVisited_C::Brief_Show_Finished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.Brief Show Finished");

	UPlayerVisited_C_Brief_Show_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.OnStompFailed
// (Event, Protected, BlueprintEvent)

void UPlayerVisited_C::OnStompFailed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.OnStompFailed");

	UPlayerVisited_C_OnStompFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)

void UPlayerVisited_C::OnStompedByOtherWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget");

	UPlayerVisited_C_OnStompedByOtherWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.OnAnimBackupTimerFinished
// (BlueprintCallable, BlueprintEvent)

void UPlayerVisited_C::OnAnimBackupTimerFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.OnAnimBackupTimerFinished");

	UPlayerVisited_C_OnAnimBackupTimerFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerVisited_C::ExecuteUbergraph_PlayerVisited(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited");

	UPlayerVisited_C_ExecuteUbergraph_PlayerVisited_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerDiscovered_C::EndOfShow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow");

	UPlayerDiscovered_C_EndOfShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound
// (BlueprintCallable, BlueprintEvent)

void UPlayerDiscovered_C::Play_Brief_Show_Sound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound");

	UPlayerDiscovered_C_Play_Brief_Show_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)

void UPlayerDiscovered_C::OnStompedByOtherWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget");

	UPlayerDiscovered_C_OnStompedByOtherWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   LocalizedLocationName          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsNamedLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerDiscovered_C::OnNewDiscovery(const struct FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery");

	UPlayerDiscovered_C_OnNewDiscovery_Params params;
	params.LocalizedLocationName = LocalizedLocationName;
	params.bIsNamedLocation = bIsNamedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed
// (Event, Protected, BlueprintEvent)

void UPlayerDiscovered_C::OnStompFailed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed");

	UPlayerDiscovered_C_OnStompFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished
// (BlueprintCallable, BlueprintEvent)

void UPlayerDiscovered_C::Brief_Show_Finished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished");

	UPlayerDiscovered_C_Brief_Show_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerDiscovered_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.Construct");

	UPlayerDiscovered_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerDiscovered_C::ExecuteUbergraph_PlayerDiscovered(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered");

	UPlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

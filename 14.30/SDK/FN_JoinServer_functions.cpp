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

// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState                   PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::OnEnterState(EFortUIState PreviousUIState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnEnterState");

	UJoinServer_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnShowTutorialDialog
// (Event, Protected, BlueprintEvent)

void UJoinServer_C::OnShowTutorialDialog()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnShowTutorialDialog");

	UJoinServer_C_OnShowTutorialDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer");

	UJoinServer_C_ExecuteUbergraph_JoinServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

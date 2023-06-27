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

// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontendCamera_Manage_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated");

	AFrontendCamera_Manage_C_OnActivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontendCamera_Manage_C::OnDeactivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated");

	AFrontendCamera_Manage_C_OnDeactivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontendCamera_Manage_C::ExecuteUbergraph_FrontendCamera_Manage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage");

	AFrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

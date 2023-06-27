// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FrontendCamera_Manage.FrontendCamera_Manage_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFrontendCamera_Manage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.UserConstructionScript");

	AFrontendCamera_Manage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFrontendCamera_Manage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated");

	AFrontendCamera_Manage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFrontendCamera_Manage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated");

	AFrontendCamera_Manage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFrontendCamera_Manage_C::ExecuteUbergraph_FrontendCamera_Manage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage");

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

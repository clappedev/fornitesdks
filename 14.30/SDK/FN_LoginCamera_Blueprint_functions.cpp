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

// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoginCamera_Blueprint_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated");

	ALoginCamera_Blueprint_C_OnActivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoginCamera_Blueprint_C::ExecuteUbergraph_LoginCamera_Blueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint");

	ALoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpecialEventsCamera_Blueprint_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated");

	ASpecialEventsCamera_Blueprint_C_OnActivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpecialEventsCamera_Blueprint_C::OnDeactivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated");

	ASpecialEventsCamera_Blueprint_C_OnDeactivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpecialEventsCamera_Blueprint_C::ExecuteUbergraph_SpecialEventsCamera_Blueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint");

	ASpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

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

void ASpecialEventsCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated");

	ASpecialEventsCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void ASpecialEventsCamera_Blueprint_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated");

	ASpecialEventsCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpecialEventsCamera_Blueprint_C::ExecuteUbergraph_SpecialEventsCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint");

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

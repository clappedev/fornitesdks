// Fortnite (8.51) SDK
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

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AthenaPlayerMarker_WithCustomization_C::OnLoaded(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded");

	AB_AthenaPlayerMarker_WithCustomization_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData    MarkerData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_AthenaPlayerMarker_WithCustomization_C::OnSetupMarker(struct FFortWorldMarkerData MarkerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker");

	AB_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker_Params params;
	params.MarkerData = MarkerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerHidden
// (Event, Protected, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerHidden");

	AB_AthenaPlayerMarker_WithCustomization_C_OnMarkerHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.UpdateTopper
// (BlueprintCallable, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::UpdateTopper()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.UpdateTopper");

	AB_AthenaPlayerMarker_WithCustomization_C_UpdateTopper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerPlaced");

	AB_AthenaPlayerMarker_WithCustomization_C_OnMarkerPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AthenaPlayerMarker_WithCustomization_C::ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");

	AB_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript");

	AB_AthenaMapMarkerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc");

	AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc");

	AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc");

	AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc");

	AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnMarkerPlaced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced");

	AB_AthenaMapMarkerBase_C_OnMarkerPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData    MarkerData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_AthenaMapMarkerBase_C::OnSetupMarker(const struct FFortWorldMarkerData& MarkerData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker");

	AB_AthenaMapMarkerBase_C_OnSetupMarker_Params params;
	params.MarkerData = MarkerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AthenaMapMarkerBase_C::OnMarkerColorChanged(const struct FLinearColor& InColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged");

	AB_AthenaMapMarkerBase_C_OnMarkerColorChanged_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_AthenaMapMarkerBase_C::ExecuteUbergraph_B_AthenaMapMarkerBase(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase");

	AB_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

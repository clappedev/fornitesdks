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

// Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATVPostProcessBP_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame");

	ATVPostProcessBP_C_IsEnabledForCurrentSubgame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript");

	ATVPostProcessBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects");

	ATVPostProcessBP_C_Camera_DisableEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch");

	ATVPostProcessBP_C_FrontEndCameraSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::ExecuteCameraSwitch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch");

	ATVPostProcessBP_C_ExecuteCameraSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP");

	ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

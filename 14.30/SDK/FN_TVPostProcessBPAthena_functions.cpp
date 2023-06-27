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

// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATVPostProcessBPAthena_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame");

	ATVPostProcessBPAthena_C_IsEnabledForCurrentSubgame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc");

	ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc");

	ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBPAthena_C::ExecuteCameraSwitch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch");

	ATVPostProcessBPAthena_C_ExecuteCameraSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBPAthena_C::Camera_DisableEffects()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects");

	ATVPostProcessBPAthena_C_Camera_DisableEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATVPostProcessBPAthena_C::ExecuteUbergraph_TVPostProcessBPAthena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena");

	ATVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

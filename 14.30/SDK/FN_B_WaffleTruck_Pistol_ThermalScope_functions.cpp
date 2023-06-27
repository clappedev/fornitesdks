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

// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ScalePlayerThermal__FinishedFunc
// (BlueprintEvent)

void AB_WaffleTruck_Pistol_ThermalScope_C::ScalePlayerThermal__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ScalePlayerThermal__FinishedFunc");

	AB_WaffleTruck_Pistol_ThermalScope_C_ScalePlayerThermal__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ScalePlayerThermal__UpdateFunc
// (BlueprintEvent)

void AB_WaffleTruck_Pistol_ThermalScope_C::ScalePlayerThermal__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ScalePlayerThermal__UpdateFunc");

	AB_WaffleTruck_Pistol_ThermalScope_C_ScalePlayerThermal__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_WaffleTruck_Pistol_ThermalScope_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.OnSetTargeting");

	AB_WaffleTruck_Pistol_ThermalScope_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_WaffleTruck_Pistol_ThermalScope_C::PlayScopePP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.PlayScopePP");

	AB_WaffleTruck_Pistol_ThermalScope_C_PlayScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_WaffleTruck_Pistol_ThermalScope_C::ReverseScopePP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ReverseScopePP");

	AB_WaffleTruck_Pistol_ThermalScope_C_ReverseScopePP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)

void AB_WaffleTruck_Pistol_ThermalScope_C::ForceScopeBackImmediatly()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ForceScopeBackImmediatly");

	AB_WaffleTruck_Pistol_ThermalScope_C_ForceScopeBackImmediatly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_WaffleTruck_Pistol_ThermalScope_C::ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C.ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope");

	AB_WaffleTruck_Pistol_ThermalScope_C_ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

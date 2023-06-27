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

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRuntimeFloatCurve      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeFloatCurve AB_SoundIndicator_01_C::GetStrengthCurveForActiveType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType");

	AB_SoundIndicator_01_C_GetStrengthCurveForActiveType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AB_SoundIndicator_01_C::GetDefaultTint()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint");

	AB_SoundIndicator_01_C_GetDefaultTint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* AB_SoundIndicator_01_C::GetDefaultIcon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon");

	AB_SoundIndicator_01_C_GetDefaultIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRuntimeFloatCurve      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeFloatCurve AB_SoundIndicator_01_C::GetWeaponCurve()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve");

	AB_SoundIndicator_01_C_GetWeaponCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SoundIndicator_01_C::ExecuteUbergraph_B_SoundIndicator_01(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01");

	AB_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NormalizedValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFloatSliderVariantPicker_C::OnUpdateValue(float NormalizedValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue");

	UAthenaFloatSliderVariantPicker_C_OnUpdateValue_Params params;
	params.NormalizedValue = NormalizedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFloatSliderVariantPicker_C::ExecuteUbergraph_AthenaFloatSliderVariantPicker(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker");

	UAthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

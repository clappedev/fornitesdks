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

// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsRotator_Narrow_C::BP_OnOptionsPopulated(int Count)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionsPopulated");

	USettingsRotator_Narrow_C_BP_OnOptionsPopulated_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsRotator_Narrow_C::BP_OnOptionSelected(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionSelected");

	USettingsRotator_Narrow_C_BP_OnOptionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            DefaultOptionIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsRotator_Narrow_C::BP_OnDefaultOptionSpecified(int DefaultOptionIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified");

	USettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified_Params params;
	params.DefaultOptionIndex = DefaultOptionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnHover Animation
// (BlueprintCallable, BlueprintEvent)

void USettingsRotator_Narrow_C::OnHover_Animation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnHover Animation");

	USettingsRotator_Narrow_C_OnHover_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnUnHover Animation
// (BlueprintCallable, BlueprintEvent)

void USettingsRotator_Narrow_C::OnUnHover_Animation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnUnHover Animation");

	USettingsRotator_Narrow_C_OnUnHover_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.ExecuteUbergraph_SettingsRotator_Narrow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsRotator_Narrow_C::ExecuteUbergraph_SettingsRotator_Narrow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.ExecuteUbergraph_SettingsRotator_Narrow");

	USettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

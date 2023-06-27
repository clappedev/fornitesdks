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

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USettingsListEntry_Discrete_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget");

	USettingsListEntry_Discrete_Narrow_C_GetPrimaryGamepadFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Discrete_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter");

	USettingsListEntry_Discrete_Narrow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Discrete_Narrow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave");

	USettingsListEntry_Discrete_Narrow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsListEntry_Discrete_Narrow_C::ExecuteUbergraph_SettingsListEntry_Discrete_Narrow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow");

	USettingsListEntry_Discrete_Narrow_C_ExecuteUbergraph_SettingsListEntry_Discrete_Narrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

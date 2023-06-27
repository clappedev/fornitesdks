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

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   PrimaryKeyText                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   SecondaryKeyText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnUpdateKeyText(const struct FText& PrimaryKeyText, const struct FText& SecondaryKeyText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText");

	USettingsListEntry_KeyboardInput_C_OnUpdateKeyText_Params params;
	params.PrimaryKeyText = PrimaryKeyText;
	params.SecondaryKeyText = SecondaryKeyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter");

	USettingsListEntry_KeyboardInput_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave");

	USettingsListEntry_KeyboardInput_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsListEntry_KeyboardInput_C::ExecuteUbergraph_SettingsListEntry_KeyboardInput(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput");

	USettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

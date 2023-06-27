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

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ActionText                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_ControllerButton_C::OnSettingAssigned(const struct FText& ActionText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned");

	USettingsListEntry_ControllerButton_C_OnSettingAssigned_Params params;
	params.ActionText = ActionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsListEntry_ControllerButton_C::ExecuteUbergraph_SettingsListEntry_ControllerButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton");

	USettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

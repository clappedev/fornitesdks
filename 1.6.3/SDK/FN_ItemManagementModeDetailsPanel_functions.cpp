// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.HandleDifferentItemManagementModeSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementModeDetailsPanel_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementModeDetailsPanel_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementModeDetailsPanel_C::ExecuteUbergraph_ItemManagementModeDetailsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel");

	UItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

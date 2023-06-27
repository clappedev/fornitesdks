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

// Function ControllerActionsMenu.ControllerActionsMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UControllerActionsMenu_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControllerActionsMenu.ControllerActionsMenu_C.BP_OnActivated");

	UControllerActionsMenu_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllerActionsMenu.ControllerActionsMenu_C.ExecuteUbergraph_ControllerActionsMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControllerActionsMenu_C::ExecuteUbergraph_ControllerActionsMenu(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControllerActionsMenu.ControllerActionsMenu_C.ExecuteUbergraph_ControllerActionsMenu");

	UControllerActionsMenu_C_ExecuteUbergraph_ControllerActionsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

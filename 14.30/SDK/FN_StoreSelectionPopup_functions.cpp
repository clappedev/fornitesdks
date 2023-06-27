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

// Function StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreSelectionPopup_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated");

	UStoreSelectionPopup_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup");

	UStoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

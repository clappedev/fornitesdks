#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function StoreSelectionPopup.StoreSelectionPopup_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreSelectionPopup_C::OnActivated()
{
	static auto Func = Class->GetFunction("StoreSelectionPopup_C", "OnActivated");

	Params::UStoreSelectionPopup_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("StoreSelectionPopup_C", "ExecuteUbergraph_StoreSelectionPopup");

	Params::UStoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

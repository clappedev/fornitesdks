// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAnimateOnSelect               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportablePlayerReasonEntry_C::SetSelectionState(bool bIsSelected, bool bAnimateOnSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.SetSelectionState");

	UReportablePlayerReasonEntry_C_SetSelectionState_Params params;
	params.bIsSelected = bIsSelected;
	params.bAnimateOnSelect = bAnimateOnSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.ExecuteUbergraph_ReportablePlayerReasonEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportablePlayerReasonEntry_C::ExecuteUbergraph_ReportablePlayerReasonEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.ExecuteUbergraph_ReportablePlayerReasonEntry");

	UReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

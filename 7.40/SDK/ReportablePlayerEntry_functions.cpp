#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimateOnSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerEntry_C::SetSelectionState(bool bIsSelected, bool bAnimateOnSelect)
{
	static auto Func = Class->GetFunction("ReportablePlayerEntry_C", "SetSelectionState");

	Params::UReportablePlayerEntry_C_SetSelectionState_Params Parms;
	Parms.bIsSelected = bIsSelected;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ReportablePlayerEntry.ReportablePlayerEntry_C.ExecuteUbergraph_ReportablePlayerEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAnimateOnSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerEntry_C::ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect)
{
	static auto Func = Class->GetFunction("ReportablePlayerEntry_C", "ExecuteUbergraph_ReportablePlayerEntry");

	Params::UReportablePlayerEntry_C_ExecuteUbergraph_ReportablePlayerEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bAnimateOnSelect = K2Node_Event_bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

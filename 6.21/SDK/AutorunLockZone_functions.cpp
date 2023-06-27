#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AutorunLockZone.AutorunLockZone_C.OnInZoneChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsInZone                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAutorunLockZone_C::OnInZoneChanged(bool bNewIsInZone)
{
	static auto Func = Class->GetFunction("AutorunLockZone_C", "OnInZoneChanged");

	Params::UAutorunLockZone_C_OnInZoneChanged_Params Parms;
	Parms.bNewIsInZone = bNewIsInZone;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AutorunLockZone.AutorunLockZone_C.ExecuteUbergraph_AutorunLockZone
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsInZone                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            ()

void UAutorunLockZone_C::ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bNewIsInZone, const struct FSlateColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AutorunLockZone_C", "ExecuteUbergraph_AutorunLockZone");

	Params::UAutorunLockZone_C_ExecuteUbergraph_AutorunLockZone_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bNewIsInZone = K2Node_Event_bNewIsInZone;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

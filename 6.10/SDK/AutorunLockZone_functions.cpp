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
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsInZone                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAutorunLockZone_C::ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool K2Node_Event_bNewIsInZone)
{
	static auto Func = Class->GetFunction("AutorunLockZone_C", "ExecuteUbergraph_AutorunLockZone");

	Params::UAutorunLockZone_C_ExecuteUbergraph_AutorunLockZone_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bNewIsInZone = K2Node_Event_bNewIsInZone;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

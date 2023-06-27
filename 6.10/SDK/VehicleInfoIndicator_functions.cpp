#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UVehicleInfoIndicator_C::OnVehicleChanged()
{
	static auto Func = Class->GetFunction("VehicleInfoIndicator_C", "OnVehicleChanged");

	Params::UVehicleInfoIndicator_C_OnVehicleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UVehicleInfoIndicator_C::OnVehicleHealthChanged()
{
	static auto Func = Class->GetFunction("VehicleInfoIndicator_C", "OnVehicleHealthChanged");

	Params::UVehicleInfoIndicator_C_OnVehicleHealthChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VehicleInfoIndicator.VehicleInfoIndicator_C.ExecuteUbergraph_VehicleInfoIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicleInfoIndicator_C::ExecuteUbergraph_VehicleInfoIndicator(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetHealth_ReturnValue)
{
	static auto Func = Class->GetFunction("VehicleInfoIndicator_C", "ExecuteUbergraph_VehicleInfoIndicator");

	Params::UVehicleInfoIndicator_C_ExecuteUbergraph_VehicleInfoIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

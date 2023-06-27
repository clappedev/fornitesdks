#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_MissileBattery_Homing_Placement_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "UserConstructionScript");

	Params::AB_MissileBattery_Homing_Placement_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_MissileBattery_Homing_Placement_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "ReceiveBeginPlay");

	Params::AB_MissileBattery_Homing_Placement_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ExecuteUbergraph_B_MissileBattery_Homing_Placement
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MissileBattery_Homing_Placement_C::ExecuteUbergraph_B_MissileBattery_Homing_Placement(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_MissileBattery_Homing_Placement_C", "ExecuteUbergraph_B_MissileBattery_Homing_Placement");

	Params::AB_MissileBattery_Homing_Placement_C_ExecuteUbergraph_B_MissileBattery_Homing_Placement_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

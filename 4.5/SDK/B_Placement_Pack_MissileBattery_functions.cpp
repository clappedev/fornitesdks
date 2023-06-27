#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Placement_Pack_MissileBattery_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "UserConstructionScript");

	Params::AB_Placement_Pack_MissileBattery_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Placement_Pack_MissileBattery_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ReceiveBeginPlay");

	Params::AB_Placement_Pack_MissileBattery_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ExecuteUbergraph_B_Placement_Pack_MissileBattery
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Pack_MissileBattery_C::ExecuteUbergraph_B_Placement_Pack_MissileBattery(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_Placement_Pack_MissileBattery_C", "ExecuteUbergraph_B_Placement_Pack_MissileBattery");

	Params::AB_Placement_Pack_MissileBattery_C_ExecuteUbergraph_B_Placement_Pack_MissileBattery_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

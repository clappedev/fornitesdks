#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_DeimosMissionTarget.BP_DeimosMissionTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosMissionTarget_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_DeimosMissionTarget_C", "UserConstructionScript");

	Params::ABP_DeimosMissionTarget_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosMissionTarget.BP_DeimosMissionTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosMissionTarget_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_DeimosMissionTarget_C", "ReceiveBeginPlay");

	Params::ABP_DeimosMissionTarget_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosMissionTarget.BP_DeimosMissionTarget_C.ExecuteUbergraph_BP_DeimosMissionTarget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosMissionTarget_C::ExecuteUbergraph_BP_DeimosMissionTarget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_DeimosMissionTarget_C", "ExecuteUbergraph_BP_DeimosMissionTarget");

	Params::ABP_DeimosMissionTarget_C_ExecuteUbergraph_BP_DeimosMissionTarget_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Decal_Tomato_Splat_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Decal_Tomato_Splat_C", "UserConstructionScript");

	Params::ABP_Decal_Tomato_Splat_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Decal_Tomato_Splat_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Decal_Tomato_Splat_C", "ReceiveBeginPlay");

	Params::ABP_Decal_Tomato_Splat_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C.ExecuteUbergraph_BP_Decal_Tomato_Splat
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorLocalRotation_SweepHitResult                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Decal_Tomato_Splat_C::ExecuteUbergraph_BP_Decal_Tomato_Splat(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_Decal_Tomato_Splat_C", "ExecuteUbergraph_BP_Decal_Tomato_Splat");

	Params::ABP_Decal_Tomato_Splat_C_ExecuteUbergraph_BP_Decal_Tomato_Splat_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalRotation_SweepHitResult = CallFunc_K2_AddActorLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

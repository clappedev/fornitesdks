#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UDrumShotGun_SK_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("DrumShotGun_SK_AnimBP_C", "AnimGraph");

	Params::UDrumShotGun_SK_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function DrumShotGun_SK_AnimBP.DrumShotGun_SK_AnimBP_C.ExecuteUbergraph_DrumShotGun_SK_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDrumShotGun_SK_AnimBP_C::ExecuteUbergraph_DrumShotGun_SK_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("DrumShotGun_SK_AnimBP_C", "ExecuteUbergraph_DrumShotGun_SK_AnimBP");

	Params::UDrumShotGun_SK_AnimBP_C_ExecuteUbergraph_DrumShotGun_SK_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_TrapBuild_MountedTurret_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_TrapBuild_MountedTurret_C", "K2_ActivateAbility");

	Params::UGA_TrapBuild_MountedTurret_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_TrapBuild_MountedTurret.GA_TrapBuild_MountedTurret_C.ExecuteUbergraph_GA_TrapBuild_MountedTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)

void UGA_TrapBuild_MountedTurret_C::ExecuteUbergraph_GA_TrapBuild_MountedTurret(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_TrapBuild_MountedTurret_C", "ExecuteUbergraph_GA_TrapBuild_MountedTurret");

	Params::UGA_TrapBuild_MountedTurret_C_ExecuteUbergraph_GA_TrapBuild_MountedTurret_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

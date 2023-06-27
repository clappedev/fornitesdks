#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RocketLauncher_Generic_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Generic_C", "UserConstructionScript");

	Params::AB_RocketLauncher_Generic_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RocketLauncher_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Generic_C", "Muzzle Flash FX");

	Params::AB_RocketLauncher_Generic_C_Muzzle_Flash_FX_Params Parms;
	Parms.Persistent_Fire = Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RocketLauncher_Generic.B_RocketLauncher_Generic_C.ExecuteUbergraph_B_RocketLauncher_Generic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Persistent_Fire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_RocketLauncher_Generic_C::ExecuteUbergraph_B_RocketLauncher_Generic(int32 EntryPoint, bool K2Node_Event_Persistent_Fire, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static auto Func = Class->GetFunction("B_RocketLauncher_Generic_C", "ExecuteUbergraph_B_RocketLauncher_Generic");

	Params::AB_RocketLauncher_Generic_C_ExecuteUbergraph_B_RocketLauncher_Generic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Persistent_Fire = K2Node_Event_Persistent_Fire;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

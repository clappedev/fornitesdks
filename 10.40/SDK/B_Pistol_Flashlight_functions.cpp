#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Pistol_Flashlight.B_Pistol_Flashlight_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pistol_Flashlight_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Pistol_Flashlight_C", "OnWeaponAttached");

	Params::AB_Pistol_Flashlight_C_OnWeaponAttached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Pistol_Flashlight.B_Pistol_Flashlight_C.ExecuteUbergraph_B_Pistol_Flashlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pistol_Flashlight_C::ExecuteUbergraph_B_Pistol_Flashlight(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pistol_Flashlight_C", "ExecuteUbergraph_B_Pistol_Flashlight");

	Params::AB_Pistol_Flashlight_C_ExecuteUbergraph_B_Pistol_Flashlight_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

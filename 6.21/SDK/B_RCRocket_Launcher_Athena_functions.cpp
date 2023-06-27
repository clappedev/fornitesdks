#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_RCRocket_Launcher_Athena_C::IsCachedIsProjectileWeapon()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "IsCachedIsProjectileWeapon");

	Params::AB_RCRocket_Launcher_Athena_C_IsCachedIsProjectileWeapon_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RCRocket_Launcher_Athena_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "UserConstructionScript");

	Params::AB_RCRocket_Launcher_Athena_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_RCRocket_Launcher_Athena_C::SendMuzzleFlashFX()
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "SendMuzzleFlashFX");

	Params::AB_RCRocket_Launcher_Athena_C_SendMuzzleFlashFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RCRocket_Launcher_Athena_C::OnWeaponVisibilityChanged(bool bVisible)
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "OnWeaponVisibilityChanged");

	Params::AB_RCRocket_Launcher_Athena_C_OnWeaponVisibilityChanged_Params Parms;
	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_RCRocket_Launcher_Athena_C::ExecuteUbergraph_B_RCRocket_Launcher_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bVisible)
{
	static auto Func = Class->GetFunction("B_RCRocket_Launcher_Athena_C", "ExecuteUbergraph_B_RCRocket_Launcher_Athena");

	Params::AB_RCRocket_Launcher_Athena_C_ExecuteUbergraph_B_RCRocket_Launcher_Athena_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

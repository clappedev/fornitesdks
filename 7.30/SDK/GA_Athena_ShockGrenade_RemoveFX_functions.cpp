#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ShockGrenade_RemoveFX_C::OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(enum class EMovementMode NewMovementMode)
{
	static auto Func = Class->GetFunction("GA_Athena_ShockGrenade_RemoveFX_C", "OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E");

	Params::UGA_Athena_ShockGrenade_RemoveFX_C_OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E_Params Parms;
	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ShockGrenade_RemoveFX_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_ShockGrenade_RemoveFX_C", "K2_ActivateAbility");

	Params::UGA_Athena_ShockGrenade_RemoveFX_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C.ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_NewMovementMode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EMovementMode           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitMovementModeChange*CallFunc_CreateWaitMovementModeChange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ShockGrenade_RemoveFX_C::ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int32 EntryPoint, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMovementMode Temp_byte_Variable, class UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ShockGrenade_RemoveFX_C", "ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX");

	Params::UGA_Athena_ShockGrenade_RemoveFX_C_ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewMovementMode = K2Node_CustomEvent_NewMovementMode;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_CreateWaitMovementModeChange_ReturnValue = CallFunc_CreateWaitMovementModeChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

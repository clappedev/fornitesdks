#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.BP_ShouldTrigger
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              TouchingActors                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              LocalTouching                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATrap_Floor_Player_Jump_Free_Direction_Pad_C::BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& LocalTouching, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "BP_ShouldTrigger");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_BP_ShouldTrigger_Params Parms;
	Parms.TouchingActors = TouchingActors;
	Parms.LocalTouching = LocalTouching;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "UserConstructionScript");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnReloadEnd()
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "OnReloadEnd");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_OnReloadEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnPlaced()
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "OnPlaced");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_OnPlaced_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnFinishedBuilding()
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "OnFinishedBuilding");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_OnFinishedBuilding_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::OnOutOfDurability()
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "OnOutOfDurability");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_OnOutOfDurability_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam1                              (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam2                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam3                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam4                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam5                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam6                              (IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue5                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Jump_Free_Direction_Pad_C::ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam6, float Temp_float_Variable, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Floor_Player_Jump_Free_Direction_Pad_C", "ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad");

	Params::ATrap_Floor_Player_Jump_Free_Direction_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_ParticleSysParam1 = K2Node_MakeStruct_ParticleSysParam1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue3 = CallFunc_Multiply_VectorVector_ReturnValue3;
	Parms.K2Node_MakeStruct_ParticleSysParam2 = K2Node_MakeStruct_ParticleSysParam2;
	Parms.K2Node_MakeStruct_ParticleSysParam3 = K2Node_MakeStruct_ParticleSysParam3;
	Parms.K2Node_MakeStruct_ParticleSysParam4 = K2Node_MakeStruct_ParticleSysParam4;
	Parms.K2Node_MakeStruct_ParticleSysParam5 = K2Node_MakeStruct_ParticleSysParam5;
	Parms.K2Node_MakeStruct_ParticleSysParam6 = K2Node_MakeStruct_ParticleSysParam6;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue5 = CallFunc_K2_GetActorLocation_ReturnValue5;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue2 = CallFunc_K2_GetComponentLocation_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

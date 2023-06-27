#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ChangeToFriendlyMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeam               CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Wall_Spikes_Metal_C::ChangeToFriendlyMaterial(enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "ChangeToFriendlyMaterial");

	Params::ATrap_Wall_Spikes_Metal_C_ChangeToFriendlyMaterial_Params Parms;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.MaterialSweepOnSpikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SweepSpeed_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SweepColor_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SweepExponent_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Wall_Spikes_Metal_C::MaterialSweepOnSpikes(float SweepSpeed_, const struct FLinearColor& SweepColor_, float SweepExponent_, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "MaterialSweepOnSpikes");

	Params::ATrap_Wall_Spikes_Metal_C_MaterialSweepOnSpikes_Params Parms;
	Parms.SweepSpeed_ = SweepSpeed_;
	Parms.SweepColor_ = SweepColor_;
	Parms.SweepExponent_ = SweepExponent_;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.SetSpikePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SpikePosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Wall_Spikes_Metal_C::SetSpikePosition(float SpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "SetSpikePosition");

	Params::ATrap_Wall_Spikes_Metal_C_SetSpikePosition_Params Parms;
	Parms.SpikePosition = SpikePosition;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Wall_Spikes_Metal_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "UserConstructionScript");

	Params::ATrap_Wall_Spikes_Metal_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::Fire__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "Fire__FinishedFunc");

	Params::ATrap_Wall_Spikes_Metal_C_Fire__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::Fire__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "Fire__UpdateFunc");

	Params::ATrap_Wall_Spikes_Metal_C_Fire__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::Retract__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "Retract__FinishedFunc");

	Params::ATrap_Wall_Spikes_Metal_C_Retract__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::Retract__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "Retract__UpdateFunc");

	Params::ATrap_Wall_Spikes_Metal_C_Retract__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__Sounds__EventFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::Retract__Sounds__EventFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "Retract__Sounds__EventFunc");

	Params::ATrap_Wall_Spikes_Metal_C_Retract__Sounds__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::ResetSpikes__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "ResetSpikes__FinishedFunc");

	Params::ATrap_Wall_Spikes_Metal_C_ResetSpikes__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::ResetSpikes__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "ResetSpikes__UpdateFunc");

	Params::ATrap_Wall_Spikes_Metal_C_ResetSpikes__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnReloadEnd()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnReloadEnd");

	Params::ATrap_Wall_Spikes_Metal_C_OnReloadEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnPlaced()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnPlaced");

	Params::ATrap_Wall_Spikes_Metal_C_OnPlaced_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnFinishedBuilding()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnFinishedBuilding");

	Params::ATrap_Wall_Spikes_Metal_C_OnFinishedBuilding_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Wall_Spikes_Metal_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::ATrap_Wall_Spikes_Metal_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnOutOfDurability()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnOutOfDurability");

	Params::ATrap_Wall_Spikes_Metal_C_OnOutOfDurability_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnWorldReady");

	Params::ATrap_Wall_Spikes_Metal_C_OnWorldReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnInitTeam
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATrap_Wall_Spikes_Metal_C::OnInitTeam()
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "OnInitTeam");

	Params::ATrap_Wall_Spikes_Metal_C_OnInitTeam_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ExecuteUbergraph_Trap_Wall_Spikes_Metal
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue12                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam1                              (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam12                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam123                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue123                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam1234                           (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam12345                          (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam123456                         (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue12                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue123                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1234                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue12345                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue12                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue12                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Wall_Spikes_Metal_C::ExecuteUbergraph_Trap_Wall_Spikes_Metal(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue12, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue123, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1234, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12345, bool Temp_bool_Has_Been_Initd_Variable, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123456, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue123, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1234, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12345, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Lerp_ReturnValue12, bool CallFunc_IsValid_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Wall_Spikes_Metal_C", "ExecuteUbergraph_Trap_Wall_Spikes_Metal");

	Params::ATrap_Wall_Spikes_Metal_C_ExecuteUbergraph_Trap_Wall_Spikes_Metal_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue1 = CallFunc_Multiply_VectorVector_ReturnValue1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue12 = CallFunc_Multiply_VectorVector_ReturnValue12;
	Parms.K2Node_MakeStruct_ParticleSysParam1 = K2Node_MakeStruct_ParticleSysParam1;
	Parms.K2Node_MakeStruct_ParticleSysParam12 = K2Node_MakeStruct_ParticleSysParam12;
	Parms.K2Node_MakeStruct_ParticleSysParam123 = K2Node_MakeStruct_ParticleSysParam123;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue123 = CallFunc_Multiply_VectorVector_ReturnValue123;
	Parms.K2Node_MakeStruct_ParticleSysParam1234 = K2Node_MakeStruct_ParticleSysParam1234;
	Parms.K2Node_MakeStruct_ParticleSysParam12345 = K2Node_MakeStruct_ParticleSysParam12345;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeStruct_ParticleSysParam123456 = K2Node_MakeStruct_ParticleSysParam123456;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue12 = CallFunc_K2_GetActorLocation_ReturnValue12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue123 = CallFunc_K2_GetActorLocation_ReturnValue123;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1234 = CallFunc_K2_GetActorLocation_ReturnValue1234;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue12345 = CallFunc_K2_GetActorLocation_ReturnValue12345;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_Lerp_ReturnValue12 = CallFunc_Lerp_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue12 = CallFunc_K2_GetComponentLocation_ReturnValue12;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

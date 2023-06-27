#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.OnRep_HiddenInGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::OnRep_HiddenInGame()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "OnRep_HiddenInGame");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_OnRep_HiddenInGame_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.RandomSpin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxSpin                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinSpin                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::RandomSpin(float MaxSpin, float MinSpin, bool Temp_bool_Variable, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "RandomSpin");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_RandomSpin_Params Parms;
	Parms.MaxSpin = MaxSpin;
	Parms.MinSpin = MinSpin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.Spawn Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::Spawn_Items()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "Spawn Items");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_Spawn_Items_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.HideAndKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::HideAndKill()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "HideAndKill");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_HideAndKill_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "ReceiveHit");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_ReceiveHit_Params Parms;
	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "ReceiveBeginPlay");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.SetRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rotation_Rate_X__Roll_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation_Rate_Y__Pitch_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation_Rate_Z__Yaw_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::SetRotation(float Rotation_Rate_X__Roll_, float Rotation_Rate_Y__Pitch_, float Rotation_Rate_Z__Yaw_)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "SetRotation");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_SetRotation_Params Parms;
	Parms.Rotation_Rate_X__Roll_ = Rotation_Rate_X__Roll_;
	Parms.Rotation_Rate_Y__Pitch_ = Rotation_Rate_Y__Pitch_;
	Parms.Rotation_Rate_Z__Yaw_ = Rotation_Rate_Z__Yaw_;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Ammo.BGA_Athena_JollyRascal_ExtraDrop_Ammo_C.ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Ammo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemEntry>      CallFunc_PickLootDrops_OutLootToDrop                             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_PickLootDrops_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemEntry              CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpin_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpin_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpin_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_X__Roll_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_Y__Pitch_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_Z__Yaw_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C::ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Ammo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<struct FFortItemEntry>& CallFunc_PickLootDrops_OutLootToDrop, bool CallFunc_PickLootDrops_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFortItemEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, float CallFunc_RandomSpin_ReturnValue, float CallFunc_RandomSpin_ReturnValue_1, float CallFunc_RandomSpin_ReturnValue_2, float K2Node_CustomEvent_Rotation_Rate_X__Roll_, float K2Node_CustomEvent_Rotation_Rate_Y__Pitch_, float K2Node_CustomEvent_Rotation_Rate_Z__Yaw_, int32 Temp_int_Loop_Counter_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Ammo_C", "ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Ammo");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Ammo_C_ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Ammo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_PickLootDrops_OutLootToDrop = CallFunc_PickLootDrops_OutLootToDrop;
	Parms.CallFunc_PickLootDrops_ReturnValue = CallFunc_PickLootDrops_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.CallFunc_RandomSpin_ReturnValue = CallFunc_RandomSpin_ReturnValue;
	Parms.CallFunc_RandomSpin_ReturnValue_1 = CallFunc_RandomSpin_ReturnValue_1;
	Parms.CallFunc_RandomSpin_ReturnValue_2 = CallFunc_RandomSpin_ReturnValue_2;
	Parms.K2Node_CustomEvent_Rotation_Rate_X__Roll_ = K2Node_CustomEvent_Rotation_Rate_X__Roll_;
	Parms.K2Node_CustomEvent_Rotation_Rate_Y__Pitch_ = K2Node_CustomEvent_Rotation_Rate_Y__Pitch_;
	Parms.K2Node_CustomEvent_Rotation_Rate_Z__Yaw_ = K2Node_CustomEvent_Rotation_Rate_Z__Yaw_;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.OnRep_HiddenInGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::OnRep_HiddenInGame()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "OnRep_HiddenInGame");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_OnRep_HiddenInGame_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.RandomSpin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::RandomSpin(bool Temp_bool_Variable, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "RandomSpin");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_RandomSpin_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.SetMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMesh*>         Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<int32, struct FTransform>     TargetMap                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::SetMesh(TArray<class UStaticMesh*>& Array, TMap<int32, struct FTransform>& TargetMap, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "SetMesh");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_SetMesh_Params Parms;
	Parms.Array = Array;
	Parms.TargetMap = TargetMap;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.SelectMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::SelectMesh(bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "SelectMesh");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_SelectMesh_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.SelectResourceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::SelectResourceType(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "SelectResourceType");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_SelectResourceType_Params Parms;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.HideAndKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::HideAndKill()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "HideAndKill");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_HideAndKill_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "ReceiveBeginPlay");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.ReceiveHit
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

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "ReceiveHit");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_ReceiveHit_Params Parms;
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

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.Spawn Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::Spawn_Items()
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "Spawn Items");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_Spawn_Items_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.RepRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rotation_Rate_X__Roll_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation_Rate_Y__Pitch_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation_Rate_Z__Yaw_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::RepRotation(float Rotation_Rate_X__Roll_, float Rotation_Rate_Y__Pitch_, float Rotation_Rate_Z__Yaw_)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "RepRotation");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_RepRotation_Params Parms;
	Parms.Rotation_Rate_X__Roll_ = Rotation_Rate_X__Roll_;
	Parms.Rotation_Rate_Y__Pitch_ = Rotation_Rate_Y__Pitch_;
	Parms.Rotation_Rate_Z__Yaw_ = Rotation_Rate_Z__Yaw_;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_Athena_JollyRascal_ExtraDrop_Resource.BGA_Athena_JollyRascal_ExtraDrop_Resource_C.ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Resource
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_RandomSpin_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpin_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomSpin_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_X__Roll_                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_Y__Pitch_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rotation_Rate_Z__Yaw_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_JollyRascal_ExtraDrop_Resource_C::ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Resource(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float CallFunc_RandomSpin_ReturnValue, float CallFunc_RandomSpin_ReturnValue_1, float CallFunc_RandomSpin_ReturnValue_2, float K2Node_CustomEvent_Rotation_Rate_X__Roll_, float K2Node_CustomEvent_Rotation_Rate_Y__Pitch_, float K2Node_CustomEvent_Rotation_Rate_Z__Yaw_, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsServer_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BGA_Athena_JollyRascal_ExtraDrop_Resource_C", "ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Resource");

	Params::ABGA_Athena_JollyRascal_ExtraDrop_Resource_C_ExecuteUbergraph_BGA_Athena_JollyRascal_ExtraDrop_Resource_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_RandomSpin_ReturnValue = CallFunc_RandomSpin_ReturnValue;
	Parms.CallFunc_RandomSpin_ReturnValue_1 = CallFunc_RandomSpin_ReturnValue_1;
	Parms.CallFunc_RandomSpin_ReturnValue_2 = CallFunc_RandomSpin_ReturnValue_2;
	Parms.K2Node_CustomEvent_Rotation_Rate_X__Roll_ = K2Node_CustomEvent_Rotation_Rate_X__Roll_;
	Parms.K2Node_CustomEvent_Rotation_Rate_Y__Pitch_ = K2Node_CustomEvent_Rotation_Rate_Y__Pitch_;
	Parms.K2Node_CustomEvent_Rotation_Rate_Z__Yaw_ = K2Node_CustomEvent_Rotation_Rate_Z__Yaw_;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

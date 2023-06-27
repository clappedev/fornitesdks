#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::FlashCubeMaterial(float CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "FlashCubeMaterial");

	Params::ABP_DeimosRift_C_FlashCubeMaterial_Params Parms;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::OnRep_DamageState(bool CallFunc_Greater_IntInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnRep_DamageState");

	Params::ABP_DeimosRift_C_OnRep_DamageState_Params Parms;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue1 = CallFunc_Conv_BoolToFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "UserConstructionScript");

	Params::ABP_DeimosRift_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::BP_Cosmetic_RampUp()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "BP_Cosmetic_RampUp");

	Params::ABP_DeimosRift_C_BP_Cosmetic_RampUp_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnDeathPlayEffects");

	Params::ABP_DeimosRift_C_OnDeathPlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnDeathServer");

	Params::ABP_DeimosRift_C_OnDeathServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::BP_Cosmetic_Intro()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "BP_Cosmetic_Intro");

	Params::ABP_DeimosRift_C_BP_Cosmetic_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::BP_Cosmetic_Idle()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "BP_Cosmetic_Idle");

	Params::ABP_DeimosRift_C_BP_Cosmetic_Idle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 SpawnedAI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnStartedEncounterSpawn");

	Params::ABP_DeimosRift_C_OnStartedEncounterSpawn_Params Parms;
	Parms.SpawnedAI = SpawnedAI;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "ReceiveBeginPlay");

	Params::ABP_DeimosRift_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnDamaged_Bind");

	Params::ABP_DeimosRift_C_OnDamaged_Bind_Params Parms;
	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::BP_Cosmetic_ShouldDie()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "BP_Cosmetic_ShouldDie");

	Params::ABP_DeimosRift_C_BP_Cosmetic_ShouldDie_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_C::OnBuildingRiftSpawnedAI_Bind()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "OnBuildingRiftSpawnedAI_Bind");

	Params::ABP_DeimosRift_C_OnBuildingRiftSpawnedAI_Bind_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags1                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum1                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext1                                      ()
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_Event_SpawnedAI                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthPercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize10       K2Node_MakeStruct_Vector_NetQuantize10                           (NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      K2Node_MakeStruct_GameplayCueParameters                          (ContainsInstancedReference)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue1               (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2               (NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_C::ExecuteUbergraph_BP_DeimosRift(int32 EntryPoint, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class AFortAIPawn* K2Node_Event_SpawnedAI, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetHealthPercent_ReturnValue, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_C", "ExecuteUbergraph_BP_DeimosRift");

	Params::ABP_DeimosRift_C_ExecuteUbergraph_BP_DeimosRift_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damage1 = K2Node_Event_Damage1;
	Parms.K2Node_Event_DamageTags1 = K2Node_Event_DamageTags1;
	Parms.K2Node_Event_Momentum1 = K2Node_Event_Momentum1;
	Parms.K2Node_Event_HitInfo1 = K2Node_Event_HitInfo1;
	Parms.K2Node_Event_InstigatedBy1 = K2Node_Event_InstigatedBy1;
	Parms.K2Node_Event_DamageCauser1 = K2Node_Event_DamageCauser1;
	Parms.K2Node_Event_EffectContext1 = K2Node_Event_EffectContext1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.K2Node_Event_SpawnedAI = K2Node_Event_SpawnedAI;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetHealthPercent_ReturnValue = CallFunc_GetHealthPercent_ReturnValue;
	Parms.K2Node_MakeStruct_Vector_NetQuantize10 = K2Node_MakeStruct_Vector_NetQuantize10;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayCueParameters = K2Node_MakeStruct_GameplayCueParameters;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue1 = CallFunc_GetAbilitySystemComponent_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue2 = CallFunc_GetAbilitySystemComponent_ReturnValue2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

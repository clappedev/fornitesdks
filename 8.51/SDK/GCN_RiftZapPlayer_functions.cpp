#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GCN_RiftZapPlayer.GCN_RiftZapPlayer_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakGameplayCueParameters_NormalizedMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_RawMagnitude                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_BreakGameplayCueParameters_EffectContext                ()
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_MatchedTagName               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_OriginalTag                  (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedSourceTags         ()
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedTargetTags         ()
// struct FVector                     CallFunc_BreakGameplayCueParameters_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakGameplayCueParameters_Normal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_Instigator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_EffectCauser                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BreakGameplayCueParameters_SourceObject                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakGameplayCueParameters_PhysicalMaterial             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_GameplayEffectLevel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_AbilityLevel                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_BreakGameplayCueParameters_TargetAttachComponent        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_DtB_LightningZap_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_DtB_LightningZap_C*       K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_RiftZapPlayer_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AB_DtB_LightningZap_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_OnExecute_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AB_DtB_LightningZap_C* K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GCN_RiftZapPlayer_C", "OnExecute");

	Params::UGCN_RiftZapPlayer_C_OnExecute_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakGameplayCueParameters_NormalizedMagnitude = CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_RawMagnitude = CallFunc_BreakGameplayCueParameters_RawMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_EffectContext = CallFunc_BreakGameplayCueParameters_EffectContext;
	Parms.CallFunc_BreakGameplayCueParameters_MatchedTagName = CallFunc_BreakGameplayCueParameters_MatchedTagName;
	Parms.CallFunc_BreakGameplayCueParameters_OriginalTag = CallFunc_BreakGameplayCueParameters_OriginalTag;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedSourceTags = CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedTargetTags = CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	Parms.CallFunc_BreakGameplayCueParameters_Location = CallFunc_BreakGameplayCueParameters_Location;
	Parms.CallFunc_BreakGameplayCueParameters_Normal = CallFunc_BreakGameplayCueParameters_Normal;
	Parms.CallFunc_BreakGameplayCueParameters_Instigator = CallFunc_BreakGameplayCueParameters_Instigator;
	Parms.CallFunc_BreakGameplayCueParameters_EffectCauser = CallFunc_BreakGameplayCueParameters_EffectCauser;
	Parms.CallFunc_BreakGameplayCueParameters_SourceObject = CallFunc_BreakGameplayCueParameters_SourceObject;
	Parms.CallFunc_BreakGameplayCueParameters_PhysicalMaterial = CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	Parms.CallFunc_BreakGameplayCueParameters_GameplayEffectLevel = CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	Parms.CallFunc_BreakGameplayCueParameters_AbilityLevel = CallFunc_BreakGameplayCueParameters_AbilityLevel;
	Parms.CallFunc_BreakGameplayCueParameters_TargetAttachComponent = CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap = K2Node_DynamicCast_AsB_Dt_B_Lightning_Zap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

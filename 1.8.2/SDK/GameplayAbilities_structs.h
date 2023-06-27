#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{

};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{

};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{

};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{

};


// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{

};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{

};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{

};


// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{

};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{

};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{

};


// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{

};


// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{

};


// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{

};


// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class ETargetAbilitySelfSelection : uint8_t
{

};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{

};


// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{

};


// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{

};


// Enum GameplayAbilities.EReplicationMode
enum class EReplicationMode : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0020
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x03F4 (0x0400 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x3F4];                                     // 0x000C(0x03F4) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0248
struct FGameplayEffectSpec
{
	unsigned char                                      UnknownData00[0x248];                                     // 0x0000(0x0248) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0050
struct FGameplayAbilitySpecDef
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0028
struct FScalableFloat
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
struct FTagContainerAggregator
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
struct FGameplayEffectAttributeCaptureSpec
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
struct FGameplayAttribute
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
struct FGameplayEffectAttributeCaptureDefinition
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
struct FGameplayEffectModifiedAttribute
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
struct FActiveGameplayEffectHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0018
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A8
struct FGameplayEventData
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
struct FGameplayCueParameters
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
struct FGameplayEffectSpecForRPC
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0048
struct FServerAbilityRPCBatch
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0170
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x00C0 - 0x00B0)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x00D0 - 0x00B0)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0010(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x03F0 (0x04A0 - 0x00B0)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x00B0(0x03F0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x006C (0x0078 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x000C(0x006C) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
struct FGameplayTagRequirements
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
struct FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0068
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
struct FGameplayModifierEvaluatedData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
struct FGameplayModEvaluationChannelSettings
{
	EGameplayModEvaluationChannel                      Channel;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0008(0x00E8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
struct FAbilityTaskDebugMessage
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x00A0
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
struct FInheritedTagContainer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
struct FGameplayEffectCue
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0288
struct FGameplayModifierInfo
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0000(0x0288) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x01B0
struct FGameplayEffectModifierMagnitude
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0080
struct FCustomCalculationBasedFloat
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00F8
struct FAttributeBasedFloat
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
struct FGameplayEffectExecutionDefinition
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
struct FConditionalGameplayEffect
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0268
struct FGameplayEffectExecutionScopedModifierInfo
{
	unsigned char                                      UnknownData00[0x268];                                     // 0x0000(0x0268) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x0010
struct FAbilityTriggerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
struct FPreallocationInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0030(0x0140) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
struct FGameplayCueTranslationManager
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
struct FGameplayCueTranslatorNodeIndex
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
struct FGameplayCueTranslatorNode
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
struct FGameplayCueTranslationLink
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x00C0
struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0010(0x00B0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00A8
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
struct FGameplayTagResponseTableEntry
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
struct FGameplayTagReponsePair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

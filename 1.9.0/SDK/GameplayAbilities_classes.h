#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility
// 0x0568 (0x0590 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x568];                                     // 0x0028(0x0568) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemComponent
// 0x1480 (0x15E0 - 0x0160)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x0160(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x02E8 (0x0310 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                            // 0x0028(0x0010) (Config)
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0038(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueManager
// 0x0388 (0x03B0 - 0x0028)
class UGameplayCueManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0028(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0060 (0x03E8 - 0x0388)
class AGameplayCueNotify_Actor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0388(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (0x0040 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler();
};


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}


	void STATIC_TargetDataHasOrigin();
	void STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult);
	void STATIC_TargetDataHasEndPoint();
	void STATIC_TargetDataHasActor();
	void STATIC_SetStackCountToMax();
	void STATIC_SetStackCount();
	void STATIC_SetDuration();
	void STATIC_SendGameplayEventToActor(class AActor* Actor);
	void STATIC_NotEqual_GameplayAttributeGameplayAttribute();
	void STATIC_MakeSpecHandle();
	void STATIC_MakeFilterHandle();
	void STATIC_IsValid();
	void STATIC_IsInstigatorLocallyControlledPlayer();
	void STATIC_IsInstigatorLocallyControlled();
	void STATIC_HasHitResult();
	void STATIC_GetTargetDataOrigin();
	void STATIC_GetTargetDataEndPointTransform();
	void STATIC_GetTargetDataEndPoint();
	void STATIC_GetOrigin();
	void STATIC_GetModifiedAttributeMagnitude();
	void STATIC_GetInstigatorTransform();
	void STATIC_GetInstigatorActor();
	void STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult);
	void STATIC_GetHitResult();
	void STATIC_GetGameplayCueEndLocationAndNormal();
	void STATIC_GetGameplayCueDirection();
	void STATIC_GetFloatAttributeFromAbilitySystemComponent();
	void STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent);
	void STATIC_GetFloatAttributeBase(class AActor* Actor);
	void STATIC_GetFloatAttribute(class AActor* Actor);
	void STATIC_GetEffectContext();
	void STATIC_GetDataCountFromTargetData();
	void STATIC_GetAllLinkedGameplayEffectSpecHandles();
	void STATIC_GetActorsFromTargetData();
	void STATIC_GetActorCount();
	void STATIC_GetActorByIndex();
	void STATIC_GetActiveGameplayEffectStackLimitCount();
	void STATIC_GetActiveGameplayEffectStackCount();
	void STATIC_GetActiveGameplayEffectDebugString();
	void STATIC_GetAbilitySystemComponent(class AActor* Actor);
	void STATIC_ForwardGameplayCueToTarget();
	void STATIC_FilterTargetData();
	void STATIC_EvaluateAttributeValueWithTagsAndBase();
	void STATIC_EvaluateAttributeValueWithTags();
	void STATIC_EqualEqual_GameplayAttributeGameplayAttribute();
	void STATIC_EffectContextSetOrigin();
	void STATIC_EffectContextIsValid();
	void STATIC_EffectContextIsInstigatorLocallyControlled();
	void STATIC_EffectContextHasHitResult();
	void STATIC_EffectContextGetSourceObject();
	void STATIC_EffectContextGetOriginalInstigatorActor();
	void STATIC_EffectContextGetOrigin();
	void STATIC_EffectContextGetInstigatorActor();
	void STATIC_EffectContextGetHitResult();
	void STATIC_EffectContextGetEffectCauser();
	void STATIC_EffectContextAddHitResult();
	void STATIC_DoesTargetDataContainActor();
	void STATIC_DoesGameplayCueMeetTagRequirements();
	void STATIC_AssignSetByCallerMagnitude();
	void STATIC_AppendTargetDataHandle();
	void STATIC_AddLinkedGameplayEffectSpec();
	void STATIC_AddLinkedGameplayEffect();
	void STATIC_AddGrantedTags();
	void STATIC_AddGrantedTag();
	void STATIC_AddAssetTags();
	void STATIC_AddAssetTag();
	void STATIC_AbilityTargetDataFromLocations();
	void STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	void STATIC_AbilityTargetDataFromActorArray();
	void STATIC_AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.GameplayEffect
// 0x0638 (0x0660 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x638];                                     // 0x0028(0x0638) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemReplicationProxyInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x0470 - 0x0470)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x0430 - 0x0410)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0410(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0030 (0x00E8 - 0x00B8)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0070 (0x0128 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0050 (0x0108 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00C8 - 0x0080)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x00F0 (0x0170 - 0x0080)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0080(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                             // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x03A8 - 0x0388)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x01C8 (0x0550 - 0x0388)
class AGameplayAbilityTargetActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0388(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0070 (0x00F0 - 0x0080)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0080(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0058 (0x00D8 - 0x0080)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0080(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0088 (0x0108 - 0x0080)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0080(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0050 (0x00D0 - 0x0080)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x00A8 (0x0128 - 0x0080)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0080(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0020 (0x0148 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0020 (0x0148 - 0x0128)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (0x0128 - 0x0080)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0080(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0090 - 0x0080)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x0590 - 0x0590)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0030 (0x05C0 - 0x0590)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x01A0 - 0x01A0)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0038 - 0x0028)
class UGameplayAbilitySet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x0550 - 0x0550)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0020 (0x0570 - 0x0550)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0550(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0590 - 0x0570)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (0x05A0 - 0x0590)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0570 - 0x0570)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x03C0 - 0x03A8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0050 - 0x0040)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0088 - 0x0028)
class UGameplayCueSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x0660 - 0x0660)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}


	void CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect);
};


// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (0x0048 - 0x0028)
class UGameplayEffectExtension : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_LifestealTest");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0008 (0x0050 - 0x0048)
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_ShieldTest");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x01E8 (0x0210 - 0x0028)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0028(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}

};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

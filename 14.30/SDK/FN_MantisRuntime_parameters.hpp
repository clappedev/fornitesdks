#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.ApplyRootMotionMantisForce
struct UFortAbilityTask_ApplyRootMotionMantisForce_ApplyRootMotionMantisForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TechniqueMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortAbilityTask_ApplyRootMotionMantisForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
struct UFortGameplayAbility_Mantis_OnMontageFinished_Params
{
};

// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
struct UFortGameplayAbility_Mantis_OnMontageCancelled_Params
{
};

// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
struct UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
};

// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
struct UFortMantisPawnComponent_OnPostPhysicsRotation_Params
{
	class UCharacterMovementComponent*                 CharMoveComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
struct UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params
{
	class UCharacterMovementComponent*                 CharMoveComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

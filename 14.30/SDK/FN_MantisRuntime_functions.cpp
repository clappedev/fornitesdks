// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.ApplyRootMotionMantisForce
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            TechniqueMontage               (Parm, ZeroConstructor, IsPlainOldData)
// class UFortAbilityTask_ApplyRootMotionMantisForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::STATIC_ApplyRootMotionMantisForce(class UGameplayAbility* OwningAbility, float Duration, class UAnimMontage* TechniqueMontage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.ApplyRootMotionMantisForce");

	UFortAbilityTask_ApplyRootMotionMantisForce_ApplyRootMotionMantisForce_Params params;
	params.OwningAbility = OwningAbility;
	params.Duration = Duration;
	params.TechniqueMontage = TechniqueMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
// (Final, Native, Protected)

void UFortGameplayAbility_Mantis::OnMontageFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished");

	UFortGameplayAbility_Mantis_OnMontageFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
// (Final, Native, Protected)

void UFortGameplayAbility_Mantis::OnMontageCancelled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled");

	UFortGameplayAbility_Mantis_OnMontageCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)

void UFortGameplayAbility_Mantis::BP_OnMantisTechniqueHit(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit");

	UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UFortMantisPawnComponent::OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation");

	UFortMantisPawnComponent_OnPostPhysicsRotation_Params params;
	params.CharMoveComp = CharMoveComp;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate");

	UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params params;
	params.CharMoveComp = CharMoveComp;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

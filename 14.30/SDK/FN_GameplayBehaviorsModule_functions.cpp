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

// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayBehaviorConfig* Config                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior");

	UGameplayBehavior_K2_TriggerBehavior_Params params;
	params.Avatar = Avatar;
	params.Config = Config;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayBehaviorConfig* Config                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn");

	UGameplayBehavior_K2_OnTriggeredPawn_Params params;
	params.Avatar = Avatar;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*              Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayBehaviorConfig* Config                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter");

	UGameplayBehavior_K2_OnTriggeredCharacter_Params params;
	params.Avatar = Avatar;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayBehaviorConfig* Config                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered");

	UGameplayBehavior_K2_OnTriggered_Params params;
	params.Avatar = Avatar;
	params.Config = Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInterrupted                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn");

	UGameplayBehavior_K2_OnFinishedPawn_Params params;
	params.Avatar = Avatar;
	params.bWasInterrupted = bWasInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*              Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInterrupted                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter");

	UGameplayBehavior_K2_OnFinishedCharacter_Params params;
	params.Avatar = Avatar;
	params.bWasInterrupted = bWasInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasInterrupted                (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_OnFinished(class AActor* Avatar, bool bWasInterrupted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished");

	UGameplayBehavior_K2_OnFinished_Params params;
	params.Avatar = Avatar;
	params.bWasInterrupted = bWasInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CurrentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayBehavior::K2_GetNextActorIndexInSequence(int CurrentIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence");

	UGameplayBehavior_K2_GetNextActorIndexInSequence_Params params;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_EndBehavior(class AActor* Avatar)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior");

	UGameplayBehavior_K2_EndBehavior_Params params;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior::K2_AbortBehavior(class AActor* Avatar)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior");

	UGameplayBehavior_K2_AbortBehavior_Params params;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InAvatar                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayBehavior_AnimationBased::OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished");

	UGameplayBehavior_AnimationBased_OnMontageFinished_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
struct UGameplayBehavior_K2_TriggerBehavior_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayBehaviorConfig*                     Config;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
struct UGameplayBehavior_K2_OnTriggeredPawn_Params
{
	class APawn*                                       Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayBehaviorConfig*                     Config;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
struct UGameplayBehavior_K2_OnTriggeredCharacter_Params
{
	class ACharacter*                                  Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayBehaviorConfig*                     Config;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
struct UGameplayBehavior_K2_OnTriggered_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayBehaviorConfig*                     Config;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
struct UGameplayBehavior_K2_OnFinishedPawn_Params
{
	class APawn*                                       Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInterrupted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
struct UGameplayBehavior_K2_OnFinishedCharacter_Params
{
	class ACharacter*                                  Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInterrupted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
struct UGameplayBehavior_K2_OnFinished_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInterrupted;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
struct UGameplayBehavior_K2_GetNextActorIndexInSequence_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
struct UGameplayBehavior_K2_EndBehavior_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
struct UGameplayBehavior_K2_AbortBehavior_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
struct UGameplayBehavior_AnimationBased_OnMontageFinished_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InAvatar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

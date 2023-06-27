#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
enum class EGameplayBehaviorInstantiationPolicy : uint8_t
{
	Instantiate                    = 0,
	ConditionallyInstantiate       = 1,
	DontInstantiate                = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayBehaviorsModule.MontagePlaybackData
// 0x0048
struct FMontagePlaybackData
{
	class AActor*                                      Avatar;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilityComponent;                                         // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct GameplayBehaviorsModule.AgentGameplayBehaviors
// 0x0010
struct FAgentGameplayBehaviors
{
	TArray<class UGameplayBehavior*>                   Behaviors;                                                // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

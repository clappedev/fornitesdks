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

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.OnDamageServer
struct AAthena_Enemy_Player_SneakySnowman_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ReceiveBeginPlay
struct AAthena_Enemy_Player_SneakySnowman_C_ReceiveBeginPlay_Params
{
};

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman
struct AAthena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

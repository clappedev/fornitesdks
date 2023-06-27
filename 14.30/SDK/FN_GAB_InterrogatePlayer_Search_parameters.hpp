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

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC
struct UGAB_InterrogatePlayer_Search_C_ApplyGameplayEffectToNPC_Params
{
	class UGameplayEffect*                             GameplayEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard
struct UGAB_InterrogatePlayer_Search_C_DropKeycard_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop
struct UGAB_InterrogatePlayer_Search_C_GetKeycardToDrop_Params
{
	bool                                               HasKeycard;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition*                    Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot
struct UGAB_InterrogatePlayer_Search_C_DropLoot_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility
struct UGAB_InterrogatePlayer_Search_C_ToggleReticleVisibility_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup
struct UGAB_InterrogatePlayer_Search_C_EndAbilityCleanup_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility
struct UGAB_InterrogatePlayer_Search_C_InitAbility_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D
struct UGAB_InterrogatePlayer_Search_C_Completed_6BBDC9B445D4280492A25E8E5EA7A53D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D
struct UGAB_InterrogatePlayer_Search_C_Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D
struct UGAB_InterrogatePlayer_Search_C_Triggered_6BBDC9B445D4280492A25E8E5EA7A53D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B
struct UGAB_InterrogatePlayer_Search_C_Added_9291D75D4A0949E1C5B7E49C1FD11F8B_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility
struct UGAB_InterrogatePlayer_Search_C_K2_ActivateAbility_Params
{
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility
struct UGAB_InterrogatePlayer_Search_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_1
struct UGAB_InterrogatePlayer_Search_C_OnDied_Event_1_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_2
struct UGAB_InterrogatePlayer_Search_C_OnDied_Event_2_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search
struct UGAB_InterrogatePlayer_Search_C_ExecuteUbergraph_GAB_InterrogatePlayer_Search_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility
struct UGAB_InterrogatePlayer_Reveal_C_ToggleReticleVisibility_Params
{
	bool                                               Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal
struct UGAB_InterrogatePlayer_Reveal_C_Reveal_Params
{
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup
struct UGAB_InterrogatePlayer_Reveal_C_EndAbilityCleanup_Params
{
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility
struct UGAB_InterrogatePlayer_Reveal_C_InitAbility_Params
{
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33
struct UGAB_InterrogatePlayer_Reveal_C_Completed_23F3C2DB411862D627ACFCA8233F7B33_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33
struct UGAB_InterrogatePlayer_Reveal_C_Cancelled_23F3C2DB411862D627ACFCA8233F7B33_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33
struct UGAB_InterrogatePlayer_Reveal_C_Triggered_23F3C2DB411862D627ACFCA8233F7B33_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1
struct UGAB_InterrogatePlayer_Reveal_C_Completed_3C2C8C224B62B00BDEEAF5AF38A401C1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1
struct UGAB_InterrogatePlayer_Reveal_C_Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1
struct UGAB_InterrogatePlayer_Reveal_C_Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E
struct UGAB_InterrogatePlayer_Reveal_C_OnFinish_68B3C6D14B44CCD3170ABDA038C1203E_Params
{
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility
struct UGAB_InterrogatePlayer_Reveal_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_2
struct UGAB_InterrogatePlayer_Reveal_C_OnDied_Event_2_Params
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

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation
struct UGAB_InterrogatePlayer_Reveal_C_EndInterrogation_Params
{
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent
struct UGAB_InterrogatePlayer_Reveal_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal
struct UGAB_InterrogatePlayer_Reveal_C_ExecuteUbergraph_GAB_InterrogatePlayer_Reveal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

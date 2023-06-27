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

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.StructureTraceLoop
struct UGA_WilliePete_PlayerLaunch_C_StructureTraceLoop_Params
{
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.BreakBlockingStructure
struct UGA_WilliePete_PlayerLaunch_C_BreakBlockingStructure_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCancelled_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnCancelled_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnInterrupted_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnInterrupted_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnBlendOut_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnBlendOut_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCompleted_A0F03A1445141EA659E282AFE77CEA62
struct UGA_WilliePete_PlayerLaunch_C_OnCompleted_A0F03A1445141EA659E282AFE77CEA62_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider
struct UGA_WilliePete_PlayerLaunch_C_Redeploy_Glider_Params
{
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.End Skydive
struct UGA_WilliePete_PlayerLaunch_C_End_Skydive_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility
struct UGA_WilliePete_PlayerLaunch_C_K2_ActivateAbility_Params
{
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ActorHit
struct UGA_WilliePete_PlayerLaunch_C_ActorHit_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ExecuteUbergraph_GA_WilliePete_PlayerLaunch
struct UGA_WilliePete_PlayerLaunch_C_ExecuteUbergraph_GA_WilliePete_PlayerLaunch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

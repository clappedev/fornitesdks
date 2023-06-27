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

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UpdateHealthShieldHealAmounts
struct AB_Prj_Athena_ChillBronco_C_UpdateHealthShieldHealAmounts_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ApplyWaterInRadiusIfCurieEnabled
struct AB_Prj_Athena_ChillBronco_C_ApplyWaterInRadiusIfCurieEnabled_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.QuestCheckSquadMember
struct AB_Prj_Athena_ChillBronco_C_QuestCheckSquadMember_Params
{
	class AFortPawn*                                   PlayerPawnHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnRep_PlayerPawn
struct AB_Prj_Athena_ChillBronco_C_OnRep_PlayerPawn_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ResetVariables
struct AB_Prj_Athena_ChillBronco_C_ResetVariables_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingShield
struct AB_Prj_Athena_ChillBronco_C_GetMissingShield_Params
{
	float                                              MissingShield;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingHealth
struct AB_Prj_Athena_ChillBronco_C_GetMissingHealth_Params
{
	float                                              MissingHealth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UserConstructionScript
struct AB_Prj_Athena_ChillBronco_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnExploded
struct AB_Prj_Athena_ChillBronco_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnTouched
struct AB_Prj_Athena_ChillBronco_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveHit
struct AB_Prj_Athena_ChillBronco_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveBeginPlay
struct AB_Prj_Athena_ChillBronco_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.HealPlayer
struct AB_Prj_Athena_ChillBronco_C_HealPlayer_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.KillDelay
struct AB_Prj_Athena_ChillBronco_C_KillDelay_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.EnableCollision
struct AB_Prj_Athena_ChillBronco_C_EnableCollision_Params
{
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_ChillBronco_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.DoHealCheck
struct AB_Prj_Athena_ChillBronco_C_DoHealCheck_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ExecuteUbergraph_B_Prj_Athena_ChillBronco
struct AB_Prj_Athena_ChillBronco_C_ExecuteUbergraph_B_Prj_Athena_ChillBronco_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

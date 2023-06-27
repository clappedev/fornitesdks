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

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Get Launch Reference Vector
struct ABGA_AppleSun_Apple_Athena_C_Get_Launch_Reference_Vector_Params
{
	class ACharacter*                                  Fort_Pawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckForSpyPerk
struct ABGA_AppleSun_Apple_Athena_C_CheckForSpyPerk_Params
{
	bool                                               HasPerk;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.UserConstructionScript
struct ABGA_AppleSun_Apple_Athena_C_UserConstructionScript_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__FinishedFunc
struct ABGA_AppleSun_Apple_Athena_C_BeginDeflate__FinishedFunc_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__UpdateFunc
struct ABGA_AppleSun_Apple_Athena_C_BeginDeflate__UpdateFunc_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__FinishedFunc
struct ABGA_AppleSun_Apple_Athena_C_Destroy__FinishedFunc_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__UpdateFunc
struct ABGA_AppleSun_Apple_Athena_C_Destroy__UpdateFunc_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveBeginPlay
struct ABGA_AppleSun_Apple_Athena_C_ReceiveBeginPlay_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BounceMulticast
struct ABGA_AppleSun_Apple_Athena_C_BounceMulticast_Params
{
	struct FVector                                     position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BounceIntensity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DespawnTell
struct ABGA_AppleSun_Apple_Athena_C_DespawnTell_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_AppleSun_Apple_Athena_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyPad
struct ABGA_AppleSun_Apple_Athena_C_DestroyPad_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnDeathPlayEffects
struct ABGA_AppleSun_Apple_Athena_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
struct ABGA_AppleSun_Apple_Athena_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_AppleSun_Apple_Athena_C_BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_AppleSun_Apple_Athena_C_BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CatchObjectsInside
struct ABGA_AppleSun_Apple_Athena_C_CatchObjectsInside_Params
{
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.LaunchBuldingActors
struct ABGA_AppleSun_Apple_Athena_C_LaunchBuldingActors_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ExecuteUbergraph_BGA_AppleSun_Apple_Athena
struct ABGA_AppleSun_Apple_Athena_C_ExecuteUbergraph_BGA_AppleSun_Apple_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

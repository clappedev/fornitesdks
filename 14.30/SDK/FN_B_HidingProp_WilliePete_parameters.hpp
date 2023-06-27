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

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody
struct AB_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie
struct AB_HidingProp_WilliePete_C_OnRep_bSetSilentDie_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger
struct AB_HidingProp_WilliePete_C_HelperLocationLogger_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation
struct AB_HidingProp_WilliePete_C_OnRep_AdjustedLocation_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed
struct AB_HidingProp_WilliePete_C_TeleportExitSpeed_Params
{
	struct FVector                                     ExitFVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EnterSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSpeedOverride;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeleportExitVelocity;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F
struct AB_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed
struct AB_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport
struct AB_HidingProp_WilliePete_C_Non_Pawn_Teleport_Params
{
	class AActor*                                      TeleportingActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay
struct AB_HidingProp_WilliePete_C_ReceiveBeginPlay_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE
struct AB_HidingProp_WilliePete_C_Remove_GE_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup
struct AB_HidingProp_WilliePete_C_Complete_Setup_Params
{
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding
struct AB_HidingProp_WilliePete_C_StopHiding_Params
{
	class AFortPawn*                                   Pawn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity
struct AB_HidingProp_WilliePete_C_ResetGravity_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete
struct AB_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

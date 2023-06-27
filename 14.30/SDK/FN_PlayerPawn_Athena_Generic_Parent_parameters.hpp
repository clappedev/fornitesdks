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

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle
struct APlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicle_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle
struct APlayerPawn_Athena_Generic_Parent_C_OnExitedVehicle_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped
struct APlayerPawn_Athena_Generic_Parent_C_OnJumped_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch
struct APlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledHalfHeightAdjust;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch
struct APlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledHalfHeightAdjust;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
struct APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnExitedVehicleDispatcher__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicleDispatcher__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnPlayHit__DelegateSignature_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_ShootingTargetReactToJump__DelegateSignature_Params
{
	class AFortPlayerPawnAthena*                       JumpingPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

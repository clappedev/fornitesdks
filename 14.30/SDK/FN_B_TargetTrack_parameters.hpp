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

// Function B_TargetTrack.B_TargetTrack_C.GetMeshComponents
struct AB_TargetTrack_C_GetMeshComponents_Params
{
	TArray<class UMeshComponent*>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_TargetTrack.B_TargetTrack_C.GetCollisionStaticMesh
struct AB_TargetTrack_C_GetCollisionStaticMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.Set Audio Speed Sound
struct AB_TargetTrack_C_Set_Audio_Speed_Sound_Params
{
	float                                              Target_Speed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentMovementState
struct AB_TargetTrack_C_OnRep_CurrentMovementState_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.SetMovementState
struct AB_TargetTrack_C_SetMovementState_Params
{
	unsigned char                                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.UpdateLerpedPosition
struct AB_TargetTrack_C_UpdateLerpedPosition_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentLerpValue
struct AB_TargetTrack_C_OnRep_CurrentLerpValue_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.UpdateForRepNotify
struct AB_TargetTrack_C_UpdateForRepNotify_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsCurrentlyMoving
struct AB_TargetTrack_C_OnRep_IsCurrentlyMoving_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentDirection
struct AB_TargetTrack_C_OnRep_CurrentDirection_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsTargetUp
struct AB_TargetTrack_C_OnRep_IsTargetUp_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.OnRep_ServerMoveStartTime
struct AB_TargetTrack_C_OnRep_ServerMoveStartTime_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.SetTrackLength
struct AB_TargetTrack_C_SetTrackLength_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.SetTargetRotationAndBaseMesh
struct AB_TargetTrack_C_SetTargetRotationAndBaseMesh_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.CalculatePlayRate
struct AB_TargetTrack_C_CalculatePlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.GetFinalDestinationOfTarget
struct AB_TargetTrack_C_GetFinalDestinationOfTarget_Params
{
	struct FVector                                     Destination;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__FinishedFunc
struct AB_TargetTrack_C_TargetMovement__FinishedFunc_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__UpdateFunc
struct AB_TargetTrack_C_TargetMovement__UpdateFunc_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8
struct AB_TargetTrack_C_OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_3C01053C48BCC07B689033B6DB9706E0
struct AB_TargetTrack_C_OnLoaded_3C01053C48BCC07B689033B6DB9706E0_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.ReceiveBeginPlay
struct AB_TargetTrack_C_ReceiveBeginPlay_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.MoveTarget
struct AB_TargetTrack_C_MoveTarget_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
struct AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetKnockedDown
struct AB_TargetTrack_C_AttachedTargetKnockedDown_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.StopTargetMovement
struct AB_TargetTrack_C_StopTargetMovement_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetPoppedUp
struct AB_TargetTrack_C_AttachedTargetPoppedUp_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.ReverseTargetMovement
struct AB_TargetTrack_C_ReverseTargetMovement_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.AsyncLoadTargetBase
struct AB_TargetTrack_C_AsyncLoadTargetBase_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AB_TargetTrack_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.InitializeSettings
struct AB_TargetTrack_C_InitializeSettings_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.ReceiveEndPlay
struct AB_TargetTrack_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_TargetTrack.B_TargetTrack_C.Move Target Audio
struct AB_TargetTrack_C_Move_Target_Audio_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.Stop Move Target Audio
struct AB_TargetTrack_C_Stop_Move_Target_Audio_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.ReceiveDestroyed
struct AB_TargetTrack_C_ReceiveDestroyed_Params
{
};

// Function B_TargetTrack.B_TargetTrack_C.ExecuteUbergraph_B_TargetTrack
struct AB_TargetTrack_C_ExecuteUbergraph_B_TargetTrack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

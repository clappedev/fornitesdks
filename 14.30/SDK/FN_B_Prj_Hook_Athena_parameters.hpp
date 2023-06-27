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

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult
struct AB_Prj_Hook_Athena_C_GetVehicleLaunchMult_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc
struct AB_Prj_Hook_Athena_C_GetVehicleArc_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck
struct AB_Prj_Hook_Athena_C_MomentumCheck_Params
{
	struct FVector                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     A2;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit
struct AB_Prj_Hook_Athena_C_GiveQuestCredit_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope
struct AB_Prj_Hook_Athena_C_SpawnRope_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AB_HookGunRope_C*                            RopeSpawned;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck
struct AB_Prj_Hook_Athena_C_JackalCheck_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch
struct AB_Prj_Hook_Athena_C_HandleLaunch_Params
{
	bool                                               JumpPadding_;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum
struct AB_Prj_Hook_Athena_C_OnRep_Momentum_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum
struct AB_Prj_Hook_Athena_C_HandleMomentum_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles
struct AB_Prj_Hook_Athena_C_HandleStuckProjectiles_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor
struct AB_Prj_Hook_Athena_C_OnRep_StruckActor_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop
struct AB_Prj_Hook_Athena_C_HandleStuckSupplyDrop_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding
struct AB_Prj_Hook_Athena_C_HandleStuckBuilding_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle
struct AB_Prj_Hook_Athena_C_HandleStuckVehicle_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks
struct AB_Prj_Hook_Athena_C_HandleSticks_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage
struct AB_Prj_Hook_Athena_C_PickGrappleMontage_Params
{
	float                                              PitchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InHoverboard;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection
struct AB_Prj_Hook_Athena_C_PickGrappleMontageSection_Params
{
	float                                              PitchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped
struct AB_Prj_Hook_Athena_C_OnRep_HookStopped_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target
struct AB_Prj_Hook_Athena_C_OnRep_Target_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce
struct AB_Prj_Hook_Athena_C_CalculateYankForce_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget
struct AB_Prj_Hook_Athena_C_IncapacitateTarget_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits
struct AB_Prj_Hook_Athena_C_HandleHits_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds
struct AB_Prj_Hook_Athena_C_PlayStickSounds_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript
struct AB_Prj_Hook_Athena_C_UserConstructionScript_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748
struct AB_Prj_Hook_Athena_C_OnNotifyEnd_0A1B172F45DE2A614770489FAD619748_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748
struct AB_Prj_Hook_Athena_C_OnNotifyBegin_0A1B172F45DE2A614770489FAD619748_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748
struct AB_Prj_Hook_Athena_C_OnInterrupted_0A1B172F45DE2A614770489FAD619748_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748
struct AB_Prj_Hook_Athena_C_OnBlendOut_0A1B172F45DE2A614770489FAD619748_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748
struct AB_Prj_Hook_Athena_C_OnCompleted_0A1B172F45DE2A614770489FAD619748_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4
struct AB_Prj_Hook_Athena_C_OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4
struct AB_Prj_Hook_Athena_C_OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4
struct AB_Prj_Hook_Athena_C_OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4
struct AB_Prj_Hook_Athena_C_OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4
struct AB_Prj_Hook_Athena_C_OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3
struct AB_Prj_Hook_Athena_C_OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3
struct AB_Prj_Hook_Athena_C_OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3
struct AB_Prj_Hook_Athena_C_OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3
struct AB_Prj_Hook_Athena_C_OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3
struct AB_Prj_Hook_Athena_C_OnCompleted_93AE81F64BBD13E0E55C399F05E160E3_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay
struct AB_Prj_Hook_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed
struct AB_Prj_Hook_Athena_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel
struct AB_Prj_Hook_Athena_C_Travel_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck
struct AB_Prj_Hook_Athena_C_WeaponCheck_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit
struct AB_Prj_Hook_Athena_C_ReceiveHit_Params
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

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle
struct AB_Prj_Hook_Athena_C_GrappleVehicle_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck
struct AB_Prj_Hook_Athena_C_LaunchCheck_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Hook_Athena_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple
struct AB_Prj_Hook_Athena_C_Grapple_Params
{
};

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena
struct AB_Prj_Hook_Athena_C_ExecuteUbergraph_B_Prj_Hook_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

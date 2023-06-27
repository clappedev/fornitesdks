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

// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces
struct ABP_FluidSim_01_C_Get_Frames_Since_Last_Active_Forces_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs
struct ABP_FluidSim_01_C_Clear_Sim_from_Waterbody_MIDs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force
struct ABP_FluidSim_01_C_Remove_Projectile_Force_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force
struct ABP_FluidSim_01_C_Register_Projectile_Force_Params
{
	struct FFluidForceDynamic                          Dynamic_Fluid_Force;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             Tracked_Component;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces
struct ABP_FluidSim_01_C_GetPlayerPawnForces_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs
struct ABP_FluidSim_01_C_Validate_RTs_Params
{
	bool                                               RTs_All_Valid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params
struct ABP_FluidSim_01_C_Set_Waterbody_MID_Params_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn
struct ABP_FluidSim_01_C_GetLocalPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force
struct ABP_FluidSim_01_C_Draw_Dynamic_Force_Params
{
	class UCanvas*                                     Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Canvas_Size;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFluidForceDynamicPerInstanceData           Dynamic_Force_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force
struct ABP_FluidSim_01_C_Remove_Dynamic_Force_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force
struct ABP_FluidSim_01_C_Register_Dynamic_Force_Params
{
	struct FFluidForceDynamic                          Dynamic_Fluid_Force;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             Tracked_Component;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WaterLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces
struct ABP_FluidSim_01_C_Update_Dynamic_Forces_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force
struct ABP_FluidSim_01_C_Draw_Impulse_Force_Params
{
	class UCanvas*                                     Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Canvas_Size;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFluidForceImpulsePerInstanceData           Impulse_Settings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes
struct ABP_FluidSim_01_C_Update_Impulse_Lifetimes_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse
struct ABP_FluidSim_01_C_Apply_Fluid_Force_Impulse_Params
{
	struct FFluidForceImpulse                          Impulse_Settings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo
struct ABP_FluidSim_01_C_Get_LandscapeWaterInfo_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID
struct ABP_FluidSim_01_C_Get_Force_MID_Params
{
	class UMaterialInterface*                          Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement
struct ABP_FluidSim_01_C_GridMovement_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs
struct ABP_FluidSim_01_C_SetupSimMIDs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs
struct ABP_FluidSim_01_C_SetupDisplayMIDs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position
struct ABP_FluidSim_01_C_Convert_Force_Position_Params
{
	struct FVector                                     Force_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sine_Bob;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UV_Location;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets
struct ABP_FluidSim_01_C_Cycle_Render_Targets_Params
{
	class UTextureRenderTarget2D*                      Current_Target;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript
struct ABP_FluidSim_01_C_UserConstructionScript_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay
struct ABP_FluidSim_01_C_ReceiveBeginPlay_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick
struct ABP_FluidSim_01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs
struct ABP_FluidSim_01_C_Clear_RTs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs
struct ABP_FluidSim_01_C_Allocate_RTs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability
struct ABP_FluidSim_01_C_ReCheckScalability_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs
struct ABP_FluidSim_01_C_Release_RTs_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug
struct ABP_FluidSim_01_C_FluidGridDebug_Params
{
};

// Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01
struct ABP_FluidSim_01_C_ExecuteUbergraph_BP_FluidSim_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

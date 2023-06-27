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

// Function Water.BuoyancyComponent.OnPontoonExitedWater
struct UBuoyancyComponent_OnPontoonExitedWater_Params
{
	struct FSphericalPontoon                           Pontoon;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Water.BuoyancyComponent.OnPontoonEnteredWater
struct UBuoyancyComponent_OnPontoonEnteredWater_Params
{
	struct FSphericalPontoon                           Pontoon;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Water.BuoyancyComponent.IsInWaterBody
struct UBuoyancyComponent_IsInWaterBody_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
struct UBuoyancyComponent_GetLastWaterSurfaceInfo_Params
{
	struct FVector                                     OutWaterPlaneLocation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutWaterPlaneNormal;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutWaterSurfacePosition;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutWaterDepth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutWaterBodyIdx;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutWaterVelocity;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
struct UNiagaraWaterFunctionLibrary_SetWaterBody_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OverrideName;                                             // (Parm, ZeroConstructor)
	class AWaterBody*                                  WaterBody;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBody.OnWaterBodyFinishedUpdating
struct AWaterBody_OnWaterBodyFinishedUpdating_Params
{
};

// Function Water.WaterBody.OnWaterBodyChanged
struct AWaterBody_OnWaterBodyChanged_Params
{
	bool                                               bShapeOrPositionChanged;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeightmapSettingsChanged;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterBody.GetWaterSpline
struct AWaterBody_GetWaterSpline_Params
{
	class UWaterSplineComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.WaterBody.GetWaterMeshComponents
struct AWaterBody_GetWaterMeshComponents_Params
{
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Water.WaterBody.GetWaterMaterialInstance
struct AWaterBody_GetWaterMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
struct AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
struct AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
struct AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterBody.GetIslands
struct AWaterBody_GetIslands_Params
{
	TArray<class AWaterBodyIsland*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Water.WaterBody.GetExclusionVolumes
struct AWaterBody_GetExclusionVolumes_Params
{
	TArray<class AWaterBodyExclusionVolume*>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Water.WaterBodyIsland.GetWaterSpline
struct AWaterBodyIsland_GetWaterSpline_Params
{
	class UWaterSplineComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Water.WaterMeshComponent.IsEnabled
struct UWaterMeshComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.SetOceanFloodHeight
struct UWaterSubsystem_SetOceanFloodHeight_Params
{
	float                                              InFloodHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSubsystem.PrintToWaterLog
struct UWaterSubsystem_PrintToWaterLog_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               bWarning;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Water.WaterSubsystem.IsWaterRenderingEnabled
struct UWaterSubsystem_IsWaterRenderingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
struct UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
struct UWaterSubsystem_IsShallowWaterSimulationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
struct UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
struct UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
struct UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
struct UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetOceanTotalHeight
struct UWaterSubsystem_GetOceanTotalHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetOceanFloodHeight
struct UWaterSubsystem_GetOceanFloodHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetOceanBaseHeight
struct UWaterSubsystem_GetOceanBaseHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
struct UWaterSubsystem_GetCameraUnderwaterDepth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

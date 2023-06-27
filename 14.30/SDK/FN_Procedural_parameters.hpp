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

// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
struct UHISMBuilderSettings_SetOverriddenLightMapRes_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
struct UHISMBuilderSettings_GetOverriddenLightMapRes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralParameterModifier.GetContribution
struct UProceduralParameterModifier_GetContribution_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
struct UProceduralGenerationContext_GetGenerationVolume_Params
{
	class AVolume*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
struct UProceduralGenerationContext_GetGenerationComponent_Params
{
	class UProceduralGenerationComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Procedural.ProceduralGenerationVolume.Generate
struct AProceduralGenerationVolume_Generate_Params
{
};

// Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent
struct AProceduralGenerationVolume_ClearGeneratedContent_Params
{
};

// Function Procedural.ProceduralGeneratorContext.OnGenerate
struct UProceduralGeneratorContext_OnGenerate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralGeneratorContext.OnDrawVisualization
struct UProceduralGeneratorContext_OnDrawVisualization_Params
{
};

// Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
struct UProceduralGeneratorContext_OnClearGeneratedContent_Params
{
};

// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
struct UProceduralGeneratorContext_GetOrCreateGeneratorContext_Params
{
	class UProceduralGenerator*                        Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UProceduralGeneratorContext*                 Context;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
struct UProceduralGeneratorContext_GetGeneratedContexts_Params
{
	TArray<class UProceduralGeneratorContext*>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Procedural.ProceduralGeneratorContext.Generate
struct UProceduralGeneratorContext_Generate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent
struct UProceduralGeneratorContext_ClearGeneratedContent_Params
{
};

// Function Procedural.ProceduralPointCloud.GetPointsByTag
struct UProceduralPointCloud_GetPointsByTag_Params
{
	struct FName                                       InTag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FProceduralPointCloudPoint>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Procedural.ProceduralPointCloud.Empty
struct UProceduralPointCloud_Empty_Params
{
};

// Function Procedural.ProceduralRotationMapModifier.SetYawMin
struct UProceduralRotationMapModifier_SetYawMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.SetYawMax
struct UProceduralRotationMapModifier_SetYawMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.SetRollMin
struct UProceduralRotationMapModifier_SetRollMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.SetRollMax
struct UProceduralRotationMapModifier_SetRollMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
struct UProceduralRotationMapModifier_SetPitchMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
struct UProceduralRotationMapModifier_SetPitchMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetYawMin
struct UProceduralRotationMapModifier_GetYawMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetYawMax
struct UProceduralRotationMapModifier_GetYawMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetRollMin
struct UProceduralRotationMapModifier_GetRollMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetRollMax
struct UProceduralRotationMapModifier_GetRollMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
struct UProceduralRotationMapModifier_GetPitchMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
struct UProceduralRotationMapModifier_GetPitchMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
struct UProceduralRotationNoiseModifier_SetRandomYawMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
struct UProceduralRotationNoiseModifier_SetRandomYawMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
struct UProceduralRotationNoiseModifier_SetRandomRollMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
struct UProceduralRotationNoiseModifier_SetRandomRollMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
struct UProceduralRotationNoiseModifier_SetRandomPitchMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
struct UProceduralRotationNoiseModifier_SetRandomPitchMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
struct UProceduralRotationNoiseModifier_GetRandomYawMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
struct UProceduralRotationNoiseModifier_GetRandomYawMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
struct UProceduralRotationNoiseModifier_GetRandomRollMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
struct UProceduralRotationNoiseModifier_GetRandomRollMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
struct UProceduralRotationNoiseModifier_GetRandomPitchMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
struct UProceduralRotationNoiseModifier_GetRandomPitchMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
struct UProceduralScaleMapModifier_SetRemapScaleMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
struct UProceduralScaleMapModifier_SetRemapScaleMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
struct UProceduralScaleMapModifier_GetRemapScaleMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
struct UProceduralScaleMapModifier_GetRemapScaleMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
struct UProceduralScaleNoiseModifier_SetScaleMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
struct UProceduralScaleNoiseModifier_SetScaleMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
struct UProceduralScaleNoiseModifier_GetScaleMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
struct UProceduralScaleNoiseModifier_GetScaleMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
struct UProceduralScatterSettings_SetSourcePointDistanceMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
struct UProceduralScatterSettings_SetSourcePointDistanceMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
struct UProceduralScatterSettings_GetSourcePointDistanceMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
struct UProceduralScatterSettings_GetSourcePointDistanceMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
struct UProceduralSurfaceHeightMap_SetHeightRangeMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
struct UProceduralSurfaceHeightMap_SetHeightRangeMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetValue
struct UProceduralSurfaceHeightMap_GetValue_Params
{
	float                                              InHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
struct UProceduralSurfaceHeightMap_GetHeightRangeMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
struct UProceduralSurfaceHeightMap_GetHeightRangeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
struct UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
struct UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
struct UProceduralSurfaceSlopeAngleMap_GetValue_Params
{
	float                                              InSlopeAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
struct UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
struct UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

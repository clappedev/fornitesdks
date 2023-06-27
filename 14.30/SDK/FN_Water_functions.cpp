// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (ConstParm, Parm, OutParm, ReferenceParm)

void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");

	UBuoyancyComponent_OnPontoonExitedWater_Params params;
	params.Pontoon = Pontoon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon       Pontoon                        (ConstParm, Parm, OutParm, ReferenceParm)

void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");

	UBuoyancyComponent_OnPontoonEnteredWater_Params params;
	params.Pontoon = Pontoon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.BuoyancyComponent.IsInWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBuoyancyComponent::IsInWaterBody()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");

	UBuoyancyComponent_IsInWaterBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OutWaterPlaneLocation          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutWaterPlaneNormal            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutWaterSurfacePosition        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutWaterDepth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutWaterBodyIdx                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutWaterVelocity               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");

	UBuoyancyComponent_GetLastWaterSurfaceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = params.OutWaterPlaneLocation;
	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = params.OutWaterPlaneNormal;
	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = params.OutWaterSurfacePosition;
	if (OutWaterDepth != nullptr)
		*OutWaterDepth = params.OutWaterDepth;
	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = params.OutWaterBodyIdx;
	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = params.OutWaterVelocity;
}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OverrideName                   (Parm, ZeroConstructor)
// class AWaterBody*              WaterBody                      (Parm, ZeroConstructor, IsPlainOldData)

void UNiagaraWaterFunctionLibrary::STATIC_SetWaterBody(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class AWaterBody* WaterBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");

	UNiagaraWaterFunctionLibrary_SetWaterBody_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.WaterBody = WaterBody;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterBody.OnWaterBodyFinishedUpdating
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterBody::OnWaterBodyFinishedUpdating()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyFinishedUpdating");

	AWaterBody_OnWaterBodyFinishedUpdating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShapeOrPositionChanged        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeightmapSettingsChanged      (Parm, ZeroConstructor, IsPlainOldData)

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");

	AWaterBody_OnWaterBodyChanged_Params params;
	params.bShapeOrPositionChanged = bShapeOrPositionChanged;
	params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");

	AWaterBody_GetWaterSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMeshComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UStaticMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UStaticMeshComponent*> AWaterBody::GetWaterMeshComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMeshComponents");

	AWaterBody_GetWaterMeshComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");

	AWaterBody_GetWaterMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance");

	AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");

	AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");

	AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");

	AWaterBody_GetIslands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBody.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");

	AWaterBody_GetExclusionVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");

	AWaterBodyIsland_GetWaterSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterMeshComponent::IsEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");

	UWaterMeshComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFloodHeight                  (Parm, ZeroConstructor, IsPlainOldData)

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");

	UWaterSubsystem_SetOceanFloodHeight_Params params;
	params.InFloodHeight = InFloodHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           bWarning                       (Parm, ZeroConstructor, IsPlainOldData)

void UWaterSubsystem::PrintToWaterLog(const struct FString& Message, bool bWarning)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");

	UWaterSubsystem_PrintToWaterLog_Params params;
	params.Message = Message;
	params.bWarning = bWarning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");

	UWaterSubsystem_IsWaterRenderingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");

	UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");

	UWaterSubsystem_IsShallowWaterSimulationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");

	UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWaterSubsystem::STATIC_GetShallowWaterSimulationRenderTargetSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");

	UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWaterSubsystem::STATIC_GetShallowWaterMaxImpulseForces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");

	UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWaterSubsystem::STATIC_GetShallowWaterMaxDynamicForces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");

	UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterSubsystem::GetOceanTotalHeight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");

	UWaterSubsystem_GetOceanTotalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterSubsystem::GetOceanFloodHeight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");

	UWaterSubsystem_GetOceanFloodHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterSubsystem::GetOceanBaseHeight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");

	UWaterSubsystem_GetOceanBaseHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");

	UWaterSubsystem_GetCameraUnderwaterDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

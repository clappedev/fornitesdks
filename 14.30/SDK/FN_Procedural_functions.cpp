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

// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UHISMBuilderSettings::SetOverriddenLightMapRes(int Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes");

	UHISMBuilderSettings_SetOverriddenLightMapRes_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHISMBuilderSettings::GetOverriddenLightMapRes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes");

	UHISMBuilderSettings_GetOverriddenLightMapRes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralParameterModifier.GetContribution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralParameterModifier::GetContribution()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralParameterModifier.GetContribution");

	UProceduralParameterModifier_GetContribution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVolume*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AVolume* UProceduralGenerationContext::GetGenerationVolume()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGenerationContext.GetGenerationVolume");

	UProceduralGenerationContext_GetGenerationVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UProceduralGenerationComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGenerationContext.GetGenerationComponent");

	UProceduralGenerationContext_GetGenerationComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGenerationVolume.Generate
// (Final, Native, Public, BlueprintCallable)

void AProceduralGenerationVolume::Generate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGenerationVolume.Generate");

	AProceduralGenerationVolume_Generate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)

void AProceduralGenerationVolume::ClearGeneratedContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent");

	AProceduralGenerationVolume_ClearGeneratedContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralGeneratorContext.OnGenerate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProceduralGeneratorContext::OnGenerate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.OnGenerate");

	UProceduralGeneratorContext_OnGenerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGeneratorContext.OnDrawVisualization
// (Event, Public, BlueprintEvent, Const)

void UProceduralGeneratorContext::OnDrawVisualization()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.OnDrawVisualization");

	UProceduralGeneratorContext_OnDrawVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
// (Native, Event, Public, BlueprintEvent)

void UProceduralGeneratorContext::OnClearGeneratedContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent");

	UProceduralGeneratorContext_OnClearGeneratedContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UProceduralGenerator*    Generator                      (Parm, ZeroConstructor, IsPlainOldData)
// class UProceduralGeneratorContext* Context                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProceduralGeneratorContext::GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext");

	UProceduralGeneratorContext_GetOrCreateGeneratorContext_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UProceduralGeneratorContext*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UProceduralGeneratorContext*> UProceduralGeneratorContext::GetGeneratedContexts()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts");

	UProceduralGeneratorContext_GetGeneratedContexts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGeneratorContext.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProceduralGeneratorContext::Generate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.Generate");

	UProceduralGeneratorContext_Generate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)

void UProceduralGeneratorContext::ClearGeneratedContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent");

	UProceduralGeneratorContext_ClearGeneratedContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralPointCloud.GetPointsByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FProceduralPointCloudPoint> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FProceduralPointCloudPoint> UProceduralPointCloud::GetPointsByTag(const struct FName& InTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralPointCloud.GetPointsByTag");

	UProceduralPointCloud_GetPointsByTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralPointCloud.Empty
// (Final, Native, Public, BlueprintCallable)

void UProceduralPointCloud::Empty()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralPointCloud.Empty");

	UProceduralPointCloud_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetYawMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetYawMin");

	UProceduralRotationMapModifier_SetYawMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetYawMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetYawMax");

	UProceduralRotationMapModifier_SetYawMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetRollMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetRollMin");

	UProceduralRotationMapModifier_SetRollMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetRollMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetRollMax");

	UProceduralRotationMapModifier_SetRollMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetPitchMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetPitchMin");

	UProceduralRotationMapModifier_SetPitchMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationMapModifier::SetPitchMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.SetPitchMax");

	UProceduralRotationMapModifier_SetPitchMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationMapModifier.GetYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetYawMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetYawMin");

	UProceduralRotationMapModifier_GetYawMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationMapModifier.GetYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetYawMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetYawMax");

	UProceduralRotationMapModifier_GetYawMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationMapModifier.GetRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetRollMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetRollMin");

	UProceduralRotationMapModifier_GetRollMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationMapModifier.GetRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetRollMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetRollMax");

	UProceduralRotationMapModifier_GetRollMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetPitchMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetPitchMin");

	UProceduralRotationMapModifier_GetPitchMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationMapModifier::GetPitchMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationMapModifier.GetPitchMax");

	UProceduralRotationMapModifier_GetPitchMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomYawMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin");

	UProceduralRotationNoiseModifier_SetRandomYawMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomYawMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax");

	UProceduralRotationNoiseModifier_SetRandomYawMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomRollMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin");

	UProceduralRotationNoiseModifier_SetRandomRollMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomRollMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax");

	UProceduralRotationNoiseModifier_SetRandomRollMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomPitchMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin");

	UProceduralRotationNoiseModifier_SetRandomPitchMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralRotationNoiseModifier::SetRandomPitchMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax");

	UProceduralRotationNoiseModifier_SetRandomPitchMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomYawMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin");

	UProceduralRotationNoiseModifier_GetRandomYawMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomYawMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax");

	UProceduralRotationNoiseModifier_GetRandomYawMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomRollMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin");

	UProceduralRotationNoiseModifier_GetRandomRollMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomRollMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax");

	UProceduralRotationNoiseModifier_GetRandomRollMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomPitchMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin");

	UProceduralRotationNoiseModifier_GetRandomPitchMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralRotationNoiseModifier::GetRandomPitchMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax");

	UProceduralRotationNoiseModifier_GetRandomPitchMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScaleMapModifier::SetRemapScaleMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin");

	UProceduralScaleMapModifier_SetRemapScaleMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScaleMapModifier::SetRemapScaleMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax");

	UProceduralScaleMapModifier_SetRemapScaleMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScaleMapModifier::GetRemapScaleMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin");

	UProceduralScaleMapModifier_GetRemapScaleMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScaleMapModifier::GetRemapScaleMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax");

	UProceduralScaleMapModifier_GetRemapScaleMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScaleNoiseModifier::SetScaleMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin");

	UProceduralScaleNoiseModifier_SetScaleMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScaleNoiseModifier::SetScaleMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax");

	UProceduralScaleNoiseModifier_SetScaleMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScaleNoiseModifier::GetScaleMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin");

	UProceduralScaleNoiseModifier_GetScaleMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScaleNoiseModifier::GetScaleMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax");

	UProceduralScaleNoiseModifier_GetScaleMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin");

	UProceduralScatterSettings_SetSourcePointDistanceMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax");

	UProceduralScatterSettings_SetSourcePointDistanceMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScatterSettings::GetSourcePointDistanceMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin");

	UProceduralScatterSettings_GetSourcePointDistanceMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralScatterSettings::GetSourcePointDistanceMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax");

	UProceduralScatterSettings_GetSourcePointDistanceMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralSurfaceHeightMap::SetHeightRangeMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin");

	UProceduralSurfaceHeightMap_SetHeightRangeMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralSurfaceHeightMap::SetHeightRangeMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax");

	UProceduralSurfaceHeightMap_SetHeightRangeMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralSurfaceHeightMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InHeight                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceHeightMap::GetValue(float InHeight)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceHeightMap.GetValue");

	UProceduralSurfaceHeightMap_GetValue_Params params;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceHeightMap::GetHeightRangeMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin");

	UProceduralSurfaceHeightMap_GetHeightRangeMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceHeightMap::GetHeightRangeMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax");

	UProceduralSurfaceHeightMap_GetHeightRangeMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMin(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin");

	UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMax(float InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax");

	UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InSlopeAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceSlopeAngleMap::GetValue(float InSlopeAngle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue");

	UProceduralSurfaceSlopeAngleMap_GetValue_Params params;
	params.InSlopeAngle = InSlopeAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin");

	UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMax()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax");

	UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax_Params params;

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

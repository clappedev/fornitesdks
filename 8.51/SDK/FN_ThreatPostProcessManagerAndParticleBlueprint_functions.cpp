// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BoxMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumePlayerCoveragePercentage (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(struct FVector BoxMin, struct FVector BoxMax, float* VolumePlayerCoveragePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox");

	AThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VolumePlayerCoveragePercentage != nullptr)
		*VolumePlayerCoveragePercentage = params.VolumePlayerCoveragePercentage;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
// (BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc");

	AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
// (BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc");

	AThreatPostProcessManagerAndParticleBlueprint_C_Ramp_Up_down_values_on_death__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick");

	AThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo> ThreatLocationInfo             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(TArray<struct FThreatLocationInfo> ThreatLocationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged");

	AThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged_Params params;
	params.ThreatLocationInfo = ThreatLocationInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
// (Event, Protected, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady");

	AThreatPostProcessManagerAndParticleBlueprint_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::VFX_RainTracePeriodic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic");

	AThreatPostProcessManagerAndParticleBlueprint_C_VFX_RainTracePeriodic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::StartTraceTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer");

	AThreatPostProcessManagerAndParticleBlueprint_C_StartTraceTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
// (BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::ForceUpdateLensEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect");

	AThreatPostProcessManagerAndParticleBlueprint_C_ForceUpdateLensEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bForceThreatOn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatOverrideChanged(bool bForceThreatOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged");

	AThreatPostProcessManagerAndParticleBlueprint_C_OnThreatOverrideChanged_Params params;
	params.bForceThreatOn = bForceThreatOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	AThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature");

	AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature");

	AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

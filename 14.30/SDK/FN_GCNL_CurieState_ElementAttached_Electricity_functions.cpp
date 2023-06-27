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

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetRandomPropagationArcSpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMesh*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::GetRandomPropagationArcSpline(class UStaticMesh** Output)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetRandomPropagationArcSpline");

	AGCNL_CurieState_ElementAttached_Electricity_C_GetRandomPropagationArcSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetNiagaraFlippedAxes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 VectorIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::GetNiagaraFlippedAxes(const struct FVector& VectorIn, struct FVector* VectorOut)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetNiagaraFlippedAxes");

	AGCNL_CurieState_ElementAttached_Electricity_C_GetNiagaraFlippedAxes_Params params;
	params.VectorIn = VectorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorOut != nullptr)
		*VectorOut = params.VectorOut;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetSplineRelativeRotationXOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::GetSplineRelativeRotationXOffset(float* X)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetSplineRelativeRotationXOffset");

	AGCNL_CurieState_ElementAttached_Electricity_C_GetSplineRelativeRotationXOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetActorPlaneOrientation
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Electricity_C::GetActorPlaneOrientation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetActorPlaneOrientation");

	AGCNL_CurieState_ElementAttached_Electricity_C_GetActorPlaneOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineCustomPrimitiveData
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Electricity_C::SetPropagationSplineCustomPrimitiveData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineCustomPrimitiveData");

	AGCNL_CurieState_ElementAttached_Electricity_C_SetPropagationSplineCustomPrimitiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::SetPropagationSplineHiddenInGame(bool NewHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineHiddenInGame");

	AGCNL_CurieState_ElementAttached_Electricity_C_SetPropagationSplineHiddenInGame_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.FindPropagationParent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::FindPropagationParent(bool* Found)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.FindPropagationParent");

	AGCNL_CurieState_ElementAttached_Electricity_C_FindPropagationParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCNL_CurieState_ElementAttached_Electricity_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnLoopingStart");

	AGCNL_CurieState_ElementAttached_Electricity_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ReceiveEndPlay");

	AGCNL_CurieState_ElementAttached_Electricity_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnRemoval");

	AGCNL_CurieState_ElementAttached_Electricity_C_OnRemoval_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;
	params.BurstCameraShakeInstance = BurstCameraShakeInstance;
	params.BurstDecalInstance = BurstDecalInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.DrawPropagationSpline
// (BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Electricity_C::DrawPropagationSpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.DrawPropagationSpline");

	AGCNL_CurieState_ElementAttached_Electricity_C_DrawPropagationSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.HideSplineMesh
// (BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Electricity_C::HideSplineMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.HideSplineMesh");

	AGCNL_CurieState_ElementAttached_Electricity_C_HideSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.RetriggerPropagationSpline
// (BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Electricity_C::RetriggerPropagationSpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.RetriggerPropagationSpline");

	AGCNL_CurieState_ElementAttached_Electricity_C_RetriggerPropagationSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Electricity_C::ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity");

	AGCNL_CurieState_ElementAttached_Electricity_C_ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

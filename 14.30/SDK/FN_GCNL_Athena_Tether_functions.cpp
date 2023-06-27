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

// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Athena_Tether_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove");

	AGCNL_Athena_Tether_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_Athena_Tether_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive");

	AGCNL_Athena_Tether_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::UpdateAudio(int Surface)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio");

	AGCNL_Athena_Tether_C_UpdateAudio_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc
// (BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkis__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc");

	AGCNL_Athena_Tether_C_ScaleInSkis__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc
// (BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkis__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc");

	AGCNL_Athena_Tether_C_ScaleInSkis__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick");

	AGCNL_Athena_Tether_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication");

	AGCNL_Athena_Tether_C_OnApplication_Params params;
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


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval");

	AGCNL_Athena_Tether_C_OnRemoval_Params params;
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


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OneshotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, const struct FName& ParameterName, int OneshotIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature");

	AGCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature_Params params;
	params.AudioComponent = AudioComponent;
	params.ParameterName = ParameterName;
	params.OneshotIndex = OneshotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::StartFF()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF");

	AGCNL_Athena_Tether_C_StartFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::UpdateFF()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF");

	AGCNL_Athena_Tether_C_UpdateFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::StopFF()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF");

	AGCNL_Athena_Tether_C_StopFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::InitializeTetherGCNL(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL");

	AGCNL_Athena_Tether_C_InitializeTetherGCNL_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_Tether_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay");

	AGCNL_Athena_Tether_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer
// (BlueprintCallable, BlueprintEvent)

void AGCNL_Athena_Tether_C::ScaleInSkisForPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer");

	AGCNL_Athena_Tether_C_ScaleInSkisForPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_Tether_C::ExecuteUbergraph_GCNL_Athena_Tether(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether");

	AGCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

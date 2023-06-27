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

// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeOnFireAudioComponent
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Fire_C::FadeOnFireAudioComponent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeOnFireAudioComponent");

	AGCNL_CurieState_ElementAttached_Fire_C_FadeOnFireAudioComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ClearAllHandles
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Fire_C::ClearAllHandles()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ClearAllHandles");

	AGCNL_CurieState_ElementAttached_Fire_C_ClearAllHandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.UpdatePlayerVisualsByState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EB_Enum_PlayerFireStates> PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::UpdatePlayerVisualsByState(TEnumAsByte<EB_Enum_PlayerFireStates> PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.UpdatePlayerVisualsByState");

	AGCNL_CurieState_ElementAttached_Fire_C_UpdatePlayerVisualsByState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.DeactivateBodyFX
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Fire_C::DeactivateBodyFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.DeactivateBodyFX");

	AGCNL_CurieState_ElementAttached_Fire_C_DeactivateBodyFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ActivateBodyFX
// (Public, BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Fire_C::ActivateBodyFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ActivateBodyFX");

	AGCNL_CurieState_ElementAttached_Fire_C_ActivateBodyFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCurieContainerHandle   ContainerHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            StateIdentifier                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCNL_CurieState_ElementAttached_Fire_C::OnCurieStateChanged(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged");

	AGCNL_CurieState_ElementAttached_Fire_C_OnCurieStateChanged_Params params;
	params.Owner = Owner;
	params.ContainerHandle = ContainerHandle;
	params.StateIdentifier = StateIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EB_Enum_PlayerFireStates> Player_State                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::GetPlayerFireState(TEnumAsByte<EB_Enum_PlayerFireStates>* Player_State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireState");

	AGCNL_CurieState_ElementAttached_Fire_C_GetPlayerFireState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_State != nullptr)
		*Player_State = params.Player_State;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.SetBodyFXParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EB_Enum_PlayerFireStates> PreviousPlayerFireState        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::SetBodyFXParameters(TEnumAsByte<EB_Enum_PlayerFireStates> PreviousPlayerFireState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.SetBodyFXParameters");

	AGCNL_CurieState_ElementAttached_Fire_C_SetBodyFXParameters_Params params;
	params.PreviousPlayerFireState = PreviousPlayerFireState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval");

	AGCNL_CurieState_ElementAttached_Fire_C_OnRemoval_Params params;
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


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication");

	AGCNL_CurieState_ElementAttached_Fire_C_OnApplication_Params params;
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


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut
// (BlueprintCallable, BlueprintEvent)

void AGCNL_CurieState_ElementAttached_Fire_C::FadeBodyFXOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut");

	AGCNL_CurieState_ElementAttached_Fire_C_FadeBodyFXOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_CurieState_ElementAttached_Fire_C::ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire");

	AGCNL_CurieState_ElementAttached_Fire_C_ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

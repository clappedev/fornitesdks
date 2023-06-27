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

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointInPlayerDir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::GetRandomPointInPlayerDir(struct FVector* position)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointInPlayerDir");

	ASafeZoneIndicator_C_GetRandomPointInPlayerDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointOnBoundary
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::GetRandomPointOnBoundary(struct FVector* position)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointOnBoundary");

	ASafeZoneIndicator_C_GetRandomPointOnBoundary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthena_GameState_C*     AthenaGS                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::GetAthenaGameState(class AAthena_GameState_C** AthenaGS)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState");

	ASafeZoneIndicator_C_GetAthenaGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AthenaGS != nullptr)
		*AthenaGS = params.AthenaGS;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix");

	ASafeZoneIndicator_C_HandleInsideOutsideMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::InitClosestPointAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio");

	ASafeZoneIndicator_C_InitClosestPointAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript");

	ASafeZoneIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc");

	ASafeZoneIndicator_C_Pre_Damage_Audio_Ramp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc");

	ASafeZoneIndicator_C_Pre_Damage_Audio_Ramp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::StormFadeTimeline__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc");

	ASafeZoneIndicator_C_StormFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::StormFadeTimeline__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc");

	ASafeZoneIndicator_C_StormFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::VolumetricStormFadeTimeline__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__FinishedFunc");

	ASafeZoneIndicator_C_VolumetricStormFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::VolumetricStormFadeTimeline__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__UpdateFunc");

	ASafeZoneIndicator_C_VolumetricStormFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::ResetSafeZoneScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale");

	ASafeZoneIndicator_C_ResetSafeZoneScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.stormy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::stormy(float NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.stormy");

	ASafeZoneIndicator_C_stormy_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed");

	ASafeZoneIndicator_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent
// (Event, Public, BlueprintEvent)

void ASafeZoneIndicator_C::OnBeginStartingStateEffectsEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent");

	ASafeZoneIndicator_C_OnBeginStartingStateEffectsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Megastorm_Pre_Damage_Tell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell");

	ASafeZoneIndicator_C_Megastorm_Pre_Damage_Tell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Start_Megastorm_Audio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio");

	ASafeZoneIndicator_C_Start_Megastorm_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Play Storm Grow Audio
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Play_Storm_Grow_Audio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Play Storm Grow Audio");

	ASafeZoneIndicator_C_Play_Storm_Grow_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Trigger Distant Storm Oneshot
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Trigger_Distant_Storm_Oneshot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Trigger Distant Storm Oneshot");

	ASafeZoneIndicator_C_Trigger_Distant_Storm_Oneshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Stop Distant Storm Oneshots
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Stop_Distant_Storm_Oneshots()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Stop Distant Storm Oneshots");

	ASafeZoneIndicator_C_Stop_Distant_Storm_Oneshots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortSafeZoneState             NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInitial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(EFortSafeZoneState NewState, bool bInitial)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange");

	ASafeZoneIndicator_C_OnSafeZoneStateChange_Params params;
	params.NewState = NewState;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay");

	ASafeZoneIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator");

	ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortSafeZoneState             SafeZoneState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::OnSafeZoneStateChangeDispatcher__DelegateSignature(EFortSafeZoneState SafeZoneState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature");

	ASafeZoneIndicator_C_OnSafeZoneStateChangeDispatcher__DelegateSignature_Params params;
	params.SafeZoneState = SafeZoneState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

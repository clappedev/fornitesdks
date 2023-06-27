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

// Function BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound_to_Spawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::Added_Death_Audio(class USoundBase* Sound_to_Spawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio");

	ABP_VictoryDrone_C_Added_Death_Audio_Params params;
	params.Sound_to_Spawn = Sound_to_Spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FParticleSysParam> Instance_Parameters            (Parm, OutParm)

void ABP_VictoryDrone_C::Decoy_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters");

	ABP_VictoryDrone_C_Decoy_FX_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instance_Parameters != nullptr)
		*Instance_Parameters = params.Instance_Parameters;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FParticleSysParam> Instance_Parameters            (Parm, OutParm)

void ABP_VictoryDrone_C::NPC_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters");

	ABP_VictoryDrone_C_NPC_FX_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instance_Parameters != nullptr)
		*Instance_Parameters = params.Instance_Parameters;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::NotifyTeleportFinishedTriggered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered");

	ABP_VictoryDrone_C_NotifyTeleportFinishedTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::PlaySpawnAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim");

	ABP_VictoryDrone_C_PlaySpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VictoryDrone_C::InitDrone()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone");

	ABP_VictoryDrone_C_InitDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VictoryDrone_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay");

	ABP_VictoryDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded");

	ABP_VictoryDrone_C_OnSpawnOutAnimEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick");

	ABP_VictoryDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::ExecuteUbergraph_BP_VictoryDrone(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone");

	ABP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VictoryDrone_C*      Drone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VictoryDrone_C::SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature");

	ABP_VictoryDrone_C_SpawnOutAnimEndedDispatcher__DelegateSignature_Params params;
	params.Drone = Drone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

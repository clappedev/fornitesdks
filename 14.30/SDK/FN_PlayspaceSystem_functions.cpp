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

// Function PlayspaceSystem.GameplayVolume.UpdateSize
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 NewScale                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameplayVolume::UpdateSize(const struct FVector& NewScale)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.GameplayVolume.UpdateSize");

	AGameplayVolume_UpdateSize_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UOverlapComponent::OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap");

	UOverlapComponent_OnEndActorOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UOverlapComponent::OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap");

	UOverlapComponent_OnBeginActorOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
// (Final, Native, Protected)

void APlayspace::OnRep_PlayspaceUsers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers");

	APlayspace_OnRep_PlayspaceUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
// (Native, Protected)

void APlayspace::OnRep_MatchStartTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.Playspace.OnRep_MatchStartTime");

	APlayspace_OnRep_MatchStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
// (Final, Native, Protected)

void APlayspace::OnRep_bMatchHasEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded");

	APlayspace_OnRep_bMatchHasEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
// (Final, Native, Protected)

void APlayspace::OnRep_bIsInitialized()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.Playspace.OnRep_bIsInitialized");

	APlayspace_OnRep_bIsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning");

	UPlayspaceControllerComponent_PlayerSpawning_ServerMarkReadyForSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
// (Final, Native, Private)

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo");

	UPlayspaceControllerComponent_PlayerSpawning_OnRep_ReplicatedSpawnInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FReplicatedSpawnInfo    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo");

	UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
// (Final, Native, Private)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents");

	UPlayspaceManagerComponent_ProcessOverlapEvents_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayVolume*         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume");

	UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params params;
	params.PlayerState = PlayerState;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayVolume*         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume");

	UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params params;
	params.PlayerState = PlayerState;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

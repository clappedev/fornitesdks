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

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.GetSkeletalMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::GetSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.GetSkeletalMeshes");

	AGCN_Loop_SirloinBotShroud_C_GetSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Timeline
// (BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Timeline");

	AGCN_Loop_SirloinBotShroud_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_SirloinBotShroud_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnLoopingStart");

	AGCN_Loop_SirloinBotShroud_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SirloinBotShroud_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnRemoval");

	AGCN_Loop_SirloinBotShroud_C_OnRemoval_Params params;
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


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SirloinBotShroud_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ReceiveTick");

	AGCN_Loop_SirloinBotShroud_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::BeginExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.BeginExpireTell");

	AGCN_Loop_SirloinBotShroud_C_BeginExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ClearExpireTell");

	AGCN_Loop_SirloinBotShroud_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::ExpireWarningTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExpireWarningTick");

	AGCN_Loop_SirloinBotShroud_C_ExpireWarningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.UpdateTeamVisbility
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::UpdateTeamVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.UpdateTeamVisbility");

	AGCN_Loop_SirloinBotShroud_C_UpdateTeamVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SirloinBotShroud_C::Audio_Tick(float Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Audio Tick");

	AGCN_Loop_SirloinBotShroud_C_Audio_Tick_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.StartedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::StartedInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.StartedInteract");

	AGCN_Loop_SirloinBotShroud_C_StartedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.EndedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SirloinBotShroud_C::EndedInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.EndedInteract");

	AGCN_Loop_SirloinBotShroud_C_EndedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExecuteUbergraph_GCN_Loop_SirloinBotShroud
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SirloinBotShroud_C::ExecuteUbergraph_GCN_Loop_SirloinBotShroud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExecuteUbergraph_GCN_Loop_SirloinBotShroud");

	AGCN_Loop_SirloinBotShroud_C_ExecuteUbergraph_GCN_Loop_SirloinBotShroud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

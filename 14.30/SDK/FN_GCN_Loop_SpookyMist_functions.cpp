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

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Goal Visibility Level
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCN_Loop_SpookyMist_C::Get_Goal_Visibility_Level()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Goal Visibility Level");

	AGCN_Loop_SpookyMist_C_Get_Goal_Visibility_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Is Player Controller Friendly
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*             PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Friendly_Player             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::Is_Player_Controller_Friendly(class AController* PlayerController, bool* Is_Friendly_Player)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Is Player Controller Friendly");

	AGCN_Loop_SpookyMist_C_Is_Player_Controller_Friendly_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Friendly_Player != nullptr)
		*Is_Friendly_Player = params.Is_Friendly_Player;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldRenderAsLocalPlayer
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Loop_SpookyMist_C::ShouldRenderAsLocalPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldRenderAsLocalPlayer");

	AGCN_Loop_SpookyMist_C_ShouldRenderAsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.TickMovement Opacity
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCN_Loop_SpookyMist_C::TickMovement_Opacity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.TickMovement Opacity");

	AGCN_Loop_SpookyMist_C_TickMovement_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldSpeedRibbonsBeVisible
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Show_Speed_Ribbons      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::ShouldSpeedRibbonsBeVisible(bool* Should_Show_Speed_Ribbons)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldSpeedRibbonsBeVisible");

	AGCN_Loop_SpookyMist_C_ShouldSpeedRibbonsBeVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Should_Show_Speed_Ribbons != nullptr)
		*Should_Show_Speed_Ribbons = params.Should_Show_Speed_Ribbons;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Skeletal Meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::Get_Skeletal_Meshes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Skeletal Meshes");

	AGCN_Loop_SpookyMist_C_Get_Skeletal_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc
// (BlueprintEvent)

void AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc");

	AGCN_Loop_SpookyMist_C_Timeline_Interaction_Fade_In_Out__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc
// (BlueprintEvent)

void AGCN_Loop_SpookyMist_C::Timeline_Interaction_Fade_In_Out__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc");

	AGCN_Loop_SpookyMist_C_Timeline_Interaction_Fade_In_Out__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_Loop_SpookyMist_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart");

	AGCN_Loop_SpookyMist_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval");

	AGCN_Loop_SpookyMist_C_OnRemoval_Params params;
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


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick");

	AGCN_Loop_SpookyMist_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::BeginExpireTell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell");

	AGCN_Loop_SpookyMist_C_BeginExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::ClearExpireTell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell");

	AGCN_Loop_SpookyMist_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::ExpireWarningTick()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick");

	AGCN_Loop_SpookyMist_C_ExpireWarningTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::Audio_Tick(float Velocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick");

	AGCN_Loop_SpookyMist_C_Audio_Tick_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::StartedInteract()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract");

	AGCN_Loop_SpookyMist_C_StartedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::EndedInteract()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract");

	AGCN_Loop_SpookyMist_C_EndedInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::UpdateTeamVisbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility");

	AGCN_Loop_SpookyMist_C_UpdateTeamVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Initialize Player Skeletal Meshes
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SpookyMist_C::Initialize_Player_Skeletal_Meshes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Initialize Player Skeletal Meshes");

	AGCN_Loop_SpookyMist_C_Initialize_Player_Skeletal_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_SpookyMist_C::ExecuteUbergraph_GCN_Loop_SpookyMist(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist");

	AGCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

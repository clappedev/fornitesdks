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

// Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Spawn_Drone_VFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX");

	AGCN_RezIn_C_Spawn_Drone_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Set_Timelines__Playrates()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates");

	AGCN_RezIn_C_Set_Timelines__Playrates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Spawn_Teleport_In_VFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX");

	AGCN_RezIn_C_Spawn_Teleport_In_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fully_Completed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCN_RezIn_C::Restore_Character_Materials(bool* Fully_Completed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials");

	AGCN_RezIn_C_Restore_Character_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fully_Completed != nullptr)
		*Fully_Completed = params.Fully_Completed;
}


// Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Clean_Up_Teleportation_Light()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light");

	AGCN_RezIn_C_Clean_Up_Teleportation_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Spawn_Teleportation_Light()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light");

	AGCN_RezIn_C_Spawn_Teleportation_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Spawn_Teleportation_Drone()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone");

	AGCN_RezIn_C_Spawn_Teleportation_Drone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Stop_Looping_Audio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio");

	AGCN_RezIn_C_Stop_Looping_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
// (BlueprintEvent)

void AGCN_RezIn_C::TFX_GlowCharacterMesh__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc");

	AGCN_RezIn_C_TFX_GlowCharacterMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
// (BlueprintEvent)

void AGCN_RezIn_C::TFX_GlowCharacterMesh__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc");

	AGCN_RezIn_C_TFX_GlowCharacterMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
// (BlueprintEvent)

void AGCN_RezIn_C::TFX_ResOutCharacterMesh__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc");

	AGCN_RezIn_C_TFX_ResOutCharacterMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
// (BlueprintEvent)

void AGCN_RezIn_C::TFX_ResOutCharacterMesh__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc");

	AGCN_RezIn_C_TFX_ResOutCharacterMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UFXSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_RezIn_C::OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric");

	AGCN_RezIn_C_OnBurstGeneric_Params params;
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


// Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
// (BlueprintCallable, BlueprintEvent)

void AGCN_RezIn_C::Pre_Sequence_Change()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change");

	AGCN_RezIn_C_Pre_Sequence_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       Spawned_Teleport_In_FX         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGCN_RezIn_C::Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX");

	AGCN_RezIn_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params params;
	params.Spawned_Teleport_In_FX = Spawned_Teleport_In_FX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       Drone_FX                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGCN_RezIn_C::Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX");

	AGCN_RezIn_C_Set_Additional_Niagara_Parameter_on_Drone_FX_Params params;
	params.Drone_FX = Drone_FX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_RezIn_C::ExecuteUbergraph_GCN_RezIn(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn");

	AGCN_RezIn_C_ExecuteUbergraph_GCN_RezIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

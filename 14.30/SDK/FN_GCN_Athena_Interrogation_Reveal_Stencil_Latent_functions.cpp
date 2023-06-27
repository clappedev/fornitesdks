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

// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.OnExecute
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.OnExecute");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.BeginSweepFX
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::BeginSweepFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.BeginSweepFX");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_BeginSweepFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.EndSweepFX
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::EndSweepFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.EndSweepFX");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_EndSweepFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ReceiveEndPlay");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.PlayWorldSweep
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::PlayWorldSweep()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.PlayWorldSweep");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_PlayWorldSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C::ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent");

	AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

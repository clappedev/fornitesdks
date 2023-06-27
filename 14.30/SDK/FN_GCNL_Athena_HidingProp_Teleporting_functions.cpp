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

// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__FinishedFunc");

	AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__UpdateFunc");

	AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__DoFlash__EventFunc
// (BlueprintEvent)

void AGCNL_Athena_HidingProp_Teleporting_C::Timeline_0__DoFlash__EventFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__DoFlash__EventFunc");

	AGCNL_Athena_HidingProp_Teleporting_C_Timeline_0__DoFlash__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCNL_Athena_HidingProp_Teleporting_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnLoopingStart");

	AGCNL_Athena_HidingProp_Teleporting_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_HidingProp_Teleporting_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnRemoval");

	AGCNL_Athena_HidingProp_Teleporting_C_OnRemoval_Params params;
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


// Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_HidingProp_Teleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting");

	AGCNL_Athena_HidingProp_Teleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

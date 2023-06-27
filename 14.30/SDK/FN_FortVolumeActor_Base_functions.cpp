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

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFortVolumeActor_Base_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.UserConstructionScript");

	AFortVolumeActor_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__FinishedFunc
// (BlueprintEvent)

void AFortVolumeActor_Base_C::TransitionTL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__FinishedFunc");

	AFortVolumeActor_Base_C_TransitionTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__UpdateFunc
// (BlueprintEvent)

void AFortVolumeActor_Base_C::TransitionTL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__UpdateFunc");

	AFortVolumeActor_Base_C_TransitionTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVolumeActor_Base.FortVolumeActor_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFortVolumeActor_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.ReceiveBeginPlay");

	AFortVolumeActor_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVolumeActor_Base.FortVolumeActor_Base_C.OnDeathPlayEffects_2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AFortVolumeActor_Base_C::OnDeathPlayEffects_2(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.OnDeathPlayEffects_2");

	AFortVolumeActor_Base_C_OnDeathPlayEffects_2_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVolumeActor_Base.FortVolumeActor_Base_C.ExecuteUbergraph_FortVolumeActor_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortVolumeActor_Base_C::ExecuteUbergraph_FortVolumeActor_Base(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortVolumeActor_Base.FortVolumeActor_Base_C.ExecuteUbergraph_FortVolumeActor_Base");

	AFortVolumeActor_Base_C_ExecuteUbergraph_FortVolumeActor_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

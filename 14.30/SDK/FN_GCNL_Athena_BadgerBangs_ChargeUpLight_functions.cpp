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

// Function GCNL_Athena_BadgerBangs_ChargeUpLight.GCNL_Athena_BadgerBangs_ChargeUpLight_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCNL_Athena_BadgerBangs_ChargeUpLight_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_BadgerBangs_ChargeUpLight.GCNL_Athena_BadgerBangs_ChargeUpLight_C.OnLoopingStart");

	AGCNL_Athena_BadgerBangs_ChargeUpLight_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_BadgerBangs_ChargeUpLight.GCNL_Athena_BadgerBangs_ChargeUpLight_C.ExecuteUbergraph_GCNL_Athena_BadgerBangs_ChargeUpLight
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_BadgerBangs_ChargeUpLight_C::ExecuteUbergraph_GCNL_Athena_BadgerBangs_ChargeUpLight(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_BadgerBangs_ChargeUpLight.GCNL_Athena_BadgerBangs_ChargeUpLight_C.ExecuteUbergraph_GCNL_Athena_BadgerBangs_ChargeUpLight");

	AGCNL_Athena_BadgerBangs_ChargeUpLight_C_ExecuteUbergraph_GCNL_Athena_BadgerBangs_ChargeUpLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

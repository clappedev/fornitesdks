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

// Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ZapFX
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ZapCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerPawn_Athena_C*    PlayerPawnAthena               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGCN_Athena_OutsideSafeZoneDamage_C::ZapFX(int ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ZapFX");

	UGCN_Athena_OutsideSafeZoneDamage_C_ZapFX_Params params;
	params.ZapCount = ZapCount;
	params.PlayerPawnAthena = PlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.OnBurst
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGCN_Athena_OutsideSafeZoneDamage_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.OnBurst");

	UGCN_Athena_OutsideSafeZoneDamage_C_OnBurst_Params params;
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


// Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGCN_Athena_OutsideSafeZoneDamage_C::ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage");

	UGCN_Athena_OutsideSafeZoneDamage_C_ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

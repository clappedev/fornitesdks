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

// Function GCN_Zipline_Smash.GCN_Zipline_Smash_C.OnBurst
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGCN_Zipline_Smash_C::OnBurst(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Zipline_Smash.GCN_Zipline_Smash_C.OnBurst");

	UGCN_Zipline_Smash_C_OnBurst_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

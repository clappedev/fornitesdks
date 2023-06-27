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

// Function GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch.GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C.OnApplication
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch.GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C.OnApplication");

	AGCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C_OnApplication_Params params;
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


// Function GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch.GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C.ExecuteUbergraph_GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C::ExecuteUbergraph_GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch.GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C.ExecuteUbergraph_GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch");

	AGCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_C_ExecuteUbergraph_GCL_Athena_Item_Ashton_Turbo_LeapAttack_Launch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

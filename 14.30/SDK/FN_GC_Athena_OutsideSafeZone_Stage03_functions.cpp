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

// Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Athena_OutsideSafeZone_Stage03_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.OnLoopingStart");

	AGC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.On Distant Lightning Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_Stage03_C::On_Distant_Lightning_Spawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.On Distant Lightning Spawn");

	AGC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_Stage03_C::ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03");

	AGC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Random Lighting Flashes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::Random_Lighting_Flashes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Random Lighting Flashes");

	AGC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Get Location in Circle XY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location_Local_Space           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::Get_Location_in_Circle_XY(struct FVector* Location_Local_Space)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Get Location in Circle XY");

	AGC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location_Local_Space != nullptr)
		*Location_Local_Space = params.Location_Local_Space;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.RemoveStormAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawnAthena               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.RemoveStormAudio");

	AGC_Athena_OutsideSafeZone_C_RemoveStormAudio_Params params;
	params.PlayerPawnAthena = PlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.AddStormAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawnAthena               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.AddStormAudio");

	AGC_Athena_OutsideSafeZone_C_AddStormAudio_Params params;
	params.PlayerPawnAthena = PlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__FinishedFunc
// (BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::LightningFlashTL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__FinishedFunc");

	AGC_Athena_OutsideSafeZone_C_LightningFlashTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__UpdateFunc
// (BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::LightningFlashTL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__UpdateFunc");

	AGC_Athena_OutsideSafeZone_C_LightningFlashTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Athena_OutsideSafeZone_C::OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart");

	AGC_Athena_OutsideSafeZone_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval");

	AGC_Athena_OutsideSafeZone_C_OnRemoval_Params params;
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


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.FlashTimeline
// (BlueprintCallable, BlueprintEvent)

void AGC_Athena_OutsideSafeZone_C::FlashTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.FlashTimeline");

	AGC_Athena_OutsideSafeZone_C_FlashTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Athena_OutsideSafeZone_C::ExecuteUbergraph_GC_Athena_OutsideSafeZone(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone");

	AGC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

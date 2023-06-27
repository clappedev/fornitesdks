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

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::CheckForQuestProgress()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress");

	UGA_Athena_ZipLine_Smash_C_CheckForQuestProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::CheckMotor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor");

	UGA_Athena_ZipLine_Smash_C_CheckMotor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SpawnMotor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::SpawnMotor(class AActor* PlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SpawnMotor");

	UGA_Athena_ZipLine_Smash_C_SpawnMotor_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures");

	UGA_Athena_ZipLine_Smash_C_BreakNearbyStructures_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_98DA090E476D590C00C74EAC10378F60
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::Added_98DA090E476D590C00C74EAC10378F60()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_98DA090E476D590C00C74EAC10378F60");

	UGA_Athena_ZipLine_Smash_C_Added_98DA090E476D590C00C74EAC10378F60_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_57667DA14EF15649A9E09AA4184D83F2
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::Added_57667DA14EF15649A9E09AA4184D83F2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_57667DA14EF15649A9E09AA4184D83F2");

	UGA_Athena_ZipLine_Smash_C_Added_57667DA14EF15649A9E09AA4184D83F2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_Smash_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_ZipLine_Smash_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnLanded_Bind
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::OnPawnLanded_Bind(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnLanded_Bind");

	UGA_Athena_ZipLine_Smash_C_OnPawnLanded_Bind_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsZiplining                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::HandleZiplineStateChanged(bool bIsZiplining)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged");

	UGA_Athena_ZipLine_Smash_C_HandleZiplineStateChanged_Params params;
	params.bIsZiplining = bIsZiplining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::RemoveFallDamageImmunity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity");

	UGA_Athena_ZipLine_Smash_C_RemoveFallDamageImmunity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::SurroundingsCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck");

	UGA_Athena_ZipLine_Smash_C_SurroundingsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnterVehicle_Bind
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::OnEnterVehicle_Bind()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnterVehicle_Bind");

	UGA_Athena_ZipLine_Smash_C_OnEnterVehicle_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ZipliningComplete
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::ZipliningComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ZipliningComplete");

	UGA_Athena_ZipLine_Smash_C_ZipliningComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnDied_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam2                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             NewParam3                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewParam4                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam5                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewParam6                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewParam7                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam8                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::OnPawnDied_Bind(class AActor* NewParam, float NewParam2, class AController* NewParam3, class AActor* NewParam4, const struct FVector& NewParam5, class UPrimitiveComponent* NewParam6, const struct FName& NewParam7, const struct FVector& NewParam8)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnDied_Bind");

	UGA_Athena_ZipLine_Smash_C_OnPawnDied_Bind_Params params;
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;
	params.NewParam4 = NewParam4;
	params.NewParam5 = NewParam5;
	params.NewParam6 = NewParam6;
	params.NewParam7 = NewParam7;
	params.NewParam8 = NewParam8;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnteredAircraft_Bind
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::OnEnteredAircraft_Bind()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnteredAircraft_Bind");

	UGA_Athena_ZipLine_Smash_C_OnEnteredAircraft_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnBeginSkydiving_Bind
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::OnBeginSkydiving_Bind()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnBeginSkydiving_Bind");

	UGA_Athena_ZipLine_Smash_C_OnBeginSkydiving_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.DelaySpawnMotor
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::DelaySpawnMotor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.DelaySpawnMotor");

	UGA_Athena_ZipLine_Smash_C_DelaySpawnMotor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BindEvent
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::BindEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BindEvent");

	UGA_Athena_ZipLine_Smash_C_BindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SwimmingStarted
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::SwimmingStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SwimmingStarted");

	UGA_Athena_ZipLine_Smash_C_SwimmingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.EnterWaterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::EnterWaterExit(class AFortPlayerPawn* FortPlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.EnterWaterExit");

	UGA_Athena_ZipLine_Smash_C_EnterWaterExit_Params params;
	params.FortPlayerPawn = FortPlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::ExecuteUbergraph_GA_Athena_ZipLine_Smash(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash");

	UGA_Athena_ZipLine_Smash_C_ExecuteUbergraph_GA_Athena_ZipLine_Smash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

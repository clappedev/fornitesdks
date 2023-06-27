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

// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::ChangeToNormalMaterial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial");

	ATrap_Athena_Spikes_C_ChangeToNormalMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::_ChangeToFriendlyMaterial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial");

	ATrap_Athena_Spikes_C__ChangeToFriendlyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SweepSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SweepColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SweepExponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_Spikes_C::MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes");

	ATrap_Athena_Spikes_C_MaterialSweepOnSpikes_Params params;
	params.SweepSpeed = SweepSpeed;
	params.SweepColor = SweepColor;
	params.SweepExponent = SweepExponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpikePosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_Spikes_C::SetSpikePosition(float NewSpikePosition)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition");

	ATrap_Athena_Spikes_C_SetSpikePosition_Params params;
	params.NewSpikePosition = NewSpikePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Athena_Spikes_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript");

	ATrap_Athena_Spikes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Fire__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc");

	ATrap_Athena_Spikes_C_Fire__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Fire__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc");

	ATrap_Athena_Spikes_C_Fire__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc");

	ATrap_Athena_Spikes_C_Retract__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc");

	ATrap_Athena_Spikes_C_Retract__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::Retract__Sounds__EventFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc");

	ATrap_Athena_Spikes_C_Retract__Sounds__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::ResetSpikes__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc");

	ATrap_Athena_Spikes_C_ResetSpikes__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc
// (BlueprintEvent)

void ATrap_Athena_Spikes_C::ResetSpikes__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc");

	ATrap_Athena_Spikes_C_ResetSpikes__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_Spikes_C::OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1");

	ATrap_Athena_Spikes_C_OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_Spikes_C::OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D");

	ATrap_Athena_Spikes_C_OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnReloadEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd");

	ATrap_Athena_Spikes_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnPlaced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced");

	ATrap_Athena_Spikes_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnFinishedBuilding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding");

	ATrap_Athena_Spikes_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Athena_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Athena_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnOutOfDurability()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability");

	ATrap_Athena_Spikes_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnWorldReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady");

	ATrap_Athena_Spikes_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam
// (Event, Protected, BlueprintEvent)

void ATrap_Athena_Spikes_C::OnInitTeam()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam");

	ATrap_Athena_Spikes_C_OnInitTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_Spikes_C::ExecuteUbergraph_Trap_Athena_Spikes(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes");

	ATrap_Athena_Spikes_C_ExecuteUbergraph_Trap_Athena_Spikes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GetImpulseDirection
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LaunchingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ATrap_Floor_Player_Jump_Pad_C::GetImpulseDirection(class AActor* LaunchingActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GetImpulseDirection");

	ATrap_Floor_Player_Jump_Pad_C_GetImpulseDirection_Params params;
	params.LaunchingActor = LaunchingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnReloadEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd");

	ATrap_Floor_Player_Jump_Pad_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnPlaced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced");

	ATrap_Floor_Player_Jump_Pad_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnFinishedBuilding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding");

	ATrap_Floor_Player_Jump_Pad_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Jump_Pad_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Jump_Pad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Jump_Pad_C::OnOutOfDurability()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability");

	ATrap_Floor_Player_Jump_Pad_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Player_Jump_Pad_C::ExecuteUbergraph_Trap_Floor_Player_Jump_Pad(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad");

	ATrap_Floor_Player_Jump_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Jump_Pad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

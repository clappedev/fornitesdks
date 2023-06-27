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

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OffsetForward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Tethered_C::BreakNearbyStructures(const struct FVector& ForwardVector, float OffsetForward)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures");

	UGA_Athena_Tethered_C_BreakNearbyStructures_Params params;
	params.ForwardVector = ForwardVector;
	params.OffsetForward = OffsetForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Tethered_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility");

	UGA_Athena_Tethered_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Tethered_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility");

	UGA_Athena_Tethered_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Tethered_C::MovementModeChangedDelegate_Event_1(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_1");

	UGA_Athena_Tethered_C_MovementModeChangedDelegate_Event_1_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Tethered_C::BreakBuildingsAtPlayerInDirectionOfTether()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether");

	UGA_Athena_Tethered_C_BreakBuildingsAtPlayerInDirectionOfTether_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Tethered_C::ExecuteUbergraph_GA_Athena_Tethered(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered");

	UGA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

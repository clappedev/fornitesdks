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

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurfaceChange_C::OnRep_ReplicatedRandomAngle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle");

	UGAB_SurfaceChange_C_OnRep_ReplicatedRandomAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AddLingeringEffects            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::SurfaceCleanup(bool AddLingeringEffects, TEnumAsByte<EPhysicalSurface> SurfaceType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup");

	UGAB_SurfaceChange_C_SurfaceCleanup_Params params;
	params.AddLingeringEffects = AddLingeringEffects;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAB_SurfaceChange_C::LavaBounce()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce");

	UGAB_SurfaceChange_C_LavaBounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGameplayEffect*         GameplayEffectAppliedOnTrue    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayEffect*         GameplayEffectAppliedOnFalse   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::HotfixableGEApplication(const struct FScalableFloat& Input, class UGameplayEffect* GameplayEffectAppliedOnTrue, class UGameplayEffect* GameplayEffectAppliedOnFalse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication");

	UGAB_SurfaceChange_C_HotfixableGEApplication_Params params;
	params.Input = Input;
	params.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	params.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_SurfaceChange_C::SurfaceCleanupSpecial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial");

	UGAB_SurfaceChange_C_SurfaceCleanupSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurfaceChange_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent");

	UGAB_SurfaceChange_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::MovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged");

	UGAB_SurfaceChange_C_MovementModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::ExecuteUbergraph_GAB_SurfaceChange(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange");

	UGAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

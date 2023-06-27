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

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   PropertyName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_Creative_TriggeredAbility_C::IsPropertyOverridden(const struct FName& PropertyName, bool* bResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden");

	UGAT_Creative_TriggeredAbility_C_IsPropertyOverridden_Params params;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Creative_TriggeredAbility_C::SetupAbilityFailsafeTimer(float Duration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer");

	UGAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout
// (BlueprintCallable, BlueprintEvent)

void UGAT_Creative_TriggeredAbility_C::AbilityTimeout()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout");

	UGAT_Creative_TriggeredAbility_C_AbilityTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Creative_TriggeredAbility_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility");

	UGAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

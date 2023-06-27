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

// Function GAB_DropPlayer.GAB_DropPlayer_C.Completed_89F288114D44792D5568298354B7216C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_DropPlayer_C::Completed_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.Completed_89F288114D44792D5568298354B7216C");

	UGAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DropPlayer.GAB_DropPlayer_C.Cancelled_89F288114D44792D5568298354B7216C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_DropPlayer_C::Cancelled_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.Cancelled_89F288114D44792D5568298354B7216C");

	UGAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DropPlayer.GAB_DropPlayer_C.Triggered_89F288114D44792D5568298354B7216C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_DropPlayer_C::Triggered_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.Triggered_89F288114D44792D5568298354B7216C");

	UGAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DropPlayer.GAB_DropPlayer_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_DropPlayer_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.K2_ActivateAbility");

	UGAB_DropPlayer_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DropPlayer.GAB_DropPlayer_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DropPlayer_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.K2_OnEndAbility");

	UGAB_DropPlayer_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_DropPlayer.GAB_DropPlayer_C.ExecuteUbergraph_GAB_DropPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_DropPlayer_C::ExecuteUbergraph_GAB_DropPlayer(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_DropPlayer.GAB_DropPlayer_C.ExecuteUbergraph_GAB_DropPlayer");

	UGAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

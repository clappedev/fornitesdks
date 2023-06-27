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

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Completed_45B7744E4902B26207BAA1954E6BCDEE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ThrowPlayer_C::Completed_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Completed_45B7744E4902B26207BAA1954E6BCDEE");

	UGAB_ThrowPlayer_C_Completed_45B7744E4902B26207BAA1954E6BCDEE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Cancelled_45B7744E4902B26207BAA1954E6BCDEE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ThrowPlayer_C::Cancelled_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Cancelled_45B7744E4902B26207BAA1954E6BCDEE");

	UGAB_ThrowPlayer_C_Cancelled_45B7744E4902B26207BAA1954E6BCDEE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Triggered_45B7744E4902B26207BAA1954E6BCDEE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ThrowPlayer_C::Triggered_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Triggered_45B7744E4902B26207BAA1954E6BCDEE");

	UGAB_ThrowPlayer_C_Triggered_45B7744E4902B26207BAA1954E6BCDEE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_ThrowPlayer_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_ActivateAbility");

	UGAB_ThrowPlayer_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ThrowPlayer_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_OnEndAbility");

	UGAB_ThrowPlayer_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.ExecuteUbergraph_GAB_ThrowPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ThrowPlayer_C::ExecuteUbergraph_GAB_ThrowPlayer(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.ExecuteUbergraph_GAB_ThrowPlayer");

	UGAB_ThrowPlayer_C_ExecuteUbergraph_GAB_ThrowPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

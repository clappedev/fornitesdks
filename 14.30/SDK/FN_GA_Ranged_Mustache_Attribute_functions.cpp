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

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Ranged_Mustache_Attribute_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility");

	UGA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      GameplayEventData              (Parm, OutParm)

void UGA_Ranged_Mustache_Attribute_C::GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData");

	UGA_Ranged_Mustache_Attribute_C_GetEventData_Params params;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayEventData != nullptr)
		*GameplayEventData = params.GameplayEventData;
}


// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Ranged_Mustache_Attribute_C::K2_CommitExecute()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute");

	UGA_Ranged_Mustache_Attribute_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

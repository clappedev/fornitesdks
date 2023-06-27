// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility**       AbilityInstance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            OutTag                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTT_Commando_FragGrenade_C::GetApplicationTag(class UGameplayAbility** AbilityInstance, struct FGameplayTag* OutTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag");

	UTT_Commando_FragGrenade_C_GetApplicationTag_Params params;
	params.AbilityInstance = AbilityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTag != nullptr)
		*OutTag = params.OutTag;

	return params.ReturnValue;
}


// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility**       AbilityInstance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFortTooltipContext**    Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Token                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   OutText                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTT_Commando_FragGrenade_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context, struct FGameplayTag* Tag, struct FGameplayTag* Token, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal");

	UTT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal_Params params;
	params.AbilityInstance = AbilityInstance;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
	if (Token != nullptr)
		*Token = params.Token;
	if (OutText != nullptr)
		*OutText = params.OutText;

	return params.ReturnValue;
}


// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility**       AbilityInstance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortTooltipContext**    Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTT_Commando_FragGrenade_C::InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal");

	UTT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal_Params params;
	params.AbilityInstance = AbilityInstance;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

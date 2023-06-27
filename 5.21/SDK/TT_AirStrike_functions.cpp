#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TT_AirStrike.TT_AirStrike_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGA_AirStrike_C*             Airstrike                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_AirStrike_C*             K2Node_DynamicCast_AsGA_Air_Strike                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

bool UTT_AirStrike_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_AirStrike_C* Airstrike, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_AirStrike_C* K2Node_DynamicCast_AsGA_Air_Strike, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("TT_AirStrike_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_AirStrike_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.Airstrike = Airstrike;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Air_Strike = K2Node_DynamicCast_AsGA_Air_Strike;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}

// Function TT_AirStrike.TT_AirStrike_C.GetApplicationTag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutTag                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTT_AirStrike_C::GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag)
{
	static auto Func = Class->GetFunction("TT_AirStrike_C", "GetApplicationTag");

	Params::UTT_AirStrike_C_GetApplicationTag_Params Parms;
	Parms.AbilityInstance = AbilityInstance;

	UObject::ProcessEvent(Func, &Parms);
	if (OutTag != nullptr)
		*OutTag = Parms.OutTag;

	return Parms.ReturnValue;

}

// Function TT_AirStrike.TT_AirStrike_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_AirStrike_C*             K2Node_DynamicCast_AsGA_Air_Strike                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_AirStrike_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_AirStrike_C* K2Node_DynamicCast_AsGA_Air_Strike, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_AirStrike_C", "InitializeAbilityInstanceInternal");

	Params::UTT_AirStrike_C_InitializeAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Air_Strike = K2Node_DynamicCast_AsGA_Air_Strike;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

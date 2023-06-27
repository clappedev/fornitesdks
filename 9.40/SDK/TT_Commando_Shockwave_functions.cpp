#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TT_Commando_Shockwave.TT_Commando_Shockwave_C.GetApplicationTag
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutTag                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGA_Commando_Shockwave_C*    K2Node_DynamicCast_AsGA_Commando_Shockwave                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTT_Commando_Shockwave_C::GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Commando_Shockwave_C", "GetApplicationTag");

	Params::UTT_Commando_Shockwave_C_GetApplicationTag_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.K2Node_DynamicCast_AsGA_Commando_Shockwave = K2Node_DynamicCast_AsGA_Commando_Shockwave;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (OutTag != nullptr)
		*OutTag = Parms.OutTag;

	return Parms.ReturnValue;

}

// Function TT_Commando_Shockwave.TT_Commando_Shockwave_C.GetTextForTokenFromAbilityInstanceInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Token                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGA_Commando_Shockwave_C*    K2Node_DynamicCast_AsGA_Commando_Shockwave                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTT_Commando_Shockwave_C::GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("TT_Commando_Shockwave_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::UTT_Commando_Shockwave_C_GetTextForTokenFromAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGA_Commando_Shockwave = K2Node_DynamicCast_AsGA_Commando_Shockwave;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (OutText != nullptr)
		*OutText = Parms.OutText;

	return Parms.ReturnValue;

}

// Function TT_Commando_Shockwave.TT_Commando_Shockwave_C.InitializeAbilityInstanceInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayAbility*            AbilityInstance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Commando_Shockwave_C*    K2Node_DynamicCast_AsGA_Commando_Shockwave                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTT_Commando_Shockwave_C::InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("TT_Commando_Shockwave_C", "InitializeAbilityInstanceInternal");

	Params::UTT_Commando_Shockwave_C_InitializeAbilityInstanceInternal_Params Parms;
	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsGA_Commando_Shockwave = K2Node_DynamicCast_AsGA_Commando_Shockwave;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass TT_AirStrike.TT_AirStrike_C
class UTT_AirStrike_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_AirStrike_C");
		return Clss;
	}

	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, class UGA_AirStrike_C* Airstrike, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_AirStrike_C* K2Node_DynamicCast_AsGA_Air_Strike, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	bool GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_AirStrike_C* K2Node_DynamicCast_AsGA_Air_Strike, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass TT_Commando_Shockwave.TT_Commando_Shockwave_C
class UTT_Commando_Shockwave_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Commando_Shockwave_C");
		return Clss;
	}

	bool GetApplicationTag(class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess);
	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Commando_Shockwave_C* K2Node_DynamicCast_AsGA_Commando_Shockwave, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

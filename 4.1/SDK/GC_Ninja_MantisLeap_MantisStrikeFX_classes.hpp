#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass GC_Ninja_MantisLeap_MantisStrikeFX.GC_Ninja_MantisLeap_MantisStrikeFX_C
class UGC_Ninja_MantisLeap_MantisStrikeFX_C : public UFortGameplayCueNotify_Simple
{
public:
	class UParticleSystem*                       P_MantisStrikeImpact;                              // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MantisStrikeImpactCue;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Ninja_MantisLeap_MantisStrikeFX_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

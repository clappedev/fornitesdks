#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE (0xC60 - 0xC52)
// BlueprintGeneratedClass GA_Athena_DogSweater_WithTrajectory.GA_Athena_DogSweater_WithTrajectory_C
class UGA_Athena_DogSweater_WithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	uint8                                        Pad_5317[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_DogSweater_WithTrajectory_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_DogSweater_WithTrajectory(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

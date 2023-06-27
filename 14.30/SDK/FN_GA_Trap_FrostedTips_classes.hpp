#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Trap_FrostedTips.GA_Trap_FrostedTips_C
// 0x0180 (0x0C58 - 0x0AD8)
class UGA_Trap_FrostedTips_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFortGameplayEffectContainerSpec            GameplayEffectSpec;                                       // 0x0AE0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ATrap_Floor_FrostedTips_C*                   FrostedTipsTrap;                                          // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              FireBallsToSPawn;                                         // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMaxSpeed;                                // 0x0BC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMinSpeed;                                // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ConeHalfAngleInDegrees;                                   // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ProjectileSpawnVectors;                                   // 0x0C20(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0C30(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FrostedTips.GA_Trap_FrostedTips_C");
		
		return ptr;
	}


	void Cancelled_07C1C34E45CD85906A2BE8AC828863B9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_07C1C34E45CD85906A2BE8AC828863B9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void TriggerTrapGameplay();
	void ExecuteUbergraph_GA_Trap_FrostedTips(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

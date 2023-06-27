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

// BlueprintGeneratedClass GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C
// 0x0078 (0x0B20 - 0x0AA8)
class UGA_Athena_Enemy_Apply_SneakySnowman_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterSnowman;                                           // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAthena_Enemy_Player_SneakySnowman_C*        EnemySnowman;                                             // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SnowmanDuration;                                          // 0x0AC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                ExitAnimation;                                            // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EndAbilityTimer;                                          // 0x0AF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                EndAbilitySequenceTimer;                                  // 0x0AF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                WeaponCheckTimer;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EquippingCue;                                             // 0x0B08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_TraitVehicle;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_MountedTurret;                                          // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C");
		
		return ptr;
	}


	bool HasVehicleWeapon_();
	void Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void EndAbility();
	void RestartAbility();
	void EndAbilitySequence();
	void K2_OnEndAbility(bool bWasCancelled);
	void VehicleWeaponCheck();
	void ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

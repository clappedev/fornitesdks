#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Athena_Grenade.GA_Athena_Grenade_C
// 0x0208 (0x0CB8 - 0x0AB0)
class UGA_Athena_Grenade_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Prj_Athena_Grenade;                                       // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TransformOffsetA1;                                        // 0x0AC8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TransformOffsetB1;                                        // 0x0AD4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NegHorizontalSpread1;                                     // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PosHorizontalSpread1;                                     // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0AE8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Athena_Grenade_Gravity;                                   // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // 0x0AFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventComplete;                                            // 0x0B08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortAbilityTargetSelection                 T_Explosion;                                              // 0x0B18(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  ActivationSound;                                          // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEventData                          EventData;                                                // 0x0B80(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Vertical_Throw;                                           // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Anm_PlayRate;                                             // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            EC_Explode_Return;                                        // 0x0C30(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_Explode;                                               // 0x0CB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade.GA_Athena_Grenade_C");
		return ptr;
	}


	void ThrowAthenaGrenade(struct FVector* NewParam, struct FRotator* Rotation);
	void Completed_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Destroyed_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Exploded_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Stopped_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Bounced_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Touched_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void Created_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Grenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

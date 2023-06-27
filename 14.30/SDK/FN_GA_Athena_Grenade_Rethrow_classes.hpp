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

// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// 0x0020 (0x0E84 - 0x0E64)
class UGA_Athena_Grenade_Rethrow_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortProjectileBase*                         Projectile;                                               // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TossDelay;                                                // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterId;                                                // 0x0E7C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C");
		
		return ptr;
	}


	void DetachProjectile();
	void AttachProjectile();
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void K2_ActivateAbility();
	void TossGrenade();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

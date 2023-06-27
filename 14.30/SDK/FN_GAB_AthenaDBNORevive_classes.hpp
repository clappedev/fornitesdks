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

// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
// 0x0060 (0x0B08 - 0x0AA8)
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EC_AppliedEffect;                                         // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackMagnitude;                                       // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UGameplayEffect*                             KnockbackStunGE;                                          // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BP_VictoryDrone;                                          // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ResurrectCue;                                             // 0x0AE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ResurrectAthenaCue;                                       // 0x0AF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                DBNOMontageOutro;                                         // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DBNOMontageOutroSwimming;                                 // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C");
		
		return ptr;
	}


	void Get_DBNO_Outro_Montage(class UAnimMontage** DBNOMontageOutro);
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

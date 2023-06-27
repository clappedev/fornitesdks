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

// BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
// 0x0130 (0x0BD8 - 0x0AA8)
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RefillGasTankTag;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             RefillGasTankMontage;                                     // 0x0AC0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                CatchFireflyTag;                                          // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             FireflyCatchMontage;                                      // 0x0B20(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             RefillVehicleFuelMontage;                                 // 0x0B78(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GasCanRefillVehicleTag;                                   // 0x0BD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
		
		return ptr;
	}


	void EndInteractSearch();
	void StartInteractSearch();
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_72217B3542CE776DEDDBB3A7B5D6D343(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6A38D93A428260E68695388965BFA176(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_5EB1B64344DD00ABFE41E2857DC3FB38(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

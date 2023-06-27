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

// BlueprintGeneratedClass GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C
// 0x0050 (0x0AF8 - 0x0AA8)
class UGA_Coconut_ShieldHealth_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              TimeInterval;                                             // 0x0AB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Timer_Interval;                                           // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_Heals;                                                 // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_Shields;                                               // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Activate;                                              // 0x0AF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyEffect();
	void ExecuteUbergraph_GA_Coconut_ShieldHealth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

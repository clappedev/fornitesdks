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

// BlueprintGeneratedClass GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
// 0x0030 (0x0AD8 - 0x0AA8)
class UGA_Athena_Slurp_OLD_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                IncreCheck;                                               // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTicks;                                                 // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TickRate;                                                 // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ShieldPotionGameplayCue;                                  // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHealthOrShield();
	void ExecuteUbergraph_GA_Athena_Slurp_OLD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

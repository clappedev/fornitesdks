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

// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// 0x0020 (0x0AC8 - 0x0AA8)
class UGA_Athena_Tethered_PassiveTriggered_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                GCN_BoostTag;                                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GCN_JumpTag;                                              // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ZiplineExit;                                              // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C");
		
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

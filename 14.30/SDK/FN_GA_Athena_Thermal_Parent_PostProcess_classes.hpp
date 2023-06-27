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

// BlueprintGeneratedClass GA_Athena_Thermal_Parent_PostProcess.GA_Athena_Thermal_Parent_PostProcess_C
// 0x0058 (0x0B00 - 0x0AA8)
class UGA_Athena_Thermal_Parent_PostProcess_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                PP_Cue;                                                   // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerControllerAthena*                 PlayerController;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_QuestTargetTags;                                       // 0x0AC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       NullTagContainer;                                         // 0x0AE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Thermal_Parent_PostProcess.GA_Athena_Thermal_Parent_PostProcess_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_Thermal_Parent_PostProcess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

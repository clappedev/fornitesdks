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

// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C
// 0x0088 (0x0B30 - 0x0AA8)
class UGA_Athena_FloppingRabbit_Pull_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             Target;                                                   // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             Launcher;                                                 // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_InVehicle;                                              // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LaunchArc;                                                // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchGrav;                                               // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_PullAmount;                                           // 0x0AD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_PullEnabled;                                          // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_CanPullFriends;                                       // 0x0B10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

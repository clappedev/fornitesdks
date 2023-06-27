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

// BlueprintGeneratedClass GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C
// 0x0070 (0x0B18 - 0x0AA8)
class UGA_WilliePete_PlayerLaunch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                       OwningPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ExitMontage;                                              // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              LaunchHeightValue;                                        // 0x0AC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_HidingProp_WilliePete_C*                  WilliePeteLauncher;                                       // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       PlayerLaunchTag;                                          // 0x0AE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_WilliePete_PlayerLaunch_ApplyGC;                       // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       TeleportExitPlayer;                                       // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C");
		
		return ptr;
	}


	void StructureTraceLoop();
	void BreakBlockingStructure(class AActor* HitActor);
	void OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnCancelled_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void OnCompleted_A0F03A1445141EA659E282AFE77CEA62(const struct FGameplayTag& NotifyTag);
	void Redeploy_Glider();
	void End_Skydive(const struct FHitResult& Hit);
	void K2_ActivateAbility();
	void ActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

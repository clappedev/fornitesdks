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

// BlueprintGeneratedClass GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C
// 0x0048 (0x0AF0 - 0x0AA8)
class UGA_Athena_Track_PurpleMouse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TrackGroupTag;                                            // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              ProxMineActors;                                           // 0x0AC0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                              MaxPropsInWorld;                                          // 0x0AD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C");
		
		return ptr;
	}


	void EventReceived_739900834D974D726220CC9B70F2219C(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPlayerDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnMinigameChanged();
	void ExecuteUbergraph_GA_Athena_Track_PurpleMouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

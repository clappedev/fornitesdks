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

// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// 0x00B4 (0x0B5C - 0x0AA8)
class UGA_Rift_Athena_Skydive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                FallingAnimation;                                         // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Hangtimee;                                                // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      VehicleSkelMesh;                                          // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              HangTime;                                                 // 0x0AC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventTag;                                                 // 0x0AE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              KickFromVehicle_;                                         // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  LocalPlayerSound;                                         // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GameplayCueGE;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolstered;                                               // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	struct FName                                       RiftSkydiveHolster;                                       // 0x0B2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpulseStrength;                                          // 0x0B34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeedsInputEnable;                                        // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0B41(0x0007) MISSED OFFSET
	struct FTimerHandle                                SafetyTimer;                                              // 0x0B48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     NewVar_1;                                                 // 0x0B50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C");
		
		return ptr;
	}


	void RemoveSkydivingGameplayEffect();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A();
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A();
	void K2_ActivateAbility();
	void SetPlayerToSkydive();
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void OnPawnEnteredWater(class AFortPlayerPawn* FortPlayerPawn);
	void OnPawnLanded(const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

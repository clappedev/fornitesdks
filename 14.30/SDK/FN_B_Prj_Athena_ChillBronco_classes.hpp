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

// BlueprintGeneratedClass B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C
// 0x014C (0x0A60 - 0x0914)
class AB_Prj_Athena_ChillBronco_C : public AB_Prj_ThrownConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Proj_Trail;                                               // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_ChugBomb;                                              // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_InAirLoop;                                          // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0938(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0940(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x094C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HealthHealAmount;                                         // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShieldHealAmount;                                         // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealAmount;                                            // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	struct FScalableFloat                              MaxHealValue;                                             // 0x0968(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              HealPool_Duration;                                        // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrantHealth;                                              // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrantShield;                                              // 0x09A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x09AA(0x0006) MISSED OFFSET
	class UParticleSystem*                             HealOnlyFX;                                               // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stopped;                                                  // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x09C0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPlayerPawn*                             HitPlayerPawn;                                            // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestManager*                           Owning_Player_Quest_Manager;                              // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Heal_Teammate_TC;                                         // 0x09E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Heal_Squadmate_TC;                                        // 0x0A00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WaterTraceRadius;                                         // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              WaterTraceObjectTypes;                                    // 0x0A28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LandscapeExtinguishRadius;                                // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TraceIgnoreTags;                                          // 0x0A40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C");
		
		return ptr;
	}


	void UpdateHealthShieldHealAmounts();
	void ApplyWaterInRadiusIfCurieEnabled(const struct FHitResult& HitResult);
	void QuestCheckSquadMember(class AFortPawn* PlayerPawnHit);
	void OnRep_PlayerPawn();
	void ResetVariables();
	void GetMissingShield(float* MissingShield);
	void GetMissingHealth(float* MissingHealth);
	void UserConstructionScript();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void HealPlayer();
	void KillDelay();
	void EnableCollision();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void DoHealCheck(TArray<class AActor*> HitActors);
	void ExecuteUbergraph_B_Prj_Athena_ChillBronco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

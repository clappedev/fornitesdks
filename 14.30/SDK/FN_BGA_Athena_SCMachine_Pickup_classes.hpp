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

// BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
// 0x00E9 (0x0961 - 0x0878)
class ABGA_Athena_SCMachine_Pickup_C : public ABuildingGameplayActorSpawnChip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SC_Machine_Memory_Card_Loop_Cue;                          // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnInEffect;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Collision;                                                // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundGlow;                                           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Card;                                                     // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                UnHide;                                                   // 0x08A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeUnhide;                                        // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      OwnerTeam;                                                // 0x08B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              FoundBuildingOnDied;                                      // 0x08B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     Impact_Loc;                                               // 0x08C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x08D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSlope;                                                 // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Timer_DestroyPickup;                                      // 0x08E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_PickupLife;                                           // 0x08F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractText;                                             // 0x0910(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             SpawnOutParticle;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PickupSound;                                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnFX;                                                  // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpawnSoundPlayed;                                         // 0x0940(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class USoundBase*                                  SpawnInSound;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPendingKill;                                            // 0x0950(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	struct FVector                                     StopLocation;                                             // 0x0954(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideAndKill;                                              // 0x0960(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C");
		
		return ptr;
	}


	void OnRep_HideAndKill();
	void ConsiderPositionCorrection();
	void DetermineStopLocation();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void OnRep_UnHide();
	void ReceiveBeginPlay();
	void DestroyPickup();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void CollectPickup();
	void OnDestroyPickup();
	void SpawnSound();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideAndKillPickup();
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

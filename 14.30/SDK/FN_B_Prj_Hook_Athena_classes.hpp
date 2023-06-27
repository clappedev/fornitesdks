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

// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
// 0x02A0 (0x0BD8 - 0x0938)
class AB_Prj_Hook_Athena_C : public AFortAttachableProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh;                                           // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   Target;                                                   // 0x0950(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HookStopped;                                              // 0x0960(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0964(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AirControl;                                               // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_Stick;                                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StuckToPlayer;                                      // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromInstigator;                                   // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Water;                                              // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TravelSound;                                              // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FToyAngleSelectorInfo>               LaunchAngleVariations;                                    // 0x09A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_Hookgun_Athena_C*                         Weapon_Actor;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_HookGunRope_C*                            Rope;                                                     // 0x09B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreLaunchVelocity;                                        // 0x09C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAImPitch;                                             // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownPitchMin;                                             // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownPitchMax;                                             // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalZ;                                              // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_YankBack;                                           // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_RopeDestroy;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BlockIncomingPickups;                                     // 0x09F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpactNormal;                                             // 0x0A00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Stick2D;                                            // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Offset_Distance_from_Physics_Mesh;                        // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetDistanceFromBone;                                   // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      StruckActor;                                              // 0x0A20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // 0x0A28(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Launchpad;                                                // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	struct FVector                                     VehicleVelocity;                                          // 0x0A38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConsumesAmmo;                                             // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInHoverboard;                                            // 0x0A45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0A46(0x0002) MISSED OFFSET
	float                                              Lifespan_on_Hit;                                          // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GliderGrappler;                                           // 0x0A4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A4D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       TC_VehicleIgnorePull;                                     // 0x0A50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_RopeActive;                                            // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_Returned;                                           // 0x0A78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_GrappleHit;                                         // 0x0A80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_QuestTag;                                               // 0x0A88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Anim_GrappleHoverboard;                                   // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Grapple;                                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX_WaterImpact;                                           // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX_Reattach;                                              // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcGravityOverride;                                       // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoesCrouchCheck;                                          // 0x0ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasMinUpwardLaunchVelocity;                               // 0x0ACD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0ACE(0x0002) MISSED OFFSET
	float                                              MinUpwardLaunchVelocity;                                  // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                LenseEffect;                                              // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraShake*                                CamShake_Grapple;                                         // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x0AE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_PlayerArc;                                            // 0x0AF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_VehicleArc;                                           // 0x0B18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_JackleArc;                                            // 0x0B38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_VehicleForceMultiplier;                               // 0x0B58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_JackleForceMultiplier;                                // 0x0B78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Speed;                                                    // 0x0B98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              LifeSpan;                                                 // 0x0BB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C");
		
		return ptr;
	}


	float GetVehicleLaunchMult();
	float GetVehicleArc();
	struct FVector MomentumCheck(const struct FVector& A, const struct FVector& A2);
	void GiveQuestCredit();
	void SpawnRope(class AFortPlayerPawn* PlayerPawn, class AB_HookGunRope_C** RopeSpawned);
	void JackalCheck();
	void HandleLaunch(bool* JumpPadding_);
	void OnRep_Momentum();
	void HandleMomentum();
	void HandleStuckProjectiles(class UObject* Object, class UPrimitiveComponent* Component);
	void OnRep_StruckActor();
	void HandleStuckSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleStuckBuilding(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleStuckVehicle(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleSticks(class UObject* Object, class UPrimitiveComponent* Component);
	void PickGrappleMontage(float PitchAngle, bool InHoverboard, struct FName* SectionName);
	void PickGrappleMontageSection(float PitchAngle, struct FName* SectionName);
	void OnRep_HookStopped();
	void OnRep_Target();
	void CalculateYankForce();
	void IncapacitateTarget();
	void HandleHits(const struct FHitResult& Hit, class AActor** Target);
	void PlayStickSounds(const struct FVector& Location, class AActor* HitActor);
	void UserConstructionScript();
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName);
	void OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName);
	void OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName);
	void OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName);
	void OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Travel(const struct FVector& HitLocation);
	void WeaponCheck();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void GrappleVehicle();
	void LaunchCheck();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void Grapple();
	void ExecuteUbergraph_B_Prj_Hook_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

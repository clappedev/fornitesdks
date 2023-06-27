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

// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// 0x01D2 (0x1072 - 0x0EA0)
class AB_HidingProp_WilliePete_C : public AB_HidingProp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        overlapCylinder;                                          // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WilliePete_Ambient_Loop;                                  // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Geyser;                                                   // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Whirlpool_01;                                           // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WilliePete_SurfaceVerticalSplash;                       // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortProjectileMovementComponent*            OverlappedFortProjectileMovementComponent;                // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                OverlappedStandardProjectileMovementComponent;            // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      TeleportingNonPawn;                                       // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  SphereOverlapResult;                                      // 0x0EE8(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchDelay;                                              // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCurveTableRowHandle                        OverrideExitSpeed;                                        // 0x0F78(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ProjectileSpeedCeiling;                                   // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ProjectileExitFVectorRotation;                            // 0x0F8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TH_SuctionLoop;                                           // 0x0F98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                WaterLevel;                                               // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GC_Exit;                                                  // 0x0FA4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Enter;                                                 // 0x0FAC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FB4(0x0004) MISSED OFFSET
	struct FScalableFloat                              EnabledValue;                                             // 0x0FB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              LaunchHeightValue;                                        // 0x0FD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                       LaunchPawn;                                               // 0x0FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LaunchGrantedEffectHandle;                                // 0x1000(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_Quest;                                                  // 0x1008(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      SpawnedWaterBody;                                         // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_ScreenFX;                                              // 0x1030(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isOnTestMap;                                              // 0x1038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1039(0x0007) MISSED OFFSET
	class USoundBase*                                  Launch_Sound;                                             // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AdjustedLocation;                                         // 0x1048(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               skipAnimForLaunch;                                        // 0x1054(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1055(0x0003) MISSED OFFSET
	class AFortPlayerPawnAthena*                       ExitingPawn;                                              // 0x1058(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMovementComponent*                          OverlappedMovementComponent;                              // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ProjectileSpeedMult;                                      // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupSpeedMult;                                          // 0x106C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetSilentDie;                                            // 0x1070(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetSpawnedWaterBody;                                     // 0x1071(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C");
		
		return ptr;
	}


	void OnRep_bSetSpawnedWaterBody();
	void OnRep_bSetSilentDie();
	void HelperLocationLogger(const struct FString& inString);
	void OnRep_AdjustedLocation();
	void TeleportExitSpeed(const struct FVector& ExitFVector, float EnterSpeed, float OverrideSpeed, float MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity);
	void OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor);
	void Non_Pawn_Teleport(class AActor* TeleportingActor);
	void ReceiveBeginPlay();
	void Remove_GE();
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Complete_Setup();
	void StopHiding(class AFortPawn* Pawn);
	void ResetGravity(const struct FHitResult& Hit);
	void ExecuteUbergraph_B_HidingProp_WilliePete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

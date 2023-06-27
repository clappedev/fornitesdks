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

// BlueprintGeneratedClass Trap_Floor_BouncePad.Trap_Floor_BouncePad_C
// 0x0198 (0x0EE0 - 0x0D48)
class ATrap_Floor_BouncePad_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Trigger;                                                  // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BouncePadFX;                                              // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Destroyed_Sound;                                     // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      OverlappedActor;                                          // 0x0D88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Player_DestructionRange;                                  // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                BouncePadTagMaxCount;                                     // 0x0D94(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             LaunchedPlayer;                                           // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_LowGravity;                                            // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_BounceTracker1;                                        // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_BounceTracker2;                                        // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              PlayerMaxLateralVelocity;                                 // 0x0DC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerZVelocity;                                          // 0x0DE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxVelocity;                                        // 0x0E00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMassVelocityMultiplier;                            // 0x0E20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMinLateralVelocity;                                // 0x0E40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMaxLateralVelocity;                                // 0x0E60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IgnoreFallDamage;                                         // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0E81(0x0007) MISSED OFFSET
	class UGameplayEffect*                             GE_NoFX_LowGravity;                                       // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SetIgnoreFallDamage;                                      // 0x0E90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_LowGravityWithHopRocks;                                // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEnemyPawn_Parent_Deimos_C*                  DeimosPawn;                                               // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                PreventLaunchTag;                                         // 0x0EC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class UFortVehicleInterface>      LaunchedVehicleInterface;                                 // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Tag_CancelAbilityOnImpulse;                               // 0x0ED8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_BouncePad.Trap_Floor_BouncePad_C");
		
		return ptr;
	}


	void PhysicsObjectLaunch(class AFortPhysicsPawnObject* PhysicsObject);
	void BP_OnTrigger(TArray<class AActor*> TouchingActors, bool* bOutConsumeEvent);
	void DeimosApplyGameplayEffects();
	void DeimosLaunch(class AEnemyPawn_Parent_Deimos_C* DeimosPawn);
	void PlayerApplyGameplayEffects();
	void OnRep_Overlappedactor();
	void VehicleLaunch(const TScriptInterface<class UFortVehicleInterface>& VehicleInterface);
	void PlayerLaunch(class AFortPlayerPawn* Player);
	void UserConstructionScript();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Trap_Floor_BouncePad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

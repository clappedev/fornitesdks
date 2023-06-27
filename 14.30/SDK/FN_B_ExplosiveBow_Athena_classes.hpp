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

// BlueprintGeneratedClass B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C
// 0x013F (0x12E8 - 0x11A9)
class AB_ExplosiveBow_Athena_C : public AB_Ranged_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x11A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             FullCharge_AudioComponent;                                // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Ambient_Charge_AudioComponent;                            // 0x11C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Reached_Max_Charge;                                       // 0x11C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reached_Min_Charge;                                       // 0x11C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Charging;                                                 // 0x11CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x11CB(0x0005) MISSED OFFSET
	class UAudioComponent*                             ChargeAudio;                                              // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FullyChargedVFX;                                          // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                UpdateTrajectorySpline;                                   // 0x11E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortProjectileBase*                         Prj_Dummy;                                                // 0x11F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x11F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x1200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x1204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x1208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravity;                                                  // 0x120C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x1210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityTickIncrease;                                      // 0x1214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileVelocity;                                       // 0x1218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxProjectileVelocity;                                    // 0x121C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityTickIncrease;                                     // 0x1220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1224(0x0004) MISSED OFFSET
	class UAnimMontage*                                ChargingAnim;                                             // 0x1228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MaxChargeAnim;                                            // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MinProjectileSpeed;                                       // 0x1238(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MaxProjectileSpeed;                                       // 0x1258(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_ExplosiveBow_C*     BowTrajectory;                                            // 0x1278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x1280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyBouncieness;                                         // 0x1284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DummyCollisionChannel;                                    // 0x1288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1289(0x0007) MISSED OFFSET
	class AActor*                                      TrajectoryClass;                                          // 0x1290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBowEquipped;                                            // 0x1298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReachedHalfCharge;                                        // 0x1299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x129A(0x0002) MISSED OFFSET
	float                                              DummyTimeStep;                                            // 0x129C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LowTensionFire;                                           // 0x12A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NormalTensionFire;                                        // 0x12A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FullTensionFire;                                          // 0x12B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FullTensionFireP1;                                        // 0x12B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LowTensionFireP1;                                         // 0x12C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NormalTensionFireP1;                                      // 0x12C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AdditionalFireFX;                                         // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FullyChargeFX;                                            // 0x12D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnCharge;                                            // 0x12E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C");
		
		return ptr;
	}


	void StopDrawAudio();
	void StartDrawAudio();
	void SetupProjectileVariables(struct FVector* StartLocation, struct FVector* InitialVelocity, float* ProjectileVelocity, struct FRotator* OutRotation);
	void CalculateVelocity(float* Velocity);
	void CalculateTrajectorySpline();
	void SetDummyVariables();
	void SetupTrajectoryProjectile();
	void OnReachedMinCharge();
	void OnStartCharge();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void EndOfCharge();
	void K2_OnUnEquip();
	void OnChargeDown();
	void OnChargeUp();
	void OnEndCharge();
	void ResetCharge();
	void IncreaseDrawStrength();
	void OnWeaponAttached();
	void ReceiveTick(float DeltaSeconds);
	void OnReachedMaxCharge();
	void ExecuteUbergraph_B_ExplosiveBow_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

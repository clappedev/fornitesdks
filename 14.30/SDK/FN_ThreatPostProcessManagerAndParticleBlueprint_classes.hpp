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

// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// 0x01B8 (0x03E8 - 0x0230)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             EnterTheStormSound;                                       // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Sprite1;                                                  // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4;// 0x0248(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4;// 0x024C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Ramp_Up_down_values_on_death;                             // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Min_Cloud_Distance_from_player;                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Localized_Particle_System_MID;                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0268(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher
	unsigned char                                      UnknownData03[0x10];                                      // 0x0278(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0
	TArray<struct FVector>                             Array_of_Cloud_Positions;                                 // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      SkyParticleCloudDistances;                                // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        CloudDistanceToPlayerLookUpArray;                         // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     Target_Cloud_Position;                                    // 0x02B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RecalculateTimer;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Alive;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAliveJustChanged;                                       // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlivePrevious;                                          // 0x02CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x02CB(0x0001) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive;// 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentCloudMesh;                                         // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	int                                                Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead;// 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APostProcessVolume*                          Materialpost;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              post_process_volume_falloff__around_the_threat_volume;    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowRainEffect;                                           // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	TArray<class AActor*>                              FourClosestClouds;                                        // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                Number_Of_Volumes_to_check;                               // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessTargetWeight;                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Post_Process_Weight;                              // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Post_Process_Fade_in_speed;                               // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SoundIsActive;                                            // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoundWasPreviouslyActive;                                 // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x030E(0x0002) MISSED OFFSET
	struct FTransform                                  PlayerTransform;                                          // 0x0310(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_On;                                                    // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class APostProcessVolume*                          MaterialEffectsPostProcess;                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Morning;                        // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Day;                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Evening;                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ThreatFogPostProcessColor_Night;                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBox>                                Array_of_Cloud_Volumes;                                   // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ClosestCloudIndex;                                        // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClosestCloudDistance;                                     // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessWeightModulation;                              // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ramp_Up_And_Down_Anim_Values;                             // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowRainOnCameraLens;                                     // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                Rain_Camera_Lens_Effect;                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LocalizedParticleSystem;                                  // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsWorldReady;                                             // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              Rain_Trace_Timer;                                         // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainTraceOffset;                                          // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RainMultiplierCurrent;                                    // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rain_Spawn_Rate_Exponent;                                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TracePrevious;                                            // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAthenaWorld;                                            // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThreatOverride;                                          // 0x03E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceOff;                                                // 0x03E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C");
		
		return ptr;
	}


	void SetForceOff(bool bForceOff);
	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage);
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo> ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void OnThreatOverrideChanged(bool bForceThreatOn);
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int EntryPoint);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

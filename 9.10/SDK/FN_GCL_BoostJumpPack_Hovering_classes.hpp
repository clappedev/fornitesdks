#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
// 0x011C (0x0454 - 0x0338)
class AGCL_BoostJumpPack_Hovering_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Jetpack_Audio_Modulation_Fuel;                            // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Jetpack_Audio_Modulation__Direction;                      // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Jetpack_Audio_Modulation;                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedParticleEmitter;                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bJetpackAudioEnabled;                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOnStart;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnStop;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnIdle;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnAccel;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OnIdleAudio_Comp;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             OnAccelAudio_Comp;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentUpwardVelocity;                                    // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundLoopOnOutOfFuel;                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OnOutOfFuelAudio_Comp;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetFuelVolumeMultiplier;                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelVolumeMultiplier;                              // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelWarning;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnOutOfFuel;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnThrust;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedFuelWarning;                                       // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFirstJump;                                             // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	float                                              JetpackActivatedTime;                                     // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GroundInteract;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CachedFuelPercent;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CachedRenderingDetailMode;                                // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_1;                                                 // 0x03E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x03F4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Milo Check
	unsigned char                                      UnknownData06[0x28];                                      // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Milo Backpack
	struct FVector                                     Milo_LightScale;                                          // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C");
		return ptr;
	}


	void CacheRenderingDetailMode();
	void CalculateFuelPercentage();
	void CalculateUpwardVelocity();
	float GetLateralThrust();
	float GetUpwardThrust();
	float GetMaxFuel();
	float GetFuel();
	void GetFuelPercent(float* FuelPercent);
	void CacheAttributes();
	void SetJetpackAudioEnabled(bool Enabled);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void Jetpack_Audio_Modulation__FinishedFunc();
	void Jetpack_Audio_Modulation__UpdateFunc();
	void Jetpack_Audio_Modulation__FuelWarning__EventFunc();
	void ReceiveTick(float DeltaSeconds);
	void Audio_Tick();
	void On_Pawn_Landed(struct FHitResult Hit);
	void ResetFX();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveDestroyed();
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

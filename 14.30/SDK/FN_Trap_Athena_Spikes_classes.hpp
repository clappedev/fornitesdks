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

// BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C
// 0x0124 (0x0E6C - 0x0D48)
class ATrap_Athena_Spikes_C : public ABuildingTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Spike_Mesh;                                               // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1;        // 0x0D68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1;  // 0x0D6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ResetSpikes;                                              // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Retract_LERP_714CAEE5449A32850D6231AEDA918B58;            // 0x0D78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Retract__Direction_714CAEE5449A32850D6231AEDA918B58;      // 0x0D7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Retract;                                                  // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fire_LERP_630B749B437E5CB83CB49287CC92E385;               // 0x0D88(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fire__Direction_630B749B437E5CB83CB49287CC92E385;         // 0x0D8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fire;                                                     // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Reload_Sound;                                             // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeRestingScale;                                        // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeActiveScale;                                         // 0x0DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeHoldOnFireLength;                                    // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0DCC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SpikesMID;                                                // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepExponent;                                            // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SweepColor;                                               // 0x0DDC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepSpeed;                                               // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          FriendlyTrapMaterial;                                     // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NormalSpikeMaterial;                                      // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayFewerSounds;                                         // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0E01(0x0007) MISSED OFFSET
	struct FFortPortableSoftParticles                  DeathParticle_Marshalled;                                 // 0x0E08(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    Trap_Particle_Placement_Rotation;                         // 0x0E60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C");
		
		return ptr;
	}


	void ChangeToNormalMaterial();
	void _ChangeToFriendlyMaterial();
	void MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent);
	void SetSpikePosition(float NewSpikePosition);
	void UserConstructionScript();
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(class UObject* Loaded);
	void OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(class UObject* Loaded);
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void OnInitTeam();
	void ExecuteUbergraph_Trap_Athena_Spikes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

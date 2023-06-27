#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C
// 0x00B0 (0x0F30 - 0x0E80)
class ATrap_Wall_Spikes_Metal_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Spike_Mesh;                                               // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TraceLocation;                                            // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fire_LERP_CFD6D2C040DF90D91F040D9A924D36CF;               // 0x0EA8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fire__Direction_CFD6D2C040DF90D91F040D9A924D36CF;         // 0x0EAC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EAD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fire;                                                     // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Retract_LERP_AC88BE164FBDF2A4A64C6A9354AC1707;            // 0x0EB8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Retract__Direction_AC88BE164FBDF2A4A64C6A9354AC1707;      // 0x0EBC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EBD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Retract;                                                  // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetSpikes_LERP_01EE177443B1DE06DCD587B8987EE659;        // 0x0EC8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ResetSpikes__Direction_01EE177443B1DE06DCD587B8987EE659;  // 0x0ECC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0ECD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ResetSpikes;                                              // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepExponent;                                            // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SweepColor;                                               // 0x0EDC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepSpeed;                                               // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeRestingScale;                                        // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpikesMID;                                                // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeActiveScale;                                         // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeHoldOnFireLength;                                    // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Reload_Sound;                                             // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C");
		return ptr;
	}


	void MaterialSweepOnSpikes(float SweepSpeed_, const struct FLinearColor& SweepColor_, float SweepExponent_);
	void SetSpikePosition(float SpikePosition);
	struct FTransform GetFireLocationAndRotation();
	void UserConstructionScript();
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void ExecuteUbergraph_Trap_Wall_Spikes_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

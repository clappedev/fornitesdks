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

// BlueprintGeneratedClass Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C
// 0x0088 (0x0F08 - 0x0E80)
class ATrap_Wall_Electric_Athena_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SoundTriggerComponent;                                    // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TraceLocation;                                            // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerComponent;                                         // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX_Coil_R;                                            // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX_Coil_L;                                            // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Light_onFire;                                             // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX_Arcs_R;                                            // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX_Arcs_L;                                            // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeLight_Brightness_C184AADC4D731F4EF02D419DFF483ED3;    // 0x0ED0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeLight__Direction_C184AADC4D731F4EF02D419DFF483ED3;    // 0x0ED4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0ED5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeLight;                                                // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Activate_Sound_Cue;                                       // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Placed_Sound_Cue;                                         // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Explode_Sound_Cue;                                        // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound_Cue;                                      // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ChargeSoundInst;                                          // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C");
		return ptr;
	}


	void PlayActivationSoundAndFX();
	struct FTransform GetFireLocationAndRotation();
	void UserConstructionScript();
	void FadeLight__FinishedFunc();
	void FadeLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Trap_Wall_Electric_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

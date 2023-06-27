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

// BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C
// 0x0068 (0x0EE8 - 0x0E80)
class ATrap_Ceiling_ElectricWeak_Athena_C : public ABuildingTrapCeiling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SoundTriggerComponent;                                    // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TraceLocation;                                            // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleElectricFX;                                           // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Light;                                                    // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TriggerComponent;                                         // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5;// 0x0EB8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5;// 0x0EBC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EBD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleOutLight;                                            // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Explosion_Sound;                                          // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ChargeSoundInst;                                          // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C");
		return ptr;
	}


	struct FTransform GetFireLocationAndRotation();
	void UserConstructionScript();
	void ScaleOutLight__FinishedFunc();
	void ScaleOutLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

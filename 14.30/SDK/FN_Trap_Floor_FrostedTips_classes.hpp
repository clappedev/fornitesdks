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

// BlueprintGeneratedClass Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C
// 0x0170 (0x0EB8 - 0x0D48)
class ATrap_Floor_FrostedTips_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Flames_Pilot_Light_Group_01;                           // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FireMuzzle4;                                              // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FireMuzzle3;                                              // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FireMuzzle2;                                              // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FireMuzzle1;                                              // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FireMuzzle;                                               // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX_4;                                               // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX_3;                                               // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX_2;                                               // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FlameGrill_Trap_Start;                                  // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX;                                                 // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TriggerVolume;                                            // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Timeline_2_ColorTrack_FB29236049D838A8883CF29FA551B640;   // 0x0DC8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_Opacity_FB29236049D838A8883CF29FA551B640;      // 0x0DD8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_GrowRadial_FB29236049D838A8883CF29FA551B640;   // 0x0DDC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_Grow_FB29236049D838A8883CF29FA551B640;         // 0x0DE0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_Reveal_FB29236049D838A8883CF29FA551B640;       // 0x0DE4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_FB29236049D838A8883CF29FA551B640;   // 0x0DE8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0DE9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Timeline_1_EmissiveTrack_8EDB1E9A48DF965D59BD819AA551F7EE;// 0x0DF8(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_8EDB1E9A48DF965D59BD819AA551F7EE;   // 0x0E08(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0E09(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Timeline_0_ColorTrack_DBC90D1D4BC7A7BF1068C6AAF192FE64;   // 0x0E18(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Opacity_DBC90D1D4BC7A7BF1068C6AAF192FE64;      // 0x0E28(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_GrowRadial_DBC90D1D4BC7A7BF1068C6AAF192FE64;   // 0x0E2C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Grow_DBC90D1D4BC7A7BF1068C6AAF192FE64;         // 0x0E30(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Reveal_DBC90D1D4BC7A7BF1068C6AAF192FE64;       // 0x0E34(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_DBC90D1D4BC7A7BF1068C6AAF192FE64;   // 0x0E38(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0E39(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TrapMID;                                                  // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ActiveEmissiveColor;                                      // 0x0E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ActiveFXEmitters;                                         // 0x0E88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USceneComponent*>                     FlameSpawnersSpots;                                       // 0x0E98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundCue*                                   Trap_GasIgnite_Sound;                                     // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_PreFire_Sound;                                       // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C");
		
		return ptr;
	}


	void SetActiveFireFX(bool _Active);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Abilities_Activation_Traps_DelayBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void PlacedByPlayer(class AFortPlayerStateZone* PlayerState);
	void ExecuteUbergraph_Trap_Floor_FrostedTips(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

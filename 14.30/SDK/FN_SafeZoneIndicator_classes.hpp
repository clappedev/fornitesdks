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

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x0140 (0x05B8 - 0x0478)
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_StormMeshRotator;                                      // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VolumetricStormFadeTimeline_StormFadeIn_5D8CED344AED096A33ABDAA94E2E18CD;// 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VolumetricStormFadeTimeline__Direction_5D8CED344AED096A33ABDAA94E2E18CD;// 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VolumetricStormFadeTimeline;                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C;// 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C;// 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormFadeTimeline;                                        // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C;// 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C;// 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pre_Damage_Audio_Ramp;                                    // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShieldBoundaryLoopSound;                                  // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoldingLoopSound;                                         // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldingStartTime_1;                                       // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopTickSound;                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SafeZoneMID;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                MegaStormDamageTimer;                                     // 0x04E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MegastormAudioDuration;                                   // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x04EC(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher
	EFortSafeZoneState                                 SafeZoneState;                                            // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TMap<EFortSafeZoneState, struct FVector2D>         SafeZoneStateThunderFreqs;                                // 0x0508(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EFortSafeZoneState, float>                    SafeZoneStateThunderDuration;                             // 0x0558(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               OceanEnabled;                                             // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	int                                                NumberofImpactEffects;                                    // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImapctFX_MaxHeight;                                       // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImapctFX_MinHeight;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C");
		
		return ptr;
	}


	void GetRandomPointInPlayerDir(struct FVector* position);
	void GetRandomPointOnBoundary(struct FVector* position);
	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS);
	void HandleInsideOutsideMix();
	void InitClosestPointAudio();
	void UserConstructionScript();
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void VolumetricStormFadeTimeline__FinishedFunc();
	void VolumetricStormFadeTimeline__UpdateFunc();
	void ResetSafeZoneScale();
	void stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void Megastorm_Pre_Damage_Tell();
	void Start_Megastorm_Audio();
	void Play_Storm_Grow_Audio();
	void Trigger_Distant_Storm_Oneshot();
	void Stop_Distant_Storm_Oneshots();
	void OnSafeZoneStateChange(EFortSafeZoneState NewState, bool bInitial);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SafeZoneIndicator(int EntryPoint);
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(EFortSafeZoneState SafeZoneState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

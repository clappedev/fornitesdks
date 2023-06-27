#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x90 (0x570 - 0x4E0)
// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(Transient, DuplicateTransient)
	float                                        StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x4EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    StormFadeTimeline;                                 // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeSafeZoneVisuals_LERP_E671C79642CD40ABC82D55BF6EBA9626; // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeSafeZoneVisuals__Direction_E671C79642CD40ABC82D55BF6EBA9626; // 0x4FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeSafeZoneVisuals;                               // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ShieldBoundaryAudio;                               // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ShieldBoundaryLoopSound;                           // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalPlayerOutside;                               // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioCrossfade;                                    // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioPitchMod;                                     // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopSound;                                  // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingAudio;                                      // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_GameState_C*                   GameState;                                         // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldingStartTime;                                  // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            HoldingLoopTickSound;                              // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HoldingTickAudio;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SafeZoneMID;                                       // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioLowPassValue;                                 // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioStormFade;                                    // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HugeMovementFade;                                  // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextSafeZoneSweepSpeed;                            // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZoneIndicator_C");
		return Clss;
	}

	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess);
	void UpdateAudioComponentLocations(bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void HandleInsideOutsideMix();
	void InitClosestPointAudio(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue12);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FadeSafeZoneVisuals__FinishedFunc();
	void FadeSafeZoneVisuals__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial);
	void Apply_Lowpass_to_Audio();
	void ReceiveTick(float DeltaSeconds);
	void ResetSafeZoneScale();
	void ReceiveBeginPlay();
	void Stormy(float NewParam);
	void ReceiveDestroyed();
	void ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsPlaying_ReturnValue1, enum class EFortSafeZoneState K2Node_Event_NewState, bool K2Node_Event_bInitial, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Lerp_ReturnValue, bool CallFunc_AreAnyListenersWithinRange_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float K2Node_CustomEvent_NewParam, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS1, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetClockTickingAudioCurveValues_VolumeModValue, float CallFunc_GetClockTickingAudioCurveValues_PitchModValue, class AAthena_GameState_C* CallFunc_GetAthenaGameState_AthenaGS12, float CallFunc_GetServerWorldTimeSeconds_ReturnValue12, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_GetMovementAudioCurveValues_CrossfadeValue, float CallFunc_GetMovementAudioCurveValues_PitchModValue, float CallFunc_GetTimeSinceSafeZonesStart_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

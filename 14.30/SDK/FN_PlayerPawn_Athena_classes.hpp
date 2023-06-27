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

// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
// 0x0690 (0x4110 - 0x3A80)
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortContrailsComponent*                     FortContrails;                                            // 0x3A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortUnderwaterDamageComponent*              FortUnderwaterDamage;                                     // 0x3A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_BlendWeight_A4943458400C3662DB243099F9EAC7E8;  // 0x3A98(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A4943458400C3662DB243099F9EAC7E8;   // 0x3A9C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3A9D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x3AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetHead;                                               // 0x3AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetBody;                                               // 0x3AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PawnHeadMaterials_1;                                      // 0x3AB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnBodyMaterials_1;                                      // 0x3AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FlakVest;                                              // 0x3AD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          Event_Data;                                               // 0x3AF8(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpawnEffect;                                         // 0x3BA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsMale;                                                   // 0x3BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x3BB1(0x0007) MISSED OFFSET
	class AFortWeapon*                                 MenuGoingCommandowWeapon;                                 // 0x3BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SafeZonePassThroughSound;                                 // 0x3BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasBeenOutsideSafeZone;                                  // 0x3BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x3BC9(0x0003) MISSED OFFSET
	struct FLinearColor                                ThreatColor;                                              // 0x3BCC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x3BDC(0x0004) MISSED OFFSET
	class USoundBase*                                  PlayerKilledSound;                                        // 0x3BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    WindDebrisParticles;                                      // 0x3BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FallingRainParticles;                                     // 0x3BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    StormAuraParticles;                                       // 0x3BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     LightningSpawnLocation;                                   // 0x3C00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMin;                                    // 0x3C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMax;                                    // 0x3C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x3C14(0x0004) MISSED OFFSET
	class AActor*                                      SafeZoneActor;                                            // 0x3C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensity;                                       // 0x3C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x3C24(0x0004) MISSED OFFSET
	class UPointLightComponent*                        RandomLightningLight;                                     // 0x3C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMin;                            // 0x3C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMax;                            // 0x3C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashDiameter;                                   // 0x3C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashHeight;                                     // 0x3C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMin;                             // 0x3C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMax;                             // 0x3C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                RainCameraLensParticles;                                  // 0x3C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              _ChanceOfLightningMesh;                                   // 0x3C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowInvulnerableVisuals;                                  // 0x3C54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x3C55(0x0003) MISSED OFFSET
	class UAudioComponent*                             StormAudioLoop_Inst;                                      // 0x3C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              StormAudioVolume;                                         // 0x3C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x3C64(0x0004) MISSED OFFSET
	class UAudioComponent*                             FallingAudioLoop_Inst;                                    // 0x3C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsPlayingFallingSound;                                   // 0x3C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x3C71(0x0003) MISSED OFFSET
	float                                              PlayerAttributes_Speed_Walk;                              // 0x3C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Run;                               // 0x3C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Sprint;                            // 0x3C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrailsLOD;                                             // 0x3C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x3C84(0x0004) MISSED OFFSET
	class UPostProcessComponent*                       MobilePostProcess;                                        // 0x3C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsOutsideSafeZoneCached;                                 // 0x3C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x3C91(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            ResOutMaterials;                                          // 0x3C98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ADuplicateResOutMesh_C*                      RezInFXActor;                                             // 0x3CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQueueRezIn;                                              // 0x3CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x3CB1(0x0007) MISSED OFFSET
	class ADuplicateResOutMesh_C*                      RezOutFXActor;                                            // 0x3CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQueueRezOut;                                             // 0x3CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasEverInWarmUp;                                         // 0x3CC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStormAudioCleanedUp;                                     // 0x3CC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0xD];                                       // 0x3CC3(0x000D) MISSED OFFSET
	struct FTransform                                  Box_Local_Transform;                                      // 0x3CD0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BoundsRadius;                                             // 0x3D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x3D04(0x0004) MISSED OFFSET
	class UPointLightComponent*                        TeleportationPointLight;                                  // 0x3D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MaxLightIntensity;                                        // 0x3D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket_MeshTop;                                           // 0x3D14(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket_MeshBot;                                           // 0x3D1C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_Transition;                                      // 0x3D24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolvePercent;                                 // 0x3D2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveDirection;                               // 0x3D34(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveBaseLoc;                                 // 0x3D3C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveDistance;                                // 0x3D44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveFirstSpawn;                              // 0x3D4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x3D54(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Mat_CharacterDissolve;                                    // 0x3D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                             // 0x3D60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bUseNewTeleportFX;                                        // 0x3D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x3D71(0x0003) MISSED OFFSET
	struct FGameplayTag                                OutsideSafeZoneGameplayCueTag;                            // 0x3D74(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SafeZonePhase;                                            // 0x3D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WhichSafeZoneTag;                                         // 0x3D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOutsideSafeZoneGameplayCueActive;                        // 0x3D84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x3D85(0x0003) MISSED OFFSET
	struct FScalableFloat                              SafeZoneDamageScalableFloat;                              // 0x3D88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bFrontendPartyInProgress;                                 // 0x3DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockOnInteractionComplete;                               // 0x3DA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x3DAA(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData18[0x10];                                      // 0x3DAA(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn
	unsigned char                                      UnknownData19[0x10];                                      // 0x3DC0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut
	unsigned char                                      UnknownData20[0x10];                                      // 0x3DD0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight
	unsigned char                                      UnknownData21[0x10];                                      // 0x3DE0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft
	bool                                               bSkeletalArrayReady;                                      // 0x3DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x3DF1(0x0003) MISSED OFFSET
	int                                                CurDissolveSetupAttempt;                                  // 0x3DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DBNOEnterSound;                                           // 0x3DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x10];                                      // 0x3E00(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported
	bool                                               Is_Ashton;                                                // 0x3E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x3E11(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Ashton;                                                   // 0x3E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData25[0x10];                                      // 0x3E20(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd
	unsigned char                                      UnknownData26[0x10];                                      // 0x3E30(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd
	struct FGameplayTag                                PhoneGhostCue;                                            // 0x3E40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                WhiteoutCue;                                              // 0x3E48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZoneCue;                                       // 0x3E50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZone2Cue;                                      // 0x3E58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZone3Cue;                                      // 0x3E60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayRespawnFXOnSpawn;                                     // 0x3E68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x3E69(0x0007) MISSED OFFSET
	class AFortPlayerPawnAthena*                       PlayerPawnAthena;                                         // 0x3E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x10];                                      // 0x3E78(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2
	unsigned char                                      UnknownData29[0x10];                                      // 0x3E88(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2
	bool                                               TestProceduralWaterInIsolation;                           // 0x3E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x3E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_First_Water_Body;                                      // 0x3E9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Last_Water_Body;                                       // 0x3E9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccumulatedNormalizedDiveSpeed;                           // 0x3E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                WaterSprintBoostTag;                                      // 0x3EA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData30[0x10];                                      // 0x3EA8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp
	TMap<class UObject*, struct FPawnHighlight>        PawnHighlights;                                           // 0x3EB8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     Current_Highlight_Source;                                 // 0x3F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Highlight_Priority;                               // 0x3F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPawnHighlight                              Invulnerable_Highlight;                                   // 0x3F14(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FFCreativeEffectColorIndex                  LastCreativeEffectColorIndex;                             // 0x3F44(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGalileo;                                                // 0x3F4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x3F4D(0x0003) MISSED OFFSET
	struct FScalableFloat                              HotFixSnow;                                               // 0x3F50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData32[0x50];                                      // 0x3F70(0x0050) UNKNOWN PROPERTY: SetProperty PlayerPawn_Athena.PlayerPawn_Athena_C.NoSnowPlaylists
	struct FGameplayTag                                GalileoPlaylistTag;                                       // 0x3FC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            WeaponMIDs;                                               // 0x3FC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmountOfTimesToAttemptRestoreMats;                        // 0x3FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_PawnAthenaNPC;                                         // 0x3FDC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HitGlowBrightnessScalar;                                  // 0x3FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  CurrentWeaponMaterials;                                   // 0x3FE8(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMeshComponent*>              CurrentWeaponMeshes;                                      // 0x3FF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            WeaponDissolveMIDs;                                       // 0x4008(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HitGlowBrightnessScalar_Mobile;                           // 0x4018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_PawnAthenaDecoy;                                       // 0x401C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ScaleRate;                                                // 0x4024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TetherQuestTag;                                           // 0x4028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       FirefliesTag;                                             // 0x4048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RightSideRim_Transform;                                   // 0x4050(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LeftSideRim_Transform;                                    // 0x4080(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USpotLightComponent*                         Right_Side_Rim_Light;                                     // 0x40B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Left_Side_Rim_Light;                                      // 0x40B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Rim_light_Shadow_Bias;                                    // 0x40C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rim_Light_Attenuation_Radius;                             // 0x40C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rim_Light_Intensity;                                      // 0x40C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PlayerAimRotation;                                        // 0x40CC(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ControlRotationReplicationTickRate;                       // 0x40D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Elimination_Rez_Sequence_GC;                              // 0x40F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Creative_Respawn_Teleportation_GC;                        // 0x4100(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Teleport_In_GC;                                           // 0x4108(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");
		
		return ptr;
	}


	void Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color);
	void handleCvarsUpdated(const struct FString& CVarName);
	void OnRep_PlayerAimRotation();
	void GetAimPoint(struct FRotator* ControlRotation);
	void validateRimLight();
	bool PawnIsDecoy();
	bool PawnIsNPC();
	void RemoveSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject);
	void AddSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject);
	void GalileoMaterialSetup();
	void Get_Highest_Priority_Highlight(class UObject** Source, struct FPawnHighlight* Top_Priority);
	void Highlight_Pawn_from_Source(class UObject* Source, const struct FPawnHighlight& Highlight, bool Only_Update_If_Current);
	void Remove_Pawn_Highlight_from_Source(class UObject* Source);
	void ApplyPawnHighlight(class UObject* Source, const struct FPawnHighlight& HitGlow);
	void OnRep_PlayRespawnFXOnSpawn();
	void LockonSearchCompleteTimedOut();
	void OnLockOnSearchCompleted(bool* bConsumeEvent);
	void SetPartyInProgress(bool bIsPartyInProgress);
	void CleanUpTeleportationFXLight();
	void RestoreCharacterMats(bool* bFullyCompleted);
	void SetPetHidden(bool NewHidden);
	void SetupDissolveFx();
	void CleanupDissolveFX();
	void UpdateDissolveFx(float Scalar_Transition, float Scalar_ZHeight, float Scalar_LightIntensity);
	void SpawnTeleportationLight();
	void FindBounds();
	void QueueTeleportOut();
	void QueueTeleportIn();
	void OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, EItemInteractionType* Out_ItemInteractionType);
	void InWarmup(bool* bInWarmup);
	void StopLoopingAudio();
	void EnableWaterAudio(bool Is_Entering_Water);
	void GetLocationInCircle_XY(struct FVector* LocationLocalSpace);
	void InitAthenaFoleyAudio();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SafeZoneStatusChanged();
	void GameplayCue_Athena_Equipping(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Athena_Player_BeingRevivedFromDBNO(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void RemoveStormFX();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnEnteredWaterVolume();
	void OnExitedWaterVolume();
	void NotifyTeammateSkydivedFromBus();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnLeftReplayRelevancy();
	void OnEnteredReplayRelevancy();
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void OnResInDuringWarmup();
	void AddStormFX();
	void SetSafeZonePhaseAndGameplayCueTag(int InSafeZonePhase, bool bSpawnGameplayCue);
	void SetSafeZoneTagWhenChanged(int NewWhichSafeZoneTag, const struct FGameplayTag& GameplayTag, bool bSpawnGameplayCue);
	void OnOutsideSafeZonePhaseChanged(int SafeZonePhase);
	void RemoveSafeZoneGameplayCue();
	void OnReceivedStormSurgeDamage();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void GameplayCue_Abilities_Activation_DBNOEnter(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ActivateInvincibleVisuals(float Duration);
	void GameplayCue_Athena_Reloading(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void TeleportInNSeconds(float SecondsTillTeleport, const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void ClientRunSnowGC(bool Instant);
	void WhiteoutAndTeleport(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool Instant, float Gravity);
	void GameplayCue_Athena_Boost(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnCreativeStopGhost();
	void OnCreativeStartGhost();
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void AddSafeZoneGameplayCue();
	void RemoveSafeZoneGameplayCueServerToClient();
	void OnSuccessfulBuildingEdit();
	void Play_Respawn_FX();
	void OnSpawnImmunityTimeReset();
	void OnEnteredWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsFirstBody);
	void OnExitedWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsLastBody);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void OnBeginWaterSprintBoost();
	void isHiddingInProp(bool IsHidden);
	void ServerSetCreativeEffectColorIndex(const struct FFCreativeEffectColorIndex& Index);
	void OnLandscapeCheckFailedAndTeleported();
	void ScalePlayerUp();
	void ScalePlayerDown();
	void OnTetheredExitPressed();
	void OnTetheredExitReleased();
	void OnTetherStarted(class APawn* LastTetherPawn);
	void OnTetherEnded(class APawn* LastTetherPawn);
	void StartAImRotationTick();
	void EndRotationTick();
	void ReplicateAimRotation(const struct FRotator& PlayerAimRotation);
	void AimTick();
	void ExecuteUbergraph_PlayerPawn_Athena(int EntryPoint);
	void CCPM_isHiddenInProp__DelegateSignature(bool IsHidden);
	void SwingLeft2__DelegateSignature();
	void SwingRight2__DelegateSignature();
	void SwingLeftEnd__DelegateSignature();
	void SwingRightEnd__DelegateSignature();
	void onFadeToWhiteTeleported__DelegateSignature();
	void SwingLeft__DelegateSignature();
	void SwingRight__DelegateSignature();
	void ResOut__DelegateSignature();
	void ResIn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

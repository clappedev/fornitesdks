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

// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
// 0x0440 (0x3178 - 0x2D38)
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TFX_ResOutCharacterMesh_LightIntensity;                   // 0x2D40(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TFX_ResOutCharacterMesh_ZHeightParam;                     // 0x2D44(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TFX_ResOutCharacterMesh_TransitionParam;                  // 0x2D48(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TFX_ResOutCharacterMesh__Direction;                       // 0x2D4C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2D4D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TFX_ResOutCharacterMesh;                                  // 0x2D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TFX_GlowCharacterMesh_EmissiveWarp;                       // 0x2D58(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TFX_GlowCharacterMesh__Direction;                         // 0x2D5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2D5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TFX_GlowCharacterMesh;                                    // 0x2D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x2D68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x2D6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2D6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x2D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Storm_Audio_Fader_Volume;                                 // 0x2D78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Storm_Audio_Fader__Direction;                             // 0x2D7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2D7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Storm_Audio_Fader;                                        // 0x2D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightningFlashTL_LERP_C86EEA494C7B742DC045759B630397B7;   // 0x2D88(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightningFlashTL__Direction_C86EEA494C7B742DC045759B630397B7;// 0x2D8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2D8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightningFlashTL;                                         // 0x2D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetHead;                                               // 0x2D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetBody;                                               // 0x2DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PawnHeadMaterials_1;                                      // 0x2DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnBodyMaterials_1;                                      // 0x2DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FlakVest;                                              // 0x2DC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          Event_Data;                                               // 0x2DE8(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpawnEffect;                                         // 0x2E98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsMale;                                                   // 0x2EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2EA1(0x0007) MISSED OFFSET
	class AFortWeapon*                                 MenuGoingCommandowWeapon;                                 // 0x2EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SafeZonePassThroughSound;                                 // 0x2EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasBeenOutsideSafeZone;                                  // 0x2EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2EB9(0x0003) MISSED OFFSET
	struct FLinearColor                                ThreatColor;                                              // 0x2EBC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2ECC(0x0004) MISSED OFFSET
	class USoundBase*                                  PlayerKilledSound;                                        // 0x2ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFXSystemComponent*                          Contrail_A;                                               // 0x2ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bContrailReady;                                           // 0x2EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2EE1(0x0007) MISSED OFFSET
	class UFXSystemAsset*                              ActiveContrail;                                           // 0x2EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLiveContrail;                                            // 0x2EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2EF1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Vapor_Effect;                                             // 0x2EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WindDebrisParticles;                                      // 0x2F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FallingRainParticles;                                     // 0x2F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    StormAuraParticles;                                       // 0x2F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     LightningSpawnLocation;                                   // 0x2F18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMin;                                    // 0x2F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensityMax;                                    // 0x2F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2F2C(0x0004) MISSED OFFSET
	class AActor*                                      SafeZoneActor;                                            // 0x2F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningIntensity;                                       // 0x2F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2F3C(0x0004) MISSED OFFSET
	class UPointLightComponent*                        RandomLightningLight;                                     // 0x2F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMin;                            // 0x2F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningTimelinePlaySpeedMax;                            // 0x2F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashDiameter;                                   // 0x2F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashHeight;                                     // 0x2F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMin;                             // 0x2F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFlashRepeatDelayMax;                             // 0x2F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                RainCameraLensParticles;                                  // 0x2F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              _ChanceOfLightningMesh;                                   // 0x2F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowInvulnerableVisuals;                                  // 0x2F6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2F6D(0x0003) MISSED OFFSET
	class UAudioComponent*                             StormAudioLoop_Inst;                                      // 0x2F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              StormAudioVolume;                                         // 0x2F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x2F7C(0x0004) MISSED OFFSET
	class UAudioComponent*                             FallingAudioLoop_Inst;                                    // 0x2F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsPlayingFallingSound;                                   // 0x2F88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2F89(0x0003) MISSED OFFSET
	float                                              PlayerAttributes_Speed_Walk;                              // 0x2F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Run;                               // 0x2F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAttributes_Speed_Sprint;                            // 0x2F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrailsLOD;                                             // 0x2F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2F9C(0x0004) MISSED OFFSET
	class UPostProcessComponent*                       MobilePostProcess;                                        // 0x2FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsOutsideSafeZoneCached;                                 // 0x2FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x2FA9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            ResOutMaterials;                                          // 0x2FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ADuplicateResOutMesh_C*                      RezInFXActor;                                             // 0x2FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQueueRezIn;                                              // 0x2FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2FC9(0x0007) MISSED OFFSET
	class ADuplicateResOutMesh_C*                      RezOutFXActor;                                            // 0x2FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bQueueRezOut;                                             // 0x2FD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasEverInWarmUp;                                         // 0x2FD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStormAudioCleanedUp;                                     // 0x2FDA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x5];                                       // 0x2FDB(0x0005) MISSED OFFSET
	struct FTransform                                  Box_Local_Transform;                                      // 0x2FE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BoundsRadius;                                             // 0x3010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x3014(0x0004) MISSED OFFSET
	class UPointLightComponent*                        TeleportationPointLight;                                  // 0x3018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MaxLightIntensity;                                        // 0x3020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket_MeshTop;                                           // 0x3024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Socket_MeshBot;                                           // 0x302C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_Transition;                                      // 0x3034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolvePercent;                                 // 0x303C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveDirection;                               // 0x3044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveBaseLoc;                                 // 0x304C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveDistance;                                // 0x3054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIDParam_DissolveFirstSpawn;                              // 0x305C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x3064(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Mat_CharacterDissolve;                                    // 0x3068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                             // 0x3070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseNewTeleportFX;                                        // 0x3080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x3081(0x0003) MISSED OFFSET
	struct FGameplayTag                                OutsideSafeZoneGameplayCueTag;                            // 0x3084(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SafeZonePhase;                                            // 0x308C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WhichSafeZoneTag;                                         // 0x3090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOutsideSafeZoneGameplayCueActive;                        // 0x3094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x3095(0x0003) MISSED OFFSET
	struct FScalableFloat                              SafeZoneDamageScalableFloat;                              // 0x3098(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bFrontendPartyInProgress;                                 // 0x30B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockOnInteractionComplete;                               // 0x30B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x30BA(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData24[0x10];                                      // 0x30BA(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn
	unsigned char                                      UnknownData25[0x10];                                      // 0x30D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut
	unsigned char                                      UnknownData26[0x10];                                      // 0x30E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight
	unsigned char                                      UnknownData27[0x10];                                      // 0x30F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft
	bool                                               bSkeletalArrayReady;                                      // 0x3100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x3101(0x0003) MISSED OFFSET
	int                                                CurDissolveSetupAttempt;                                  // 0x3104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DBNOEnterSound;                                           // 0x3108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x10];                                      // 0x3110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported
	bool                                               Is_Ashton;                                                // 0x3120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x3121(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Ashton;                                                   // 0x3128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData31[0x10];                                      // 0x3130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd
	unsigned char                                      UnknownData32[0x10];                                      // 0x3140(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd
	struct FGameplayTag                                PhoneGhostCue;                                            // 0x3150(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                WhiteoutCue;                                              // 0x3158(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZoneCue;                                       // 0x3160(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZone2Cue;                                      // 0x3168(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                OutsideSafeZone3Cue;                                      // 0x3170(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");
		return ptr;
	}


	void LockonSearchCompleteTimedOut();
	void OnLockOnSearchCompleted(bool* bConsumeEvent);
	void SetPartyInProgress(bool bIsPartyInProgress);
	void SetPetHidden(bool NewHidden);
	void CleanUpTeleportationFXLight();
	void UpdatePreDissolve(float GlowScalar);
	void RestoreCharacterMats();
	void SetupDissolveFX();
	void UpdateTeleportationPointLight(struct FVector NewWorldLoc, float IntensityScalar);
	void GetDissolveValues(float ZheightNormScalar, float* DissolveGradientDistance, struct FVector* WorldDissolveLocation, struct FLinearColor* DissolveGradientDirectionColor, struct FLinearColor* DissolveGradientBaseLocColor);
	void UpdateDissolveFX(float Scalar_Transition, float Scalar_ZHeight, float Scalar_LightIntensity);
	void SpawnTeleportationLight();
	void FindBounds();
	void QueueTeleportOut();
	void QueueTeleportIn();
	void OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, EItemInteractionType* Out_ItemInteractionType);
	void InWarmup(bool* InWarmup);
	void StopLoopingAudio();
	void EnableWaterAudio(bool Is_Entering_Water);
	void GetLocationInCircle_XY(struct FVector* LocationLocalSpace);
	void InitAthenaFoleyAudio();
	void UserConstructionScript();
	void LightningFlashTL__FinishedFunc();
	void LightningFlashTL__UpdateFunc();
	void Storm_Audio_Fader__FinishedFunc();
	void Storm_Audio_Fader__UpdateFunc();
	void TFX_GlowCharacterMesh__FinishedFunc();
	void TFX_GlowCharacterMesh__UpdateFunc();
	void TFX_ResOutCharacterMesh__FinishedFunc();
	void TFX_ResOutCharacterMesh__UpdateFunc();
	void OnLoaded_B148701F472F44FF0B6CAFAE91E06FBF(class UObject* Loaded);
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveDestroyed();
	void SafeZoneStatusChanged();
	void GameplayCue_Athena_Equipping(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ContrailCheck();
	void GameplayCue_Athena_Player_BeingRevivedFromDBNO(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void RemoveStormFX();
	void StartRandomLightningFlashes();
	void RandomLightningFlashesRepeat();
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void UpdateInvulnerableVisuals();
	void Play_Lightning_Flash_Audio(struct FVector Location);
	void Start_Storm_Audio_Fader();
	void OnEnteredWaterVolume();
	void OnExitedWaterVolume();
	void NotifyTeammateSkydivedFromBus();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnLeftReplayRelevancy();
	void OnEnteredReplayRelevancy();
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void PlayResOut();
	void OnResInDuringWarmup();
	void PlayResInFX();
	void PlayResOutFX();
	void AddStormFX();
	void SetSafeZonePhaseAndGameplayCueTag(int InSafeZonePhase, bool bSpawnGameplayCue);
	void SetSafeZoneTagWhenChanged(int NewWhichSafeZoneTag, struct FGameplayTag GameplayTag, bool bSpawnGameplayCue);
	void OnOutsideSafeZonePhaseChanged(int SafeZonePhase);
	void RemoveSafeZoneGameplayCue();
	void OnReceivedStormSurgeDamage();
	void MeleeSwingLeft();
	void MeleeSwingRight();
	void ReTrySetupDissolveFx();
	void GameplayCue_Abilities_Activation_DBNOEnter(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ActivateInvincibleVisuals(float Duration);
	void GameplayCue_Athena_Reloading(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void TeleportInNSeconds(float SecondsTillTeleport, struct FVector DestLocation, struct FRotator DestRotation);
	void ClientRunSnowGC(bool Instant);
	void WhiteoutAndTeleport(struct FVector DestLocation, struct FRotator DestRotation, bool Instant, float Gravity);
	void GameplayCue_Athena_Boost(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void OnCreativeStopGhost();
	void OnCreativeStartGhost();
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void AddSafeZoneGameplayCue();
	void RemoveSafeZoneGameplayCueServerToClient();
	void OnSuccessfulBuildingEdit();
	void ExecuteUbergraph_PlayerPawn_Athena(int EntryPoint);
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

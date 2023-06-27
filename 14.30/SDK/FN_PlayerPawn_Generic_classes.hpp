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

// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// 0x05F0 (0x3478 - 0x2E88)
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SplashEffectsForEnteringOrExitingWater;                   // 0x2E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GamplayWindInteractionEffects;                            // 0x2E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Land;                                   // 0x2EA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Land;                                  // 0x2EA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Water;                                 // 0x2EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Water;                                  // 0x2EB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x2EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x2EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            SpeechBubbleComponent;                                    // 0x2ED0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         PlayerLight;                                              // 0x2ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShatterShield_Push_3B96BD02488A8F69F3D086A2B7978EC8;      // 0x2EE0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShatterShield_Opacity_3B96BD02488A8F69F3D086A2B7978EC8;   // 0x2EE4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShatterShield_Highlight_Cracks_3B96BD02488A8F69F3D086A2B7978EC8;// 0x2EE8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShatterShield__Direction_3B96BD02488A8F69F3D086A2B7978EC8;// 0x2EEC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2EED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShatterShield;                                            // 0x2EF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortEmitterCameraLensEffectDirectional*     ScreenEffect_PlayerHealthDamageDirection;                 // 0x2EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                ScreenEffect_PlayerHealthDamage;                          // 0x2F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortEmitterCameraLensEffectDirectional*     ScreenEffect_PlayerShieldDamageDirection;                 // 0x2F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                ScreenEffect_PlayerShieldDamage;                          // 0x2F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskRangedSound;                                     // 0x2F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskMeleeSound;                                      // 0x2F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SoulSuckVictimMontage;                                    // 0x2F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeed;                                              // 0x2F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Run_Particle_Activate_Speed;                              // 0x2F34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Dust_Activate_Speed;                                 // 0x2F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Particle_Reset_Speed;                                // 0x2F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelocityVector;                                   // 0x2F40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnRunKickupFX_;                                     // 0x2F4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnWalkKickupFX_;                                    // 0x2F4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x2F4E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x2F4F(0x0001) MISSED OFFSET
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x2F50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNinjaInShadowStance_;                                   // 0x2F5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2F5D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x2F60(0x0020) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Shield_Material;                                          // 0x2F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            BodyShieldMIDArray;                                       // 0x2F88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            HeadShieldMIDArray;                                       // 0x2F98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Shield_Active;                                            // 0x2FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2FA9(0x0003) MISSED OFFSET
	float                                              Tick_Delta_Seconds;                                       // 0x2FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Damage_Wave_Animation;                             // 0x2FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Shield_Damage_Wave_Animation_Length;              // 0x2FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              size;                                                     // 0x2FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dying;                                                    // 0x2FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRippleAgain;                                           // 0x2FBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2FBE(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x2FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x2FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x2FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x2FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Shatter_Opacity;                                   // 0x2FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Regen_Opacity;                                            // 0x2FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Opacity;                                           // 0x2FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Shield_opacity;                                   // 0x2FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_PushMinValue;                                      // 0x2FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Hit;                                        // 0x2FF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Recover;                                    // 0x2FF5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Shatter;                                    // 0x2FF6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_FullHealth;                                 // 0x2FF7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fully_Regened_Shield_health_Opacity;                      // 0x2FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2FFC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x3000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x3020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x3021(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x3024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x3028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x302C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            CharmShieldMIDArray;                                      // 0x3030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BodyValid;                                                // 0x3040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x3041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x3042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x3043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x3044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x3045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               On_Player_Built_Floor;                                    // 0x3046(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x3047(0x0001) MISSED OFFSET
	struct FGameplayTag                                Event_NeedRoadsActive;                                    // 0x3048(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NeedRoadsDeactive;                                  // 0x3050(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads;                             // 0x3058(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x3078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_BodySkeletalMesh;                                  // 0x3080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_HeadSkeletalMesh;                                  // 0x3088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_CharmSkeletalMesh;                                 // 0x3090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x3098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x30A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x30A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 SpeechBubbleWidgetClass;                                  // 0x30B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x30B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCameraShake*                                DamageCameraShake;                                        // 0x30D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x30D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x30D9(0x0003) MISSED OFFSET
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x30DC(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x3168(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x3174(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x3178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x3180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x3188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x3190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x3198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x3199(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x31A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x31A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x31B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x31B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Water_Scene_Capture_Enabled;                              // 0x31B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x31BA(0x0002) MISSED OFFSET
	float                                              StartingMinCapsuleShadowVis;                              // 0x31BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CachedEffect;                                             // 0x31C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            WaterInteractionWakeMIDS;                                 // 0x31C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                WaterInteractionWakeMeshes;                               // 0x31D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Character_Calve_Length;                                   // 0x31E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfCyclingWaterMeshes;                               // 0x31EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WaterTraceImpactNormalAndZHeightLocation;                 // 0x31F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerVelocity;                                           // 0x3200(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRunWalkWaterGroundFX;                               // 0x320C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x320D(0x0003) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            Previous_MID;                                             // 0x3210(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Weapon_MID;                                      // 0x3220(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x3230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ArrayAlignment;                                           // 0x3238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x323C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  CharacterPartMaterials;                                   // 0x3240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Head_MID;                                        // 0x3250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Body_MID;                                        // 0x3260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Hat_MID;                                         // 0x3270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Backpack_MID;                                    // 0x3280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Charm_MID;                                       // 0x3290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_Face_MID;                                        // 0x32A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                      DuplicateHeadMesh;                                        // 0x32B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateBodyMesh;                                        // 0x32B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateHatMesh;                                         // 0x32C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateBackpackMesh;                                    // 0x32C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharmMesh;                                       // 0x32D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateFaceMesh;                                        // 0x32D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x10];                                      // 0x32E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight
	unsigned char                                      UnknownData16[0x10];                                      // 0x32F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRightEnd
	unsigned char                                      UnknownData17[0x10];                                      // 0x3300(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft
	unsigned char                                      UnknownData18[0x10];                                      // 0x3310(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeftEnd
	unsigned char                                      UnknownData19[0x10];                                      // 0x3320(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_Begin
	unsigned char                                      UnknownData20[0x10];                                      // 0x3330(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_End
	class UFXSystemComponent*                          OverrideAnimTrail;                                        // 0x3340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskRangedSound;                      // 0x3348(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData21[0x10];                                      // 0x3368(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight2
	unsigned char                                      UnknownData22[0x10];                                      // 0x3378(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft2
	class UFXSystemComponent*                          AnimTrailFX;                                              // 0x3388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               BlockedByPawns;                                           // 0x3390(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x3391(0x0007) MISSED OFFSET
	struct FGameplayAttribute                          Attribute_CurrentShield_Const;                            // 0x3398(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute_Shield_Const;                                   // 0x33D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute_CurrentHealth_Const;                            // 0x3408(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute_Max_Health_Const;                               // 0x3440(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C");
		
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	float GetHealthPercent2();
	float GetShieldPercent2();
	void OnRep_BlockedByPawns();
	void PlayHitSound(class AFortPawn* Instigator, class AActor* Damage_Causer);
	void EnableWaterAudio(bool IsEnteringWater);
	void Set_Body_Type_Sounds();
	void Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs(const struct FName& Parameter_Name, float Parameter_Value);
	void Set_Scalar_Parameter_on_Character_MIDs(const struct FName& Parameter_Name, float Parameter_Value);
	void Restore_Previous_Materials_on_Weapons_Mesh(class AFortWeapon* Weapon_to_Restore);
	void Restore_Previous_Materials_on_Character_Mesh();
	void Override_Materials_and_Copy_Parameters_on_Weapons_Mesh(class UMaterialInterface* Material_to_Apply);
	void TriggerGameplayWindEmitter(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void OnRep_On_Player_Built_Floor();
	void Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void ToggleShieldVisibility();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1);
	void SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push);
	void FindShieldOpacity();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void ShatterShield__FinishedFunc();
	void ShatterShield__UpdateFunc();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnLanded(const struct FHitResult& Hit);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ReceiveTick(float DeltaSeconds);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);
	void OnBaseChanged(class AActor* NewBase);
	void ReceivePossessed(class AController* NewController);
	void OnDisplaySentence(const struct FText& SpeechText);
	void OnClearSentence();
	void ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void BindWeaponSwap(float InDuration);
	void MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev);
	void UnBindWeaponSwap();
	void MultiEndSwap(class AFortWeapon* CurrentWeapon);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayGameplayWindEffect(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ReinitializeWeaponMaterials();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void OnEnteredWaterVolume();
	void OnExitedWaterVolume();
	void SetBlockedByPawns(bool bLocked);
	void OnLand_CE();
	void AnimTrailsDisable();
	void AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, class UNiagaraSystem* NiagaraSystemReference, const struct FName& FirstSocketName, const struct FName& SecondSocketName, float Width, class UFXSystemComponent* OverrideParticleComp, const struct FName& OverideFirstSocketName, const struct FName& OverideSecondSocketName);
	void AnimTrailsNotify(bool bActive);
	void ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint);
	void SwingLeft2__DelegateSignature();
	void SwingRight2__DelegateSignature();
	void AnimNotify_End__DelegateSignature();
	void AnimNotify_Begin__DelegateSignature(bool bActive);
	void SwingLeftEnd__DelegateSignature();
	void SwingLeft__DelegateSignature();
	void SwingRightEnd__DelegateSignature();
	void SwingRight__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

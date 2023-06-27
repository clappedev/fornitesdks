#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FerretVehicle.FerretVehicle_C
// 0x04C8 (0x1998 - 0x14D0)
class AFerretVehicle_C : public AFortAthenaFerretVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x14D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_CollisionBodies;                                       // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioSpark;                                               // 0x14E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoostMeter;                                               // 0x14E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioTaxi;                                                // 0x14F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioDive;                                                // 0x14F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioWind1P;                                              // 0x1500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovementDistant;                                     // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovementClose;                                       // 0x1510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plane_Boost_FX;                                         // 0x1518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plane_SpeedFX;                                          // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PropellerBlur;                                            // 0x1528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_BR;                                           // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_UR;                                           // 0x1538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_BL;                                           // 0x1540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_WingTrail_UL;                                           // 0x1548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Reticle;                                                  // 0x1550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudioSuspension;                             // 0x1558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapVolume;                                            // 0x1560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudioImpacts;                                // 0x1568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x1570(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline02;                                               // 0x1574(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline03;                                               // 0x1578(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1579(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoostTimeline_Backwards_CB6F0329482DC4F10358FA906489BBA6; // 0x1588(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoostTimeline_Rumble_CB6F0329482DC4F10358FA906489BBA6;    // 0x158C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoostTimeline_Track1_CB6F0329482DC4F10358FA906489BBA6;    // 0x1590(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BoostTimeline__Direction_CB6F0329482DC4F10358FA906489BBA6;// 0x1594(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1595(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BoostTimeline;                                            // 0x1598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x15A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PassengerPawn;                                            // 0x15A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ImpulsePower;                                             // 0x15B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RearVectorThreshold;                                      // 0x15D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpulseVector;                                            // 0x15F0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x15FC(0x0004) MISSED OFFSET
	TArray<class AFortPickup*>                         AttachedPickups;                                          // 0x1600(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                                 FortPickup;                                               // 0x1610(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPickups;                                               // 0x1618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPickups;                                           // 0x161C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ObjectReference;                                          // 0x1620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           DrivingPlayerController;                                  // 0x1628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningAmount;                                            // 0x1630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1634(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x1638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CorrectiveImpulse;                                        // 0x1640(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x164C(0x0004) MISSED OFFSET
	struct FScalableFloat                              RumbleMultipier;                                          // 0x1650(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             LastDriver;                                               // 0x1670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityToLaunch;                                      // 0x1678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x167C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x1680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1684(0x0004) MISSED OFFSET
	class AFortPlayerPawnAthena*                       LastHitPlayer;                                            // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchMultiplier;                                         // 0x1690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1694(0x0004) MISSED OFFSET
	struct FScalableFloat                              Hit_ZImpulseMultiplier;                                   // 0x1698(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_LateralImpulseMultiplier;                             // 0x16B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_MaxImpulseVelocity;                                   // 0x16D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HealthToDestroyProp;                                      // 0x16F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreHitLastDriver;                                      // 0x16FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               PassengerIsInstigator;                                    // 0x16FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x16FE(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x1700(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              CanLaunchPlayer;                                          // 0x1708(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerController*                           PassengerPlayerController;                                // 0x1728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaunchCharacterExtraVelocity;                             // 0x1730(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchCharacterVelocityScalar;                            // 0x173C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             BounceOverlapPawn;                                        // 0x1740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       BounceOverlapController;                                  // 0x1748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalBounceJumpHeight;                                    // 0x1750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceHeight;                                             // 0x1754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_PlayerLaunched;                                        // 0x1758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        LaunchForceFeedback;                                      // 0x1760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     Passengers;                                               // 0x1768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortPlayerPawn*>                     BounceIgnoreList;                                         // 0x1778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Debug_NoCameraShake;                                      // 0x1788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1789(0x0003) MISSED OFFSET
	float                                              BoostCameraOffsetLerpStart;                               // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Boost;                                                    // 0x1790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostRumbleValue;                                         // 0x1794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetBoostFX;                                             // 0x1798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1799(0x0003) MISSED OFFSET
	float                                              DestructionAngle;                                         // 0x179C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropDamageAmount;                                         // 0x17A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x17A4(0x0004) MISSED OFFSET
	class USoundBase*                                  OnBoostSound;                                             // 0x17A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorKickBoostScale;                                      // 0x17B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BounceVector;                                             // 0x17B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x17C0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x17CC(0x0004) MISSED OFFSET
	class AActor*                                      ActorToDestroy;                                           // 0x17D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrailsActive;                                             // 0x17D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x17D9(0x0007) MISSED OFFSET
	class AActor*                                      VehicleHitActor;                                          // 0x17E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             BoostIncreaseAudioComp;                                   // 0x17E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x17F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UnobstructedBounceVelocity;                               // 0x17F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ObstructedBounceVelocity;                                 // 0x17FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InWaterLoop;                                              // 0x1800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HonkAudioComp;                                            // 0x1808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GE_EnterTurret;                                           // 0x1810(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_GrantWeapon;                                           // 0x1818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BlockWeaponFire;                                       // 0x1820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrailsOn;                                                 // 0x1828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x1829(0x0007) MISSED OFFSET
	struct FTransform                                  ReticleRelativeTransform;                                 // 0x1830(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BoostMeterMID;                                            // 0x1860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FuelGaugeMID_1;                                           // 0x1868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingCameraForwardDistance;                             // 0x1870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingCameraFOV;                                         // 0x1874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostingCameraFOV;                                        // 0x1878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostingCameraForwardDistance;                            // 0x187C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostReversePlayRate;                                     // 0x1880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeSpeedCurvePow;                                 // 0x1884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedSpeed;                                          // 0x1888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeAmount;                                              // 0x188C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMin;                                             // 0x1890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMax;                                             // 0x1894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMin;                                  // 0x1898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMax;                                  // 0x189C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFrequency;                                           // 0x18A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamerShakeAmplitude;                                      // 0x18A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeYawFrequencyMultipier;                         // 0x18A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostScreenshakeBias;                                     // 0x18AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTImelineAlpha;                                       // 0x18B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostLerpFromDistance;                                    // 0x18B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostLerpFromFOV;                                         // 0x18B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x18BC(0x0004) MISSED OFFSET
	class AB_FerretWeapon_C*                           PlaneWeapon;                                              // 0x18C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnOverheat;                                          // 0x18C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnSmashSound;                                             // 0x18D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DamagedEffect;                                            // 0x18D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SavedHeadlightValueForMID;                                // 0x18E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedDamageValueForMID;                                   // 0x18E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostTimeValueForMID;                                     // 0x18E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x18EC(0x0004) MISSED OFFSET
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // 0x18F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       questObjBackendName;                                      // 0x18F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         questObjStat;                                             // 0x1900(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OverheatValueForMID;                                      // 0x1910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1914(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Biplane_Material_Index1;                                  // 0x1918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Biplane_Material_Index0;                                  // 0x1920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestructionFX;                                            // 0x1928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       PlayerWhoDamagedStormwing;                                // 0x1930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DamagerTimer;                                             // 0x1938(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       BiplaneTag;                                               // 0x1940(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             OutOfFuelAudioComp;                                       // 0x1960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SoundOnOutOfFuel;                                         // 0x1968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelWarning;                                       // 0x1970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 CooldownCueEvent;                                         // 0x1978(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Fired;                                                 // 0x1980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Boost;                                                 // 0x1988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 BoostCueEvent;                                            // 0x1990(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FerretVehicle.FerretVehicle_C");
		return ptr;
	}


	void RemoveCooldownCueEvent(class AFortPlayerPawn* PlayerPawn);
	void AddCooldownCueEvent(class AFortPlayerPawn* PlayerPawn);
	void SendOverheartValueToMaterials(float OverheatValueForMID);
	void QuestUpdate(class AFortPlayerPawn* FortPlayerPawn);
	void SendBoostTimeToMaterials(float BoostTimeValueForMID);
	void SendDamageValueToMaterials(float SavedDamageValueForMID);
	void SendHeadlightValueToMaterials(float SavedHeadlightValueForMID);
	void GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents);
	void DestroyOrDamageBuildingPiece(class ABuildingActor* BuildingActor, bool CheckForHealth, class UClass* GameplayEffectClass, float DestroyThreshold);
	struct FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn);
	void OnRep_ImpactLocation();
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, ECommonInputType OverrideInputType);
	void OnRep_CorrectiveImpulse();
	void PlayHapticsOnHit(float HitMagnitude, bool Grind);
	void AttachWeaponToCart(int Selection);
	void OnRep_ImpulseVector();
	void UserConstructionScript();
	void Timeline();
	void BoostTimeline__FinishedFunc();
	void BoostTimeline__UpdateFunc();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit);
	void DestroyCooldown();
	void ReverseBoostTimeline();
	void StartBoostRumble();
	void BoostCameraReverse();
	void BoostRumbleEnd();
	void UpdateBoostRumble();
	void Handle_Spring_Compression_Audio();
	void OnEnteredWaterVolume(struct FVector WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector WaterSurfacePoint);
	void CheckWater();
	void OnSpringCompression_2();
	void EBrakeBegin_2();
	void EBrakeEnd_2();
	void PowerSlideBegin_2();
	void PowerSlideEnd_2();
	void ReceiveBeginPlay();
	void OnStopTick();
	void OnEngineStop();
	void LocalPassengerADS(bool IsADS);
	void BrakeCameraReverse();
	void OnEngineStart();
	void OnLanding();
	void StopDriverCameraShake();
	void StartDriverCameraShake();
	void Start_Stop_Engine_Audio(bool Starting);
	void SmashedThroughBuildingPiece(struct FVector ImpactPoint, struct FVector ImpactNormal);
	void BoostEnd();
	void BoostBegin();
	void PawnHitByVehicle(class AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap);
	void ChangeOutMaterials();
	void ReceiveDestroyed();
	void DamageEventTimedOut();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Update_Damage_State();
	void DeathFX();
	void OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int SeatIdx);
	void GunOverheat();
	void WeaponFired(float Overheat);
	void OutOfFuel();
	void FuelBelowThreshold();
	void LandedWithNoFuel();
	void ShowCooldownCueFired(class AFortPlayerPawn* Pawn, float Duration);
	void ShowCooldownCueBoost(class AFortPlayerPawn* Pawn, float Duration);
	void PedalForceFeedback();
	void CanHitLastDriver();
	void OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, class AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void HideQuickBarForAbility(bool Hide);
	void SetHeadlightState(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void RefreshMaterialParams();
	void LightningSpark(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity);
	void ExecuteUbergraph_FerretVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

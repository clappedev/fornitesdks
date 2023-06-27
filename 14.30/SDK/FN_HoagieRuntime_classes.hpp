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

// Class HoagieRuntime.FortCameraMode_Hoagie
// 0x0040 (0x0E10 - 0x0DD0)
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{
public:
	struct FVector                                     LastOrigin;                                               // 0x0DD0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     CurrentInterpSpeed;                                       // 0x0DDC(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     BoostInterpSpeed;                                         // 0x0DE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseRollMultiplier;                                       // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BasePitchMultiplier;                                      // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRollMultiplier;                                      // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostPitchMultiplier;                                     // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRollDampFactor;                                      // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRollRecoveryDampFactor;                              // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostRecoveryInterpSpeed;                                 // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortCameraMode_Hoagie");
		
		return ptr;
	}

};


// Class HoagieRuntime.FortHoagieAudioController
// 0x0050 (0x0270 - 0x0220)
class AFortHoagieAudioController : public AActor
{
public:
	bool                                               bHighQualityOverride;                                     // 0x0220(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayerInHoagie;                                     // 0x0221(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCriticalDamageNative;                                    // 0x0222(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotorHitNative;                                          // 0x0223(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRotorWashActiveNative;                                 // 0x0224(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	float                                              RotorWashRelativeZOffset;                                 // 0x0228(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AFortHoagieVehicle>           Vehicle;                                                  // 0x022C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UFortLayeredAudioComponent*                  EngineAudio;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFortLayeredAudioComponent*                  RotorAudio;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0248(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortHoagieAudioController");
		
		return ptr;
	}


	void Update();
	void CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle);
	void CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor);
};


// Class HoagieRuntime.FortHoagieDriverAnimInstance
// 0x0050 (0x0650 - 0x0600)
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0600(0x0004) MISSED OFFSET
	struct FVector                                     RightHandIKPositionOffset;                                // 0x0604(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LeftHandIKRotationOffset;                                 // 0x0610(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RightHandIKRotationOffset;                                // 0x061C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortCardinalDirection                             BoostCardinalDirection;                                   // 0x0628(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	float                                              NormalizedAcceleration;                                   // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VehicleRoll;                                              // 0x0630(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VehicleYaw;                                               // 0x0634(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForwardSpeed;                                             // 0x0638(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMovingAnyDirection;                                    // 0x063C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMovingFastAnyDirection;                                // 0x063D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldReverse;                                           // 0x063E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldGoBackToIdle;                                      // 0x063F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Default_ReverseStart;                         // 0x0640(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_BoostLoop_Reverse;                            // 0x0641(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0642(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortHoagieDriverAnimInstance");
		
		return ptr;
	}

};


// Class HoagieRuntime.FortHoagieVehicle
// 0x03C0 (0x1B10 - 0x1750)
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{
public:
	struct FName                                       PassengerCollision;                                       // 0x1750(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraBoomDistance;                                       // 0x1758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraBoomHeight;                                         // 0x175C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x1760(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HoagieRuntime.FortHoagieVehicle.OnBoostStateChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x1770(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HoagieRuntime.FortHoagieVehicle.OnAltimeterTraceUpdated
	unsigned char                                      UnknownData02[0x10];                                      // 0x1780(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HoagieRuntime.FortHoagieVehicle.OnCrashingStateEntered
	float                                              LiftRumbleTimer;                                          // 0x1790(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLiftUp;                                                  // 0x1794(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1795(0x0003) MISSED OFFSET
	uint64_t                                           LiftForceFeedbackHandle;                                  // 0x1798(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint64_t                                           PassiveForceFeedbackHandle;                               // 0x17A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Theta_Native;                                             // 0x17A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WashAltAlpha_Native;                                      // 0x17AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RotorWashTickTimer;                                       // 0x17B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x17B4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             RotorTraceArray;                                          // 0x17B8(0x0010) (ZeroConstructor, Transient)
	TArray<TEnumAsByte<EObjectTypeQuery>>              RotorWashObjectsTypes;                                    // 0x17C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UFortHoagieVehicleConfigs*                   FortHoagieVehicleConfigs;                                 // 0x17D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FVehicleSpecificUIDetails>           CustomUI;                                                 // 0x17E0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVehicleSpecificUIDetails>           CustomFuelUI;                                             // 0x17F0(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 RumbleIntensity;                                          // 0x1800(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveVehicleUI>                    ActiveUI;                                                 // 0x1808(0x0010) (ZeroConstructor, Transient)
	struct FFortHeliFlightModel                        FlightModel;                                              // 0x1818(0x0110) (Transient)
	bool                                               bClearPitchInput;                                         // 0x1928(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBoosting;                                                // 0x1929(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x192A(0x0002) MISSED OFFSET
	float                                              BoostTimeLeft;                                            // 0x192C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoostBrakingTimeLeft;                                     // 0x1930(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoostCooldown;                                            // 0x1934(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShutdownTimer;                                            // 0x1938(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDestructionTimer;                                  // 0x193C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CrashingScrapingTimer;                                    // 0x1940(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CrashingNotMovingTimer;                                   // 0x1944(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanSleep;                                                // 0x1948(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasAppliedCrashDamage;                                   // 0x1949(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOrientedForLanding;                                      // 0x194A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceNegativeLift;                                       // 0x194B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExploded;                                                // 0x194C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x194D(0x0003) MISSED OFFSET
	float                                              AltimeterTraceTimer;                                      // 0x1950(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastRotorImpulseTime;                                     // 0x1954(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CriticalExplodeTimer;                                     // 0x1958(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeWhileCritical;                                        // 0x195C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeWhileLanding;                                         // 0x1960(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LiftFromOverrideButton;                                   // 0x1964(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     BoostDirection;                                           // 0x1968(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastRotorSweepDirection;                                  // 0x1974(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FHitResult                                  AltimeterTraceResult;                                     // 0x1980(0x008C) (Transient, IsPlainOldData)
	int                                                HoagieStateRep;                                           // 0x1A0C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1A10(0x0004) MISSED OFFSET
	float                                              CurrentRotorSpeed;                                        // 0x1A14(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRotorAngle;                                        // 0x1A18(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RotorImpactTraceAngle;                                    // 0x1A1C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MoveUpPressTime;                                          // 0x1A20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MoveDownPressTime;                                        // 0x1A24(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ServerCriticalHealth;                                     // 0x1A28(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1A2C(0x0004) MISSED OFFSET
	TArray<struct FRotorHit>                           RotorHits;                                                // 0x1A30(0x0010) (ZeroConstructor, Transient)
	TArray<struct FCachedSeatCollision>                CachedSeatCollision;                                      // 0x1A40(0x0010) (ZeroConstructor, Transient)
	class UFortAthenaVehicleFuelComponent*             FuelComponent;                                            // 0x1A50(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int8_t                                             IsUsingNewFuelSystemState;                                // 0x1A58(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1A59(0x0007) MISSED OFFSET
	class UNiagaraComponent*                           HoagieIdleFX_Native;                                      // 0x1A60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           DamageFX_Native;                                          // 0x1A68(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           RotorWashFX_Native;                                       // 0x1A70(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFortHoagieVehicleAnimInstance*              HoagieAnimBP_Native;                                      // 0x1A78(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UFortHoagieVehicleConfigs*                   FortHoagieVehicleConfigsClass;                            // 0x1A80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AltimeterTraceSocketName;                                 // 0x1A88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RotorDamageTraceSocketName;                               // 0x1A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainRotorCritSocketName;                                  // 0x1A98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TailRotorCritSocketName;                                  // 0x1AA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SeatTransition_ToDriver;                                  // 0x1AA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SeatTransition_ToPassenger;                               // 0x1AB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RotorTraceProfile;                                        // 0x1AB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FoliageOverlapsBoxTag;                                    // 0x1AC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class AController>                  KillerController;                                         // 0x1AC8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       KillerCauser;                                             // 0x1AD0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FReplicatedHeliControlState                 ControlState;                                             // 0x1AD8(0x0018) (Net)
	float                                              CurrentViewDistanceScale;                                 // 0x1AF0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentHLODDistanceOverrideScale;                         // 0x1AF4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentHLODMaxDrawDistanceScale;                          // 0x1AF8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x14];                                      // 0x1AFC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortHoagieVehicle");
		
		return ptr;
	}


	void UpdateDamageStateNative(float Damage);
	void SetTailRotorRotation(float Degrees);
	void SetRotorWashActive(bool bActive);
	void SetMainRotorRotation(float Degrees);
	void ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState);
	void OnTickRotors(float RotorAngleDegrees);
	void OnStartupEnd();
	void OnStartupBegin();
	void OnStartCriticalHealth();
	void OnRotorsStop();
	void OnRotorDamagePlayer(const struct FHitResult& Impact);
	void OnRotorDamageDealtOuter(const struct FHitResult& Impact);
	void OnRotorDamageDealtInner(const struct FHitResult& Impact);
	void OnRotorDamageDealt(const struct FHitResult& Impact, bool bInner);
	void OnRep_IsUsingNewFuelSystemState();
	void OnRep_HoagieState();
	void OnRep_ControlState();
	void OnRefueledFromEmpty();
	void OnImpactWhileCritical();
	void OnImpactOtherHoagie(const struct FVector& HitLocation, const struct FVector& NormalImpulse);
	void OnExplode();
	void OnCritRotor(float Damage, const struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor);
	void OnBoostStarted();
	void OnBoostReady();
	void OnBoostFinished();
	void OnBoostFailed();
	void MulticastRotorImpulse(const struct FHitResult& RotorHit);
	bool IsStartingUp();
	bool IsShuttingDown();
	bool IsScrapingBottom();
	float GetVerticalSpeedKmh();
	struct FVector GetThrustDirection(bool bWorldSpace);
	float GetStrafeAlpha();
	float GetSteerAlpha();
	float GetShutdownTimeLeft();
	float GetRotorSpeedPercent();
	float GetRotorSpeed();
	struct FVector GetRotorCenterPosition();
	float GetRotorAngleDegrees();
	float GetMaxBoostCooldown();
	float GetMaxAltitude();
	float GetLiftAlpha();
	bool GetIsEngineOn();
	bool GetIsCriticalHealth();
	float GetForwardAlpha();
	float GetDistanceToGround();
	float GetBoostTimeLeft();
	float GetBoostDuration();
	struct FVector GetBoostDirection();
	float GetBoostCooldown();
	float GetAltitude();
};


// Class HoagieRuntime.FortHoagieVehicleAnimInstance
// 0x0130 (0x0500 - 0x03D0)
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x03D0(0x00A0) MISSED OFFSET
	struct FRotator                                    EngineRotation;                                           // 0x0470(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    MainRotorRotation;                                        // 0x047C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    TailRotorRotaton;                                         // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    BoosterFanRotation;                                       // 0x0494(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EFortCardinalDirection                             BoostCardinalDirection;                                   // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x04A1(0x001B) MISSED OFFSET
	float                                              EngineRotationInterpSpeed;                                // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineRotationDuringBoostInterpSpeed;                     // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineFlipSpeedThreshold;                                 // 0x04C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BoostDirectionDeadzone;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineFlipDeadzone;                                       // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriverRoll;                                               // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DriverYaw;                                                // 0x04D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FwdSpeed;                                                 // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocalBoostDirection;                                      // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              YawBlendSpaceInput;                                       // 0x04E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              NormalizedAcceleration;                                   // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04EC(0x0001) MISSED OFFSET
	bool                                               bShouldHideBlades;                                        // 0x04ED(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBoostOnCD;                                             // 0x04EE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBoostReady;                                            // 0x04EF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMovingForward;                                         // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsReversing;                                             // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMovingAnyDirection;                                    // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBoosting;                                              // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldReverse;                                           // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldGoBackToIdle;                                      // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldApplyBoostAdditive;                                // 0x04F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsEngineShuttingOff;                                     // 0x04F7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Default_ReverseStart;                         // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_BoostLoop_Reverse;                            // 0x04F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x04FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortHoagieVehicleAnimInstance");
		
		return ptr;
	}

};


// Class HoagieRuntime.FortHoagieVehicleConfigs
// 0x0200 (0x07F0 - 0x05F0)
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	float                                              StrafeForce;                                              // 0x05F0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StrafeForceMin;                                           // 0x05F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxStrafeSpeedKmh;                                        // 0x05F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StrafeTooFastBrakeForce;                                  // 0x05FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandedBrakeForce;                                         // 0x0600(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LiftForce;                                                // 0x0604(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxLiftSpeedKmh;                                          // 0x0608(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LiftTooFastBrakeForce;                                    // 0x060C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LateralDragCoefficient;                                   // 0x0610(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LateralDragCoefficient2;                                  // 0x0614(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LiftDragCoefficient;                                      // 0x0618(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LiftDragCoefficient2;                                     // 0x061C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxPitchForCameraYaw;                                     // 0x0620(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCameraYawAngle;                                        // 0x0624(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawStiff;                                           // 0x0628(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawDamp;                                            // 0x062C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraYawStrength;                                        // 0x0630(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UprightStiff;                                             // 0x0634(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              UprightDamp;                                              // 0x0638(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseVehiclePivotForCameraPitch;                           // 0x063C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	float                                              ThrustTorqueAnglePercent;                                 // 0x0640(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostThrustTorqueAnglePercent;                            // 0x0644(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThrustTorqueStiff;                                        // 0x0648(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThrustTorqueDamp;                                         // 0x064C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThrustTorqueMaxAccel;                                     // 0x0650(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ThrustTorque;                                             // 0x0654(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              YawTorque;                                                // 0x0658(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              YawTorqueDampingSpeed;                                    // 0x065C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostForce;                                               // 0x0660(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostMaxSpeedKmh;                                         // 0x0664(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostDuration;                                            // 0x0668(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostCooldown;                                            // 0x066C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostTorqueStiff;                                         // 0x0670(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostTorqueDamp;                                          // 0x0674(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AfterBoostBrakingForce;                                   // 0x0678(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AfterBoostBrakingDuration;                                // 0x067C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AfterBoostBrakingMinSpeed;                                // 0x0680(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PitchAngleRequiredForFullThrust;                          // 0x0684(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToGroundForLanding;                               // 0x0688(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StartupDelay;                                             // 0x068C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandingSequenceDelay;                                     // 0x0690(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorsRadius;                                             // 0x0694(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorsRadiusInner;                                        // 0x0698(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NoDriverBrakeForce;                                       // 0x069C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeBetweenRotorDamageTicks;                              // 0x06A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoLandingForce;                                         // 0x06A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorDamageBoxSweepLength;                                // 0x06A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalStateLiftForce;                                   // 0x06AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              IdleRotationMultiplier;                                   // 0x06B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LiftPitchDegrees;                                         // 0x06B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinAltitudeForIdleNoise;                                  // 0x06B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLinearDamp;                                        // 0x06BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultAngularDamp;                                       // 0x06C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandingLinearDamp;                                        // 0x06C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandingAngularDamp;                                       // 0x06C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandingLiftAlpha;                                         // 0x06CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalStateThrustMultiplier;                            // 0x06D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BodyUpDotThresholdForLanding;                             // 0x06D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CriticalHealthThreshold;                                  // 0x06D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DamagePerImpulseWhileCritical;                            // 0x06DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorImpulseLinear;                                       // 0x06E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorImpulseAngular;                                      // 0x06E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorImpulseCooldown;                                     // 0x06E8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StartupLift;                                              // 0x06EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StartupLiftTime;                                          // 0x06F0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAltitude;                                              // 0x06F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AltitudeForSpinning;                                      // 0x06F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorMaxSpeed;                                            // 0x06FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorAccel;                                               // 0x0700(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorDecel;                                               // 0x0704(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRotorSpeedForSkippingStartup;                          // 0x0708(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorSpeedForStartupLift;                                 // 0x070C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalLiftForceDecay;                                   // 0x0710(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalYawTorqueMin;                                     // 0x0714(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalYawTorqueMax;                                     // 0x0718(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalYawTorqueRampDuration;                            // 0x071C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorTraceRotationSpeed;                                  // 0x0720(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorTraceBoxSize;                                        // 0x0724(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorTraceBoxHeight;                                      // 0x0728(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCriticalFallForce;                                     // 0x072C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostFOV;                                                 // 0x0730(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GentleCrashTimeToExplode;                                 // 0x0734(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalTimeForGentleCrash;                               // 0x0738(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoLandingYawTorque;                                     // 0x073C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinHeightForAutoLandingYawTorque;                         // 0x0740(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinSpeedForScrapingBottom;                                // 0x0744(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalHealth;                                           // 0x0748(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FallDamageHeightBuffer;                                   // 0x074C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeBetweenRotorPlayerDamage;                             // 0x0750(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorMoveSpeedRequiredToUpdateTraceDirSqr;                // 0x0754(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FoliageTraceRate;                                         // 0x0758(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RotorWashTicksPerFrame;                                   // 0x075C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CriticalHitRadius;                                        // 0x0760(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AngleNormalUpForLockMovement;                             // 0x0764(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAutoLandingTime;                                       // 0x0768(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpeedThresholdForCrashed;                                 // 0x076C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0770(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AltitudeForSprings;                                       // 0x0774(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCrashingTime;                                          // 0x0778(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCrashingScrapingTime;                                  // 0x077C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCrashingTimeSpentNotMoving;                            // 0x0780(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LandscapeRotorImpulseMag;                                 // 0x0784(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HealthThresholdForLandscapeRotorImpulse;                  // 0x0788(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxHeightBuffer;                                          // 0x078C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bImpulseOnOuterRotorHitLandscape;                         // 0x0790(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSkipRotorImpulses;                                       // 0x0791(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCVarScaling;                                       // 0x0792(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0793(0x0001) MISSED OFFSET
	float                                              CVarScalingInterp;                                        // 0x0794(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     FoliageTraceBoxSize;                                      // 0x0798(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     WaterBoxSize;                                             // 0x07A4(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     WaterBoxOffset;                                           // 0x07B0(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector                                     RotorOffsetFromActorLocationOnServer;                     // 0x07BC(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSkipContactRotations;                                    // 0x07C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	struct FScalableFloat                              MaxAutoLandHeightWhenOutOfFuel;                           // 0x07D0(0x0020) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HoagieRuntime.FortHoagieVehicleConfigs");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

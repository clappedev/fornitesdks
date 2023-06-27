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

// Class ValetRuntime.FortCameraMode_Dagwood
// 0x0040 (0x0E10 - 0x0DD0)
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{
public:
	float                                              InAirVerticalOffset;                                      // 0x0DD0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirOffsetDampFactor;                                      // 0x0DD4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedAlphaDampFactor;                                     // 0x0DD8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeInAirRequiredForVertOffset;                           // 0x0DDC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VehicleBasePitch;                                         // 0x0DE0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizOffsetInterpSpeed;                                   // 0x0DE4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizOffsetInterpSpeedRecovery;                           // 0x0DE8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSpeedAlpha;                                        // 0x0DEC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentVerticalOffset;                                    // 0x0DF0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentHorizontalOffset;                                  // 0x0DF4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeInAir;                                                // 0x0DF8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviousSpeed;                                            // 0x0DFC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AppliedPitch;                                             // 0x0E00(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0E04(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortCameraMode_Dagwood");
		
		return ptr;
	}

};


// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// 0x0008 (0x00C8 - 0x00C0)
class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel");
		
		return ptr;
	}


	void HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);
	void HandleStartSkydivingForActivation();
};


// Class ValetRuntime.FortDagwoodVehicle
// 0x03E0 (0x1BB0 - 0x17D0)
class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x17D0(0x0010) MISSED OFFSET
	class UCameraShake*                                HardLandingCameraShake;                                   // 0x17E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraShake*                                OffroadCamShakeClass;                                     // 0x17E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraShake*                                DriverCamShakeClass;                                      // 0x17F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraShake*                                HandBrakeCamShakeClass;                                   // 0x17F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EVehicleClass                                      VehicleClass;                                             // 0x1800(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1801(0x0003) MISSED OFFSET
	float                                              NativeMinPontoonRadiusToSink;                             // 0x1804(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NativePontoonScaleTimeFront;                              // 0x1808(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NativePontoonScaleRadiusPerTick;                          // 0x180C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NativePontoonScaleTimeRear;                               // 0x1810(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NativeBasePontoonRadiusFront;                             // 0x1814(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NativeBasePontoonRadiusRear;                              // 0x1818(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeDelay;                                                // 0x181C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x1820(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBrakeForceForSkid;                                     // 0x1824(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinForwardSpeedForSkid;                                   // 0x1828(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SpeedLinesCueTag;                                         // 0x182C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              NormalizedRPM;                                            // 0x1834(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FadeStartTime;                                            // 0x1838(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x183C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x183C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ValetRuntime.FortDagwoodVehicle.OnOutOfFuelDelegate
	unsigned char                                      UnknownData04[0x10];                                      // 0x1850(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ValetRuntime.FortDagwoodVehicle.OnGainedFuelDelegate
	float                                              RechargeableBoostPercent;                                 // 0x1860(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              BoostEndTime;                                             // 0x1864(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UFortSplatterSourceComponent*                SplatterSourceComp;                                       // 0x1868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FCachedWaterData                            WaterBodyDataCache;                                       // 0x1870(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient)
	EFuelLeakType                                      FuelLeakType;                                             // 0x18A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableNativizedTick;                                     // 0x18A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x18AA(0x0006) MISSED OFFSET
	TArray<struct FName>                               PassengerLeanSockets;                                     // 0x18B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             PassngerLeanRelativeOffsets;                              // 0x18C0(0x0010) (Edit, ZeroConstructor)
	class UFortCameraMode_AthenaVehicle*               PassengerCameraModeClass;                                 // 0x18D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFortCameraMode*                             PassengerCameraModeClass_ADS;                             // 0x18D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               WheelSocketNames;                                         // 0x18E0(0x0010) (Edit, ZeroConstructor)
	class UFortDagwoodVehicleConfigs*                  FortDagwoodVehicleConfigs;                                // 0x18F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UFortDagwoodVehicleConfigs*                  FortDagwoodConfigsClass;                                  // 0x18F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        RearShocks;                                               // 0x1900(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       OffroadEnvironmentDamageTags;                             // 0x1910(0x0020) (Edit)
	struct FGameplayTagContainer                       FireDamageTags;                                           // 0x1930(0x0020) (Edit)
	struct FVector                                     NativeWheelScaleRear;                                     // 0x1950(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NativeWheelScaleFront;                                    // 0x195C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NativeTireScaleRear;                                      // 0x1968(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NativeTireScaleFront;                                     // 0x1974(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTireSmokeActive;                                         // 0x1980(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBoostFailed;                                             // 0x1981(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanBoostPitch;                                           // 0x1982(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOnRoad;                                                  // 0x1983(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOnLandscape;                                             // 0x1984(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOnDirt;                                                  // 0x1985(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOnVehicle;                                               // 0x1986(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasBrakeSkidding;                                        // 0x1987(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	uint64_t                                           AccelForceFeedbackHandle;                                 // 0x1988(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint64_t                                           SkidForceFeedbackHandle;                                  // 0x1990(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint64_t                                           BrakeForceFeedbackHandle;                                 // 0x1998(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint64_t                                           HandBrakeForceFeedbackHandle;                             // 0x19A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<ETireSurfaces>                              TireSurfaces;                                             // 0x19A8(0x0010) (ZeroConstructor, Transient)
	bool                                               bBoosting;                                                // 0x19B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpeedLinesActive;                                        // 0x19B9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xE];                                       // 0x19BA(0x000E) MISSED OFFSET
	struct FVector                                     FlipYawForwardTargetDirection;                            // 0x19C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FlipYawOriginalForward;                                   // 0x19D4(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	ETireLocations                                     LastPoppedTire;                                           // 0x19E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x19E1(0x0003) MISSED OFFSET
	float                                              RoadTopSpeedMultplier;                                    // 0x19E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentBumpiness;                                         // 0x19E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentForwardAcceleration;                               // 0x19EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreviousTurnAlpha;                                        // 0x19F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentCameraAssistStrength;                              // 0x19F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LostGripTime;                                             // 0x19F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LostGripRightAlpha;                                       // 0x19FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HandbrakeTime;                                            // 0x1A00(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RimScrapeDamageTimer;                                     // 0x1A04(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipYawMult;                                              // 0x1A08(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipTimer;                                                // 0x1A0C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipExplodeTimer;                                         // 0x1A10(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipPushForceTimer;                                       // 0x1A14(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipAirTimer;                                             // 0x1A18(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipLanding;                                              // 0x1A1C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FlipStartTime;                                            // 0x1A20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastFlipDamageTime;                                       // 0x1A24(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PreFlipControlLossTimer;                                  // 0x1A28(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastPopTireTime;                                          // 0x1A2C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthZeroTime;                                           // 0x1A30(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NativePontoonScaleTimerFront;                             // 0x1A34(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NativePontoonScaleTimerRear;                              // 0x1A38(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NativeScaledFrontPontoonRadius;                           // 0x1A3C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              NativeScaledRearPontoonRadius;                            // 0x1A40(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDidCinematicFlip;                                        // 0x1A44(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanCinematicFlip;                                        // 0x1A45(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInPopTireVeer;                                           // 0x1A46(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInFlipRecovery;                                          // 0x1A47(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExplodeAfterFlip;                                        // 0x1A48(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLostGrip;                                                // 0x1A49(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bApplyHandBrakeCatchupForce;                              // 0x1A4A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDidHandbrakeCatchup;                                     // 0x1A4B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInFlipRoll;                                              // 0x1A4C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInFlipYaw;                                               // 0x1A4D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInFlipPitch;                                             // 0x1A4E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFlipDidLeaveGround;                                      // 0x1A4F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBreakBuildingsIfBlockingLeaningPassenger;                // 0x1A50(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1A51(0x0003) MISSED OFFSET
	float                                              LeanBreakTimeAccumulator;                                 // 0x1A54(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeanBreakCheckInterval;                                   // 0x1A58(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1A5C(0x0004) MISSED OFFSET
	TArray<struct FName>                               SeatToWindowShapeNames;                                   // 0x1A60(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UCameraShake*                                OffroadCameraShakeInstance;                               // 0x1A70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCameraShake*                                DriverCameraShakeInstance;                                // 0x1A78(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCameraShake*                                AccelCameraShakeInstance;                                 // 0x1A80(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCameraShake*                                HandBrakeCameraShakeInstance;                             // 0x1A88(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNiagaraComponent*                           NativeComp_RoadAndExhaust;                                // 0x1A90(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           NativeComp_LowFuelSputter;                                // 0x1A98(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           NativeComp_Damage;                                        // 0x1AA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           NativeComp_SpeedLines;                                    // 0x1AA8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UNiagaraSystem*                              TireExhaustFX;                                            // 0x1AB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              NativeSys_LowFuelSputter;                                 // 0x1AB8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              NativeSys_SpeedLines;                                     // 0x1AC0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x1AC8(0x0010) MISSED OFFSET
	class UFortAthenaVehicleFuelComponent*             FuelComponent;                                            // 0x1AD8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x1AE0(0x0008) MISSED OFFSET
	TArray<ETireStates>                                TireStates;                                               // 0x1AE8(0x0010) (Net, ZeroConstructor, Transient)
	EPoppedTireReactionStates                          ActivePoppedTireReaction;                                 // 0x1AF8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EPoppedTireReactionStates                          ServerPoppedTireReaction;                                 // 0x1AF9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExploded;                                                // 0x1AFA(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x1AFB(0x0001) MISSED OFFSET
	float                                              ServerCriticalHealth;                                     // 0x1AFC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AController>                  KillerController;                                         // 0x1B00(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       KillerCauser;                                             // 0x1B08(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x50];                                      // 0x1B10(0x0050) UNKNOWN PROPERTY: SetProperty ValetRuntime.FortDagwoodVehicle.PlayersBasedOnVehicle
	unsigned char                                      UnknownData14[0x4];                                       // 0x1B60(0x0004) MISSED OFFSET
	bool                                               bIsInoperable;                                            // 0x1B64(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1B65(0x0003) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x1B68(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FRandomStream                               RandStream;                                               // 0x1B6C(0x0008) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1B74(0x0004) MISSED OFFSET
	class UStaticMesh*                                 TireBootMesh;                                             // 0x1B78(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x30];                                      // 0x1B80(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortDagwoodVehicle");
		
		return ptr;
	}


	void UpdateVehicleFuelLeak();
	void StartFade();
	void SetOnFire(bool bNewFire);
	void SetNormalizedAudioRPM(float InRPM);
	void SetFuel(float NewFuel);
	void OnTickAudioFade(float FadeParam);
	void OnTickAudioController(float DeltaTime);
	void OnStopHandbrake();
	void OnStartHandbrake();
	void OnStartCriticalHealth();
	void OnSpawnLeakProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnServerAltInteract(class AFortPawn* Pawn);
	void OnRimScrapeDamage(int TireIndex);
	void OnRep_Tires(TArray<ETireStates> PrevTireStates);
	void OnRep_RandSeed();
	void OnRep_PoppedTireReaction();
	void OnRep_IsInoperable();
	void OnRep_Exploded();
	void OnPoppedTire(int TireIndex);
	void OnLowFuel();
	void OnLeakingFuelStop();
	void OnLeakingFuelStart();
	void OnInoperableChanged(bool bInoperable);
	void OnGainedFuel(float NewPercent);
	void OnFlipImpactDamage();
	void OnFireStop();
	void OnFireStart();
	void OnExplode();
	void OnExitRoad();
	void OnExitLandscape();
	void OnEnterLandscape();
	void OnEnteredRoad();
	void OnEmptyFuel();
	void OnDestroyedPropFromCollision(class ABuildingActor* BuildingHitActor);
	void OnClientBeginAltInteract(class AFortPawn* Pawn);
	void OnBoostReady();
	void OnBoostFailed();
	void NativeOnOutOfFuel();
	void NativeOnLowFuel();
	void NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent);
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity);
	void MakeOperable(bool bAddGas);
	void MakeInoperable();
	bool IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold);
	bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking);
	bool IsOnRoad();
	bool IsOnLandscape();
	bool IsOnDirt();
	bool IsOffroad();
	bool IsNativeBPTickEnabled();
	bool IsInoperable();
	ETireSurfaces GetTireSurface(ETireLocations TireIndex);
	bool GetTireState(int TireIndex);
	float GetTireHealthPercent(ETireLocations TireIndex);
	struct FString GetPlayerFacingName();
	bool GetOnFire();
	float GetNormalizedAudioRPM();
	float GetHUDTopSpeed();
	float GetFuelCapacity();
	float GetFuel();
	float GetBumpiness();
	bool ForwardOrReverseInputPressed();
	void CleanupLoopingPooledFX();
	void BP_OnBoostStarted();
	void BP_OnBoostFinished();
	bool AreAnyTiresPopped();
};


// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// 0x0040 (0x0410 - 0x03D0)
class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class AFortDagwoodVehicle*                         Dagwood;                                                  // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     GlassScale_FR;                                            // 0x03D8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     GlassScale_FL;                                            // 0x03E4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     GlassScale_BR;                                            // 0x03F0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     GlassScale_BL;                                            // 0x03FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortDagwoodVehicleAnimInstance");
		
		return ptr;
	}

};


// Class ValetRuntime.FortDagwoodVehicleConfigs
// 0x01E8 (0x0800 - 0x0618)
class UFortDagwoodVehicleConfigs : public UFortSKMotorVehicleConfigs
{
public:
	float                                              BoostMinPushForce;                                        // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostTopSpeedForceMultiplier;                             // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostTopSpeedMultiplier;                                  // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostWaterMultiplier;                                     // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehiclePowerSlideFrontMultiplier;                         // 0x0628(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehiclePowerSlideRearMultiplier;                          // 0x062C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeGripAngle;                                       // 0x0630(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeGripAngleRecovery;                               // 0x0634(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeSpeedForGripLoss;                                // 0x0638(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinSlipDuration;                                          // 0x063C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeLateralFriction;                                 // 0x0640(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeSteeringMultiplier;                              // 0x0644(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeFrictionDampFactor;                              // 0x0648(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RestoreTractionDampFactor;                                // 0x064C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeForce;                                           // 0x0650(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HandbrakeForceNoAccel;                                    // 0x0654(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostSteeringMultiplier;                                  // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadTopSpeedMultiplier;                               // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadFrontLateralFriction;                             // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadRearLateralFriction;                              // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadAccelForceMultiplier;                             // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadFakeBumpinessMultiplier;                          // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffRoadTopSpeedMultiplier;                                // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffRoadFrontLateralFriction;                              // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffRoadRearLateralFriction;                               // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffRoadPushForceMultiplier;                               // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadDamageImpactForceMin;                              // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadDamageImpactForceMax;                              // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadImpactDamageMin;                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadImpactDamageMax;                                   // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinSpeedForOffroadHandling;                               // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FireHealthPercentThreshold;                               // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinBumpinessSpringHitTimeMultiplier;                      // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxBumpinessSpringHitTimeMultiplier;                      // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BumpinessExponentForShocks;                               // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadRumbleIntensity;                                   // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DirtRoadRumbleIntensity;                                  // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              OffroadDamageScaleExponent;                               // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HardLandingThresholdMin;                                  // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HardLandingThresholdMax;                                  // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HardLandingShakeZAmplitudeMin;                            // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HardLandingShakeZAmplitudeMax;                            // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpeedLinesThreshold;                                      // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              PropDestructionImpulse;                                   // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DestructionAngle;                                         // 0x06C8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              UpNormalMinProtected;                                     // 0x06CC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              UpForwardMinProtected;                                    // 0x06D0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              NonCameraSteeringAngleMultiplier;                         // 0x06D4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAssistStrengthMax;                                  // 0x06D8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAssistStrengthMin;                                  // 0x06DC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAssistStrengthRecovery;                             // 0x06E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAssistInterpSpeed;                                  // 0x06E4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReverseChangeDirectionBrakeForceMultiplier;               // 0x06E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ReverseChangeDirectionSpeedThreshold;                     // 0x06EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DriftExitPushForce;                                       // 0x06F0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              DriftExitCatchupSpeed;                                    // 0x06F4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HandbrakeDurationRequiredForCatchup;                      // 0x06F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactMagnitudeToEndCatchup;                              // 0x06FC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireSpringLength;                                   // 0x0700(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireSpringStiff;                                    // 0x0704(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireSpringDamp;                                     // 0x0708(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireTractionMultiplier_StageOne;                    // 0x070C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireTractionMultiplier_StageTwo;                    // 0x0710(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireTractionMultiplier_Min;                         // 0x0714(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireScrapeFrictionMultiplier;                       // 0x0718(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedForRimScrapeDamage;                               // 0x071C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RimScrapeDamageRate;                                      // 0x0720(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RimScrapeFlipRollMagnitude;                               // 0x0724(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RimScrapeFlipPitchMagnitude;                              // 0x0728(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedForRimFlip;                                          // 0x072C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentForFlip;                                     // 0x0730(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipYawDuration;                                          // 0x0734(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipRollDuration;                                         // 0x0738(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPitchDuration;                                        // 0x073C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipExplodeDuration_Yaw;                                  // 0x0740(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipExplodeDuration_Pitch;                                // 0x0744(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPushForceDuration_Yaw;                                // 0x0748(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPushForceDuration_Pitch;                              // 0x074C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPushForcMultiplier;                                   // 0x0750(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPushForce_UpComponentPitch;                           // 0x0754(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPushForce_UpComponentRoll;                            // 0x0758(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeInAirRequiredForExplodeLanding;                    // 0x075C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipYawSpringStiff;                                       // 0x0760(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipYawSpringDamp;                                        // 0x0764(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipYawSpringMaxAccel;                                    // 0x0768(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPercentForExplode;                                  // 0x076C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipRecoveryTime;                                         // 0x0770(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipMaxDuration;                                          // 0x0774(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipWiggleDuration;                                       // 0x0778(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireVeerDuration;                                   // 0x077C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PoppedTireVeerSteeringAngle;                              // 0x0780(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipWiggleFrequency;                                      // 0x0784(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipWiggleSteeringAngle;                                  // 0x0788(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipYawAngleThreshold;                                    // 0x078C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesBoost;                                               // 0x0790(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0791(0x0003) MISSED OFFSET
	float                                              RechargeableBoostRateOfUse;                               // 0x0794(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RechargeableBoostRateOfRegen;                             // 0x0798(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostRateOfRegenMinMultiplier;                            // 0x079C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostRateOfRegenMaxMultiplier;                            // 0x07A0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostRegenMaxMultiplyTime;                                // 0x07A4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RechargeableBoostRequiredPercentToActivate;               // 0x07A8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RechargeableBoostMaxPercent;                              // 0x07AC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RechargeableBoostMinPercent;                              // 0x07B0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                NumWheelsOnSurfaceRequired;                               // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FuelLeakProjectileTimeInterval;                           // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FuelLeakHealthPercentThreshold;                           // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              ServerExtraHealth;                                        // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxTimeZeroHealth;                                        // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxTimeExplosion;                                         // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HUDTopSpeed;                                              // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              AnalogDriftStickThreshold;                                // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       TireBootRightSocketName;                                  // 0x07D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       TireBootLeftSocketName;                                   // 0x07DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              TireBootRelativeDistance;                                 // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostForceInAir;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BoostAirMaxSpeed;                                         // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     PlayerFacingName;                                         // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortDagwoodVehicleConfigs");
		
		return ptr;
	}

};


// Class ValetRuntime.FortDagwoodVehicleManager
// 0x0008 (0x00B8 - 0x00B0)
class UFortDagwoodVehicleManager : public UGameStateComponent
{
public:
	bool                                               bHasUpdatedPropReplacement;                               // 0x00B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortDagwoodVehicleManager");
		
		return ptr;
	}


	void UpdatePropReplacement();
	void SetVehicleFuel(float NewFuel);
	void ServerSetVehicleFuel(float NewFuel);
	void OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, int NewVehicleCount, TArray<class AActor*>* SpawnedVehicles);
	void OnVehicleSpawned(class AFortAthenaVehicle* Vehicle);
	void CustomHandleActorStreamedInEditor(class AActor* SourceActor);
};


// Class ValetRuntime.FortValetAudioController
// 0x0120 (0x0340 - 0x0220)
class AFortValetAudioController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ValetRuntime.FortValetAudioController.OnEngineLoadChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ValetRuntime.FortValetAudioController.OnShiftGearCompleted
	unsigned char                                      UnknownData02[0x10];                                      // 0x0240(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ValetRuntime.FortValetAudioController.OnShiftGearDelegate
	float                                              RPMResetTime_Native;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JitterAmount_Native;                                      // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShiftTimeThreshold_Native;                                // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceShift_Native;                                    // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineRPMInterp_Native;                                   // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineRPMLinear_Native;                                   // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRPMRange_Native;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRPMRange_Native;                                       // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCurrentlyShifting_Native;                                // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              CurrentAccelRateGearModifier_Native;                      // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAccelRate_Native;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentGear_Native;                                       // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxGear_Native;                                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAccelRateScalar_Native;                            // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GearAttackInterpSpeed_Native;                             // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GearReleaseInterpSpeed_Native;                            // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelRateScalarFirstGear_Native;                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelRateScalarMinGear_Native;                            // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelRateScalarMaxGear_Native;                            // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShiftToRPMStart_Native;                                   // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShiftToRPMEnd_Native;                                     // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShiftFromRPMStart_Native;                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShiftFromRPMEnd_Native;                                   // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRPMSawtoothDecrement_Native;                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRPMSawtoothRepeatTime_Native;                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownhillAccelScalar_Native;                               // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UphillAccelScalar_Native;                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedSpeed_Native;                                   // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspValue_Native;                                         // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHandbraking_Native;                                    // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	float                                              MotoSynthVolume_Native;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotoSynthLogRPM_Native;                                   // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFuel_Native;                                          // 0x02D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInWater_Native;                                        // 0x02D1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalPlayerInVehicle_Native;                             // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x02D3(0x0001) MISSED OFFSET
	float                                              TimeLocalPlayerEnteredVehicle_Native;                     // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttemptingDirectionChange_Native;                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreDestroy_Native;                                       // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEngineLoad_Native;                                       // 0x02DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x02DB(0x0001) MISSED OFFSET
	float                                              SkidAmount_Native;                                        // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceAwoken_Native;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyed_Native;                                        // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	float                                              TimeSinceSurfaceChange_Native;                            // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class USoundBase*                                  OnInitialSuspensionSound;                                 // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleForSkidding_Native;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringCompressionMultiplier;                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotoSynthMaxVolume_Native;                                // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class AFortDagwoodVehicle>          ValetVehicle;                                             // 0x0304(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UFortLayeredAudioComponent*                  Engine_Native;                                            // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BoostAudioComponent_Native;                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USynthComponentMoto*                         SynthComponentMoto_Native;                                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                SuspensionCollisionComponent_Native;                      // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortValetAudioController");
		
		return ptr;
	}


	void Update_Native();
	void OnSuspensionCollision_Native(bool* OutResult, float* OutMagnitude);
	void CacheValetVehicle(class AFortDagwoodVehicle* InVehicle);
};


// Class ValetRuntime.FortValetGameFeatureData
// 0x0080 (0x03F0 - 0x0370)
class UFortValetGameFeatureData : public UFortGameFeatureData
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) UNKNOWN PROPERTY: MapProperty ValetRuntime.FortValetGameFeatureData.PropReplacements
	unsigned char                                      UnknownData01[0x28];                                      // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftClassProperty ValetRuntime.FortValetGameFeatureData.VehicleSpawnerClass
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        // 0x03E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortValetGameFeatureData");
		
		return ptr;
	}

};


// Class ValetRuntime.FortValetPassengerAnimInstance
// 0x0070 (0x0670 - 0x0600)
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0600(0x0014) MISSED OFFSET
	struct FCachedAnimRelevancyData                    OutOfVehicleCachedData;                                   // 0x0614(0x001C) (Edit)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0630(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ValetRuntime.FortValetPassengerAnimInstance.DagwoodVehicleInstance
	float                                              TurnYaw;                                                  // 0x0658(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InTime;                                                   // 0x065C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              OutTime;                                                  // 0x0660(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              NegativeTurnYaw;                                          // 0x0664(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsReloading;                                             // 0x0668(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTargeting;                                             // 0x0669(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFiring;                                                // 0x066A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUsingConsumable;                                       // 0x066B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInAction;                                              // 0x066C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPassengerBackLeft;                                     // 0x066D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsThrowConsumable;                                       // 0x066E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTargetingOrThrowingConsumable;                         // 0x066F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ValetRuntime.FortValetPassengerAnimInstance");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

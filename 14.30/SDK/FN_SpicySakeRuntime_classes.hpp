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

// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
// 0x0000 (0x0118 - 0x0118)
class UFortSpicySakeComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry");
		
		return ptr;
	}

};


// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
// 0x0040 (0x0800 - 0x07C0)
class AFortSpicySakeGameplayCueNotifyLoop_Alive : public AFortGameplayCueNotify_Loop
{
public:
	class UFXSystemComponent*                          WaterFX_Native;                                           // 0x07C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFXSystemComponent*                          LandFX_Native;                                            // 0x07C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFortLayeredAudioComponent*                  FortLayerAudio_Native;                                    // 0x07D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AFortAIPawn*                                 TargetAIPawn_Native;                                      // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bComputeWaterDepth;                                       // 0x07E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E1(0x0003) MISSED OFFSET
	float                                              TetheredVolumeMultiplier;                                 // 0x07E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SoundSurfaceTypeCount;                                    // 0x07E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityClampingMinimum;                                  // 0x07EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityClampingMaximum;                                  // 0x07F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x07F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive");
		
		return ptr;
	}

};


// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
// 0x0020 (0x0310 - 0x02F0)
class UFortSpicySakeOccupantAnimInstanceLayer : public UFortBaseLayerAnimInstance
{
public:
	float                                              GroundIdleThreshold;                                      // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundIdleLowThreshold;                                   // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalVelocityYawAngleTurnResetThreshold;                  // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalVelocityYawAngleTurnTransitionThreshold;             // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalVelocityYawAngle;                                    // 0x0300(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PawnSpeed2D;                                              // 0x0304(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PawnVelocityZ;                                            // 0x0308(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsFemale : 1;                                            // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsOnGround : 1;                                          // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsOnWater : 1;                                           // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bLandingPredicted : 1;                                    // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransition_NewFallAditive_NewFallLandAdditive : 1;       // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransitionNewJumpLoopAdditiveToNewFallAdditive : 1;      // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bShouldApplyIdleAdditive : 1;                             // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsTargeting : 1;                                         // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsPlayerCloseToShark : 1;                                // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsBoosting : 1;                                          // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bCanTurnLeft : 1;                                         // 0x030D(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      bCanTurnRight : 1;                                        // 0x030D(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      bTransition_RideLoop_TurnLeft : 1;                        // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransition_RideLoop_TurnRight : 1;                       // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsReloading : 1;                                         // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsPlayingMeleeAnim : 1;                                  // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsPlayingEmote : 1;                                      // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bShouldPlayOnGroundIdle : 1;                              // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bShouldPlayOnGroundIdleLow : 1;                           // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsJumping : 1;                                           // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bCanUseTargettingStateMachine : 1;                        // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransition_SharRideLoop_To_JumpUp : 1;                   // 0x030E(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x030F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer");
		
		return ptr;
	}

};


// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
// 0x0020 (0x0310 - 0x02F0)
class UFortSpicySakeVehicleAnimInstance : public UFortBaseAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F0(0x0004) MISSED OFFSET
	float                                              LocalVelocityYawAngle;                                    // 0x02F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ForwardSpeed;                                             // 0x02F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpSpeed;                                                  // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SmoothJumpPitch;                                          // 0x0300(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SmoothJumpPitchDeltaRate;                                 // 0x0304(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentBoostRateScale;                                    // 0x0308(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsJumping : 1;                                           // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsSurfaceSwimming : 1;                                   // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsOnGround : 1;                                          // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsFalling : 1;                                           // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsCharging : 1;                                          // 0x030C(0x0001) (BlueprintVisible, Transient)
	unsigned char                                      bOnGroundNotMoving : 1;                                   // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bLanded : 1;                                              // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bIsBoosting : 1;                                          // 0x030C(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bStartBoosting : 1;                                       // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransition_Idle_To_Boost : 1;                            // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bTransition_Boost_To_Idle : 1;                            // 0x030D(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x2];                                       // 0x030E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

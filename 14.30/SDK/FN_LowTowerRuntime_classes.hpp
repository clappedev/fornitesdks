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

// Class LowTowerRuntime.FortHardyAnimInstance
// 0x0100 (0x03F0 - 0x02F0)
class UFortHardyAnimInstance : public UFortBaseAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F0(0x0004) MISSED OFFSET
	float                                              VentSpinRateDirect;                                       // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYawOffsetRemapA;                              // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYawOffsetRemapB;                              // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckXRotOffset;                                           // 0x0300(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NeckRotationOffset;                                       // 0x0304(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckRotationOffsetSpeed;                                  // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckTurnAlpha;                                            // 0x0314(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckTurnTarget;                                           // 0x0318(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NeckRotationSpeed;                                        // 0x031C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYawDurationRemapA;                            // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYawDurationRemapB;                            // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0328(0x0004) MISSED OFFSET
	float                                              EyeAccentAlpha;                                           // 0x032C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeAccentInterpSpeed;                                     // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeAccentDurationWhenCanNotEyeDart;                       // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeAccentDurationWhenCanEyeDart;                          // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FName                                       EyeLaunchPoseCurveName;                                   // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeLaunchPoseMaxPitch;                                    // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EyeRotLaunchValue;                                        // 0x034C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       TargetPawn;                                               // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HardyEyeSocketName;                                       // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DisableEyeTrackingCurveName;                              // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeTrackingTargetSpeed;                                   // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EyeTrackingTargetAlpha;                                   // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EyeTrackingTargetRotationOffset;                          // 0x0380(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EyeTrackingTargetRotationTarget;                          // 0x038C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HardyHeadSocketName;                                      // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DisableHeadTrackingCurveName;                             // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadTrackingTargetSpeed;                                  // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadTrackingTargetAlpha;                                  // 0x03AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HeadTrackingTargetRotationOffset;                         // 0x03B0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HeadTrackingTargetRotationTarget;                         // 0x03BC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkydivingDirection>                   TurnDirection;                                            // 0x03C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              HeadingAngle;                                             // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDesiredYaw;                                        // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoamingCurrentYaw;                                        // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYaw;                                          // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoamingDeltaYawSnapshot;                                  // 0x03DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsStopped : 1;                                           // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsTurning : 1;                                           // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCanStartTurning : 1;                                     // 0x03E0(0x0001) (Transient)
	unsigned char                                      bHasTarget : 1;                                           // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCanEyeDart : 1;                                          // 0x03E0(0x0001) (Edit)
	unsigned char                                      UnknownData04[0xF];                                       // 0x03E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LowTowerRuntime.FortHardyAnimInstance");
		
		return ptr;
	}

};


// Class LowTowerRuntime.FortHardyComponent_Telemetry
// 0x0008 (0x0120 - 0x0118)
class UFortHardyComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:
	EHardyExtractionReason                             ExtractionReason;                                         // 0x0118(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LowTowerRuntime.FortHardyComponent_Telemetry");
		
		return ptr;
	}


	void SetExtractionReason(EHardyExtractionReason Reason);
};


// Class LowTowerRuntime.FortLaurelAnimInstance
// 0x00C0 (0x03B0 - 0x02F0)
class UFortLaurelAnimInstance : public UFortBaseAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F0(0x0004) MISSED OFFSET
	float                                              DefaultAggroPitch;                                        // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringAlphaTarget;                                        // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringAlphaInterpSpeed;                                   // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DynamicLegRotationSpeedUpdateRate;                        // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DynamicLegRotationSpeedWithItem;                          // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DynamicLegRotationSpeedWithoutItemMin;                    // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DynamicLegRotationSpeedWithoutItemMax;                    // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DynamicLegRotationInterpSpeed;                            // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0314(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HorizontalSpeed;                                          // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0324(0x000C) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0330(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // 0x0360(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // 0x036C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeanDirection;                                            // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AggroPitch;                                               // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AggroPitchAlpha;                                          // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0384(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	float                                              SpawnYaw;                                                 // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpawnPitch;                                               // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              SpringAlpha;                                              // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DynamicLegRotationSpeed;                                  // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DynamicLegRotationSpeedSmooth;                            // 0x0398(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DynamicLegRotation;                                       // 0x039C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x03A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasItemInInventory;                                      // 0x03A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPawnIsDestroyingBuildingForNav;                          // 0x03A2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasPawnGoal;                                             // 0x03A3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DynamicLegRotationSpeedUpdateTime;                        // 0x03A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      GoalActor;                                                // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LowTowerRuntime.FortLaurelAnimInstance");
		
		return ptr;
	}


	void SetLaurelInformation(bool bInHasItemInInventory, bool bInPawnIsDestroyingBuildingForNav, bool bInHasPawnGoal, class AActor* InGoalActor);
	void SetAnimInstanceInformation(bool bInIsActive);
};


// Class LowTowerRuntime.FortLaurelComponent_Telemetry
// 0x0008 (0x0120 - 0x0118)
class UFortLaurelComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:
	ELaurelType                                        LaurelType;                                               // 0x0118(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ELaurelExtractionReason                            ExtractionReason;                                         // 0x0119(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LowTowerRuntime.FortLaurelComponent_Telemetry");
		
		return ptr;
	}


	void SetLaurelType(ELaurelType Type);
	void SetExtractionReason(ELaurelExtractionReason Reason);
	void OnDropAllItems(TEnumAsByte<ELaurelDropItemReason> DropItemReason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

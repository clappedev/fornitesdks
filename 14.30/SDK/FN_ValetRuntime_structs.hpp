#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ValetRuntime.EVehicleClass
enum class EVehicleClass : uint8_t
{
	Sedan                          = 0,
	Sport                          = 1,
	PickupTruck                    = 2,
	SemiTruck                      = 3,
	EVehicleClass_MAX              = 4
};


// Enum ValetRuntime.ETireSurfaces
enum class ETireSurfaces : uint8_t
{
	Road                           = 0,
	Dirt                           = 1,
	Grass                          = 2,
	Air                            = 3,
	Water                          = 4,
	ETireSurfaces_MAX              = 5
};


// Enum ValetRuntime.ETireLocations
enum class ETireLocations : uint8_t
{
	FrontRight                     = 0,
	FrontLeft                      = 1,
	BackRight                      = 2,
	BackLeft                       = 3,
	ETireLocations_MAX             = 4
};


// Enum ValetRuntime.EPoppedTireReactionStates
enum class EPoppedTireReactionStates : uint8_t
{
	None                           = 0,
	VeerLeft                       = 1,
	VeerRight                      = 2,
	Wiggle                         = 3,
	Yaw90                          = 4,
	FlipPitch                      = 5,
	FlipRoll                       = 6,
	EPoppedTireReactionStates_MAX  = 7
};


// Enum ValetRuntime.EFuelLeakType
enum class EFuelLeakType : uint8_t
{
	None                           = 0,
	GenericFromBetweenRearTires    = 1,
	EFuelLeakType_MAX              = 2
};


// Enum ValetRuntime.ETireStates
enum class ETireStates : uint8_t
{
	Default                        = 0,
	Popped                         = 1,
	ETireStates_MAX                = 2
};


// Enum ValetRuntime.EControlsPrototypes
enum class EControlsPrototypes : uint8_t
{
	CameraSteering                 = 0,
	NonCameraSteering              = 1,
	HybridCameraSteering           = 2,
	MaxCount                       = 3,
	EControlsPrototypes_MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ValetRuntime.CachedWaterData
// 0x0038
struct FCachedWaterData
{
	struct FVector                                     PlaneLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SurfacePosition;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterVelocity;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WaterBodyIndex;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ValetRuntime.RuntimeBoostInfo
// 0x0010
struct FRuntimeBoostInfo
{
	bool                                               bCanBoost;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BoostPushForce;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostTopSpeedForceMultiplier;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostTopSpeedMultiplier;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ValetRuntime.RuntimeFuelInfo
// 0x000C
struct FRuntimeFuelInfo
{
	float                                              MaxFuel;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelPerSecondDriving;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelPerSecondBoosting;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ValetRuntime.RuntimeSpringsInfo
// 0x000C
struct FRuntimeSpringsInfo
{
	float                                              SpringStiffMultiplier;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDampMultiplier;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringLengthMultiplier;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ValetRuntime.RuntimeGearInfo
// 0x0010
struct FRuntimeGearInfo
{
	int                                                GearIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TopSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForce;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ValetRuntime.VehicleRuntimeModifiers
// 0x0048
struct FVehicleRuntimeModifiers
{
	struct FRuntimeBoostInfo                           BoostInfo;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRuntimeFuelInfo                            FuelInfo;                                                 // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRuntimeSpringsInfo                         SpringsInfo;                                              // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GravityMultiplier;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxInclineAngle;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTiltAngle;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FRuntimeGearInfo>                    GearInfos;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ValetRuntime.ValetUpdateContext
// 0x0014
struct FValetUpdateContext
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ValetRuntime.VehiclePropReplacementData
// 0x0040
struct FVehiclePropReplacementData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ValetRuntime.VehiclePropReplacementData.FortVehicleItemDefinition
	struct FVector                                     TransOffset;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotOffset;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

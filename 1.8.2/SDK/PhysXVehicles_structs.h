#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010
struct FTireConfigMaterialFriction
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0010 (0x0470 - 0x0460)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0460(0x0010) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0020
struct FWheelSetup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090
struct FVehicleEngineData
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

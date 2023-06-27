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

// Enum EntityCore.EMovementType
enum class EMovementType : uint8_t
{
	SweepPhysics                   = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	EMovementType_MAX              = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EntityCore.ComponentData
// 0x0001
struct FComponentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
// 0x000F (0x0010 - 0x0001)
struct FEntityCoreSystemRelativePositionComponentData : public FComponentData
{
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct EntityCore.EntityScaleComponentData
// 0x000B (0x000C - 0x0001)
struct FEntityScaleComponentData : public FComponentData
{
	struct FVector                                     WorldScale3D;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EntityCore.EntityRotationComponentData
// 0x000B (0x000C - 0x0001)
struct FEntityRotationComponentData : public FComponentData
{
	struct FRotator                                    WorldRotation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EntityCore.EntityPositionComponentData
// 0x000B (0x000C - 0x0001)
struct FEntityPositionComponentData : public FComponentData
{
	struct FVector                                     WorldPosition;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EntityCore.EntityTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEntityTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

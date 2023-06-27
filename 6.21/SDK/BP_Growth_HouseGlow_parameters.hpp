#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.UserConstructionScript
struct ABP_Growth_HouseGlow_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage5
struct ABP_Growth_HouseGlow_C_PortalStage5_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage6
struct ABP_Growth_HouseGlow_C_PortalStage6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage2
struct ABP_Growth_HouseGlow_C_PortalStage2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage4
struct ABP_Growth_HouseGlow_C_PortalStage4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage3
struct ABP_Growth_HouseGlow_C_PortalStage3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage1
struct ABP_Growth_HouseGlow_C_PortalStage1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.EnablePortal
struct ABP_Growth_HouseGlow_C_EnablePortal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.EnableHouseGlow
struct ABP_Growth_HouseGlow_C_EnableHouseGlow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ReceiveBeginPlay
struct ABP_Growth_HouseGlow_C_ReceiveBeginPlay_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.On Amb Cube Zap
struct ABP_Growth_HouseGlow_C_On_Amb_Cube_Zap_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterTime;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ActivateDiemosAmbient
struct ABP_Growth_HouseGlow_C_ActivateDiemosAmbient_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4D (0x4D - 0x0)
// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ExecuteUbergraph_BP_Growth_HouseGlow
struct ABP_Growth_HouseGlow_C_ExecuteUbergraph_BP_Growth_HouseGlow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2355[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_EventName;                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_EmitterTime;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x24(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Velocity;                       // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2356[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x40(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Active;                         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

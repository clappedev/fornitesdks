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
// Function B_Glider_Reaper.B_Glider_Reaper_C.UserConstructionScript
struct AB_Glider_Reaper_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Glider_Reaper.B_Glider_Reaper_C.ReceiveBeginPlay
struct AB_Glider_Reaper_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Glider_Reaper.B_Glider_Reaper_C.FireDynamics
struct AB_Glider_Reaper_C_FireDynamics_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function B_Glider_Reaper.B_Glider_Reaper_C.OnParachuteTrailUpdated
struct AB_Glider_Reaper_C_OnParachuteTrailUpdated_Params
{
public:
	//float                                      MovementLengthSquared;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//float                                      ForwardDot;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//float                                      RightDot;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//float                                      RotationalMovementAcceleration;                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function B_Glider_Reaper.B_Glider_Reaper_C.ExecuteUbergraph_B_Glider_Reaper
struct AB_Glider_Reaper_C_ExecuteUbergraph_B_Glider_Reaper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_MovementLengthSquared;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ForwardDot;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_RightDot;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_RotationalMovementAcceleration;       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

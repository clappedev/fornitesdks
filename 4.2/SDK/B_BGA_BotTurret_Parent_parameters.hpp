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
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
struct AB_BGA_BotTurret_Parent_C_OnRep_BotData_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
struct AB_BGA_BotTurret_Parent_C_LeftOrRightGunFired_Params
{
public:
	int32                                        A;                                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
struct AB_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InVect;                                            // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
struct AB_BGA_BotTurret_Parent_C_UserConstructionScript_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
struct AB_BGA_BotTurret_Parent_C_PassBotInfo_Params
{
public:
	float                                        WarmupTime;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BotDuration;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireRate;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadiusDefault;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExplosionUpgrade;                                  // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
struct AB_BGA_BotTurret_Parent_C_SetTarget_Params
{
public:
	class AFortAIPawn*                           Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
struct AB_BGA_BotTurret_Parent_C_Ready_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Fired
struct AB_BGA_BotTurret_Parent_C_Fired_Params
{
public:
};

// 0x45 (0x45 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
struct AB_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           K2Node_CustomEvent_Target;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_WarmUpTime;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_BotDuration;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_FireRate;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Radius;                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_RadiusDefault;                  // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ExplosionUpgrade;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFBotTurretData                       K2Node_MakeStruct_FBotTurretData;                  // 0x2C(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue1;                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotExplode__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotExplosionWarning__DelegateSignature_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotFired__DelegateSignature_Params
{
public:
	int32                                        Left;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// 0x10 (0x10 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.HideMeshAndPlacement
struct AAbilityDecoTool_Athena_MissileBattery_C_HideMeshAndPlacement_Params
{
public:
	bool                                         bInHide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.UserConstructionScript
struct AAbilityDecoTool_Athena_MissileBattery_C_UserConstructionScript_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.HideFor
struct AAbilityDecoTool_Athena_MissileBattery_C_HideFor_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.BPOnSetDecoObjectPreview
struct AAbilityDecoTool_Athena_MissileBattery_C_BPOnSetDecoObjectPreview_Params
{
public:
	//class AFortDecoHelper*                     FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.Show
struct AAbilityDecoTool_Athena_MissileBattery_C_Show_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.ReceiveBeginPlay
struct AAbilityDecoTool_Athena_MissileBattery_C_ReceiveBeginPlay_Params
{
public:
};

// 0x49 (0x49 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery.AbilityDecoTool_Athena_MissileBattery_C.ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery
struct AAbilityDecoTool_Athena_MissileBattery_C_ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Placement_Preview_Pack_MissleBattery_C* K2Node_DynamicCast_AsB_Placement_Preview_Pack_Missle_Battery; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_InTime;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.AnimGraph
struct UJackalVehicle_Hoverboard_Base_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F
struct UJackalVehicle_Hoverboard_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.BlueprintUpdateAnimation
struct UJackalVehicle_Hoverboard_Base_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	//float                                      DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
struct UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_GetDriver_self_CastInput;                 // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

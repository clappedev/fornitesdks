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
// 0x1 (0x1 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.KillOccupyingBuilding
struct AAthenaLayoutBuildRequirement_C_KillOccupyingBuilding_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.UserConstructionScript
struct AAthenaLayoutBuildRequirement_C_UserConstructionScript_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.Event_OnLayoutSatisfied
struct AAthenaLayoutBuildRequirement_C_Event_OnLayoutSatisfied_Params
{
public:
	class ABuildingLayoutRequirement*            LayoutRequirement;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      SatisfyingBuildingSMActor;                         // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.Event_OnLayoutUnSatisfied
struct AAthenaLayoutBuildRequirement_C_Event_OnLayoutUnSatisfied_Params
{
public:
	class ABuildingLayoutRequirement*            LayoutRequirement;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      SatisfyingBuildingSMActor;                         // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.ReceiveBeginPlay
struct AAthenaLayoutBuildRequirement_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature
struct AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature
struct AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature
struct AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature_Params
{
public:
	class UFortMinigameLogicComponent*           MinigameComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.ExecuteUbergraph_AthenaLayoutBuildRequirement
struct AAthenaLayoutBuildRequirement_C_ExecuteUbergraph_AthenaLayoutBuildRequirement_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingLayoutRequirement*            K2Node_CustomEvent_LayoutRequirement1;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      K2Node_CustomEvent_SatisfyingBuildingSMActor1;     // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingLayoutRequirement*            K2Node_CustomEvent_LayoutRequirement;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      K2Node_CustomEvent_SatisfyingBuildingSMActor;      // 0x48(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue1;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      CallFunc_GetOwningPlayerState_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameLogicComponent*           K2Node_ComponentBoundEvent_MinigameComponent;      // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue2;                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      CallFunc_GetOwningPlayerState_ReturnValue1;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

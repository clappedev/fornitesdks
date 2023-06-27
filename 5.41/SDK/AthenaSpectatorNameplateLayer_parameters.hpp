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
// 0x8 (0x8 - 0x0)
// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.AddNameplate
struct UAthenaSpectatorNameplateLayer_C_AddNameplate_Params
{
public:
	//class UAthenaSpectatorNameplateBase*       NameplateWidget;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.RemoveNameplate
struct UAthenaSpectatorNameplateLayer_C_RemoveNameplate_Params
{
public:
	//class UAthenaSpectatorNameplateBase*       NameplateWidget;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.ExecuteUbergraph_AthenaSpectatorNameplateLayer
struct UAthenaSpectatorNameplateLayer_C_ExecuteUbergraph_AthenaSpectatorNameplateLayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSpectatorNameplateBase*         K2Node_Event_NameplateWidget1;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSpectatorNameplateBase*         K2Node_Event_NameplateWidget;                      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortActorCanvasSlot*                  CallFunc_AddActorIndicator_ReturnValue;            // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveChild_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.UserConstructionScript
struct AFrontend_Upgrades_Camera_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnDeactivated
struct AFrontend_Upgrades_Camera_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.OnActivated
struct AFrontend_Upgrades_Camera_C_OnActivated_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Frontend_Upgrades_Camera.Frontend_Upgrades_Camera_C.ExecuteUbergraph_Frontend_Upgrades_Camera
struct AFrontend_Upgrades_Camera_C_ExecuteUbergraph_Frontend_Upgrades_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

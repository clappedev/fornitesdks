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
// 0x35 (0x35 - 0x0)
// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests
struct ACheckForUnfloweringUITutorials_C_CanRunTutorialQuests_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewards_C*                       K2Node_DynamicCast_AsDaily_Rewards;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreTutorialQuestsActive_ReturnValue;      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCurrentlyRunning_Result;                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.UserConstructionScript
struct ACheckForUnfloweringUITutorials_C_UserConstructionScript_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute
struct ACheckForUnfloweringUITutorials_C_Execute_Params
{
public:
	//struct FFortScriptedActionParams           Params;                                            // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials
struct ACheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortScriptedActionParams             K2Node_Event_Params;                               // 0x8(0x30)(ConstParm, NoDestructor)
	bool                                         CallFunc_CanRunTutorialQuests_Result;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

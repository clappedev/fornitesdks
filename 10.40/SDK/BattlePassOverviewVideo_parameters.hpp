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
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.OnActivated
struct UBattlePassOverviewVideo_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.OnDeactivated
struct UBattlePassOverviewVideo_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.MediaOpened
struct UBattlePassOverviewVideo_C_MediaOpened_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.PreConstruct
struct UBattlePassOverviewVideo_C_PreConstruct_Params
{
public:
	//bool                                       IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.ExecuteUbergraph_BattlePassOverviewVideo
struct UBattlePassOverviewVideo_C_ExecuteUbergraph_BattlePassOverviewVideo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6066[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

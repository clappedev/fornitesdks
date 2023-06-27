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
// 0x38 (0x38 - 0x0)
// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.UpdatePlayerData
struct UAthenaSpectatorTeamStatus_C_UpdatePlayerData_Params
{
public:
	class UAthenaRemotePlayerViewData*           NewSource;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateAthena*                CallFunc_GetPlayerState_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.NewEventDispatcher_0__DelegateSignature
struct UAthenaSpectatorTeamStatus_C_NewEventDispatcher_0__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

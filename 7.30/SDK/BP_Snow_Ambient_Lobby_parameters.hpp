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
// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UserConstructionScript
struct ABP_Snow_Ambient_Lobby_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ReceiveBeginPlay
struct ABP_Snow_Ambient_Lobby_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.UpdateGameSettings
struct ABP_Snow_Ambient_Lobby_C_UpdateGameSettings_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ExecuteUbergraph_BP_Snow_Ambient_Lobby
struct ABP_Snow_Ambient_Lobby_C_ExecuteUbergraph_BP_Snow_Ambient_Lobby_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5677[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

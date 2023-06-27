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
// 0x16 (0x16 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Member Data
struct UAthenaSpectatorPlayerStatus_C_Update_Squad_Member_Data_Params
{
public:
	class UAthenaRemotePlayerViewData*           PlayerData;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSpectatorTeamStatus_C*          TeamStatusWidget;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Datas
struct UAthenaSpectatorPlayerStatus_C_Update_Squad_Datas_Params
{
public:
	class UAthenaRemotePlayerViewData*           Squad_1;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaRemotePlayerViewData*           Squad_2;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaRemotePlayerViewData*           Squad_3;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerStateAthena*>        SquadMembers;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Construct
struct UAthenaSpectatorPlayerStatus_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerNameText
struct UAthenaSpectatorPlayerStatus_C_UpdatePlayerNameText_Params
{
public:
	//class FText                                PlayerNameText;                                    // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x14 (0x14 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerTeam
struct UAthenaSpectatorPlayerStatus_C_UpdatePlayerTeam_Params
{
public:
	//int32                                      TeamNumber;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FLinearColor                        TeamColor;                                         // 0x4(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.FollowedPlayerChanged
struct UAthenaSpectatorPlayerStatus_C_FollowedPlayerChanged_Params
{
public:
	//class AFortPlayerStateAthena*              NewFollowedPlayer;                                 // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SquadDatasChanged
struct UAthenaSpectatorPlayerStatus_C_SquadDatasChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         SquadMember1;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UAthenaRemotePlayerViewData*         SquadMember2;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UAthenaRemotePlayerViewData*         SquadMember3;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus
struct UAthenaSpectatorPlayerStatus_C_ExecuteUbergraph_AthenaSpectatorPlayerStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_SquadMember1;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaRemotePlayerViewData*           K2Node_Event_SquadMember2;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaRemotePlayerViewData*           K2Node_Event_SquadMember3;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_PlayerNameText;                       // 0x20(0x18)(ConstParm)
	int32                                        K2Node_Event_TeamNumber;                           // 0x38(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_TeamColor;                            // 0x3C(0x10)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x50(0x18)()
	class AFortPlayerStateAthena*                K2Node_Event_NewFollowedPlayer;                    // 0x68(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

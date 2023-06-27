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
// 0xA (0xA - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
struct ATeamMemberPedestal_C_HandleHoverInputActions_Params
{
public:
	bool                                         bIsHovered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
struct ATeamMemberPedestal_C_InitializeInputActionRefs_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue1;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeamMemberPedestal_Nameplate_C*       K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULobbyPlayerAddPlayer_C*               K2Node_DynamicCast_AsLobby_Player_Add_Player;      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x200 (0x200 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
struct ATeamMemberPedestal_C_OnPartyDataChanged_Params
{
public:
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x0(0x200)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.CompletedQuestPrerequisites
struct ATeamMemberPedestal_C_CompletedQuestPrerequisites_Params
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.IsInLobby
struct ATeamMemberPedestal_C_IsInLobby_Params
{
public:
	bool                                         IsInLobby;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
struct ATeamMemberPedestal_C_PlayLobbyAnimation_Params
{
public:
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x0(0x48)()
	bool                                         CallFunc_IsInAthena_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface1; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue1;        // 0x80(0x48)()
};

// 0x470 (0x470 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
struct ATeamMemberPedestal_C_RefreshWidgets_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x200)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidTeamMember_ReturnValue;            // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidTeamMember_ReturnValue1;           // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortTeamMemberInfo>           CallFunc_GetTeamMembers_TeamMembers;               // 0x228(0x10)(ZeroConstructor, ReferenceParm)
	struct FFortTeamMemberInfo                   CallFunc_Array_Get_Item;                           // 0x238(0x200)(HasGetValueTypeHash)
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue1;                  // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreContext*                     CallFunc_GetContext_ReturnValue3;                  // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortStoreState                   CallFunc_GetStoreState_ReturnValue;                // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayersUniqueID_ReturnValue;       // 0x45A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontEndCamera                   CallFunc_GetFrontEndCamera_ReturnValue;            // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x46A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x46B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x46D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x46E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0x46F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x201 (0x201 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
struct ATeamMemberPedestal_C_OnTeamMemberStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x0(0x200)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
struct ATeamMemberPedestal_C_OnFrontEndCameraChanged_Params
{
public:
	enum class EFrontEndCamera                   NewCamera;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   OldCamera;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
struct ATeamMemberPedestal_C_InitializeContextEvents_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue1;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class UFortUITeamInfo*                       CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue2;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E (0x1E - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
struct ATeamMemberPedestal_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue1;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue2;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue1;               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabSelected_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered
struct ATeamMemberPedestal_C_OnHovered_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
struct ATeamMemberPedestal_C_HandleClientEvent_StoreTabClosed_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered
struct ATeamMemberPedestal_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay
struct ATeamMemberPedestal_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby
struct ATeamMemberPedestal_C_OnConnectedToCampaignLobby_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshBattlePassOwnerVisuals
struct ATeamMemberPedestal_C_RefreshBattlePassOwnerVisuals_Params
{
public:
	//bool                                       bOwnsBattlePass;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
struct ATeamMemberPedestal_C_OnIsCurrentlyInMatchChanged_Params
{
public:
	//bool                                       bIsInMatch;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
struct ATeamMemberPedestal_C_OnPedestalIsPopulatedChanged_Params
{
public:
	//bool                                       bIsPopulated;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked
struct ATeamMemberPedestal_C_OnItemClicked_Params
{
public:
};

// 0x1F1 (0x1F1 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
struct ATeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_Generic_C*          K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventSource1;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus1;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent1;             // 0x30(0x20)(ConstParm, NoDestructor)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue1;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x80(0x20)(ConstParm, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue2;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyPlayerPadGadgets_C*              K2Node_DynamicCast_AsLobby_Player_Pad_Gadgets;     // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0xDC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable1;                             // 0xEC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bOwnsBattlePass;                      // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsInMatch;                           // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x100(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_Event_bIsPopulated;                         // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena1;          // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x1AC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x1BC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue5;         // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInFrontend_ReturnValue;                 // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Athena_Generic_C*          K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic1;  // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
struct ATeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

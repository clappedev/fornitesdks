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
// 0x14 (0x14 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
struct ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params
{
public:
	UInterfaceProperty_                          InventoryOwner;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        NumberBGtoReturn;                                  // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
struct ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberBGtoTake;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
struct ABP_ReadyUp_Interact_C_OnRep_CanInteract_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
struct ABP_ReadyUp_Interact_C_ShouldDie_Params
{
public:
	//float                                      Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class AController*                         EventInstigator;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class AActor*                              DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
struct ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params
{
public:
	//class AFortPawn*                           InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class FText                                ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm)
};

// 0x9 (0x9 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
struct ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params
{
public:
	//class AFortPawn*                           InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript
struct ABP_ReadyUp_Interact_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A
struct ABP_ReadyUp_Interact_C_OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A
struct ABP_ReadyUp_Interact_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29EC94AD234
struct ABP_ReadyUp_Interact_C_OnCanceled_1ED02ED748A4140AEF73B29EC94AD234_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234
struct ABP_ReadyUp_Interact_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
struct ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
struct ABP_ReadyUp_Interact_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
struct ABP_ReadyUp_Interact_C_OpenMissionControl_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
struct ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params
{
public:
	//class AFortPawn*                           InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
struct ABP_ReadyUp_Interact_C_VoteCalled_Params
{
public:
	enum class EFortVoteType                     VoteType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortVoteStatus                   VoteStatus;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C93[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoteResult;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVoter>                        Voters;                                            // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.DisableDifficultyVoting
struct ABP_ReadyUp_Interact_C_DisableDifficultyVoting_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.AtlasUnsupported
struct ABP_ReadyUp_Interact_C_AtlasUnsupported_Params
{
public:
};

// 0x130 (0x130 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_Supported
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_Supported_Params
{
public:
	struct FGuid                                 InMissionGuid;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ObjectiveHandle;                                   // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*               Params;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EventFocus;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            EventContent;                                      // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                EventInstigator;                                   // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GenericInt;                                        // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GenericFloat;                                      // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GenericText;                                       // 0x60(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x78(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                     MissionEvent;                                      // 0x98(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_UnSupported
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_UnSupported_Params
{
public:
	struct FGuid                                 InMissionGuid;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ObjectiveHandle;                                   // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*               Params;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EventFocus;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            EventContent;                                      // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                EventInstigator;                                   // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GenericInt;                                        // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GenericFloat;                                      // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GenericText;                                       // 0x60(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x78(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                     MissionEvent;                                      // 0x98(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_ActivatePrimary
struct ABP_ReadyUp_Interact_C_HandleMissionEvent_ActivatePrimary_Params
{
public:
	struct FGuid                                 InMissionGuid;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ObjectiveHandle;                                   // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*               Params;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               EventFocus;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            EventContent;                                      // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                EventInstigator;                                   // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GenericInt;                                        // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GenericFloat;                                      // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GenericText;                                       // 0x60(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x78(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                     MissionEvent;                                      // 0x98(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8B0 (0x8B0 - 0x0)
// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
struct ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C97[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Basic_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsUser_Widget;             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C98[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_Loaded;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	uint8                                        Pad_3C99[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0x90(0x30)(IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Basic_C*                 CallFunc_FinishSpawningActor_ReturnValue1;         // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1;   // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerController*>         K2Node_MakeArray_Array1;                           // 0x100(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x118(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_Event_InteractingPawn;                      // 0x130(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_Create_ReturnValue;                       // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatablePanel*               K2Node_DynamicCast_AsCommon_Activatable_Panel;     // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface; // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortVoteType                     K2Node_CustomEvent_VoteType;                       // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortVoteStatus                   K2Node_CustomEvent_VoteStatus;                     // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_VoteResult;                     // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVoter>                        K2Node_CustomEvent_Voters;                         // 0x190(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x1A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum2_CmpSuccess;                     // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput; // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x1E0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_MultiGate_FirstRun;                         // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_Data;                             // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_ScratchBool;                      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_MultiGate_ScratchIndex;                     // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput; // 0x218(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortMission*                          CallFunc_GetMission_ReturnValue;                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x230(0x88)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x2B8(0x10)(ZeroConstructor, NoDestructor)
	struct FFortClientAnnouncementData_Basic     K2Node_MakeStruct_FortClientAnnouncementData_Basic; // 0x2C8(0xE8)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0x3B0(0x88)()
	struct FGuid                                 K2Node_HandleMissionEvent_InMissionGuid2;          // 0x438(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_ObjectiveHandle2;        // 0x448(0x20)()
	class UFortMissionEventParams*               K2Node_HandleMissionEvent_Params2;                 // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2; // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleMissionEvent_EventFocus2;             // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            K2Node_HandleMissionEvent_EventContent2;           // 0x480(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_HandleMissionEvent_EventInstigator2;        // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_HandleMissionEvent_GenericInt2;             // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_HandleMissionEvent_GenericFloat2;           // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_HandleMissionEvent_GenericText2;            // 0x498(0x18)(ConstParm)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_GameplayTags2;           // 0x4B0(0x20)()
	struct FFortMissionEvent                     K2Node_HandleMissionEvent_MissionEvent2;           // 0x4D0(0x98)(ConstParm)
	struct FFortClientAnnouncementData_Basic     K2Node_MakeStruct_FortClientAnnouncementData_Basic1; // 0x568(0xE8)()
	struct FGuid                                 K2Node_HandleMissionEvent_InMissionGuid1;          // 0x650(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_ObjectiveHandle1;        // 0x660(0x20)()
	class UFortMissionEventParams*               K2Node_HandleMissionEvent_Params1;                 // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1; // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleMissionEvent_EventFocus1;             // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            K2Node_HandleMissionEvent_EventContent1;           // 0x698(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_HandleMissionEvent_EventInstigator1;        // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_HandleMissionEvent_GenericInt1;             // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_HandleMissionEvent_GenericFloat1;           // 0x6AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_HandleMissionEvent_GenericText1;            // 0x6B0(0x18)(ConstParm)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_GameplayTags1;           // 0x6C8(0x20)()
	struct FFortMissionEvent                     K2Node_HandleMissionEvent_MissionEvent1;           // 0x6E8(0x98)(ConstParm)
	struct FGuid                                 K2Node_HandleMissionEvent_InMissionGuid;           // 0x780(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_ObjectiveHandle;         // 0x790(0x20)()
	class UFortMissionEventParams*               K2Node_HandleMissionEvent_Params;                  // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW; // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_HandleMissionEvent_EventFocus;              // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataAsset*                            K2Node_HandleMissionEvent_EventContent;            // 0x7C8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_HandleMissionEvent_EventInstigator;         // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_HandleMissionEvent_GenericInt;              // 0x7D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_HandleMissionEvent_GenericFloat;            // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_HandleMissionEvent_GenericText;             // 0x7E0(0x18)(ConstParm)
	struct FGameplayTagContainer                 K2Node_HandleMissionEvent_GameplayTags;            // 0x7F8(0x20)()
	struct FFortMissionEvent                     K2Node_HandleMissionEvent_MissionEvent;            // 0x818(0x98)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

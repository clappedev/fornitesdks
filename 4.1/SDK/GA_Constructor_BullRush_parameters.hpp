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
// 0x4D (0x4D - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HighOffGround
struct UGA_Constructor_BullRush_C_HighOffGround_Params
{
public:
	struct FVector                               ImpactPoint;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotBuilding
struct UGA_Constructor_BullRush_C_NotBuilding_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingFloor*                        K2Node_DynamicCast_AsBuilding_Floor;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HasShieldCharacterPiece
struct UGA_Constructor_BullRush_C_HasShieldCharacterPiece_Params
{
public:
	bool                                         HasCharm;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               RootCompChildren;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x58(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x22 (0x22 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotADefender
struct UGA_Constructor_BullRush_C_NotADefender_Params
{
public:
	class AFortPawn*                             InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotADefender;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAppliedDamage
struct UGA_Constructor_BullRush_C_GetAppliedDamage_Params
{
public:
	class UClass*                                Applied;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_AppliedDamage;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAIType
struct UGA_Constructor_BullRush_C_GetAIType_Params
{
public:
	class AFortAIPawn*                           InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIType                           OutType;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  AITypes;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x108 (0x108 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyDamageToTarget
struct UGA_Constructor_BullRush_C_ApplyDamageToTarget_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Applied;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x20(0x20)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue1; // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x60(0xA8)()
};

// 0x68 (0x68 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttachClose
struct UGA_Constructor_BullRush_C_ForceAttachClose_Params
{
public:
	TArray<class AActor*>                        Close;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_IsBigMonster_InPawn_CastInput;            // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBigMonster_IsSmasher;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x58(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsAShielder
struct UGA_Constructor_BullRush_C_IsAShielder_Params
{
public:
	class AFortPawn*                             Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x10(0x20)()
	UInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetCharacterNormalizedVelocity
struct UGA_Constructor_BullRush_C_GetCharacterNormalizedVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HideToggledDecoTools
struct UGA_Constructor_BullRush_C_HideToggledDecoTools_Params
{
public:
	float                                        CallFunc_AbilityRemainingTime_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAbilityDecoTool_AirStrike_C*          K2Node_DynamicCast_AsAbility_Deco_Tool_Air_Strike; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAbilityDecoTool_SupplyDrop_C*         K2Node_DynamicCast_AsAbility_Deco_Tool_Supply_Drop; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HandleBigMonsterCollide
struct UGA_Constructor_BullRush_C_HandleBigMonsterCollide_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             PawnReference;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATakerPawn_C*                          K2Node_DynamicCast_AsTaker_Pawn;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASmasherPawn_C*                        K2Node_DynamicCast_AsSmasher_Pawn;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x38(0xA8)()
};

// 0x45 (0x45 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.LaunchPawn
struct UGA_Constructor_BullRush_C_LaunchPawn_Params
{
public:
	class AFortAIPawn*                           InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyDamage;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetAppliedDamage_Applied;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x24(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x38(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsBigMonster
struct UGA_Constructor_BullRush_C_IsBigMonster_Params
{
public:
	UInterfaceProperty_                          InPawn;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSmasher;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue1;      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DetachPawn
struct UGA_Constructor_BullRush_C_DetachPawn_Params
{
public:
	class AFortAIPawn*                           InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x77 (0x77 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
struct UGA_Constructor_BullRush_C_EndPushingAll_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x10(0x20)()
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesTargetHaveTags_ReturnValue;           // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushToPawn
struct UGA_Constructor_BullRush_C_ApplyPushToPawn_Params
{
public:
	class AFortPawn*                             InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AbilityRemainingTime_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x10(0xA8)()
};

// 0x10 (0x10 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.AbilityRemainingTime
struct UGA_Constructor_BullRush_C_AbilityRemainingTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IgnoreCollisionWith
struct UGA_Constructor_BullRush_C_IgnoreCollisionWith_Params
{
public:
	class ABuildingActor*                        InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldIgnore;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIgnore;                                           // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self1_CastInput;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue1;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShouldForceCollision
struct UGA_Constructor_BullRush_C_ShouldForceCollision_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAnimationNameForHusk
struct UGA_Constructor_BullRush_C_GetAnimationNameForHusk_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_IncrementAnimCount_Output_Get;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IncrementAnimCount
struct UGA_Constructor_BullRush_C_IncrementAnimCount_Params
{
public:
	int32                                        Output_Get;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.PrepareAbilityValues
struct UGA_Constructor_BullRush_C_PrepareAbilityValues_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0(0x20)()
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x20(0x18)()
	float                                        CallFunc_AbilityRemainingTime_ReturnValue;         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x48(0x18)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C5 (0x1C5 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAllCollideWall
struct UGA_Constructor_BullRush_C_EndPushingAllCollideWall_Params
{
public:
	struct FVector                               HitNormal;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZOffset;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDetachmentRule                   World;                                             // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x20(0x20)()
	float                                        CallFunc_BreakVector_X;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X1;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y1;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z1;                           // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue1;          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue12;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x68(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x74(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x80(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X12;                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y12;                          // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z12;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x9C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue1;                  // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xBC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X123;                         // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y123;                         // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z123;                         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue12;             // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue123;            // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue12;                 // 0xE0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xF0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x128(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesTargetHaveTags_ReturnValue;           // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x64 (0x64 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.RunChinaShop
struct UGA_Constructor_BullRush_C_RunChinaShop_Params
{
public:
	class AActor*                                InOverlap;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PassThroughWall;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x20(0x20)()
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IgnoreCollisionWith_ShouldIgnore;         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliation_ReturnValue;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
struct UGA_Constructor_BullRush_C_ToggleCapsuleCollision_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
struct UGA_Constructor_BullRush_C_FX_ImpactEnemy_Params
{
public:
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x82 (0x82 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
struct UGA_Constructor_BullRush_C_ToggleSteeringReduction_Params
{
public:
	bool                                         bEnableSteeringReduction;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x40)(ContainsInstancedReference)
	class AFortPlayerStateZone*                  K2Node_DynamicCast_AsFort_Player_State_Zone;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller1;      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
struct UGA_Constructor_BullRush_C_FX_MotionLines_Deactivate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
struct UGA_Constructor_BullRush_C_FX_MotionLines_Activate_Params
{
public:
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
struct UGA_Constructor_BullRush_C_ApplyEndingDamage_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetAppliedDamage_Applied;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x84 (0x84 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.SetupAbility
struct UGA_Constructor_BullRush_C_SetupAbility_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue1;  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface12_CastInput; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue12; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface123_CastInput; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue123; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1234_CastInput; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue1234; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnChange_67D8F5D643B13C19C65EEBAC7E806B43
struct UGA_Constructor_BullRush_C_OnChange_67D8F5D643B13C19C65EEBAC7E806B43_Params
{
public:
	enum class EMovementMode                     NewMovementMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Completed_81268963444013D8ABD8329A74FC2BA7_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Cancelled_81268963444013D8ABD8329A74FC2BA7_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Triggered_81268963444013D8ABD8329A74FC2BA7_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Completed_C1DD435D421925C851371490B466988E_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Cancelled_C1DD435D421925C851371490B466988E_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Triggered_C1DD435D421925C851371490B466988E_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Completed_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Triggered_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EventReceived_C1DB76B7444372BAD736AFB207F3A2D2
struct UGA_Constructor_BullRush_C_EventReceived_C1DB76B7444372BAD736AFB207F3A2D2_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Completed_763E234D46424B8B9BF854AD480CB4DE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Cancelled_763E234D46424B8B9BF854AD480CB4DE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Triggered_763E234D46424B8B9BF854AD480CB4DE_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Completed_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Cancelled_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Triggered_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Completed_A67F8C7741932B2C145CA08ECC81FA13_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Cancelled_A67F8C7741932B2C145CA08ECC81FA13_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Triggered_A67F8C7741932B2C145CA08ECC81FA13_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
struct UGA_Constructor_BullRush_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
struct UGA_Constructor_BullRush_C_K2_OnEndAbility_Params
{
public:
	//bool                                       bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckDashDistance
struct UGA_Constructor_BullRush_C_CheckDashDistance_Params
{
public:
	float                                        InDelta;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginFallingTimer
struct UGA_Constructor_BullRush_C_BeginFallingTimer_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnPawnLanded_Event_0
struct UGA_Constructor_BullRush_C_OnPawnLanded_Event_0_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindOnPawnLanded
struct UGA_Constructor_BullRush_C_BindOnPawnLanded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndFallingTimer
struct UGA_Constructor_BullRush_C_EndFallingTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilitySlide
struct UGA_Constructor_BullRush_C_EndAbilitySlide_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilityHitWall
struct UGA_Constructor_BullRush_C_EndAbilityHitWall_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DistanceCheckTimer
struct UGA_Constructor_BullRush_C_DistanceCheckTimer_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HitWall
struct UGA_Constructor_BullRush_C_HitWall_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindHitWall
struct UGA_Constructor_BullRush_C_BindHitWall_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnBindHitWall
struct UGA_Constructor_BullRush_C_UnBindHitWall_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OverlapEnemyCallback
struct UGA_Constructor_BullRush_C_OverlapEnemyCallback_Params
{
public:
	class AFortPawn*                             InOverlapped;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindShieldOverlaps
struct UGA_Constructor_BullRush_C_BindShieldOverlaps_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShieldOverlap
struct UGA_Constructor_BullRush_C_ShieldOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindShieldOverlaps
struct UGA_Constructor_BullRush_C_UnbindShieldOverlaps_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceEndAbility
struct UGA_Constructor_BullRush_C_ForceEndAbility_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ConstructorPawnHit
struct UGA_Constructor_BullRush_C_ConstructorPawnHit_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Hit
struct UGA_Constructor_BullRush_C_Hit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindHit
struct UGA_Constructor_BullRush_C_UnbindHit_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttach
struct UGA_Constructor_BullRush_C_ForceAttach_Params
{
public:
	class AFortAIPawn*                           LocalOverlap;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDFC (0xDFC - 0x0)
// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
struct UGA_Constructor_BullRush_C_ExecuteUbergraph_GA_Constructor_BullRush_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x8(0xA8)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xC0(0xA8)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x178(0x10)(ZeroConstructor, NoDestructor)
	enum class EAIType                           CallFunc_GetAIType_OutType;                        // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIType                           CallFunc_GetAIType_OutType1;                       // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x18B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12345678;             // 0x190(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12345678;         // 0x1B0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x1B8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1234567;              // 0x1C8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1234567;          // 0x1E8(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData123456;               // 0x200(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag123456;           // 0x220(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x228(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable1;                             // 0x238(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable12;                            // 0x240(0x20)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12345;                // 0x260(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12345;            // 0x280(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x288(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1234;                 // 0x298(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1234;             // 0x2B8(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0x2C0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData123;                  // 0x2D0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag123;              // 0x2F0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0x2F8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable123;                           // 0x308(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1234;                          // 0x310(0x20)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12;                   // 0x330(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12;               // 0x350(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0x358(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x368(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x388(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789;     // 0x390(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x3A0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x3C0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910;   // 0x3C8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable12345;                         // 0x3D8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable123456;                        // 0x3E0(0x20)()
	bool                                         K2Node_Event_bWasCancelled;                        // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_InDelta;                        // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x410(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x41C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Square_ReturnValue;                       // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x42C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize2DSquared_ReturnValue;               // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011; // 0x438(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_Hit1;                           // 0x450(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitMovementModeChange*   CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue1;       // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0x4F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_CustomEvent_OverlappedComponent1;           // 0x508(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_OtherActor12;                   // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_OtherComp1;                     // 0x518(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_OtherBodyIndex1;                // 0x520(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bFromSweep1;                    // 0x524(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_SweepResult1;                   // 0x528(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x5B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShapeComponent*                       K2Node_DynamicCast_AsShape_Component;              // 0x5C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RunChinaShop_PassThroughWall;             // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x5CC(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x5D8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x5E4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112; // 0x5F0(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x600(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1234567;                       // 0x610(0x20)()
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x630(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x640(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x6CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x6CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x6D4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x6E0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x6EC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x6F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x718(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x72C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x730(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x73C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldForceCollision_ReturnValue;         // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x74C(0xC)(IsPlainOldData, NoDestructor)
	enum class EMovementMode                     Temp_byte_Variable;                                // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue12;      // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234;                  // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable12345678;                      // 0x770(0x8)(NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x778(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_CustomEvent_InOverlapped;                   // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x788(0x20)()
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue1;  // 0x7A8(0x20)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData123456789;            // 0x7C8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag123456789;        // 0x7E8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x7F0(0x18)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12345678910;          // 0x808(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12345678910;      // 0x828(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213; // 0x830(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314; // 0x840(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x850(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1234567891011;        // 0x868(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1234567891011;    // 0x888(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415; // 0x898(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_AbilityRemainingTime_ReturnValue;         // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1;              // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516; // 0x8B0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectSpecHandle             CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x8C0(0x18)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x8D8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3800[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617; // 0x8F0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3801[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x908(0x8)(NoDestructor)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable123456789;                     // 0x910(0x20)()
	class UPrimitiveComponent*                   K2Node_CustomEvent_OverlappedComponent;            // 0x930(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_OtherActor1;                    // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_OtherComp;                      // 0x940(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_OtherBodyIndex;                 // 0x948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bFromSweep;                     // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3802[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_SweepResult;                    // 0x950(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UBoxComponent*                         K2Node_DynamicCast_AsBox_Collision;                // 0x9D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3803[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x9E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotADefender_NotADefender;                // 0x9F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3804[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable12345678910;                   // 0x9F8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData123456789101112;      // 0xA00(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag123456789101112;  // 0xA20(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0xA2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3805[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718; // 0xA30(0x10)(ZeroConstructor, NoDestructor)
	enum class EMovementMode                     K2Node_CustomEvent_NewMovementMode;                // 0xA40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3806[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0xA44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue12;                // 0xA49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue123;               // 0xA4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1234;              // 0xA4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3807[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_SelfActor;                      // 0xA50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_OtherActor;                     // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_NormalImpulse;                  // 0xA60(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3808[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_Hit;                            // 0xA70(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit1;             // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap1;          // 0xAF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3809[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time1;                     // 0xAFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance1;                 // 0xB00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location1;                 // 0xB04(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint1;              // 0xB10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal1;                   // 0xB1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal1;             // 0xB28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat1;                  // 0xB38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor1;                 // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent1;             // 0xB48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName1;              // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem1;                  // 0xB58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex1;                // 0xB5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart1;               // 0xB60(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd1;                 // 0xB6C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12345678910111213;    // 0xB78(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12345678910111213; // 0xB98(0x8)(NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  K2Node_DynamicCast_AsFort_Static_Mesh_Actor;       // 0xBA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123;                    // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotBuilding_ReturnValue;                  // 0xBA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HighOffGround_ReturnValue;                // 0xBAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xBAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819; // 0xBB0(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_GetCharacterNormalizedVelocity_ReturnValue; // 0xBC0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetCharacterNormalizedVelocity_ReturnValue1; // 0xBCC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0xBD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue1;            // 0xBDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0xBE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1234567891011121314;  // 0xBE8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1234567891011121314; // 0xC08(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xC18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn1;                 // 0xC20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1234;                   // 0xC28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1234567891011;                 // 0xC30(0x20)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920; // 0xC50(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue12345;             // 0xC61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_IsBigMonster_InPawn_CastInput;            // 0xC68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBigMonster_IsSmasher;                   // 0xC78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBigMonsterCollide_Success;          // 0xC79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3810[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0xC80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0xC88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3811[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xC8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue1;             // 0xC90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3812[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          K2Node_DynamicCast_AsEnemy_Pawn_Interface;         // 0xC98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess12345;                  // 0xCA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable123456789101112;               // 0xCB0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Orphaned_IsOrphaned;                      // 0xCB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_Orphaned_AttachedPawn;                    // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_CustomEvent_LocalOverlap;                   // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn12;                // 0xCD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123456;                 // 0xCD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3815[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData123456789101112131415; // 0xCE0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag123456789101112131415; // 0xD00(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021; // 0xD08(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue1;              // 0xD19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3816[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12345678910111213141516; // 0xD20(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12345678910111213141516; // 0xD40(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122; // 0xD48(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasShieldCharacterPiece_HasCharm;         // 0xD58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasShieldCharacterPiece_HasCharm1;        // 0xD59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3817[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWithCharPartsWait_ReturnValue; // 0xD60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue123456;            // 0xD68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12345;                 // 0xD69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3818[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1234567891011121314151617; // 0xD70(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1234567891011121314151617; // 0xD90(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223; // 0xD98(0x10)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWithCharPartsWait_ReturnValue1; // 0xDA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasShieldCharacterPiece_HasCharm12;       // 0xDB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue123456;                // 0xDB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3819[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWithCharPartsWait_ReturnValue12; // 0xDB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasShieldCharacterPiece_HasCharm123;      // 0xDC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1234567;               // 0xDC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324; // 0xDC8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425; // 0xDD8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue1;         // 0xDE8(0x8)(NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xDF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_381B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

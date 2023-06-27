#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMinigameSettingsMachineForMinigame
struct UCreative_CommonDeviceFunctionLibrary_C_GetMinigameSettingsMachineForMinigame_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMinigameSettingsMachine_C*                  MinigameSettingsMachine;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Reattach or Create MID
struct UCreative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Target_MID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                MatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Wrapping Modulo
struct UCreative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Animate Float Curve
struct UCreative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UCurveFloat*                                 fCurve;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animation_Time;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invert_Time;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsComplete;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.TeamToIndex
struct UCreative_CommonDeviceFunctionLibrary_C_TeamToIndex_Params
{
	unsigned char                                      Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IndexToTeam
struct UCreative_CommonDeviceFunctionLibrary_C_IndexToTeam_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLogicInPlayMode
struct UCreative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode_Params
{
	class UFortMinigameLogicComponent*                 Logic;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Play_Mode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Dynamic Team Color
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECreativeColorSetType>                 Color_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index from Tag
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag_Params
{
	class AActor*                                      Actor_with_Tag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECreativeColorSetType>                 Color_Type_Out;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index or Team Index
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index_Params
{
	class UFortMinigameLogicComponent*                 Minigame_Logic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Team_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLocalPawn
struct UCreative_CommonDeviceFunctionLibrary_C_IsLocalPawn_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocalPawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInPlayMode
struct UCreative_CommonDeviceFunctionLibrary_C_IsInPlayMode_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Play_Mode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Driver or Pawn Controller
struct UCreative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller_Params
{
	class AActor*                                      Actor_To_Check;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid_Controller;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID_FromMaterial
struct UCreative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SourceMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Refresh Team Change Binding
struct UCreative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding_Params
{
	class UFortMinigameLogicComponent*                 Minigame_Logic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Unbind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Update Team Color
struct UCreative_CommonDeviceFunctionLibrary_C_Update_Team_Color_Params
{
	class UFortMinigameLogicComponent*                 Minigame_Logic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID
struct UCreative_CommonDeviceFunctionLibrary_C_GetMID_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.ActorCanTrigger
struct UCreative_CommonDeviceFunctionLibrary_C_ActorCanTrigger_Params
{
	class AActor*                                      Actor_To_Check;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Overlap_Component;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanTrigger;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsActivatedOnPhase
struct UCreative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase_Params
{
	EFortMinigameState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsEnabledPhaseMatch
struct UCreative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch_Params
{
	EFortMinigameState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsValidTeam
struct UCreative_CommonDeviceFunctionLibrary_C_IsValidTeam_Params
{
	int                                                Team_to_Check;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_To_Check;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.AwardScore
struct UCreative_CommonDeviceFunctionLibrary_C_AwardScore_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAwardScoreType>                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortMinigameLogicComponent*                 Minigame_Logic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsOnUnpublishedIsland
struct UCreative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Edit_Mode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

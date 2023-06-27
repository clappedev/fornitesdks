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

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides
struct ACreative_Device_Prop_Parent_C_GetVisibilityComponentsWithCollisionOverrides_Params
{
	TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> VisibilityComponents;                                     // (Parm, OutParm)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents
struct ACreative_Device_Prop_Parent_C_GetVisibilityComponents_Params
{
	TArray<class USceneComponent*>                     VisibilityComponents;                                     // (Parm, OutParm)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game
struct ACreative_Device_Prop_Parent_C_Update_Visibility_In_Game_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game
struct ACreative_Device_Prop_Parent_C_Is_Visible_In_Game_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode
struct ACreative_Device_Prop_Parent_C_IsInPlayMode_Params
{
	bool                                               bIsInPlayMode;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage
struct ACreative_Device_Prop_Parent_C_BlueprintModifyIncomingDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       InTags;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device Failed
struct ACreative_Device_Prop_Parent_C_Activate_Device_Failed_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device
struct ACreative_Device_Prop_Parent_C_Attempt_Activate_Device_Params
{
	class AController*                                 Instigating_Controller;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Additional_Requirements;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device
struct ACreative_Device_Prop_Parent_C_Initialize_Device_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract
struct ACreative_Device_Prop_Parent_C_BlueprintOnLocalInteract_Params
{
	class AFortPlayerPawn*                             InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract
struct ACreative_Device_Prop_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device
struct ACreative_Device_Prop_Parent_C_Activate_Device_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase
struct ACreative_Device_Prop_Parent_C_Activate_on_Phase_Params
{
	EFortMinigameState                                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.PlayModeChanged
struct ACreative_Device_Prop_Parent_C_PlayModeChanged_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInPlayMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed
struct ACreative_Device_Prop_Parent_C_On_Mingame_State_Changed_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ReceiveBeginPlay
struct ACreative_Device_Prop_Parent_C_ReceiveBeginPlay_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnWorldReady
struct ACreative_Device_Prop_Parent_C_OnWorldReady_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature
struct ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameStarted
struct ACreative_Device_Prop_Parent_C_OnMinigameStarted_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameEnded
struct ACreative_Device_Prop_Parent_C_OnMinigameEnded_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent
struct ACreative_Device_Prop_Parent_C_ExecuteUbergraph_Creative_Device_Prop_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature
struct ACreative_Device_Prop_Parent_C_On_Play_Mode_Changed__DelegateSignature_Params
{
	bool                                               New_Play_Mode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized__DelegateSignature
struct ACreative_Device_Prop_Parent_C_On_Device_Initialized__DelegateSignature_Params
{
};

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated__DelegateSignature
struct ACreative_Device_Prop_Parent_C_On_Device_Activated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

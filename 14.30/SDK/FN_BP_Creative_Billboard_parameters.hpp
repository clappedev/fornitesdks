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

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorOrigin
struct ABP_Creative_Billboard_C_GetCreativeActorOrigin_Params
{
	bool                                               Override;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorBounds
struct ABP_Creative_Billboard_C_GetCreativeActorBounds_Params
{
	bool                                               Override_Bounds;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Bounds;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCollisionStaticMesh
struct ABP_Creative_Billboard_C_GetCollisionStaticMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetMeshComponents
struct ABP_Creative_Billboard_C_GetMeshComponents_Params
{
	TArray<class UMeshComponent*>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Last Game State Enable Changed
struct ABP_Creative_Billboard_C_Update_Last_Game_State_Enable_Changed_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Text Visibility On Game State
struct ABP_Creative_Billboard_C_Text_Visibility_On_Game_State_Params
{
	EFortMinigameState                                 New_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Create Widget
struct ABP_Creative_Billboard_C_Create_Widget_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetShadow
struct ABP_Creative_Billboard_C_SetShadow_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextFont
struct ABP_Creative_Billboard_C_SetTextFont_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance
struct ABP_Creative_Billboard_C_SetViewDistance_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor
struct ABP_Creative_Billboard_C_SetTextColor_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties
struct ABP_Creative_Billboard_C_UpdateProperties_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText
struct ABP_Creative_Billboard_C_SetDisplayText_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment
struct ABP_Creative_Billboard_C_SetTextAlignment_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize
struct ABP_Creative_Billboard_C_SetTextSize_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor
struct ABP_Creative_Billboard_C_SetBackgroundColor_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostUpdateProperties
struct ABP_Creative_Billboard_C_PostUpdateProperties_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature_Params
{
	class AController*                                 TriggerInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature_Params
{
	class AController*                                 TriggerInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Play Mode Changed
struct ABP_Creative_Billboard_C_Play_Mode_Changed_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInPlayMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Static Mesh Component Visibility Options
struct ABP_Creative_Billboard_C_Update_Static_Mesh_Component_Visibility_Options_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On Visibility Changed__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.OnWorldReady
struct ABP_Creative_Billboard_C_OnWorldReady_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Device
struct ABP_Creative_Billboard_C_Initialize_Device_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On Enabled State Changed__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On_Enabled_State_Changed__DelegateSignature_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ReceiveBeginPlay
struct ABP_Creative_Billboard_C_ReceiveBeginPlay_Params
{
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature
struct ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMinigameState                                 NewMinigameState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Minigame Options
struct ABP_Creative_Billboard_C_Initialize_Minigame_Options_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard
struct ABP_Creative_Billboard_C_ExecuteUbergraph_BP_Creative_Billboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

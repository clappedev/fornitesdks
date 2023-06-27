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

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Foliage
struct UCreative_VisibleInGame_Component_C_Update_Foliage_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_ForcedVisibilityDuringGame
struct UCreative_VisibleInGame_Component_C_OnRep_ForcedVisibilityDuringGame_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.SetForcedVisibilityDuringGame
struct UCreative_VisibleInGame_Component_C_SetForcedVisibilityDuringGame_Params
{
	TEnumAsByte<Enum_ForcedValueDuringGame>            NewForcedVisibilityDuringGame;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Array Visibility
struct UCreative_VisibleInGame_Component_C_Update_Array_Visibility_Params
{
	TArray<class USceneComponent*>                     Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components with Collision
struct UCreative_VisibleInGame_Component_C_Set_Visibility_Components_with_Collision_Params
{
	TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> Collision_Overrides;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Should Be Visible
struct UCreative_VisibleInGame_Component_C_Should_Be_Visible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_VisibleDuringPhase
struct UCreative_VisibleInGame_Component_C_OnRep_VisibleDuringPhase_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components
struct UCreative_VisibleInGame_Component_C_Set_Visibility_Components_Params
{
	TArray<class USceneComponent*>                     Scene_Components;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Is In Play Mode
struct UCreative_VisibleInGame_Component_C_Is_In_Play_Mode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Particle Component
struct UCreative_VisibleInGame_Component_C_Update_Particle_Component_Params
{
	class UParticleSystemComponent*                    Particle_Component;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Audio Component
struct UCreative_VisibleInGame_Component_C_Update_Audio_Component_Params
{
	class UAudioComponent*                             Audio_Component;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Primitive Component Collision
struct UCreative_VisibleInGame_Component_C_Update_Primitive_Component_Collision_Params
{
	class UPrimitiveComponent*                         Primitive_Component;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Component Visibility
struct UCreative_VisibleInGame_Component_C_Update_Component_Visibility_Params
{
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visiblity During Phase
struct UCreative_VisibleInGame_Component_C_Set_Visiblity_During_Phase_Params
{
	TEnumAsByte<EVisibleInGameState>                   New_Visible_During_Phase;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Visibility
struct UCreative_VisibleInGame_Component_C_Update_Visibility_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Get Visibility Components
struct UCreative_VisibleInGame_Component_C_Get_Visibility_Components_Params
{
	TArray<class USceneComponent*>                     Components;                                               // (Parm, OutParm)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ReceiveBeginPlay
struct UCreative_VisibleInGame_Component_C_ReceiveBeginPlay_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnPlayModeChangedDelegate
struct UCreative_VisibleInGame_Component_C_OnPlayModeChangedDelegate_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInPlayMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Bind Minigame Events
struct UCreative_VisibleInGame_Component_C_Bind_Minigame_Events_Params
{
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnMinigameStateChanged
struct UCreative_VisibleInGame_Component_C_OnMinigameStateChanged_Params
{
	class AFortMinigame*                               Minigame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ExecuteUbergraph_Creative_VisibleInGame_Component
struct UCreative_VisibleInGame_Component_C_ExecuteUbergraph_Creative_VisibleInGame_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.On Visibility Changed__DelegateSignature
struct UCreative_VisibleInGame_Component_C_On_Visibility_Changed__DelegateSignature_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

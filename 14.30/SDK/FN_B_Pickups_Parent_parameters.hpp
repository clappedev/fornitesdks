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

// Function B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
struct AB_Pickups_Parent_C_Mobile_Interation_Icon_Setup_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
struct AB_Pickups_Parent_C_SetVisibleMobileInteractIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
struct AB_Pickups_Parent_C_SetActiveBackgroundParticleSystem_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
struct AB_Pickups_Parent_C_SetHiddenBackgroundVisualComponents_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
struct AB_Pickups_Parent_C_DestroyBackgroundVisualComponents_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
struct AB_Pickups_Parent_C_ScaleHologramTimingsForPvP_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
struct AB_Pickups_Parent_C_SetHologramPickedUpParams_Params
{
	bool                                               Tier_0;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
struct AB_Pickups_Parent_C_SpawnPickedUpTrailPS_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.SetRarityColor
struct AB_Pickups_Parent_C_SetRarityColor_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
struct AB_Pickups_Parent_C_UserConstructionScript_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
struct AB_Pickups_Parent_C_MobileSelectedTL__FinishedFunc_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
struct AB_Pickups_Parent_C_MobileSelectedTL__UpdateFunc_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
struct AB_Pickups_Parent_C_EnableBacchusHighlight_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
struct AB_Pickups_Parent_C_DisableBacchusHighlight_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight
struct AB_Pickups_Parent_C_HideBackgroundAndSpotlight_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.OnAttached
struct AB_Pickups_Parent_C_OnAttached_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
struct AB_Pickups_Parent_C_OnTossed_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick
struct AB_Pickups_Parent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack
struct AB_Pickups_Parent_C_OnAboutToEnterBackpack_Params
{
	class AFortPawn*                                   PickupTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
struct AB_Pickups_Parent_C_OnPickedUp_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
struct AB_Pickups_Parent_C_ReceiveBeginPlay_Params
{
};

// Function B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
struct AB_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

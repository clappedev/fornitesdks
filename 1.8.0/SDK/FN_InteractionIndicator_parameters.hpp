#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds
struct UInteractionIndicator_C_UpdateKeybinds_Params
{
};

// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
struct UInteractionIndicator_C_ShowDefenderBeaconWidget_Params
{
	class ABuildingTrapDefender*                       BuildingTrap;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
struct UInteractionIndicator_C_HandleInteractionUpdated_Params
{
	class UFortInteractContextInfo*                    Interaction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
struct UInteractionIndicator_C_ShowBasicInteractionWidget_Params
{
};

// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
struct UInteractionIndicator_C_ShowPickupWidget_Params
{
	class AFortPickup*                                 Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
struct UInteractionIndicator_C_HandleInteractionChanged_Params
{
	class UFortInteractContextInfo*                    Interaction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.Construct
struct UInteractionIndicator_C_Construct_Params
{
};

// Function InteractionIndicator.InteractionIndicator_C.Destruct
struct UInteractionIndicator_C_Destruct_Params
{
};

// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
struct UInteractionIndicator_C_ExecuteUbergraph_InteractionIndicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

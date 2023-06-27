#pragma once

// Fortnite SDK

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
	class ABuildingTrapDefender*                       BuildingTrap;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionUpdated
struct UInteractionIndicator_C_HandleInteractionUpdated_Params
{
	class UFortInteractContextInfo*                    Interaction;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
struct UInteractionIndicator_C_ShowBasicInteractionWidget_Params
{
};

// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
struct UInteractionIndicator_C_ShowPickupWidget_Params
{
	class AFortPickup*                                 Pickup;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
struct UInteractionIndicator_C_HandleInteractionChanged_Params
{
	class UFortInteractContextInfo*                    Interaction;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

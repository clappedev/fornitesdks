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

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup
struct UHUD_PickupItemWidget_C_SetPickup_Params
{
	class AFortPickup*                                 NewPickup;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText
struct UHUD_PickupItemWidget_C_InitializeInteractionFailureText_Params
{
};

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData
struct UHUD_PickupItemWidget_C_InitializeItemData_Params
{
};

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct
struct UHUD_PickupItemWidget_C_Construct_Params
{
};

// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget
struct UHUD_PickupItemWidget_C_ExecuteUbergraph_HUD_PickupItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

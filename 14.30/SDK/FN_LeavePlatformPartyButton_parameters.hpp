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

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
struct ULeavePlatformPartyButton_C_SetText_Params
{
	struct FText                                       New_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
struct ULeavePlatformPartyButton_C_BP_OnHovered_Params
{
};

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
struct ULeavePlatformPartyButton_C_BP_OnUnhovered_Params
{
};

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
struct ULeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

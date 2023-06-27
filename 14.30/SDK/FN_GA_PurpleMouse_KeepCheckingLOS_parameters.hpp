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

// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.K2_ActivateAbility
struct UGA_PurpleMouse_KeepCheckingLOS_C_K2_ActivateAbility_Params
{
};

// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.K2_OnEndAbility
struct UGA_PurpleMouse_KeepCheckingLOS_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.CheckLOSAgain
struct UGA_PurpleMouse_KeepCheckingLOS_C_CheckLOSAgain_Params
{
};

// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS
struct UGA_PurpleMouse_KeepCheckingLOS_C_ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

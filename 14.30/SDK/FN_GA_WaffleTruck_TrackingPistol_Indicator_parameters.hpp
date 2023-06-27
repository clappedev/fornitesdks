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

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetHitActorsFromEventData
struct UGA_WaffleTruck_TrackingPistol_Indicator_C_GetHitActorsFromEventData_Params
{
	struct FGameplayEventData                          GameplayEventData;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPlayerController
struct UGA_WaffleTruck_TrackingPistol_Indicator_C_GetAvatarAsFortPlayerController_Params
{
	class AFortPlayerController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPawn
struct UGA_WaffleTruck_TrackingPistol_Indicator_C_GetAvatarAsFortPawn_Params
{
	class AFortPawn*                                   AsFort_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.K2_ActivateAbilityFromEvent
struct UGA_WaffleTruck_TrackingPistol_Indicator_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator
struct UGA_WaffleTruck_TrackingPistol_Indicator_C_ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

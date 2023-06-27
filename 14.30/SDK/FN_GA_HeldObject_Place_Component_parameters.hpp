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

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Completed_FB73B2F540131A6D5CEF3FB7287803D4
struct UGA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Cancelled_FB73B2F540131A6D5CEF3FB7287803D4
struct UGA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Triggered_FB73B2F540131A6D5CEF3FB7287803D4
struct UGA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.K2_ActivateAbilityFromEvent
struct UGA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.ExecuteUbergraph_GA_HeldObject_Place_Component
struct UGA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function HydrogenUI.HydrogenWidgetBase.OnMutatorAvailable
struct UHydrogenWidgetBase_OnMutatorAvailable_Params
{
	class AFortGameplayMutator*                        MutatorActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenUI.HydrogenWidgetBase.MutatorReady
struct UHydrogenWidgetBase_MutatorReady_Params
{
	class AFortAthenaMutator_Hydrogen*                 MutatorActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenUI.HydrogenWidgetBase.GetHydrogenMutator
struct UHydrogenWidgetBase_GetHydrogenMutator_Params
{
	class AFortAthenaMutator_Hydrogen*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenUI.HydrogenWidgetBase.GetCaptureProgressPercent
struct UHydrogenWidgetBase_GetCaptureProgressPercent_Params
{
	class AHydrogenObjectiveActor*                     InObjective;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

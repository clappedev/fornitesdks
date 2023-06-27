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

// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnActivated
struct ASpecialEventsCamera_Blueprint_C_OnActivated_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.OnDeactivated
struct ASpecialEventsCamera_Blueprint_C_OnDeactivated_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
struct ASpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
